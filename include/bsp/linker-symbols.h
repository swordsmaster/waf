#if defined(HEADER_WARNING)
#warning "This header should not be included directly."
#endif


#if defined(__rtems_arm_altcycv_devkit__)
#  include <arm/altcycv_devkit/bsp/linker-symbols.h>
#elif defined(__rtems_arm_altcycv_devkit_smp__)
#  include <arm/altcycv_devkit_smp/bsp/linker-symbols.h>
#elif defined(__rtems_arm_arm1136jfs__)
#  include <arm/arm1136jfs/bsp/linker-symbols.h>
#elif defined(__rtems_arm_arm1136js__)
#  include <arm/arm1136js/bsp/linker-symbols.h>
#elif defined(__rtems_arm_arm7tdmi__)
#  include <arm/arm7tdmi/bsp/linker-symbols.h>
#elif defined(__rtems_arm_arm920__)
#  include <arm/arm920/bsp/linker-symbols.h>
#elif defined(__rtems_arm_armcortexa9__)
#  include <arm/armcortexa9/bsp/linker-symbols.h>
#elif defined(__rtems_arm_beagleboardorig__)
#  include <arm/beagleboardorig/bsp/linker-symbols.h>
#elif defined(__rtems_arm_beagleboardxm__)
#  include <arm/beagleboardxm/bsp/linker-symbols.h>
#elif defined(__rtems_arm_beagleboneblack__)
#  include <arm/beagleboneblack/bsp/linker-symbols.h>
#elif defined(__rtems_arm_beaglebonewhite__)
#  include <arm/beaglebonewhite/bsp/linker-symbols.h>
#elif defined(__rtems_arm_csb336__)
#  include <arm/csb336/bsp/linker-symbols.h>
#elif defined(__rtems_arm_csb337__)
#  include <arm/csb337/bsp/linker-symbols.h>
#elif defined(__rtems_arm_csb637__)
#  include <arm/csb637/bsp/linker-symbols.h>
#elif defined(__rtems_arm_edb7312__)
#  include <arm/edb7312/bsp/linker-symbols.h>
#elif defined(__rtems_arm_gba__)
#  include <arm/gba/bsp/linker-symbols.h>
#elif defined(__rtems_arm_gp32__)
#  include <arm/gp32/bsp/linker-symbols.h>
#elif defined(__rtems_arm_gumstix__)
#  include <arm/gumstix/bsp/linker-symbols.h>
#elif defined(__rtems_arm_kit637_v6__)
#  include <arm/kit637_v6/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lm3s3749__)
#  include <arm/lm3s3749/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lm3s6965__)
#  include <arm/lm3s6965/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lm3s6965_qemu__)
#  include <arm/lm3s6965_qemu/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lm4f120__)
#  include <arm/lm4f120/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc1768_mbed__)
#  include <arm/lpc1768_mbed/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc1768_mbed_ahb_ram__)
#  include <arm/lpc1768_mbed_ahb_ram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc1768_mbed_ahb_ram_eth__)
#  include <arm/lpc1768_mbed_ahb_ram_eth/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc17xx_ea_ram__)
#  include <arm/lpc17xx_ea_ram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc17xx_ea_rom_int__)
#  include <arm/lpc17xx_ea_rom_int/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc17xx_plx800_ram__)
#  include <arm/lpc17xx_plx800_ram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc17xx_plx800_rom_int__)
#  include <arm/lpc17xx_plx800_rom_int/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc2362__)
#  include <arm/lpc2362/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc23xx_tli800__)
#  include <arm/lpc23xx_tli800/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc24xx_ea__)
#  include <arm/lpc24xx_ea/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc24xx_ncs_ram__)
#  include <arm/lpc24xx_ncs_ram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc24xx_ncs_rom_ext__)
#  include <arm/lpc24xx_ncs_rom_ext/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc24xx_ncs_rom_int__)
#  include <arm/lpc24xx_ncs_rom_int/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc24xx_plx800_ram__)
#  include <arm/lpc24xx_plx800_ram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc24xx_plx800_rom_int__)
#  include <arm/lpc24xx_plx800_rom_int/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc32xx_mzx__)
#  include <arm/lpc32xx_mzx/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc32xx_mzx_stage_1__)
#  include <arm/lpc32xx_mzx_stage_1/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc32xx_mzx_stage_2__)
#  include <arm/lpc32xx_mzx_stage_2/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc32xx_phycore__)
#  include <arm/lpc32xx_phycore/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc40xx_ea_ram__)
#  include <arm/lpc40xx_ea_ram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_lpc40xx_ea_rom_int__)
#  include <arm/lpc40xx_ea_rom_int/bsp/linker-symbols.h>
#elif defined(__rtems_arm_nds__)
#  include <arm/nds/bsp/linker-symbols.h>
#elif defined(__rtems_arm_raspberrypi__)
#  include <arm/raspberrypi/bsp/linker-symbols.h>
#elif defined(__rtems_arm_realview_pbx_a9_qemu__)
#  include <arm/realview_pbx_a9_qemu/bsp/linker-symbols.h>
#elif defined(__rtems_arm_realview_pbx_a9_qemu_smp__)
#  include <arm/realview_pbx_a9_qemu_smp/bsp/linker-symbols.h>
#elif defined(__rtems_arm_rtl22xx__)
#  include <arm/rtl22xx/bsp/linker-symbols.h>
#elif defined(__rtems_arm_rtl22xx_t__)
#  include <arm/rtl22xx_t/bsp/linker-symbols.h>
#elif defined(__rtems_arm_smdk2410__)
#  include <arm/smdk2410/bsp/linker-symbols.h>
#elif defined(__rtems_arm_stm32f105rc__)
#  include <arm/stm32f105rc/bsp/linker-symbols.h>
#elif defined(__rtems_arm_stm32f4__)
#  include <arm/stm32f4/bsp/linker-symbols.h>
#elif defined(__rtems_arm_tms570ls3137_hdk__)
#  include <arm/tms570ls3137_hdk/bsp/linker-symbols.h>
#elif defined(__rtems_arm_tms570ls3137_hdk_intram__)
#  include <arm/tms570ls3137_hdk_intram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_tms570ls3137_hdk_sdram__)
#  include <arm/tms570ls3137_hdk_sdram/bsp/linker-symbols.h>
#elif defined(__rtems_arm_xilinx_zynq_a9_qemu__)
#  include <arm/xilinx_zynq_a9_qemu/bsp/linker-symbols.h>
#elif defined(__rtems_arm_xilinx_zynq_zc702__)
#  include <arm/xilinx_zynq_zc702/bsp/linker-symbols.h>
#elif defined(__rtems_arm_xilinx_zynq_zc706__)
#  include <arm/xilinx_zynq_zc706/bsp/linker-symbols.h>
#elif defined(__rtems_arm_xilinx_zynq_zedboard__)
#  include <arm/xilinx_zynq_zedboard/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_COBRA5475__)
#  include <m68k/COBRA5475/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_av5282__)
#  include <m68k/av5282/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_csb360__)
#  include <m68k/csb360/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_gen68302__)
#  include <m68k/gen68302/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_gen68340__)
#  include <m68k/gen68340/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_gen68360__)
#  include <m68k/gen68360/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_gen68360_040__)
#  include <m68k/gen68360_040/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_idp__)
#  include <m68k/idp/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_m5484FireEngine__)
#  include <m68k/m5484FireEngine/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mcf5206elite__)
#  include <m68k/mcf5206elite/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mcf52235__)
#  include <m68k/mcf52235/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mcf5225x__)
#  include <m68k/mcf5225x/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mcf5235__)
#  include <m68k/mcf5235/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mcf5329__)
#  include <m68k/mcf5329/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mrm332__)
#  include <m68k/mrm332/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mvme136__)
#  include <m68k/mvme136/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mvme147__)
#  include <m68k/mvme147/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mvme147s__)
#  include <m68k/mvme147s/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mvme162__)
#  include <m68k/mvme162/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mvme162lx__)
#  include <m68k/mvme162lx/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_mvme167__)
#  include <m68k/mvme167/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_ods68302__)
#  include <m68k/ods68302/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_pgh360__)
#  include <m68k/pgh360/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_sim68000__)
#  include <m68k/sim68000/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_simcpu32__)
#  include <m68k/simcpu32/bsp/linker-symbols.h>
#elif defined(__rtems_m68k_uC5282__)
#  include <m68k/uC5282/bsp/linker-symbols.h>
#elif defined(__rtems_or1k_or1ksim__)
#  include <or1k/or1ksim/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_br_uid__)
#  include <powerpc/br_uid/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_gwlcfm__)
#  include <powerpc/gwlcfm/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_hsc_cm01__)
#  include <powerpc/hsc_cm01/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5566evb__)
#  include <powerpc/mpc5566evb/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5566evb_spe__)
#  include <powerpc/mpc5566evb_spe/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5643l_dpu__)
#  include <powerpc/mpc5643l_dpu/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5643l_evb__)
#  include <powerpc/mpc5643l_evb/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5668g__)
#  include <powerpc/mpc5668g/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5674f_ecu508_app__)
#  include <powerpc/mpc5674f_ecu508_app/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5674f_ecu508_boot__)
#  include <powerpc/mpc5674f_ecu508_boot/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5674f_rsm6__)
#  include <powerpc/mpc5674f_rsm6/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5674fevb__)
#  include <powerpc/mpc5674fevb/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc5674fevb_spe__)
#  include <powerpc/mpc5674fevb_spe/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc8309som__)
#  include <powerpc/mpc8309som/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc8313erdb__)
#  include <powerpc/mpc8313erdb/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_mpc8349eamds__)
#  include <powerpc/mpc8349eamds/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_phycore_mpc5554__)
#  include <powerpc/phycore_mpc5554/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_psim__)
#  include <powerpc/psim/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_qoriq_core_0__)
#  include <powerpc/qoriq_core_0/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_qoriq_core_1__)
#  include <powerpc/qoriq_core_1/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_qoriq_p1020rdb__)
#  include <powerpc/qoriq_p1020rdb/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_t32mppc__)
#  include <powerpc/t32mppc/bsp/linker-symbols.h>
#elif defined(__rtems_powerpc_virtex__)
#  include <powerpc/virtex/bsp/linker-symbols.h>
#else
#  error "__rtems_<arch>_<bsp>__ must be defined, for example: __rtems_sparc_erc32__"
#endif
