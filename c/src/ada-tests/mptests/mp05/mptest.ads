--
--  MPTEST / SPECIFICATION
--
--  DESCRIPTION:
--
--  This package is the specification for Test 5 of the RTEMS
--  Multiprocessor Test Suite.
--
--  DEPENDENCIES: 
--
--  
--
--  COPYRIGHT (c) 1989-1997.
--  On-Line Applications Research Corporation (OAR).
--  Copyright assigned to U.S. Government, 1994.
--
--  The license and distribution terms for this file may in
--  the file LICENSE in this distribution or at
--  http://www.OARcorp.com/rtems/license.html.
--
--  $Id$
--

with BSP_MPCI;
with RTEMS;

package MPTEST is

--
--  These arrays contain the IDs and NAMEs of all RTEMS tasks created
--  by this test.
--

   TASK_ID   : array ( RTEMS.UNSIGNED32 range 1 .. 3 ) of RTEMS.ID;
   TASK_NAME : array ( RTEMS.UNSIGNED32 range 1 .. 3 ) of RTEMS.NAME;

--
--  These arrays contain the IDs and NAMEs of all RTEMS timers created
--  by this test.
--

   TIMER_ID   : array ( RTEMS.UNSIGNED32 range 1 .. 2 ) of RTEMS.ID;
   TIMER_NAME : array ( RTEMS.UNSIGNED32 range 1 .. 2 ) of RTEMS.NAME;

--
--  This variable is set when the test should stop executing.
--
   STOP_TEST : RTEMS.BOOLEAN;

--
--  This variable contains the ID of the remote task with which this
--  test interacts.
--

   REMOTE_TID  : RTEMS.ID;

--
--  This variable contains the node on which the remote task with which 
--  this test interacts resides.
--

   REMOTE_NODE : RTEMS.UNSIGNED32;

--
--  This is the signal set which is sent to the task on the other node.
--

   REMOTE_SIGNAL : RTEMS.SIGNAL_SET;

--
--  This is the signal set the task on this node expects to receive
--  from the other node.
--

   EXPECTED_SIGNAL : RTEMS.SIGNAL_SET;

--
--  These keep track of if a signal set has been caught and how many 
--  signal sets have been caught cumulative.
--

   SIGNAL_CAUGHT : RTEMS.BOOLEAN;
   SIGNAL_COUNT  : RTEMS.UNSIGNED32;

--
--  The number of signals to process per dot printed out.
--

   SIGNALS_PER_DOT : constant RTEMS.UNSIGNED32 := 15;

--
--  INIT
--
--  DESCRIPTION:
--
--  This RTEMS task initializes the application.
--

   procedure INIT (
      ARGUMENT : in     RTEMS.TASK_ARGUMENT
   );

--
--  PROCESS_ASR
--
--  DESCRIPTION:
--
--  This subprogram is an ASR for TEST_TASK.
--

   procedure PROCESS_ASR (
      SIGNAL : in     RTEMS.SIGNAL_SET
   );

--
--  STOP_TEST_TSR
--
--  DESCRIPTION:
--
--  This subprogram is a TSR which sets the "stop test" flag.
--
 
   procedure STOP_TEST_TSR (
      IGNORED_ID      : in     RTEMS.ID;
      IGNORED_ADDRESS : in     RTEMS.ADDRESS
   );

--
--  TEST_TASK
--
--  DESCRIPTION:
--
--  This is the body of the RTEMS tasks which constitute this test.
--

   procedure TEST_TASK (
      ARGUMENT : in     RTEMS.TASK_ARGUMENT
   );

--
--  This is the Driver Address Table for this test.
--

   DEVICE_DRIVERS : aliased RTEMS.DRIVER_ADDRESS_TABLE( 1 .. 1 ) :=
   (1=>
      (
        CLOCK_DRIVER.INITIALIZE'ACCESS,              -- Initialization
        RTEMS.NO_DRIVER_ENTRY,                       -- Open
        RTEMS.NO_DRIVER_ENTRY,                       -- Close
        RTEMS.NO_DRIVER_ENTRY,                       -- Read
        RTEMS.NO_DRIVER_ENTRY,                       -- Write
        RTEMS.NO_DRIVER_ENTRY                        -- Control
      )
   );

--
--  This is the Initialization Tasks Table for this test.
--

   INITIALIZATION_TASKS : aliased RTEMS.INITIALIZATION_TASKS_TABLE( 1 .. 1 ) := 
   (1=>
     (
       RTEMS.BUILD_NAME( 'U', 'I', '1', ' ' ),        -- task name
       2048,                                          -- stack size
       1,                                             -- priority
       RTEMS.DEFAULT_ATTRIBUTES,                      -- attributes
       MPTEST.INIT'ACCESS,                            -- entry point
       RTEMS.NO_PREEMPT,                              -- initial mode
       0                                              -- argument list
     )
   );

----------------------------------------------------------------------------
----------------------------------------------------------------------------
--                             BEGIN SUBPACKAGE                           --
----------------------------------------------------------------------------
----------------------------------------------------------------------------

   --
   --  MPTEST.PER_NODE_CONFIGURATION / SPECIFICATION
   --
   --  DESCRIPTION:
   --
   --  This package is the specification for the subpackage
   --  which will define the per node configuration parameters.
   --
   
   package PER_NODE_CONFIGURATION is

   --
   --  LOCAL_NODE_NUMBER
   --
   --  DESCRIPTION:
   --
   --  This function returns the node number for this node.
   --

      function LOCAL_NODE_NUMBER 
      return RTEMS.UNSIGNED32;
  
      pragma INLINE ( LOCAL_NODE_NUMBER );

   end PER_NODE_CONFIGURATION;
  
----------------------------------------------------------------------------
----------------------------------------------------------------------------
--                              END SUBPACKAGE                            --
----------------------------------------------------------------------------
----------------------------------------------------------------------------

--
--  This is the Multiprocessor Configuration Table for this test.
--

   MULTIPROCESSING_CONFIGURATION : aliased RTEMS.MULTIPROCESSING_TABLE := (
      MPTEST.PER_NODE_CONFIGURATION.LOCAL_NODE_NUMBER,
      2,                         -- maximum # nodes in system 
      32,                        -- maximum # global objects
      32                         -- maximum # proxies
    );

--
--  This is the Configuration Table for this test.
--

   CONFIGURATION : aliased RTEMS.CONFIGURATION_TABLE := (
      RTEMS.NULL_ADDRESS,        -- will be replaced by BSP
      64 * 1024,                 -- executive RAM size
      10,                        -- maximum # tasks
      1,                         -- maximum # timers
      2,                         -- maximum # semaphores
      0,                         -- maximum # message queues
      0,                         -- maximum # messages
      0,                         -- maximum # partitions
      0,                         -- maximum # regions
      0,                         -- maximum # dp memory areas
      0,                         -- maximum # periods
      0,                         -- maximum # user extensions
      RTEMS.MILLISECONDS_TO_MICROSECONDS(10), -- # us in a tick
      50                         -- # ticks in a timeslice
  );

end MPTEST;
