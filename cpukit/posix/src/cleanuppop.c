/**
 * @file
 *
 * @brief Removes Routine from Top of Calling Thread's stack and Invoke it 
 * @ingroup POSIXAPI
 */

/*
 *  COPYRIGHT (c) 1989-2008.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/posix/pthread.h>

#include <rtems/score/thread.h>
#include <rtems/score/threaddispatch.h>
#include <rtems/posix/threadsup.h>

#ifndef HAVE_STRUCT__PTHREAD_CLEANUP_CONTEXT

#include <rtems/score/chainimpl.h>
#include <rtems/score/isr.h>
#include <rtems/score/wkspace.h>
#include <rtems/posix/cancel.h>
#include <rtems/posix/pthreadimpl.h>

/*
 *  18.2.3.1 Establishing Cancellation Handlers, P1003.1c/Draft 10, p. 184
 */

void pthread_cleanup_pop(
  int    execute
)
{
  POSIX_Cancel_Handler_control      *handler;
  POSIX_Cancel_Handler_control      tmp_handler;
  Chain_Control                     *handler_stack;
  POSIX_API_Control                 *thread_support;
  ISR_Level                          level;

  thread_support = _Thread_Executing->API_Extensions[ THREAD_API_POSIX ];

  handler_stack = &thread_support->Cancellation_Handlers;

  /*
   * We need interrupts disabled to safely check the chain and pull
   * the last element off.  But we also need dispatching disabled to
   * ensure that we do not get prempted and deleted while we are holding
   * memory that needs to be freed.
   */

  _Thread_Disable_dispatch();
  _ISR_Disable( level );

    if ( _Chain_Is_empty( handler_stack ) ) {
      _Thread_Enable_dispatch();
      _ISR_Enable( level );
      return;
    }

    handler = (POSIX_Cancel_Handler_control *)
        _Chain_Tail( handler_stack )->previous;
    _Chain_Extract_unprotected( &handler->Node );

  _ISR_Enable( level );

  tmp_handler = *handler;

  _Workspace_Free( handler );

  _Thread_Enable_dispatch();

  if ( execute )
    (*tmp_handler.routine)( tmp_handler.arg );
}

#else /* HAVE_STRUCT__PTHREAD_CLEANUP_CONTEXT */

void _pthread_cleanup_pop(
  struct _pthread_cleanup_context *context,
  int                              execute
)
{
  POSIX_API_Control *thread_support;

  if ( execute != 0 ) {
    ( *context->_routine )( context->_arg );
  }

  _Thread_Disable_dispatch();

  thread_support = _Thread_Executing->API_Extensions[ THREAD_API_POSIX ];
  thread_support->last_cleanup_context = context->_previous;

  _Thread_Enable_dispatch();
}

#endif /* HAVE_STRUCT__PTHREAD_CLEANUP_CONTEXT */
