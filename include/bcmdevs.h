/*
 * Broadcom device-specific manifest constants.
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

#ifndef	_BCMDEVS_H
#define	_BCMDEVS_H

/* PCI vendor IDs */
#define	VENDOR_EPIGRAM		0xfeda
#define	VENDOR_BROADCOM		0x14e4
#define	VENDOR_3COM		0x10b7
#define	VENDOR_NETGEAR		0x1385
#define	VENDOR_DIAMOND		0x1092
#define	VENDOR_INTEL		0x8086
#define	VENDOR_DELL		0x1028
#define	VENDOR_HP		0x103c
#define	VENDOR_HP_COMPAQ	0x0e11
#define	VENDOR_APPLE		0x106b
#define VENDOR_SI_IMAGE		0x1095		/* Silicon Image, used by Arasan SDIO Host */
#define VENDOR_BUFFALO		0x1154		/* Buffalo vendor id */
#define VENDOR_TI		0x104c		/* Texas Instruments */
#define VENDOR_RICOH		0x1180		/* Ricoh */
#define VENDOR_JMICRON		0x197b

/* PCMCIA vendor IDs */
#define	VENDOR_BROADCOM_PCMCIA	0x02d0

/* SDIO vendor IDs */
#define	VENDOR_BROADCOM_SDIO	0x00BF

/* DONGLE VID/PIDs */
#define BCM_DNGL_VID		0x0a5c
// Please leave this UNRELEASEDCHIP MOG wrapper in place even if there is nothing inside it

#define BCM_DNGL_BDC_PID	0x0bdc
#define BCM_DNGL_JTAG_PID	0x4a44

/* Pseudo IDs */
#define FPGA_JTAGM_ID		0x43f0		/* FPGA jtagm device id */
#define BCM_JTAGM_ID		0x43f1		/* BCM jtagm device id */
#define SDIOH_FPGA_ID		0x43f2		/* sdio host fpga */
#define BCM_SDIOH_ID		0x43f3		/* BCM sdio host id */
#define SDIOD_FPGA_ID		0x43f4		/* sdio device fpga */
#define SPIH_FPGA_ID		0x43f5		/* PCI SPI Host Controller FPGA */
#define BCM_SPIH_ID		0x43f6		/* Synopsis SPI Host Controller */
#define MIMO_FPGA_ID		0x43f8		/* FPGA mimo minimacphy device id */
#define BCM_JTAGM2_ID		0x43f9		/* BCM alternate jtagm device id */
#define SDHCI_FPGA_ID		0x43fa		/* Standard SDIO Host Controller FPGA */
#define	BCM4710_DEVICE_ID	0x4710		/* 4710 primary function 0 */
#define	BCM47XX_AUDIO_ID	0x4711		/* 47xx audio codec */
#define	BCM47XX_V90_ID		0x4712		/* 47xx v90 codec */
#define	BCM47XX_ENET_ID		0x4713		/* 47xx enet */
#define	BCM47XX_EXT_ID		0x4714		/* 47xx external i/f */
#define	BCM47XX_GMAC_ID		0x4715		/* 47xx Unimac based GbE */
#define	BCM47XX_USBH_ID		0x4716		/* 47xx usb host */
#define	BCM47XX_USBD_ID		0x4717		/* 47xx usb device */
#define	BCM47XX_IPSEC_ID	0x4718		/* 47xx ipsec */
#define	BCM47XX_ROBO_ID		0x4719		/* 47xx/53xx roboswitch core */
#define	BCM47XX_USB20H_ID	0x471a		/* 47xx usb 2.0 host */
#define	BCM47XX_USB20D_ID	0x471b		/* 47xx usb 2.0 device */
#define	BCM47XX_ATA100_ID	0x471d		/* 47xx parallel ATA */
#define	BCM47XX_SATAXOR_ID	0x471e		/* 47xx serial ATA & XOR DMA */
#define	BCM47XX_GIGETH_ID	0x471f		/* 47xx GbE (5700) */
#define	BCM47XX_USB30H_ID	0x472a		/* 47xx usb 3.0 host */
#define	BCM47XX_USB30D_ID	0x472b		/* 47xx usb 3.0 device */
#define	BCM47XX_USBHUB_ID	0x472c		/* 47xx usb hub */
#define BCM47XX_SMBUS_EMU_ID	0x47fe		/* 47xx emulated SMBus device */
#define	BCM47XX_XOR_EMU_ID	0x47ff		/* 47xx emulated XOR engine */
#define JINVANI_SDIOH_ID	0x4743		/* Jinvani SDIO Gold Host */
#define BCM27XX_SDIOH_ID	0x2702		/* BCM27xx Standard SDIO Host */
#define PCIXX21_FLASHMEDIA_ID	0x803b		/* TI PCI xx21 Standard Host Controller */
#define PCIXX21_SDIOH_ID	0x803c		/* TI PCI xx21 Standard Host Controller */
#define R5C822_SDIOH_ID		0x0822		/* Ricoh Co Ltd R5C822 SD/SDIO/MMC/MS/MSPro Host */
#define JMICRON_SDIOH_ID	0x2381		/* JMicron Standard SDIO Host Controller */

/* PCI Device IDs */
/* DEPRECATED but used */
#define	BCM4318_D11G_ID		0x4318		/* 4318 802.11b/g id */
/* DEPRECATED */

/* PCI Subsystem IDs */
// Please leave this UNRELEASEDCHIP MOG wrapper in place even if there is nothing inside it
#define BCM4383_D11AX_ID	0x4449		/* 4383 802.11ax triband device */
#define BCM4387_D11AX_ID	0x4433		/* 4387 802.11ax dualband device */
#define BCM4388_D11AX_ID	0x4434		/* 4388 802.11ax dualband device */
#define BCM4389_D11AX_ID	0x4441		/* 4389 802.11ax dualband device */
#define BCM4390_D11BE_ID	0x4438		/* 4390 802.11be dualband device */
#define BCM4394_D11BE_ID	0x4439		/* 4394 802.11be dualband device */
#define BCM4397_D11AX_ID	0x4443		/* 4397 802.11ax dualband device */
#define BCM4398_D11AX_ID	0x4444		/* 4398 802.11ax triband device */
#define BCM4399_D11BE_ID	0x4451		/* 4399 802.11be dualband device */

/* Chip IDs */
// Please leave this UNRELEASEDCHIP MOG wrapper in place even if there is nothing inside it
#define BCM4383_CHIP_ID		0x4383          /* 4383 chipcommon chipid */
#define BCM4387_CHIP_ID		0x4387          /* 4387 chipcommon chipid */
#define BCM4388_CHIP_ID		0x4388          /* 4388 chipcommon chipid */
#define BCM4389_CHIP_ID		0x4389          /* 4389 chipcommon chipid */
#define BCM4390_CHIP_ID		0x4390          /* 4390 chipcommon chipid */
#define BCM4394_CHIP_ID		0x4394          /* 4394 chipcommon chipid */
#define BCM4397_CHIP_ID		0x4397          /* 4397 chipcommon chipid */
#define BCM4398_CHIP_ID		0x4398          /* 4398 chipcommon chipid */
#define BCM4399_CHIP_ID		0x4399          /* 4399 chipcommon chipid */

/* Chip Family IDs */
// Please leave this UNRELEASEDCHIP MOG wrapper in place even if there is nothing inside it

#define BCM4383_CHIP(chipid)	(CHIPID(chipid) == BCM4383_CHIP_ID)
#define BCM4383_CHIP_GRPID	BCM4383_CHIP_ID

#define BCM4387_CHIP(chipid)    (CHIPID(chipid) == BCM4387_CHIP_ID)
#define BCM4387_CHIP_GRPID	BCM4387_CHIP_ID

#define BCM4388_CHIP(chipid)	(CHIPID(chipid) == BCM4388_CHIP_ID)
#define BCM4388_CHIP_GRPID	BCM4388_CHIP_ID

#define BCM4389_CHIP(chipid)	(CHIPID(chipid) == BCM4389_CHIP_ID)
#define BCM4389_CHIP_GRPID	BCM4389_CHIP_ID

#define BCM4390_CHIP(chipid)	((CHIPID(chipid) == BCM4390_CHIP_ID) || \
				(CHIPID(chipid) == BCM4394_CHIP_ID))

#define BCM4390_CHIP_GRPID	BCM4390_CHIP_ID: \
				case BCM4394_CHIP_ID

#define BCM4397_CHIP(chipid)	((CHIPID(chipid) == BCM4397_CHIP_ID) || \
				(CHIPID(chipid) == BCM4398_CHIP_ID))

#define BCM4397_CHIP_GRPID	BCM4397_CHIP_ID: \
				case BCM4398_CHIP_ID

#define BCM4399_CHIP(chipid)	(CHIPID(chipid) == BCM4399_CHIP_ID)
#define BCM4399_CHIP_GRPID	BCM4399_CHIP_ID

/* Package IDs */

#define HDLSIM_PKG_ID		14		/* HDL simulator package id */
#define HWSIM_PKG_ID		15		/* Hardware simulator package id */

#define PCIXX21_FLASHMEDIA0_ID	0x8033		/* TI PCI xx21 Standard Host Controller */
#define PCIXX21_SDIOH0_ID	0x8034		/* TI PCI xx21 Standard Host Controller */

/* boardflags */
#define	BFL_BTC2WIRE		0x00000001  /* old 2wire Bluetooth coexistence, OBSOLETE */
#define BFL_BTCOEX		0x00000001  /* Board supports BTCOEX */
#define	BFL_PACTRL		0x00000002  /* Board has gpio 9 controlling the PA */
#define BFL_AIRLINEMODE		0x00000004  /* Board implements gpio radio disable indication */
#define	BFL_ADCDIV		0x00000008  /* Board has the rssi ADC divider */
#define BFL_DIS_256QAM		0x00000008
					/* for 4360, this bit is to disable 256QAM support */
#define	BFL_ENETROBO		0x00000010  /* Board has robo switch or core */
#define	BFL_TSSIAVG		0x00000010  /* TSSI averaging for ACPHY chips */
#define	BFL_NOPLLDOWN		0x00000020  /* Not ok to power down the chip pll and oscillator */
#define	BFL_CCKHIPWR		0x00000040  /* Can do high-power CCK transmission */
#define	BFL_ENETADM		0x00000080  /* Board has ADMtek switch */
#define	BFL_ENETVLAN		0x00000100  /* Board has VLAN capability */
#define	BFL_LTECOEX		0x00000200  /* LTE Coex enabled */
#define BFL_NOPCI		0x00000400  /* Board leaves PCI floating */
#define BFL_FEM			0x00000800  /* Board supports the Front End Module */
#define BFL_EXTLNA		0x00001000  /* Board has an external LNA in 2.4GHz band */
#define BFL_HGPA		0x00002000  /* Board has a high gain PA */
#define	BFL_BTC2WIRE_ALTGPIO	0x00004000  /* Board's BTC 2wire is in the alternate gpios */
#define	BFL_ALTIQ		0x00008000  /* Alternate I/Q settings */
#define BFL_NOPA		0x00010000  /* Board has no PA */
#define BFL_RSSIINV		0x00020000  /* Board's RSSI uses positive slope(not TSSI) */
#define BFL_PAREF		0x00040000  /* Board uses the PARef LDO */
#define BFL_3TSWITCH		0x00080000  /* Board uses a triple throw switch shared with BT */
#define BFL_PHASESHIFT		0x00100000  /* Board can support phase shifter */
#define BFL_BUCKBOOST		0x00200000  /* Power topology uses BUCKBOOST */
#define BFL_FEM_BT		0x00400000  /* Board has FEM and switch to share antenna w/ BT */
#define BFL_NOCBUCK		0x00800000  /* Power topology doesn't use CBUCK */
#define BFL_CCKFAVOREVM		0x01000000  /* Favor CCK EVM over spectral mask */
#define BFL_PALDO		0x02000000  /* Power topology uses PALDO */
#define BFL_LNLDO2_2P5		0x04000000  /* Select 2.5V as LNLDO2 output voltage */
/* BFL_FASTPWR and BFL_UCPWRCTL_MININDX are non-overlaping features and use the same bit */
#define BFL_FASTPWR		0x08000000  /* Fast switch/antenna powerup (no POR WAR) */
#define BFL_UCPWRCTL_MININDX	0x08000000  /* Enforce min power index to avoid FEM damage */
#define BFL_EXTLNA_5GHz		0x10000000  /* Board has an external LNA in 5GHz band */
#define BFL_TRSW_1by2		0x20000000  /* Board has 2 TRSW's in 1by2 designs */
#define BFL_GAINBOOSTA01        0x20000000  /* 5g Gainboost for core0 and core1 */
#define BFL_LO_TRSW_R_5GHz	0x40000000  /* In 5G do not throw TRSW to T for clipLO gain */
#define BFL_ELNA_GAINDEF	0x80000000  /* Backoff InitGain based on elna_2g/5g field
					     * when this flag is set
					     */
#define BFL_EXTLNA_TX	0x20000000	/* Temp boardflag to indicate to */

/* boardflags2 */
#define BFL2_RXBB_INT_REG_DIS	0x00000001  /* Board has an external rxbb regulator */
#define BFL2_APLL_WAR		0x00000002  /* Flag to implement alternative A-band PLL settings */
#define BFL2_TXPWRCTRL_EN	0x00000004  /* Board permits enabling TX Power Control */
#define BFL2_2X4_DIV		0x00000008  /* Board supports the 2X4 diversity switch */
#define BFL2_5G_PWRGAIN		0x00000010  /* Board supports 5G band power gain */
#define BFL2_PCIEWAR_OVR	0x00000020  /* Board overrides ASPM and Clkreq settings */
#define BFL2_CAESERS_BRD	0x00000040  /* Board is Caesers brd (unused by sw) */
#define BFL2_WLCX_ATLAS		0x00000040  /* Board flag to initialize ECI for WLCX on FL-ATLAS */
#define BFL2_BTC3WIRE		0x00000080  /* Board support legacy 3 wire or 4 wire */
#define BFL2_BTCLEGACY          0x00000080  /* Board support legacy 3/4 wire, to replace
					     * BFL2_BTC3WIRE
					     */
#define BFL2_SKWRKFEM_BRD	0x00000100  /* 4321mcm93 board uses Skyworks FEM */
#define BFL2_SPUR_WAR		0x00000200  /* Board has a WAR for clock-harmonic spurs */
#define BFL2_GPLL_WAR		0x00000400  /* Flag to narrow G-band PLL loop b/w */
#define BFL2_TRISTATE_LED	0x00000800  /* Tri-state the LED */
#define BFL2_SINGLEANT_CCK	0x00001000  /* Tx CCK pkts on Ant 0 only */
#define BFL2_2G_SPUR_WAR	0x00002000  /* WAR to reduce and avoid clock-harmonic spurs in 2G */
#define BFL2_BPHY_ALL_TXCORES	0x00004000  /* Transmit bphy frames using all tx cores */
#define BFL2_FCC_BANDEDGE_WAR	0x00008000  /* Activates WAR to improve FCC bandedge performance */
#define BFL2_DAC_SPUR_IMPROVEMENT 0x00008000       /* Reducing DAC Spurs */
#define BFL2_GPLL_WAR2	        0x00010000  /* Flag to widen G-band PLL loop b/w */
#define BFL2_REDUCED_PA_TURNONTIME 0x00010000  /* Flag to reduce PA turn on Time */
#define BFL2_IPALVLSHIFT_3P3    0x00020000  /* Flag to Activate the PR 74115 PA Level Shift
					     * Workaround where the gpaio pin is connected to 3.3V
					     */
#define BFL2_INTERNDET_TXIQCAL  0x00040000  /* Use internal envelope detector for TX IQCAL */
#define BFL2_XTALBUFOUTEN       0x00080000  /* Keep the buffered Xtal output from radio on */
				/* Most drivers will turn it off without this flag */
				/* to save power. */

#define BFL2_ANAPACTRL_2G	0x00100000  /* 2G ext PAs are controlled by analog PA ctrl lines */
#define BFL2_ANAPACTRL_5G	0x00200000  /* 5G ext PAs are controlled by analog PA ctrl lines */
#define BFL2_ELNACTRL_TRSW_2G	0x00400000  /* AZW4329: 2G gmode_elna_gain controls TR Switch */
#define BFL2_BT_SHARE_ANT0	0x00800000  /* share core0 antenna with BT */
#define BFL2_TEMPSENSE_HIGHER	0x01000000  /* The tempsense threshold can sustain higher value
					     * than programmed. The exact delta is decided by
					     * driver per chip/boardtype. This can be used
					     * when tempsense qualification happens after shipment
					     */
#define BFL2_BTC3WIREONLY       0x02000000  /* standard 3 wire btc only.  4 wire not supported */
#define BFL2_PWR_NOMINAL	0x04000000  /* 0: power reduction on, 1: no power reduction */
#define BFL2_EXTLNA_PWRSAVE	0x08000000  /* boardflag to enable ucode to apply power save */
						/* ucode control of eLNA during Tx */
#define BFL2_SDR_EN		0x20000000  /* SDR enabled or disabled */
#define BFL2_DYNAMIC_VMID	0x10000000  /* boardflag to enable dynamic Vmid idle TSSI CAL */
#define BFL2_LNA1BYPFORTR2G	0x40000000  /* acphy, enable lna1 bypass for clip gain, 2g */
#define BFL2_LNA1BYPFORTR5G	0x80000000  /* acphy, enable lna1 bypass for clip gain, 5g */

/* SROM 11 - 11ac boardflag definitions */
#define BFL_SROM11_BTCOEX  0x00000001  /* Board supports BTCOEX */
#define BFL_SROM11_WLAN_BT_SH_XTL  0x00000002  /* bluetooth and wlan share same crystal */
#define BFL_SROM11_EXTLNA	0x00001000  /* Board has an external LNA in 2.4GHz band */
#define BFL_SROM11_EPA_TURNON_TIME     0x00018000  /* 2 bits for different PA turn on times */
#define BFL_SROM11_EPA_TURNON_TIME_SHIFT  15
#define BFL_SROM11_PRECAL_TX_IDX	0x00040000  /* Dedicated TX IQLOCAL IDX values */
#define BFL_SROM11_EXTLNA_5GHz	0x10000000  /* Board has an external LNA in 5GHz band */
#define BFL_SROM11_GAINBOOSTA01	0x20000000  /* 5g Gainboost for core0 and core1 */
#define BFL2_SROM11_APLL_WAR	0x00000002  /* Flag to implement alternative A-band PLL settings */
#define BFL2_SROM11_ANAPACTRL_2G  0x00100000  /* 2G ext PAs are ctrl-ed by analog PA ctrl lines */
#define BFL2_SROM11_ANAPACTRL_5G  0x00200000  /* 5G ext PAs are ctrl-ed by analog PA ctrl lines */
#define BFL2_SROM11_SINGLEANT_CCK	0x00001000  /* Tx CCK pkts on Ant 0 only */
#define BFL2_SROM11_EPA_ON_DURING_TXIQLOCAL    0x00020000  /* Keep ext. PA's on in TX IQLO CAL */

/* boardflags3 */
#define BFL3_FEMCTRL_SUB	  0x00000007  /* acphy, subrevs of femctrl on top of srom_femctrl */
#define BFL3_RCAL_WAR		  0x00000008  /* acphy, rcal war active on this board (4335a0) */
#define BFL3_TXGAINTBLID	  0x00000070  /* acphy, txgain table id */
#define BFL3_TXGAINTBLID_SHIFT	  0x4         /* acphy, txgain table id shift bit */
#define BFL3_TSSI_DIV_WAR	  0x00000080  /* acphy, Seperate paparam for 20/40/80 */
#define BFL3_TSSI_DIV_WAR_SHIFT	  0x7         /* acphy, Seperate paparam for 20/40/80 shift bit */
#define BFL3_FEMTBL_FROM_NVRAM    0x00000100  /* acphy, femctrl table is read from nvram */
#define BFL3_FEMTBL_FROM_NVRAM_SHIFT 0x8         /* acphy, femctrl table is read from nvram */
#define BFL3_AGC_CFG_2G           0x00000200  /* acphy, gain control configuration for 2G */
#define BFL3_AGC_CFG_5G           0x00000400  /* acphy, gain control configuration for 5G */
#define BFL3_PPR_BIT_EXT          0x00000800  /* acphy, bit position for 1bit extension for ppr */
#define BFL3_PPR_BIT_EXT_SHIFT    11          /* acphy, bit shift for 1bit extension for ppr */
#define BFL3_BBPLL_SPR_MODE_DIS	  0x00001000  /* acphy, disables bbpll spur modes */
#define BFL3_RCAL_OTP_VAL_EN      0x00002000  /* acphy, to read rcal_trim value from otp */
#define BFL3_2GTXGAINTBL_BLANK	  0x00004000  /* acphy, blank the first X ticks of 2g gaintbl */
#define BFL3_2GTXGAINTBL_BLANK_SHIFT 14       /* acphy, blank the first X ticks of 2g gaintbl */
#define BFL3_5GTXGAINTBL_BLANK	  0x00008000  /* acphy, blank the first X ticks of 5g gaintbl */
#define BFL3_5GTXGAINTBL_BLANK_SHIFT 15       /* acphy, blank the first X ticks of 5g gaintbl */
#define BFL3_PHASETRACK_MAX_ALPHABETA	  0x00010000  /* acphy, to max out alpha,beta to 511 */
#define BFL3_PHASETRACK_MAX_ALPHABETA_SHIFT 16       /* acphy, to max out alpha,beta to 511 */
/* acphy, to use backed off gaintbl for lte-coex */
#define BFL3_LTECOEX_GAINTBL_EN           0x00060000
/* acphy, to use backed off gaintbl for lte-coex */
#define BFL3_LTECOEX_GAINTBL_EN_SHIFT 17
#define BFL3_5G_SPUR_WAR          0x00080000  /* acphy, enable spur WAR in 5G band */

/* acphy: lpmode2g and lpmode_5g related boardflags */
#define BFL3_ACPHY_LPMODE_2G	  0x00300000  /* bits 20:21 for lpmode_2g choice */
#define BFL3_ACPHY_LPMODE_2G_SHIFT	  20

#define BFL3_ACPHY_LPMODE_5G	  0x00C00000  /* bits 22:23 for lpmode_5g choice */
#define BFL3_ACPHY_LPMODE_5G_SHIFT	  22

#define BFL3_1X1_RSDB_ANT	  0x01000000  /* to find if 2-ant RSDB board or 1-ant RSDB board */
#define BFL3_1X1_RSDB_ANT_SHIFT           24

#define BFL3_EXT_LPO_ISCLOCK      0x02000000  /* External LPO is clock, not x-tal */
#define BFL3_FORCE_INT_LPO_SEL    0x04000000  /* Force internal lpo */
#define BFL3_FORCE_EXT_LPO_SEL    0x08000000  /* Force external lpo */

#define BFL3_EN_BRCM_IMPBF        0x10000000  /* acphy, Allow BRCM Implicit TxBF */

#define BFL3_PADCAL_OTP_VAL_EN    0x20000000  /* acphy, to read pad cal values from otp */

#define BFL3_AVVMID_FROM_NVRAM    0x40000000  /* Read Av Vmid from NVRAM  */
#define BFL3_VLIN_EN_FROM_NVRAM    0x80000000  /* Read Vlin En from NVRAM  */

#define BFL3_AVVMID_FROM_NVRAM_SHIFT   30   /* Read Av Vmid from NVRAM  */
#define BFL3_VLIN_EN_FROM_NVRAM_SHIFT   31   /* Enable Vlin  from NVRAM  */

/* boardflags4 for SROM12/SROM13 */

/* To distinguigh between normal and 4dB pad board */
#define BFL4_SROM12_4dBPAD			(1u << 0)

/* Determine power detector type for 2G */
#define BFL4_SROM12_2G_DETTYPE			(1u << 1u)

/* Determine power detector type for 5G */
#define BFL4_SROM12_5G_DETTYPE			(1u << 2u)

/* using pa_dettype from SROM13 flags */
#define BFL4_SROM13_DETTYPE_EN			(1u << 3u)

/* using cck spur reduction setting */
#define BFL4_SROM13_CCK_SPUR_EN			(1u << 4u)

/* using 1.5V cbuck board */
#define BFL4_SROM13_1P5V_CBUCK			(1u << 7u)

/* Enable/disable bit for sw chain mask */
#define BFL4_SROM13_EN_SW_TXRXCHAIN_MASK	(1u << 8u)

#define BFL4_BTCOEX_OVER_SECI	0x00000400u	/* Enable btcoex over gci seci */

/* RFFE rFEM 5G and 2G present bit */
#define BFL4_FEM_RFFE		(1u << 21u)

/* papd params */
#define PAPD_TX_ATTN_2G 0xFF
#define PAPD_TX_ATTN_5G 0xFF00
#define PAPD_TX_ATTN_5G_SHIFT 8
#define PAPD_RX_ATTN_2G 0xFF
#define PAPD_RX_ATTN_5G 0xFF00
#define PAPD_RX_ATTN_5G_SHIFT 8
#define PAPD_CAL_IDX_2G 0xFF
#define PAPD_CAL_IDX_5G 0xFF00
#define PAPD_CAL_IDX_5G_SHIFT 8
#define PAPD_BBMULT_2G 0xFF
#define PAPD_BBMULT_5G 0xFF00
#define PAPD_BBMULT_5G_SHIFT 8
#define TIA_GAIN_MODE_2G 0xFF
#define TIA_GAIN_MODE_5G 0xFF00
#define TIA_GAIN_MODE_5G_SHIFT 8
#define PAPD_EPS_OFFSET_2G 0xFFFF
#define PAPD_EPS_OFFSET_5G 0xFFFF0000
#define PAPD_EPS_OFFSET_5G_SHIFT 16
#define PAPD_CALREF_DB_2G 0xFF
#define PAPD_CALREF_DB_5G 0xFF00
#define PAPD_CALREF_DB_5G_SHIFT 8


/* board specific GPIO assignment, gpio 0-3 are also customer-configurable led */
#define	BOARD_GPIO_BTC3W_IN	0x850	/* bit 4 is RF_ACTIVE, bit 6 is STATUS, bit 11 is PRI */
#define	BOARD_GPIO_BTC3W_OUT	0x020	/* bit 5 is TX_CONF */
#define	BOARD_GPIO_BTCMOD_IN	0x010	/* bit 4 is the alternate BT Coexistence Input */
#define	BOARD_GPIO_BTCMOD_OUT	0x020	/* bit 5 is the alternate BT Coexistence Out */
#define	BOARD_GPIO_BTC_IN	0x080	/* bit 7 is BT Coexistence Input */
#define	BOARD_GPIO_BTC_OUT	0x100	/* bit 8 is BT Coexistence Out */
#define	BOARD_GPIO_PACTRL	0x200	/* bit 9 controls the PA on new 4306 boards */
#define BOARD_GPIO_12		0x1000	/* gpio 12 */
#define BOARD_GPIO_13		0x2000	/* gpio 13 */
#define BOARD_GPIO_BTC4_IN	0x0800	/* gpio 11, coex4, in */
#define BOARD_GPIO_BTC4_BT	0x2000	/* gpio 12, coex4, bt active */
#define BOARD_GPIO_BTC4_STAT	0x4000	/* gpio 14, coex4, status */
#define BOARD_GPIO_BTC4_WLAN	0x8000	/* gpio 15, coex4, wlan active */
#define	BOARD_GPIO_1_WLAN_PWR	0x02	/* throttle WLAN power on X21 board */
#define	BOARD_GPIO_2_WLAN_PWR	0x04	/* throttle WLAN power on X29C board */
#define	BOARD_GPIO_3_WLAN_PWR	0x08	/* throttle WLAN power on X28 board */
#define	BOARD_GPIO_4_WLAN_PWR	0x10	/* throttle WLAN power on X19 board */
#define	BOARD_GPIO_13_WLAN_PWR	0x2000	/* throttle WLAN power on X14 board */

#define GPIO_BTC4W_OUT_4312  0x010  /* bit 4 is BT_IODISABLE */

#define	PCI_CFG_GPIO_SCS	0x10	/* PCI config space bit 4 for 4306c0 slow clock source */
#define PCI_CFG_GPIO_HWRAD	0x20	/* PCI config space GPIO 13 for hw radio disable */
#define PCI_CFG_GPIO_XTAL	0x40	/* PCI config space GPIO 14 for Xtal power-up */
#define PCI_CFG_GPIO_PLL	0x80	/* PCI config space GPIO 15 for PLL power-down */

/* need to be moved to a chip specific header file */
/* power control defines */
#define PLL_DELAY		150		/* us pll on delay */
#define FREF_DELAY		200		/* us fref change delay */
#define MIN_SLOW_CLK		32		/* us Slow clock period */
#define	XTAL_ON_DELAY		1000		/* us crystal power-on delay */

/* Board IDs */

/* # of GPIO pins */
#define GPIO_NUMPINS		32

/* generic defs for nvram "muxenab" bits
* Note: these differ for 4335a0. refer bcmchipc.h for specific mux options.
*/
#define MUXENAB_UART		0x00000001
#define MUXENAB_GPIO		0x00000002
#define MUXENAB_ERCX		0x00000004	/* External Radio BT coex */
#define MUXENAB_JTAG		0x00000008
#define MUXENAB_HOST_WAKE	0x00000010	/* configure GPIO for SDIO host_wake */
#define MUXENAB_I2S_EN		0x00000020
#define MUXENAB_I2S_MASTER	0x00000040
#define MUXENAB_I2S_FULL	0x00000080
#define MUXENAB_SFLASH		0x00000100
#define MUXENAB_RFSWCTRL0	0x00000200
#define MUXENAB_RFSWCTRL1	0x00000400
#define MUXENAB_RFSWCTRL2	0x00000800
#define MUXENAB_SECI		0x00001000
#define MUXENAB_BT_LEGACY	0x00002000
#define MUXENAB_HOST_WAKE1	0x00004000	/* configure alternative GPIO for SDIO host_wake */

/* Boot flags */
#define FLASH_KERNEL_NFLASH	0x00000001
#define FLASH_BOOT_NFLASH	0x00000002

/* Nvram Swctrl BT default related */
#if defined(SWCTRL_cFEM_20BITS)
#define SWCTRL_BTDEF_PER_ANT_SHIFT	16u
#define SWCTRL_BTDEF_PER_ANT_MASK	0xffffu
#else
#define SWCTRL_BTDEF_PER_ANT_SHIFT	10u
#define SWCTRL_BTDEF_PER_ANT_MASK	0x3ffu
#endif

#endif /* _BCMDEVS_H */
