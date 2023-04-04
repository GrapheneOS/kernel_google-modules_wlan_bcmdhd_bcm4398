/*
 * Broadcom device-specific manifest constants used by DHD, but deprecated in firmware.
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

#ifndef	_bcmdevs_legacy_h_
#define	_bcmdevs_legacy_h_

/* DONGLE VID/PIDs */

/* PCI Device IDs */
#define BCM43012_D11N_ID	0xA804		/* 43012 802.11n dualband device */
#define BCM43012_D11N2G_ID	0xA805		/* 43012 802.11n 2.4G device */
#define BCM43012_D11N5G_ID	0xA806		/* 43012 802.11n 5G device */
#define BCM43014_D11N_ID	0x4495		/* 43014 802.11n dualband device */
#define BCM43014_D11N2G_ID	0x4496		/* 43014 802.11n 2.4G device */
#define BCM43014_D11N5G_ID	0x4497		/* 43014 802.11n 5G device */
#define BCM43013_D11N_ID	0x4498		/* 43013 802.11n dualband device */
#define BCM43013_D11N2G_ID	0x4499		/* 43013 802.11n 2.4G device */
#define BCM43013_D11N5G_ID	0x449a		/* 43013 802.11n 5G device */
#define BCM4335_D11AC_ID	0x43ae
#define BCM4335_D11AC2G_ID	0x43af
#define BCM4335_D11AC5G_ID	0x43b0
#define BCM4345_D11AC_ID	0x43ab		/* 4345 802.11ac dualband device */
#define BCM4345_D11AC2G_ID	0x43ac		/* 4345 802.11ac 2.4G device */
#define BCM4345_D11AC5G_ID	0x43ad		/* 4345 802.11ac 5G device */
#define BCM43452_D11AC_ID	0x47ab		/* 43452 802.11ac dualband device */
#define BCM43452_D11AC2G_ID	0x47ac		/* 43452 802.11ac 2.4G device */
#define BCM43452_D11AC5G_ID	0x47ad		/* 43452 802.11ac 5G device */
#define BCM4347_D11AC_ID	0x440a		/* 4347 802.11ac dualband device */
#define BCM4347_D11AC2G_ID	0x440b		/* 4347 802.11ac 2.4G device */
#define BCM4347_D11AC5G_ID	0x440c		/* 4347 802.11ac 5G device */
#define BCM4349_D11AC_ID	0x4349		/* 4349 802.11ac dualband device */
#define BCM4349_D11AC2G_ID	0x43dd		/* 4349 802.11ac 2.4G device */
#define BCM4349_D11AC5G_ID	0x43de		/* 4349 802.11ac 5G device */
#define BCM4350_D11AC_ID	0x43a3
#define BCM4350_D11AC2G_ID	0x43a4
#define BCM4350_D11AC5G_ID	0x43a5
#define BCM4354_D11AC_ID	0x43df		/* 4354 802.11ac dualband device */
#define BCM4354_D11AC2G_ID	0x43e0		/* 4354 802.11ac 2.4G device */
#define BCM4354_D11AC5G_ID	0x43e1		/* 4354 802.11ac 5G device */
#define BCM4355_D11AC_ID	0x43dc		/* 4355 802.11ac dualband device */
#define BCM4355_D11AC2G_ID	0x43fc		/* 4355 802.11ac 2.4G device */
#define BCM4355_D11AC5G_ID	0x43fd		/* 4355 802.11ac 5G device */
#define BCM4356_D11AC_ID	0x43ec		/* 4356 802.11ac dualband device */
#define BCM4356_D11AC2G_ID	0x43ed		/* 4356 802.11ac 2.4G device */
#define BCM4356_D11AC5G_ID	0x43ee		/* 4356 802.11ac 5G device */
#define BCM43569_D11AC_ID	0x43d9
#define BCM43569_D11AC2G_ID	0x43da
#define BCM43569_D11AC5G_ID	0x43db
#define BCM4358_D11AC_ID        0x43e9          /* 4358 802.11ac dualband device */
#define BCM4358_D11AC2G_ID      0x43ea          /* 4358 802.11ac 2.4G device */
#define BCM4358_D11AC5G_ID      0x43eb          /* 4358 802.11ac 5G device */
#define BCM4359_D11AC_ID	0x43ef		/* 4359 802.11ac dualband device */
#define BCM4359_D11AC2G_ID	0x43fe		/* 4359 802.11ac 2.4G device */
#define BCM4359_D11AC5G_ID	0x43ff		/* 4359 802.11ac 5G device */
#define BCM43596_D11AC_ID	0x4415		/* 43596 802.11ac dualband device */
#define BCM43596_D11AC2G_ID	0x4416		/* 43596 802.11ac 2.4G device */
#define BCM43596_D11AC5G_ID	0x4417		/* 43596 802.11ac 5G device */
#define BCM43597_D11AC_ID	0x441c		/* 43597 802.11ac dualband device */
#define BCM43597_D11AC2G_ID	0x441d		/* 43597 802.11ac 2.4G device */
#define BCM43597_D11AC5G_ID	0x441e		/* 43597 802.11ac 5G device */
#define BCM43602_D11AC_ID	0x43ba		/* ac dualband PCI devid SPROM programmed */
#define BCM43602_D11AC2G_ID	0x43bb		/* 43602 802.11ac 2.4G device */
#define BCM43602_D11AC5G_ID	0x43bc		/* 43602 802.11ac 5G device */
#define BCM4361_D11AC_ID	0x441f		/* 4361 802.11ac dualband device */
#define BCM4361_D11AC2G_ID	0x4420		/* 4361 802.11ac 2.4G device */
#define BCM4361_D11AC5G_ID	0x4421		/* 4361 802.11ac 5G device */
#define BCM4364_D11AC_ID	0x4464		/* 4364 802.11ac dualband device */
#define BCM4364_D11AC2G_ID	0x446a		/* 4364 802.11ac 2.4G device */
#define BCM4364_D11AC5G_ID	0x446b		/* 4364 802.11ac 5G device */
#define BCM4371_D11AC_ID	0x440d		/* 4371 802.11ac dualband device */
#define BCM4371_D11AC2G_ID	0x440e		/* 4371 802.11ac 2.4G device */
#define BCM4371_D11AC5G_ID	0x440f		/* 4371 802.11ac 5G device */
#define BCM4360_D11AC_ID	0x43a0
#define BCM4360_D11AC2G_ID	0x43a1
#define BCM4360_D11AC5G_ID	0x43a2
#define BCM4369_D11AX_ID	0x4470		/* 4369 802.11ax dualband device */
#define BCM4369_D11AX2G_ID	0x4471		/* 4369 802.11ax 2.4G device */
#define BCM4369_D11AX5G_ID	0x4472		/* 4369 802.11ax 5G device */
#define BCM4375_D11AX_ID	0x4475		/* 4375 802.11ax dualband device */
#define BCM4375_D11AX2G_ID	0x4476		/* 4375 802.11ax 2.4G device */
#define BCM4375_D11AX5G_ID	0x4477		/* 4375 802.11ax 5G device */
#define BCM4377_D11AX_ID	0x4480		/* 4377 802.11ax dualband device */
#define BCM4377_D11AX2G_ID	0x4481		/* 4377 802.11ax 2.4G device */
#define BCM4377_D11AX5G_ID	0x4482		/* 4377 802.11ax 5G device */
#define BCM4377_M_D11AX_ID	0x4488
#define BCM4376_D11AX_ID	0x4445		/* 4376 802.11ax dualband device */
#define BCM4376_D11AX2G_ID	0x4436		/* 4376 802.11ax 2.4G device */
#define BCM4376_D11AX5G_ID	0x4437		/* 4376 802.11ax 5G device */
#define BCM4378_D11AX_ID	0x4425		/* 4378 802.11ax dualband device */
#define BCM4378_D11AX2G_ID	0x4426		/* 4378 802.11ax 2.4G device */
#define BCM4378_D11AX5G_ID	0x4427		/* 4378 802.11ax 5G device */
#define BCM4385_D11AX_ID	0x4442		/* 4385 802.11ax dualband device */
#define BCM4362_D11AX_ID	0x4490		/* 4362 802.11ax dualband device */
#define BCM4362_D11AX2G_ID	0x4491		/* 4362 802.11ax 2.4G device */
#define BCM4362_D11AX5G_ID	0x4492		/* 4362 802.11ax 5G device */
#define BCM43751_D11AX_ID	0x449a		/* 43751 802.11ac dualband device */
#define BCM43751_D11AX2G_ID	0x449b		/* 43751 802.11ac 2.4G device */
#define BCM43751_D11AX5G_ID	0x449c		/* 43751 802.11ac 5G device */
#define BCM43752_D11AX_ID	0x449d		/* 43752 802.11ax dualband device */
#define BCM43752_D11AX2G_ID	0x449e		/* 43752 802.11ax 2.4G device */
#define BCM43752_D11AX5G_ID	0x449f		/* 43752 802.11ax 5G device */


/* Chip IDs */
#define	BCM43012_CHIP_ID	0xA804          /* 43012 chipcommon chipid */
#define	BCM43013_CHIP_ID	0xA805          /* 43013 chipcommon chipid */
#define	BCM43014_CHIP_ID	0xA806          /* 43014 chipcommon chipid */
#define BCM43018_CHIP_ID	43018		/* 43018 chipcommon chipid */
#define BCM4335_CHIP_ID		0x4335		/* 4335 chipcommon chipid */
#define BCM4339_CHIP_ID		0x4339		/* 4339 chipcommon chipid */
#define BCM43430_CHIP_ID	43430		/* 43430 chipcommon chipid */
#define BCM4345_CHIP_ID		0x4345		/* 4345 chipcommon chipid */
#define BCM43452_CHIP_ID	43452		/* 43454 chipcommon chipid */
#define BCM43454_CHIP_ID	43454		/* 43454 chipcommon chipid */
#define BCM43455_CHIP_ID	43455		/* 43455 chipcommon chipid */
#define BCM43457_CHIP_ID	43457		/* 43457 chipcommon chipid */
#define BCM43458_CHIP_ID	43458		/* 43458 chipcommon chipid */
#define BCM4347_CHIP_ID		0x4347          /* 4347 chipcommon chipid */
#define BCM4350_CHIP_ID		0x4350          /* 4350 chipcommon chipid */
#define BCM4354_CHIP_ID		0x4354          /* 4354 chipcommon chipid */
#define BCM4356_CHIP_ID		0x4356          /* 4356 chipcommon chipid */
#define BCM43567_CHIP_ID	0xAA2F          /* 43567 chipcommon chipid */
#define BCM43569_CHIP_ID	0xAA31          /* 43569 chipcommon chipid */
#define BCM4357_CHIP_ID		0x4357          /* 4357 chipcommon chipid */
#define BCM43570_CHIP_ID	0xAA32          /* 43570 chipcommon chipid */
#define BCM4358_CHIP_ID		0x4358          /* 4358 chipcommon chipid */
#define BCM43596_CHIP_ID	43596		/* 43596 chipcommon chipid */
#define BCM4361_CHIP_ID		0x4361          /* 4361 chipcommon chipid */
#define BCM4364_CHIP_ID		0x4364          /* 4364 chipcommon chipid */
#define BCM4371_CHIP_ID		0x4371          /* 4371 chipcommon chipid */
#define BCM4349_CHIP_ID		0x4349		/* 4349 chipcommon chipid */
#define BCM4355_CHIP_ID		0x4355		/* 4355 chipcommon chipid */
#define BCM4359_CHIP_ID		0x4359		/* 4359 chipcommon chipid */
#define BCM43602_CHIP_ID	0xaa52		/* 43602 chipcommon chipid */
#define BCM43462_CHIP_ID	0xa9c6		/* 43462 chipcommon chipid */
#define BCM43522_CHIP_ID	0xaa02		/* 43522 chipcommon chipid */
#define BCM43460_CHIP_ID	43460		/* 4360  chipcommon chipid (OTP, RBBU) */
#define BCM4360_CHIP_ID		0x4360          /* 4360 chipcommon chipid */
#define BCM4369_CHIP_ID		0x4369          /* 4369 chipcommon chipid */
#define BCM4375_CHIP_ID		0x4375          /* 4375 chipcommon chipid */
#define BCM4377_CHIP_ID		0x4377          /* 4377 chipcommon chipid */
#define BCM4376_CHIP_ID		0x4376          /* 4376 chipcommon chipid */
#define BCM4378_CHIP_ID		0x4378          /* 4378 chipcommon chipid */
#define BCM4385_CHIP_ID		0x4385          /* 4385 chipcommon chipid */
#define BCM4362_CHIP_ID		0x4362          /* 4362 chipcommon chipid */
#define BCM43751_CHIP_ID	0xAAE7          /* 43751 chipcommon chipid */
#define BCM43752_CHIP_ID	0xAAE8          /* 43752 chipcommon chipid */


/* Derivative chip IDs */
#define BCM4345_CHIP(chipid)	(CHIPID(chipid) == BCM4345_CHIP_ID || \
				 CHIPID(chipid) == BCM43452_CHIP_ID || \
				 CHIPID(chipid) == BCM43454_CHIP_ID || \
				 CHIPID(chipid) == BCM43455_CHIP_ID || \
				 CHIPID(chipid) == BCM43457_CHIP_ID || \
				 CHIPID(chipid) == BCM43458_CHIP_ID)
#define CASE_BCM4345_CHIP	case BCM4345_CHIP_ID: /* fallthrough */ \
				case BCM43454_CHIP_ID: /* fallthrough */ \
				case BCM43455_CHIP_ID: /* fallthrough */ \
				case BCM43457_CHIP_ID: /* fallthrough */ \
				case BCM43458_CHIP_ID

#define BCM4347_CHIP(chipid)   ((CHIPID(chipid) == BCM4347_CHIP_ID) || \
				(CHIPID(chipid) == BCM4357_CHIP_ID) || \
				(CHIPID(chipid) == BCM4361_CHIP_ID))
#define BCM4347_CHIP_GRPID	BCM4347_CHIP_ID: \
				case BCM4357_CHIP_ID: \
				case BCM4361_CHIP_ID

#define BCM4355_CHIP(chipid)	(CHIPID(chipid) == BCM4355_CHIP_ID)
#define BCM4349_CHIP(chipid)	((CHIPID(chipid) == BCM4349_CHIP_ID) || \
				(CHIPID(chipid) == BCM4355_CHIP_ID) || \
				(CHIPID(chipid) == BCM4359_CHIP_ID))
#define BCM4349_CHIP_GRPID	BCM4349_CHIP_ID: \
				case BCM4355_CHIP_ID: \
				case BCM4359_CHIP_ID
#define BCM4350_CHIP(chipid)	((CHIPID(chipid) == BCM4350_CHIP_ID) || \
				(CHIPID(chipid) == BCM4354_CHIP_ID) || \
				(CHIPID(chipid) == BCM43567_CHIP_ID) || \
				(CHIPID(chipid) == BCM43569_CHIP_ID) || \
				(CHIPID(chipid) == BCM43570_CHIP_ID) || \
				(CHIPID(chipid) == BCM4358_CHIP_ID)) /* 4350 variations */

#define BCM43602_CHIP(chipid)	((CHIPID(chipid) == BCM43602_CHIP_ID) || \
				(CHIPID(chipid) == BCM43462_CHIP_ID) || \
				(CHIPID(chipid) == BCM43522_CHIP_ID)) /* 43602 variations */
#define CASE_BCM43602_CHIP	case BCM43602_CHIP_ID: /* fallthrough */ \
				case BCM43462_CHIP_ID: /* fallthrough */ \
				case BCM43522_CHIP_ID
#define BCM4369_CHIP(chipid)	((CHIPID(chipid) == BCM4369_CHIP_ID) || \
				(CHIPID(chipid) == BCM4377_CHIP_ID) || \
				(CHIPID(chipid) == BCM4375_CHIP_ID))
#define BCM4369_CHIP_GRPID	BCM4369_CHIP_ID: \
				case BCM4377_CHIP_ID: \
				case BCM4375_CHIP_ID

#define BCM4378_CHIP(chipid)    (CHIPID(chipid) == BCM4378_CHIP_ID)
#define BCM4378_CHIP_GRPID	BCM4378_CHIP_ID

#define BCM4376_CHIP_GRPID	BCM4376_CHIP_ID
#define BCM4376_CHIP(chipid)    (CHIPID(chipid) == BCM4376_CHIP_ID)

#define BCM4362_CHIP(chipid)	(CHIPID(chipid) == BCM4362_CHIP_ID)
#define BCM4362_CHIP_GRPID	BCM4362_CHIP_ID

/* Board Flags */

/* Package IDs */

/* Board IDs */

#endif /* _bcmdevs_legacy_h_ */
