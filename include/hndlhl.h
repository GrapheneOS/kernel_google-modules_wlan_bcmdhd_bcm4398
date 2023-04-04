/*
 * HND SiliconBackplane PMU support.
 *
 * Copyright (C) 2023, Broadcom.
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

#ifndef _hndlhl_h_
#define _hndlhl_h_

enum {
	LHL_MAC_TIMER		= 0u,
	LHL_ARM_TIMER		= 1u,
#if defined(COEX_CPU)
	LHL_COEX_ARM_TIMER	= 2u
#endif
};

typedef struct {
	uint16 offset;
	uint32 mask;
	uint32 val;
} lhl_reg_set_t;

#define LHL_REG_OFF(reg) OFFSETOF(gciregs_t, reg)

extern void si_lhl_timer_config(si_t *sih, osl_t *osh, int timer_type);
extern void si_lhl_timer_enable(si_t *sih);
#if defined(COEX_CPU)
void si_lhl_coex_timer_enable(si_t *sih);
#endif
extern void si_lhl_timer_reset(si_t *sih, uint coreid, uint coreunit);
extern void si_lhl_clkreq_enable(si_t *sih, bool enab);

extern void si_lhl_setup(si_t *sih, osl_t *osh);
extern void si_lhl_enable(si_t *sih, osl_t *osh, bool enable);
extern void si_lhl_enable_sdio_wakeup(si_t *sih, osl_t *osh);
extern void si_lhl_disable_sdio_wakeup(si_t *sih);
extern int si_lhl_set_lpoclk(si_t *sih, osl_t *osh, uint32 lpo_force);
extern int si_lhl_inittbl_get(si_t *sih, lhl_reg_set_t **regs, uint *regs_size);
extern void si_set_lv_sleep_mode_lhl_config(si_t *sih);
extern void si_set_lv_sleep_mode_lhl_config_chip(si_t *sih);

#define HIB_EXT_WAKEUP_CAP(sih)  (PMUREV(sih->pmurev) >= 33)

#ifdef BCM_BOOTLOADER
#define LHL_IS_PSMODE_0(sih)  (1u)
#define LHL_IS_PSMODE_1(sih)  (0)
#else
#define LHL_IS_PSMODE_0(sih)  (si_lhl_ps_mode(sih) == LHL_PS_MODE_0)
#define LHL_IS_PSMODE_1(sih)  (si_lhl_ps_mode(sih) == LHL_PS_MODE_1)
#endif /* BCM_BOOTLOADER */

/* LHL revid in capabilities register */
#define	LHL_CAP_REV_MASK	0x000000ffu

#define LHL_CLK_STATUS_EXT_LPO		(1u << 21u)
#define LHL_CLK_STATUS_OSC_32_XTAL	(1u << 20u)
#define LHL_CLK_STATUS_INT_LPO2		(1u << 19u)
#define LHL_CLK_STATUS_INT_LPO1		(1u << 18u)

/* LHL rev 6 requires this bit to be set first */
#define LHL_PWRSEQCTL_WL_FLLPU_EN	(1u << 7u)

#define LHL_CBUCK_VOLT_SLEEP_SHIFT	12u
#define LHL_CBUCK_VOLT_SLEEP_MASK	0x0000F000u

#define LHL_ABUCK_VOLT_SLEEP_SHIFT	0u
#define LHL_ABUCK_VOLT_SLEEP_MASK	0x0000000Fu

extern void si_lhl_mactim0_set(si_t *sih, uint32 val);

/* LHL Chip Control 1 Register */
#define LHL_1MHZ_FLL_FORCE_DAC_MASK	(1u << 8u)
#define LHL_1MHZ_FLL_DAC_EXT_SHIFT	(9u)
#define LHL_1MHZ_FLL_DAC_EXT_MASK	(0xffu << 9u)
#define LHL_1MHZ_FLL_PRELOAD_MASK	(1u << 17u)
#define LHL_1MHZ_FLL_MODE_1P8V_MASK	(1u << 23u)

/* LHL Top Level Power Sequence Control Register */
#define LHL_TOP_PWRSEQ_SLEEP_ENAB_MASK		(1u << 0)
#define LHL_TOP_PWRSEQ_TOP_ISO_EN_MASK		(1u << 3u)
#define LHL_TOP_PWRSEQ_TOP_SLB_EN_MASK		(1u << 4u)
#define LHL_TOP_PWRSEQ_TOP_PWRSW_EN_MASK	(1u << 5u)
#define LHL_TOP_PWRSEQ_MISCLDO_PU_EN_MASK	(1u << 6u)
#define LHL_TOP_PWRSEQ_VMUX_ASR_SEL_MASK	(1u << 8u)
#define LHL_TOP_PWRSEQ_SERDES_SLB_EN_MASK	(1u << 9u)
#define LHL_TOP_PWRSEQ_SERDES_CLK_DIS_EN_MASK	(1u << 10u)

/* LHL GPIO Interrupt regissters */
#define LHL_GPIO0		(0u)
#define LHL_GPIO0_INT_SHIFT	(0u)
#define	LHL_GPIO0_INT_MASK	(0x1u << LHL_GPIO0_INT_SHIFT)

#endif /* _hndlhl_h_ */
