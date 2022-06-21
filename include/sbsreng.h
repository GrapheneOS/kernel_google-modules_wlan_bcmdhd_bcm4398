/*
 * Header file for save-restore HW
 *
 * Copyright (C) 2022, Broadcom.
 *
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 *
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 *
 *
 * <<Broadcom-WL-IPTag/Dual:>>
 */

#ifndef _sbsreng_h_
#define _sbsreng_h_

#include <typedefs.h>

/* Include Regs from vlsi_xxx files only for Dongle FW builds */
#if defined(DONGLEBUILD)
#include <vlsi_sr_eng_all_regs.h>
#endif /* DONGLEBUILD */

/* For DHD builds define only those registers that needs to be accessed from Host */
#if !defined(DONGLEBUILD)
#define sr_eng_control_reg1_ADDR					0x504u
#define INVALID_ADDRESS_sr_eng						0xffffu
#define sr_eng_DataStartAddr_ADDR					INVALID_ADDRESS_sr_eng
#endif /* !DONGLEBUILD */

typedef volatile struct srregs srregs_t;

#define SR_ENG_REG_OFF(regname) \
	sr_eng_##regname##_ADDR

#define SR_ENG_REG_FIELD_MASK(regname, regfield) \
	sr_eng_##regname##__##regfield##_MASK
#define SR_ENG_REG_FIELD_SHIFT(regname, regfield) \
	sr_eng_##regname##__##regfield##_SHIFT

#define SR_ENG_REG_ADDR(regbase, regname) \
	(volatile uint32 *)((uintptr)(regbase) + SR_ENG_REG_OFF(regname))


/* For some sr_eng revs (e.g. 12) a register may have changed just its name, so to avoid invalid
 * accesses, map the register's address to the changed name.
 */
#if (sr_eng_DataStartAddr_ADDR == INVALID_ADDRESS_sr_eng)
#undef sr_eng_DataStartAddr_ADDR
#define sr_eng_DataStartAddr_ADDR sr_eng_DataStartAddr0_ADDR
#endif /* DataStartAddr invalid */

/* Force a compile error if any register is referenced that does not exist in the built sr_eng's
 * register set.
 */
#undef INVALID_ADDRESS_sr_eng
#define INVALID_ADDRESS_sr_eng hnd_invalid_reg_sr_eng()
#undef INVALID_SHIFT_sr_eng
#define INVALID_SHIFT_sr_eng hnd_invalid_reg_sr_eng()

#endif /* _sbsreng_h_ */
