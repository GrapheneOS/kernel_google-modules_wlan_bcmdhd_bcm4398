# bcmdhd
#
# Copyright (C) 2022, Broadcom.
#
#      Unless you and Broadcom execute a separate written software license
# agreement governing use of this software, this software is licensed to you
# under the terms of the GNU General Public License version 2 (the "GPL"),
# available at http://www.broadcom.com/licenses/GPLv2.php, with the
# following added to such license:
#
#      As a special exception, the copyright holders of this software give you
# permission to link this software with independent modules, and to copy and
# distribute the resulting executable under terms of your choice, provided that
# you also meet, for each linked independent module, the terms and conditions of
# the license of that module.  An independent module is a module which is not
# derived from this software.  The special exception does not apply to any
# modifications of the software.
#
#
# <<Broadcom-WL-IPTag/Dual:>>
#

# Path to the module source, KERNEL_SRC is defined for out-of-tree Kbuild
# and BCMDHD_ROOT is passed as KBUILD_OPTIONS for out-of-tree Makefile
ifeq ($(KERNEL_SRC),)
 ifeq ($(srctree),.)
  BCMDHD_ROOT=$(src)
 else
  BCMDHD_ROOT=$(srctree)/$(src)
 endif
 $(warning : ** Regular in-tree build BCMDHD_ROOT=$(BCMDHD_ROOT)**)
else
 $(warning : ** out-of-tree Kbuild BCMDHD_ROOT=$(BCMDHD_ROOT)**)
endif

#####################
# SDIO/PCIe Basic feature
#####################

# For inbuilt module, below configs will be provided via defconfig
# But for out-of-tree module, explicitly define them here and add
# them as cflags
ifeq ($(CONFIG_BCMDHD),)
CONFIG_BCMDHD=m
CONFIG_BCMDHD_PCIE=y
CONFIG_BCM43752=
CONFIG_BCM4398=y
CONFIG_DHD_OF_SUPPORT=y
ifneq ($(CONFIG_SOC_GOOGLE),)
 CONFIG_BCM4389=n
 CONFIG_BCMDHD_FW_PATH="\"/vendor/firmware/fw_bcmdhd.bin\""
 CONFIG_BCMDHD_NVRAM_PATH="\"/vendor/etc/wifi/bcmdhd.cal\""
 CONFIG_BCMDHD_CLM_PATH="\"/vendor/etc/wifi/bcmdhd_clm.blob\""
 CONFIG_BCMDHD_MAP_PATH="\"/vendor/etc/wifi/fw_bcmdhd.map\""
else
 CONFIG_BCM4389=y
 CONFIG_BCMDHD_FW_PATH="\"/vendor/etc/wifi/fw_bcmdhd.bin\""
 CONFIG_BCMDHD_NVRAM_PATH="\"/vendor/etc/wifi/bcmdhd.cal\""
 CONFIG_BCMDHD_CLM_PATH="\"/vendor/etc/wifi/bcmdhd_clm.blob\""
 CONFIG_BCMDHD_MAP_PATH="\"/vendor/etc/wifi/fw_bcmdhd.map\""
endif
CONFIG_BROADCOM_WIFI_RESERVED_MEM=y
CONFIG_DHD_USE_STATIC_BUF=y
CONFIG_DHD_USE_SCHED_SCAN=y
CONFIG_DHD_SET_RANDOM_MAC_VAL=0x001A11
CONFIG_WLAN_REGION_CODE=100
CONFIG_WLAIBSS=y
CONFIG_WL_RELMCAST=y
CONFIG_BCMDHD_PREALLOC_MEMDUMP=y
CONFIG_BCMDHD_OOB_HOST_WAKE=y
CONFIG_BCMDHD_GET_OOB_STATE=y

DHDCFLAGS += -DCONFIG_BCMDHD=$(CONFIG_BCMDHD)
DHDCFLAGS += -DCONFIG_BCMDHD_PCIE=$(CONFIG_BCMDHD_PCIE)
DHDCFLAGS += -DCONFIG_BCM43752=$(CONFIG_BCM43752)
DHDCFLAGS += -DCONFIG_BCM4389=$(CONFIG_BCM4389)
DHDCFLAGS += -DCONFIG_BCM4398=$(CONFIG_BCM4398)
DHDCFLAGS += -DCONFIG_DHD_OF_SUPPORT=$(CONFIG_DHD_OF_SUPPORT)
DHDCFLAGS += -DCONFIG_BCMDHD_FW_PATH=$(CONFIG_BCMDHD_FW_PATH)
DHDCFLAGS += -DCONFIG_BCMDHD_NVRAM_PATH=$(CONFIG_BCMDHD_NVRAM_PATH)
DHDCFLAGS += -DCONFIG_BCMDHD_CLM_PATH=$(CONFIG_BCMDHD_CLM_PATH)
DHDCFLAGS += -DCONFIG_BCMDHD_MAP_PATH=$(CONFIG_BCMDHD_MAP_PATH)
DHDCFLAGS += -DCONFIG_BROADCOM_WIFI_RESERVED_MEM=$(CONFIG_BROADCOM_WIFI_RESERVED_MEM)
DHDCFLAGS += -DCONFIG_DHD_USE_STATIC_BUF=$(CONFIG_DHD_USE_STATIC_BUF)
DHDCFLAGS += -DCONFIG_DHD_USE_SCHED_SCAN=$(CONFIG_DHD_USE_SCHED_SCAN)
DHDCFLAGS += -DCONFIG_DHD_SET_RANDOM_MAC_VAL=$(CONFIG_DHD_SET_RANDOM_MAC_VAL)
DHDCFLAGS += -DCONFIG_WLAN_REGION_CODE=$(CONFIG_WLAN_REGION_CODE)
DHDCFLAGS += -DCONFIG_WLAIBSS=$(CONFIG_WLAIBSS)
DHDCFLAGS += -DCONFIG_WL_RELMCAST=$(CONFIG_WL_RELMCAST)
DHDCFLAGS += -DCONFIG_DHD_SET_RANDOM_MAC_VAL=$(CONFIG_DHD_SET_RANDOM_MAC_VAL)
DHDCFLAGS += -DCONFIG_BCMDHD_PREALLOC_MEMDUMP=$(CONFIG_BCMDHD_PREALLOC_MEMDUMP)
DHDCFLAGS += -DCONFIG_BCMDHD_OOB_HOST_WAKE=$(CONFIG_BCMDHD_OOB_HOST_WAKE)
DHDCFLAGS += -DCONFIG_BCMDHD_GET_OOB_STATE=$(CONFIG_BCMDHD_GET_OOB_STATE)
endif

DHDCFLAGS += -DBCMUTILS_ERR_CODES -DUSE_NEW_RSPEC_DEFS -DBCM_FLEX_ARRAY
DHDCFLAGS += -DPMU_NEW_ACCESS_MACROS -DCHIPC_NEW_ACCESS_MACROS \
  -DSR_NEW_ACCESS_MACROS -DPCIE_NEW_ACCESS_MACROS
DHDCFLAGS += -Wall -Wstrict-prototypes -Wno-parentheses-equality -Dlinux -DLINUX -DBCMDRIVER \
	-DBCMDONGLEHOST -DBCMDMA32 -DBCMFILEIMAGE \
	-DDHDTHREAD -DSHOW_EVENTS -DWLP2P \
	-DWIFI_ACT_FRAME -DARP_OFFLOAD_SUPPORT \
	-DKEEP_ALIVE \
	-DEMBEDDED_PLATFORM -DPNO_SUPPORT -DSHOW_LOGTRACE \
	-DGET_CUSTOM_MAC_ENABLE \
	-DSEC_ENHANCEMENT -DDHD_FW_COREDUMP \
	-DDHD_DUMP_FILE_WRITE_FROM_KERNEL \
	-DDHD_USE_RANDMAC -DWL_BW320MHZ \
	-DWL_P2P_USE_RANDMAC

DHDCFLAGS += -DOEM_ANDROID
DHDCFLAGS += -DDHD_COREDUMP

#################
# Common feature
#################
DHDCFLAGS += -DWL_VIRTUAL_APSTA
DHDCFLAGS += -DDHD_EXPORT_CNTL_FILE

DHDCFLAGS += -DEWP_ECNTRS_LOGGING
DHDCFLAGS += -DEWP_RTT_LOGGING
ifneq ($(CONFIG_BCMDHD_PCIE),)
	DHDCFLAGS += -DEWP_ETD_PRSRV_LOGS
	DHDCFLAGS += -DEWP_EDL
	DHDCFLAGS += -DEWP_DACS
	DHDCFLAGS += -DEWP_EVENTTS_LOG
	DHDCFLAGS += -DEVENT_LOG_RATE_HC
endif

# Enable wakelock for legacy scan
DHDCFLAGS += -DDHD_USE_SCAN_WAKELOCK
# Enable wakelock debug function
DHDCFLAGS += -DDHD_TRACE_WAKE_LOCK

# Support of power stats in sysfs
DHDCFLAGS += -DPWRSTATS_SYSFS

# Enable SBN feature
DHDCFLAGS += -DDHD_SBN

# Enable inband device wake feature
DHDCFLAGS += -DPCIE_INB_DW

# Prioritize ARP
DHDCFLAGS += -DPRIORITIZE_ARP

# Debug check for PCIe read latency
#DHDCFLAGS += -DDBG_DW_CHK_PCIE_READ_LATENCY

# Hikey sched is not so optimized and hence need a higher timeout
DHDCFLAGS += -DWAIT_FOR_DISCONNECT_MAX=20

#static if
DHDCFLAGS += -DWL_STATIC_IF

# Wapi
#DHDCFLAGS += -DBCMWAPI_WPI -DBCMWAPI_WAI

# FBT
DHDCFLAGS += -DWLFBT

# OKC
DHDCFLAGS += -DOKC_SUPPORT

DHDCFLAGS += -DWL_CFG80211
# Android iface management
DHDCFLAGS += -DWL_IFACE_MGMT
#Debug flag
DHDCFLAGS += -DWL_IFACE_MGMT_CONF

# Enable MLO related code. MLO functionality will be exercised
# only if chip supports it.
DHDCFLAGS += -DWL_MLO -DWL_MLO_AP

#Debug flag
DHDCFLAGS += -DRTT_GEOFENCE_INTERVAL

#Debug flag
DHDCFLAGS += -DRTT_GEOFENCE_CONT

#Debug flag
ifneq ($(CONFIG_FIB_RULES),)
DHDCFLAGS += -DDEBUGABILITY
DHDCFLAGS += -DDEBUGABILITY_DISABLE_MEMDUMP
DHDCFLAGS += -DDHD_DEBUGABILITY_LOG_DUMP_RING
DHDCFLAGS += -DDHD_PKT_LOGGING_DBGRING
else
DHDCFLAGS += -DDHD_FW_COREDUMP
endif

DHDCFLAGS += -DDHD_DUMP_BUF_KVMALLOC

DHDCFLAGS += -DCUSTOMER_DBG_SYSTEM_TIME -DCUSTOMER_DBG_PREFIX_ENABLE
DHDCFLAGS += -DCUSTOM_PREFIX="\"[dhd][wlan]\""
DHDCFLAGS += -DDHD_LOGLEVEL

# SCAN TYPES, if kernel < 4.17 ..back port support required
ifneq ($(CONFIG_CFG80211_SCANTYPE_BKPORT),)
 DHDCFLAGS += -DWL_SCAN_TYPE
endif

# Print out kernel panic point of file and line info when assertion happened
DHDCFLAGS += -DBCMASSERT_LOG

# Enable Log Dump
DHDCFLAGS += -DDHD_LOG_DUMP

# Enable MMIO Trace
DHDCFLAGS += -DDHD_MMIO_TRACE

# Enable log print rate limit
DHDCFLAGS += -DDHD_LOG_PRINT_RATE_LIMIT

# Block ARP during DHCP on STA/SoftAP concurrent mode
DHDCFLAGS += -DAPSTA_BLOCK_ARP_DURING_DHCP

# Bypass wpa_supplicant's BSSID selection
DHDCFLAGS += -DWL_SKIP_CONNECT_HINTS

ifneq ($(CONFIG_BCMDHD_PCIE),)
	DHDCFLAGS += -DWLAN_ACCEL_BOOT
    # Enable Tx checksum offloads
	DHDCFLAGS += -DTX_CSO
    # Enable Rx checksum offloads
        DHDCFLAGS += -DRX_CSO
    # Aggregated H2D Doorbell
	DHDCFLAGS += -DAGG_H2D_DB
    # Use spin_lock_bh locks
	DHDCFLAGS += -DDHD_USE_SPIN_LOCK_BH
    # Enable SSSR Dump
	DHDCFLAGS += -DDHD_SSSR_DUMP
    #	DHDCFLAGS += -DDHD_SSSR_DUMP_BEFORE_SR
    # Enable FIS Dump
    # DHDCFLAGS += -DDHD_FIS_DUMP
    # Enable System Debug Trace Controller, Embedded Trace Buffer
      DHDCFLAGS += -DDHD_SDTC_ETB_DUMP
    # Enable SMD/Minidump collection
	DHDCFLAGS += -DD2H_MINIDUMP
    # ROT and Scan timeout debugging due to Kernel scheduling problem
	DHDCFLAGS += -DDHD_KERNEL_SCHED_DEBUG
    # Enable CTO Recovery
	DHDCFLAGS += -DBCMPCIE_CTO_PREVENTION
    # no reset during dhd attach
	DHDCFLAGS += -DDHD_SKIP_DONGLE_RESET_IN_ATTACH
    # Dongle Isolation will ensure no resets devreset ON/OFF
	DHDCFLAGS += -DDONGLE_ENABLE_ISOLATION
    # Quiesce dongle using DB7 trap
	DHDCFLAGS += -DDHD_DONGLE_TRAP_IN_DETACH
    # Dongle reset during Wifi ON to keep in sane state
	DHDCFLAGS += -DFORCE_DONGLE_RESET_IN_DEVRESET_ON
    # Perform Backplane Reset else FLR will happen
    # DHDCFLAGS += -DDHD_USE_BP_RESET_SS_CTRL

    # Memory consumed by DHD
    DHDCFLAGS += -DDHD_MEM_STATS
    # Check trap in the case of ROT
	DHDCFLAGS += -DCHECK_TRAP_ROT

    # Enable Host SFH LLC insertion in Tx pkts
	DHDCFLAGS += -DHOST_SFH_LLC

    # Enable PKTID AUDIT
    # Not required for the customer platform due to overhead
ifeq ($(CONFIG_SOC_GOOGLE),)
	DHDCFLAGS += -DDHD_PKTID_AUDIT_ENABLED
endif
    # Flow ring status trace in ISR and DPC
	DHDCFLAGS += -DDHD_FLOW_RING_STATUS_TRACE
    # Enable internal Rx packet pool
	DHDCFLAGS += -DRX_PKT_POOL
    # Enable Load Balancing support by default.
    # DHD_LB_RXP - Perform RX Packet processing in parallel, default enabled
    # DHD_LB_TXP - Perform TX Packet processing in parallel, default disabled, enabled using DHD_LB_TXP_DEFAULT_ENAB
    # DHD_LB_STATS - To display the Load Blancing statistics
	DHDCFLAGS += -DDHD_LB -DDHD_LB_RXP -DDHD_LB_TXP -DDHD_LB_STATS
	DHDCFLAGS += -DDHD_LB_PRIMARY_CPUS=0xF0 -DDHD_LB_SECONDARY_CPUS=0x0E
    # GRO (Generic Receive Offload) feature
	DHDCFLAGS += -DENABLE_DHD_GRO
    # Support Monitor Mode
	DHDCFLAGS += -DWL_MONITOR
    # WLBR Regon coordinator
	DHDCFLAGS += -DWBRC
    # FW, NVRAM, CLM load based on VID module string, chipid and chiprev
	DHDCFLAGS += -DSUPPORT_MULTIPLE_REVISION -DSUPPORT_MULTIPLE_REVISION_MAP
	DHDCFLAGS += -DSUPPORT_MIXED_MODULES -DUSE_CID_CHECK -DSUPPORT_MULTIPLE_CHIPS
	DHDCFLAGS += -DCONCAT_DEF_REV_FOR_NOMATCH_VID
ifneq ($(CONFIG_SOC_GOOGLE),)
	# Tasklet load detection and balancing
	DHDCFLAGS += -DRESCHED_CNT_CHECK_PERIOD_SEC=2
	DHDCFLAGS += -DAFFINITY_UPDATE_MIN_PERIOD_SEC=6
	DHDCFLAGS += -DRESCHED_STREAK_MAX_HIGH=10
	DHDCFLAGS += -DRESCHED_STREAK_MAX_LOW=2
	DHDCFLAGS += -DCLEAN_IRQ_AFFINITY_HINT
	DHDCFLAGS += -DIRQ_AFFINITY_BIG_CORE=0
	DHDCFLAGS += -DIRQ_AFFINITY_SMALL_CORE=0
	# MSI supported in GOOGLE SOC
	DHDCFLAGS += -DDHD_MSI_SUPPORT
	# Tx/Rx tasklet bounds
	DHDCFLAGS += -DDHD_TX_CPL_BOUND=64
	DHDCFLAGS += -DDHD_TX_POST_BOUND=128
	DHDCFLAGS += -DDHD_RX_CPL_POST_BOUND=156
	DHDCFLAGS += -DDHD_CTRL_CPL_POST_BOUND=64
	DHDCFLAGS += -DDHD_LB_TXBOUND=32
	# Detect NON DMA M2M corruption (MFG only)
	DHDCFLAGS += -DDHD_NON_DMA_M2M_CORRUPTION
	# Detect FW Memory Corruption (MFG only)
	DHDCFLAGS += -DDHD_FW_MEM_CORRUPTION
endif
endif

ifneq ($(CONFIG_FIB_RULES),)
    # Debugability
    # HAL File dump is supported only for iptable builds(brcm_wlan_iptables_defconfig)
    ifneq ($(CONFIG_SOC_GOOGLE),)
	DHDCFLAGS += -DDHD_FILE_DUMP_EVENT
	DHDCFLAGS += -DDHD_HAL_RING_DUMP
	DHDCFLAGS += -DDHD_HAL_RING_DUMP_MEMDUMP
	# Pixel platform only, to support ring data flushing properly
	DHDCFLAGS += -DDHD_DUMP_START_COMMAND
	# Enable pktid logging
	DHDCFLAGS += -DDHD_MAP_PKTID_LOGGING
    else
        DHDCFLAGS += -DDHD_FILE_DUMP_EVENT
	# The debug dump file path is blank in DHD, it is defined in HAL.
	DHDCFLAGS += -DDHD_COMMON_DUMP_PATH="\"/\""
    endif
    DHDCFLAGS := $(filter-out -DDHD_DUMP_FILE_WRITE_FROM_KERNEL ,$(DHDCFLAGS))
endif

# CUSTOMER2 flags

# Basic / Common Feature
DHDCFLAGS += -DDHDTCPACK_SUPPRESS
DHDCFLAGS += -DUSE_WL_FRAMEBURST
DHDCFLAGS += -DUSE_WL_TXBF
DHDCFLAGS += -DSOFTAP_UAPSD_OFF
DHDCFLAGS += -DVSDB
DHDCFLAGS += -DWL_CFG80211_STA_EVENT
DHDCFLAGS += -DWL_CFG80211_MONITOR
ifneq ($(CONFIG_CFG80211_FILS_BKPORT),)
    DHDCFLAGS += -DWL_FILS
endif
ifneq ($(CONFIG_CFG80211_FILS_ROAM_BKPORT),)
    DHDCFLAGS += -DWL_FILS_ROAM_OFFLD
endif

# Android Feature
DHDCFLAGS += -DAPF
DHDCFLAGS += -DWL_APF_PROGRAM_MAX_SIZE=4096
DHDCFLAGS += -DDHD_GET_VALID_CHANNELS
DHDCFLAGS += -DLINKSTAT_SUPPORT
DHDCFLAGS += -DLINKSTAT_EXT_SUPPORT
DHDCFLAGS += -DPFN_SCANRESULT_2
DHDCFLAGS += -DWL_IFACE_COMB_NUM_CHANNELS
# Scheduled scan (PNO)
DHDCFLAGS += -DWL_SCHED_SCAN
# FW ROAM control
DHDCFLAGS += -DROAMEXP_SUPPORT
# Skip supplicant bssid and channel hints
DHDCFLAGS += -DWL_SKIP_CONNECT_HINTS
# Phy / System
DHDCFLAGS += -DCUSTOM_SET_OCLOFF
DHDCFLAGS += -DDHD_ENABLE_LPC
DHDCFLAGS += -DDISABLE_PM_BCNRX
DHDCFLAGS += -DFCC_PWR_LIMIT_2G
DHDCFLAGS += -DSUPPORT_2G_VHT
DHDCFLAGS += -DSUPPORT_5G_1024QAM_VHT
DHDCFLAGS += -DSUPPORT_LTECX
DHDCFLAGS += -DSUPPORT_LQCM
DHDCFLAGS += -DSUPPORT_SET_CAC
ifeq ($(CONFIG_SOC_GOOGLE),)
    DHDCFLAGS += -DSUPPORT_WL_TXPOWER
endif
# Roaming feature
DHDCFLAGS += -DDHD_LOSSLESS_ROAMING
DHDCFLAGS += -DENABLE_FW_ROAM_SUSPEND
DHDCFLAGS += -DROAM_API
DHDCFLAGS += -DROAM_AP_ENV_DETECTION
DHDCFLAGS += -DROAM_CHANNEL_CACHE
DHDCFLAGS += -DROAM_ENABLE
DHDCFLAGS += -DSKIP_ROAM_TRIGGER_RESET
DHDCFLAGS += -DWBTEXT
DHDCFLAGS += -DWBTEXT_BTMDELTA=0
DHDCFLAGS += -DWBTEXT_SCORE_V2
DHDCFLAGS += -DRRM_BCNREQ_MAX_CHAN_TIME=12
DHDCFLAGS += -DWL_LASTEVT
DHDCFLAGS += -DROAM_EVT_DISABLE
# SOFTAP ACS
DHDCFLAGS += -DWL_SOFTAP_ACS
# Wake
DHDCFLAGS += -DCONFIG_HAS_WAKELOCK
DHDCFLAGS += -DDHD_WAKE_EVENT_STATUS
DHDCFLAGS += -DDHD_WAKE_RX_STATUS
DHDCFLAGS += -DCUSTOM_WAKE_REASON_STATS
DHDCFLAGS += -DDHD_WAKEPKT_SET_MARK
#Android Q
DHDCFLAGS += -DWL_USE_RANDOMIZED_SCAN
DHDCFLAGS += -DSTA_RANDMAC_ENFORCED
#Connected MAC randomization
DHDCFLAGS += -DWL_STA_ASSOC_RAND
#Soft AP MAC randomization
DHDCFLAGS += -DWL_SOFTAP_RAND
#p2p MAC randomization
DHDCFLAGS += -DWL_P2P_RAND
#Custom Mapping of DSCP to User Priority
DHDCFLAGS += -DWL_CUSTOM_MAPPING_OF_DSCP
# Enable below define for production
ifneq ($(CONFIG_SOC_GOOGLE),)
#DHDCFLAGS += -DMACADDR_PROVISION_ENFORCED
endif
ifneq ($(CONFIG_BCMDHD_PCIE),)
	DHDCFLAGS += -DDHD_WAKE_STATUS
endif
DHDCFLAGS += -DENABLE_BCN_LI_BCN_WAKEUP
# Hang
DHDCFLAGS += -DDHD_HANG_SEND_UP_TEST
DHDCFLAGS += -DDHD_USE_EXTENDED_HANG_REASON
DHDCFLAGS += -DPREVENT_REOPEN_DURING_HANG
DHDCFLAGS += -DSUPPORT_LINKDOWN_RECOVERY
DHDCFLAGS += -DSUPPORT_TRIGGER_HANG_EVENT
# Logging
DHDCFLAGS += -DBCMASSERT_LOG
DHDCFLAGS += -DDHD_8021X_DUMP
DHDCFLAGS += -DDHD_DHCP_DUMP
DHDCFLAGS += -DDHD_ICMP_DUMP
DHDCFLAGS += -DDHD_ARP_DUMP
DHDCFLAGS += -DDHD_DNS_DUMP
DHDCFLAGS += -DDHD_PKT_LOGGING
DHDCFLAGS += -DDHD_PKTDUMP_ROAM
DHDCFLAGS += -DDHD_RANDMAC_LOGGING
DHDCFLAGS += -DDHD_STATUS_LOGGING
DHDCFLAGS += -DDHD_WAKEPKT_DUMP
DHDCFLAGS += -DRSSI_MONITOR_SUPPORT
DHDCFLAGS += -DSET_SSID_FAIL_CUSTOM_RC=100
DHDCFLAGS += -DDHD_EVENT_LOG_FILTER
DHDCFLAGS += -DWL_CFGVENDOR_SEND_HANG_EVENT
# Packet
DHDCFLAGS += -DBLOCK_IPV6_PACKET
#DHDCFLAGS += -DDHD_DONOT_FORWARD_BCMEVENT_AS_NETWORK_PKT # NAN test failure
DHDCFLAGS += -DENABLE_IPMCAST_FILTER
DHDCFLAGS += -DPASS_ALL_MCAST_PKTS
DHDCFLAGS += -DPKTPRIO_OVERRIDE
DHDCFLAGS += -DNDO_CONFIG_SUPPORT
# Kernel/Platform Related Feature
#DHDCFLAGS += -DDHD_LB_TXP_DEFAULT_ENAB # Not needed for Brix
#DHDCFLAGS += -DDHD_RECOVER_TIMEOUT # Not needed for Brix
#DHDCFLAGS += -DDHD_USE_ATOMIC_PKTGET # Not needed for Brix
#DHDCFLAGS += -DDHD_USE_COHERENT_MEM_FOR_RING # Not needed for Brix
#DHDCFLAGS += -DDONGLE_ENABLE_ISOLATION # Not compatible with Brix platform
#DHDCFLAGS += -DKEEP_WIFION_OPTION # Not compatible with Brix platform
DHDCFLAGS += -DWAIT_DEQUEUE
DHDCFLAGS += -DWL_SUPPORT_BACKPORTED_KPATCHES
# SoftAP
DHDCFLAGS += -DSUPPORT_AP_HIGHER_BEACONRATE
DHDCFLAGS += -DSUPPORT_AP_RADIO_PWRSAVE
DHDCFLAGS += -DSUPPORT_HIDDEN_AP
DHDCFLAGS += -DSUPPORT_SOFTAP_SINGL_DISASSOC
DHDCFLAGS += -DWL_SUPPORT_AUTO_CHANNEL
DHDCFLAGS += -DSUPPORT_SOFTAP_WPAWPA2_MIXED
# P2P
DHDCFLAGS += -DP2P_LISTEN_OFFLOADING
DHDCFLAGS += -DP2P_SKIP_DFS

# SCAN
DHDCFLAGS += -DCUSTOMER_SCAN_TIMEOUT_SETTING
DHDCFLAGS += -DDISABLE_PRUNED_SCAN
DHDCFLAGS += -DESCAN_BUF_OVERFLOW_MGMT
DHDCFLAGS += -DSUPPORT_RANDOM_MAC_SCAN
DHDCFLAGS += -DUSE_INITIAL_SHORT_DWELL_TIME
DHDCFLAGS += -DWL_CFG80211_VSDB_PRIORITIZE_SCAN_REQUEST
DHDCFLAGS += -DCUSTOM_SCAN_UNASSOC_ACTIVE_TIME=40
DHDCFLAGS += -DCUSTOM_SCAN_PASSIVE_TIME=110

# Suspend/Resume
DHDCFLAGS += -DENABLE_MAX_DTIM_IN_SUSPEND
DHDCFLAGS += -DSUPPORT_DEEP_SLEEP
# Misc Features
DHDCFLAGS += -DDHD_BLOB_EXISTENCE_CHECK
DHDCFLAGS += -DSUPPORT_PM2_ONLY
DHDCFLAGS += -DSUPPORT_AMPDU_MPDU_CMD
DHDCFLAGS += -DWL_RELMCAST
DHDCFLAGS += -DWL_SUPP_EVENT
DHDCFLAGS += -DDISABLE_WL_FRAMEBURST_SOFTAP
DHDCFLAGS += -DFILTER_IE
DHDCFLAGS += -DCUSTOM_LONG_RETRY_LIMIT=12
DHDCFLAGS += -DDHD_POST_EAPOL_M1_AFTER_ROAM_EVT
DHDCFLAGS += -DROAMEXP_SUPPORT
DHDCFLAGS += -DCUSTOM_BSSID_BLACKLIST_NUM=16
DHDCFLAGS += -DCUSTOM_SSID_WHITELIST_NUM=16
# Kind of WAR
DHDCFLAGS += -DENABLE_TDLS_AUTO_MODE
DHDCFLAGS += -DEXPLICIT_DISCIF_CLEANUP
DHDCFLAGS += -DSKIP_WLFC_ON_CONCURRENT
DHDCFLAGS += -DCUSTOM_BLOCK_DEAUTH_AT_EAP_FAILURE
DHDCFLAGS += -DTDLS_MSG_ONLY_WFD
DHDCFLAGS += -DCUSTOM_EVENT_PM_WAKE_MEMDUMP_DISABLED
# Custom tuning value
DHDCFLAGS += -DCUSTOM_ROAM_TIME_THRESH_IN_SUSPEND=6000
DHDCFLAGS += -DCUSTOM_EVENT_PM_WAKE=30
DHDCFLAGS += -DCUSTOM_EVENT_PM_PERCENT=70
DHDCFLAGS += -DCUSTOM_KEEP_ALIVE_SETTING=30000
DHDCFLAGS += -DCUSTOM_PNO_EVENT_LOCK_xTIME=10
DHDCFLAGS += -DCUSTOM_OCL_RSSI_VAL=-75

ifneq ($(CONFIG_BCMDHD_PCIE),)
    DHDCFLAGS += -DCUSTOM_DHD_WATCHDOG_MS=0
endif

DHDCFLAGS += -DCUSTOM_TDLS_IDLE_MODE_SETTING=10000
DHDCFLAGS += -DCUSTOM_TDLS_RSSI_THRESHOLD_HIGH=-80
DHDCFLAGS += -DCUSTOM_TDLS_RSSI_THRESHOLD_LOW=-85
DHDCFLAGS += -DCUSTOM_TCPACK_SUPP_RATIO=15
DHDCFLAGS += -DCUSTOM_TCPACK_DELAY_TIME=10
DHDCFLAGS += -DD3_ACK_RESP_TIMEOUT=4000
DHDCFLAGS += -DIOCTL_RESP_TIMEOUT=5000
DHDCFLAGS += -DMAX_DTIM_ALLOWED_INTERVAL=925
DHDCFLAGS += -DENABLE_MAX_DTIM_IN_SUSPEND
DHDCFLAGS += -DNUM_SCB_MAX_PROBE=3
DHDCFLAGS += -DWL_SCB_TIMEOUT=10
DHDCFLAGS += -DWIFI_TURNOFF_DELAY=10
DHDCFLAGS += -DWIFI_TURNON_USE_HALINIT
#Static preallocated buffers
DHDCFLAGS += -DDHD_USE_STATIC_MEMDUMP

#OCE/MBO
DHDCFLAGS += -DWL_MBO
DHDCFLAGS += -DWL_OCE
DHDCFLAGS += -DWL_MBO_HOST

#CELLULAR CHANNEL AVOIDANCE
DHDCFLAGS += -DWL_CELLULAR_CHAN_AVOID
DHDCFLAGS += -DWL_CELLULAR_CHAN_AVOID_DUMP

#USABLE CHANNEL
DHDCFLAGS += -DWL_USABLE_CHAN

#ACS check scc in active channels
DHDCFLAGS += -DDHD_ACS_CHECK_SCC_2G_ACTIVE_CH

#Latency Mode
DHDCFLAGS += -DWL_LATENCY_MODE
DHDCFLAGS += -DSUPPORT_LATENCY_CRITICAL_DATA

# Enable GONEG collision resolution
DHDCFLAGS += -DWL_CFG80211_GON_COLLISION

# HANG send due to private command errors
DHDCFLAGS += -DDHD_SEND_HANG_PRIVCMD_ERRORS

# HANG trigger support on escan syncid mismatch
DHDCFLAGS += -DDHD_SEND_HANG_ESCAN_SYNCID_MISMATCH

# Required for scanning the non-continue channel
DHDCFLAGS += -DWFC_NON_CONT_CHAN

# Context Hub Runtime Environment (CHRE)
DHDCFLAGS += -DCHRE

# HANG trigger support on escan syncid mismatch
#DHDCFLAGS += -DDHD_SEND_HANG_ESCAN_SYNCID_MISMATCH

ifneq ($(CONFIG_BCMDHD_PCIE),)
	DHDCFLAGS += -DDHD_USE_STATIC_CTRLBUF
    #Use coherent pool
	DHDCFLAGS += -DDHD_USE_COHERENT_MEM_FOR_RING
	DHDCFLAGS += -DDHD_ALLOC_COHERENT_MEM_FROM_ATOMIC_POOL
    # Runtime PM feature
	DHDCFLAGS += -DDHD_PCIE_RUNTIMEPM -DMAX_IDLE_COUNT=5

    #AXI error logging
    DHDCFLAGS += -DDNGL_AXI_ERROR_LOGGING
    #DHDCFLAGS += -DDHD_USE_WQ_FOR_DNGL_AXI_ERROR

    # 4way handshake disconnection feature
	DHDCFLAGS += -DDHD_4WAYM4_FAIL_DISCONNECT

    ## OOB
    ifeq ($(CONFIG_BCMDHD_OOB_HOST_WAKE),y)
	    DHDCFLAGS += -DBCMPCIE_OOB_HOST_WAKE
	    DHDCFLAGS += -DDHD_USE_PCIE_OOB_THREADED_IRQ
    endif
endif

# DMA64 suppports on 64bit Architecture
ifeq ($(CONFIG_64BIT),y)
    DHDCFLAGS := $(filter-out -DBCMDMA32,$(DHDCFLAGS))
    DHDCFLAGS += -DBCMDMA64OSL
endif

DHDCFLAGS += -DVSDB

# TDLS enable
DHDCFLAGS += -DWLTDLS -DWLTDLS_AUTO_ENABLE
# For TDLS tear down inactive time 40 sec
DHDCFLAGS += -DCUSTOM_TDLS_IDLE_MODE_SETTING=10000
# for TDLS RSSI HIGH for establishing TDLS link
DHDCFLAGS += -DCUSTOM_TDLS_RSSI_THRESHOLD_HIGH=-80
# for TDLS RSSI HIGH for tearing down TDLS link
DHDCFLAGS += -DCUSTOM_TDLS_RSSI_THRESHOLD_LOW=-85

# Roaming trigger
DHDCFLAGS += -DCUSTOM_ROAM_TRIGGER_SETTING=-75
DHDCFLAGS += -DCUSTOM_ROAM_DELTA_SETTING=10
# Set PM 2 always regardless suspend/resume
DHDCFLAGS += -DSUPPORT_PM2_ONLY

# For special PNO Event keep wake lock for 10sec
DHDCFLAGS += -DCUSTOM_PNO_EVENT_LOCK_xTIME=10
DHDCFLAGS += -DMIRACAST_AMPDU_SIZE=8
#Vendor Extension
DHDCFLAGS += -DWL_VENDOR_EXT_SUPPORT
#RSSI Monitor
DHDCFLAGS += -DRSSI_MONITOR_SUPPORT
#RTT
DHDCFLAGS += -DRTT_SUPPORT -DRTT_DEBUG
#NDOffload
DHDCFLAGS += -DNDO_CONFIG_SUPPORT
DHDCFLAGS += -DIPV6_NDO_SUPPORT

#Debugaility
DHDCFLAGS += -DDBG_PKT_MON -DDBG_PKT_MON_INIT_DEFAULT
DHDCFLAGS += -DDNGL_EVENT_SUPPORT -DPARSE_DONGLE_HOST_EVENT
DHDCFLAGS += -DWL_CFGVENDOR_SEND_ALERT_EVENT

# Early suspend
DHDCFLAGS += -DDHD_USE_EARLYSUSPEND

# For Scan result patch
DHDCFLAGS += -DESCAN_RESULT_PATCH
DHDCFLAGS += -DDUAL_ESCAN_RESULT_BUFFER

# NAN
DHDCFLAGS += -DWL_NAN -DWL_NAN_DISC_CACHE -DWL_NANP2P -DNAN_DAM_ANDROID
# NAN 3.1 specific
DHDCFLAGS += -DWL_NAN_INSTANT_MODE

DHDCFLAGS += -DQOS_MAP_SET

# Thermal mitigation flag
DHDCFLAGS += -DWL_THERMAL_MITIGATION

# SAR Tx power scenario
DHDCFLAGS += -DWL_SAR_TX_POWER
DHDCFLAGS += -DWL_SAR_TX_POWER_CONFIG

# Using extenal supplicant for WPA3
DHDCFLAGS += -DWL_CLIENT_SAE

# GET USABLE Channel
DHDCFLAGS += -DWL_USABLE_CHAN

# OWE
DHDCFLAGS += -DWL_OWE
#SAE-FT
DHDCFLAGS += -DWL_SAE_FT

# Silent roam
# GG build uses higher band roam feature
#DHDCFLAGS += -DCONFIG_SILENT_ROAM

# Get ROAM Channel Cache
DHDCFLAGS += -DWL_GET_RCC
# ROAM candidatae RSSI limit
DHDCFLAGS += -DCONFIG_ROAM_RSSI_LIMIT
DHDCFLAGS += -DCUSTOM_ROAMRSSI_2G=-70
DHDCFLAGS += -DCUSTOM_ROAMRSSI_5G=-70

# SAE..if kernel < 4.17 ..back port support required
ifneq ($(CONFIG_CFG80211_SAE_BKPORT),)
    DHDCFLAGS += -DWL_SAE
endif
DHDCFLAGS += -DWL_GCMP_SUPPORT

# Disable HE on P2P based on peer support
DHDCFLAGS += -DWL_DISABLE_HE_P2P

# Advertise HE capabilities
DHDCFLAGS += -DWL_CAP_HE

# Advertise OCE_STA capability
DHDCFLAGS += -DWL_CAP_OCE_STA

# Enable RTT LCI/LCR info support
DHDCFLAGS += -DWL_RTT_LCI -DWL_RTT_ONE_WAY -DWL_RTT_BW160

# For Static Buffer
ifeq ($(CONFIG_DHD_USE_STATIC_BUF),y)
    DHDCFLAGS += -DENHANCED_STATIC_BUF
    DHDCFLAGS += -DSTATIC_WL_PRIV_STRUCT
endif

# Ioctl timeout 5000ms
DHDCFLAGS += -DIOCTL_RESP_TIMEOUT=5000

# Prevent rx thread monopolize
DHDCFLAGS += -DWAIT_DEQUEUE

# idle count
DHDCFLAGS += -DDHD_USE_IDLECOUNT

# SKB TAILPAD to avoid out of boundary memory access
DHDCFLAGS += -DDHDENABLE_TAILPAD

#SCAN time
DHDCFLAGS += -DCUSTOM_SET_SHORT_DWELL_TIME

# Disable FRAMEBURST on VSDB
#DHDCFLAGS += -DDISABLE_FRAMEBURST_VSDB

# WPS
DHDCFLAGS += -DWL_WPS_SYNC -DBCMCRYPTO_COMPONENT

# Path name to store the FW Debug symbol files
DHDCFLAGS += -DPLATFORM_PATH="\"/vendor/etc/wifi/\""

DHDCFLAGS += -DSIMPLE_MAC_PRINT

DHDCFLAGS += -DDHD_CLEANUP_KEEP_ALIVE
# Interface Concurrency
DHDCFLAGS += -DWL_DUAL_STA -DWL_DUAL_APSTA
# Support to update clm/nvram through downloading OTA
DHDCFLAGS += -DSUPPORT_OTA_UPDATE

# TWT HAL
DHDCFLAGS += -DWL_TWT_HAL_IF

# RNR INCLUSION
DHDCFLAGS += -DDHD_SCAN_INC_RNR

# debug code to identify root cause of scan timeout due to syncid mismatch
DHDCFLAGS += -DSYNCID_MISMATCH_DEBUG

# MSCS OFFLOAD
DHDCFLAGS += -DWL_RAV_MSCS_NEG_IN_ASSOC

# MAX_PFN_LIST_COUNT is defined as 64 in wlioctl_defs.h
DHDCFLAGS += -DMAX_PFN_LIST_COUNT=16

# Enable idsup for 4-way HS offload
# DHDCFLAGS += -DBCMSUP_4WAY_HANDSHAKE -DWL_ENABLE_IDSUP

##########################
# driver type
# m: module type driver
# y: built-in type driver
##########################
DRIVER_TYPE ?= $(CONFIG_BCMDHD)

#########################
# Chip dependent feature
#########################

ifneq ($(filter y, $(CONFIG_BCM4389) $(CONFIG_BCM4398)),)
    #6GHz support
    DHDCFLAGS += -DWL_6G_BAND
  # UNII4 channel support
  DHDCFLAGS += -DWL_5P9G
  # UNII-4 channel filter for non-sta roles
  DHDCFLAGS += -DWL_UNII4_CHAN
endif

# For 4389 and 43752
ifneq ($(filter y, $(CONFIG_BCM4389) $(CONFIG_BCM4398) $(CONFIG_BCM43752) $(CONFIG_BCM4375) $(CONFIG_BCM4385)),)
    DHDCFLAGS += -DUSE_WL_TXBF
    DHDCFLAGS += -DCUSTOM_DPC_CPUCORE=0

    # New Features
    DHDCFLAGS += -DWL11U
    DHDCFLAGS += -DMFP
    ifneq ($(CONFIG_BCMDHD_PCIE),)
        # debug info
        DHDCFLAGS += -DDHD_WAKE_STATUS -DDHD_WAKE_RX_STATUS -DDHD_WAKE_EVENT_STATUS -DDHD_WAKE_STATUS_PRINT
    endif
    ifneq ($(CONFIG_BCMDHD_SDIO),)
        DHDCFLAGS += -DBDC -DDHD_BCMEVENTS -DMMC_SDIO_ABORT
        DHDCFLAGS += -DOOB_INTR_ONLY -DHW_OOB
        DHDCFLAGS += -DBCMSDIO -DBCMLXSDMMC -DUSE_SDIOFIFO_IOVAR
        DHDCFLAGS += -DPROP_TXSTATUS
        DHDCFLAGS += -DCUSTOM_AMPDU_MPDU=16
        DHDCFLAGS += -DCUSTOM_AMPDU_BA_WSIZE=64

        # tput enhancement
        DHDCFLAGS += -DCUSTOM_GLOM_SETTING=8 -DCUSTOM_RXCHAIN=1
        DHDCFLAGS += -DUSE_DYNAMIC_F2_BLKSIZE -DDYNAMIC_F2_BLKSIZE_FOR_NONLEGACY=128
        DHDCFLAGS += -DBCMSDIOH_TXGLOM -DCUSTOM_TXGLOM=1 -DBCMSDIOH_TXGLOM_HIGHSPEED
        DHDCFLAGS += -DDHDTCPACK_SUPPRESS
        DHDCFLAGS += -DRXFRAME_THREAD
        DHDCFLAGS += -DREPEAT_READFRAME
        DHDCFLAGS += -DCUSTOM_MAX_TXGLOM_SIZE=40
        DHDCFLAGS += -DMAX_HDR_READ=128
        DHDCFLAGS += -DDHD_FIRSTREAD=128
        DHDCFLAGS += -DWLFC_STATE_PREALLOC
    endif

    # Expand TCP tx queue to 10 times of default size
    DHDCFLAGS += -DTSQ_MULTIPLIER=10

    ifneq ($(CONFIG_BCMDHD_PCIE),)
        DHDCFLAGS += -DPCIE_FULL_DONGLE -DBCMPCIE -DCUSTOM_DPC_PRIO_SETTING=-1
	# NCI
        DHDCFLAGS += -DSOCI_NCI_BUS -DBOOKER_NIC400_INF
        # tput enhancement
        DHDCFLAGS += -DCUSTOM_AMPDU_BA_WSIZE=64
        DHDCFLAGS += -DPROP_TXSTATUS_VSDB
        # HEAP ASLR
        DHDCFLAGS += -DBCM_ASLR_HEAP
	# Enable workitem aggregation
	DHDCFLAGS += -DDHD_AGGR_WI
	# Bits in DHD_AGGR_WI_EN : 0 = TXPOST | 1 = RXPOST | 2 = TXCPL | 3 = RXCPL
	DHDCFLAGS += -DDHD_AGGR_WI_EN=0xE
        DHDCFLAGS += -DMAX_CNTL_TX_TIMEOUT=1
        ifneq ($(CONFIG_ARCH_MSM),)
            DHDCFLAGS += -DMSM_PCIE_LINKDOWN_RECOVERY
        endif
        ifeq ($(CONFIG_DHD_USE_STATIC_BUF),y)
            DHDCFLAGS += -DDHD_USE_STATIC_IOCTLBUF
        endif

        # Enable health check event handling
        DHDCFLAGS += -DDNGL_EVENT_SUPPORT
        DHDCFLAGS += -DHCHK_COMMON_SW_EVENT
    endif

    ifneq ($(CONFIG_DHD_OF_SUPPORT),)
        DHDCFLAGS += -DDHD_OF_SUPPORT
    endif

    # Print 802.1X packets
    DHDCFLAGS += -DDHD_8021X_DUMP
    # prioritize 802.1x packet
    DHDCFLAGS += -DEAPOL_PKT_PRIO
# Update Tx/Rx rate info
  DHDCFLAGS += -DWL_RATE_INFO
endif

#EXTRA_LDFLAGS += --strip-debug

DHDCFLAGS += -DENABLE_INSMOD_NO_FW_LOAD

ifeq ($(DRIVER_TYPE),y)
  DHDCFLAGS += -DWAKEUP_KSOFTIRQD_POST_NAPI_SCHEDULE
  DHDCFLAGS += -DUSE_LATE_INITCALL_SYNC
  # Use kernel strlcpy() implementation instead of one, defined in bcmstdlib_s.c
  DHDCFLAGS += -DBCM_USE_PLATFORM_STRLCPY
endif

ifeq ($(DRIVER_TYPE),m)
  DHDCFLAGS += -DBCMDHD_MODULAR
endif

DHDCFLAGS += -DDHD_CAP_CUSTOMER="\"hw2 \""
ifneq ($(CONFIG_SOC_GOOGLE),)
	# The flag will be enabled only on customer platform
	DHDCFLAGS += -DCUSTOMER_HW2_DEBUG
	DHDCFLAGS += -DDHD_SET_PCIE_DMA_MASK_FOR_GS101
	DHDCFLAGS += -DCUSTOM_CONTROL_LOGTRACE=1
	DHDCFLAGS += -DDHD_CAP_PLATFORM="\"exynos \""
	DHDCFLAGS += -DCONFIG_ARCH_EXYNOS
	DHDCFLAGS += -DDHD_MODULE_INIT_FORCE_SUCCESS
	DHDCFLAGS += -DSUPPORT_MULTIPLE_NVRAM -DSUPPORT_MULTIPLE_CLMBLOB
	DHDCFLAGS += -DDHD_LB_TXP_DEFAULT_ENAB
	DHDCFLAGS += -DDHD_SSSR_COREDUMP
	DHDCFLAGS += -DDHD_REDUCE_PM_LOG
	# LB RXP Flow control to avoid OOM
	DHDCFLAGS += -DLB_RXP_STOP_THR=500 -DLB_RXP_STRT_THR=499
	# Dongle init fail
	DHDCFLAGS += -DPOWERUP_MAX_RETRY=0
    # Add chip specific suffix to the output on customer release
    ifneq ($(filter y, $(CONFIG_BCM4389)),)
	    BCM_WLAN_CHIP_SUFFIX = 4389
	    DHDCFLAGS += -DBCMPCI_DEV_ID=0x4441
	    DHDCFLAGS += -DBCMPCI_NOOTP_DEV_ID=0x4389 -DBCM4389_CHIP_DEF
    endif
    ifneq ($(filter y, $(CONFIG_BCM4398)),)
	    BCM_WLAN_CHIP_SUFFIX = 4398
	    DHDCFLAGS += -DBCMPCI_DEV_ID=0x4444
	    DHDCFLAGS += -DBCMPCI_NOOTP_DEV_ID=0x4398 -DBCM4398_CHIP_DEF
    endif
    ifneq ($(CONFIG_BCMDHD_PCIE),)
	DHDCFLAGS += -DDHD_LINUX_STD_FW_API
	DHDCFLAGS += -DDHD_FW_NAME="\"fw_bcmdhd.bin\""
	DHDCFLAGS += -DDHD_NVRAM_NAME="\"bcmdhd.cal\""
	DHDCFLAGS += -DDHD_CLM_NAME="\"bcmdhd_clm.blob\""
	DHDCFLAGS += -DDHD_MAP_NAME="\"fw_bcmdhd.map\""
    ifneq ($(CONFIG_SOC_GS201),)
	DHDCFLAGS += -DPCIE_CPL_TIMEOUT_RECOVERY
    endif
    endif
	# TCP TPUT Enhancement, enable only for GS101
	DHDCFLAGS += -DDHD_TCP_LIMIT_OUTPUT
	DHDCFLAGS += -DDHD_TCP_PACING_SHIFT

else ifneq ($(CONFIG_ARCH_HISI),)
	DHDCFLAGS += -DBOARD_HIKEY -DBOARD_HIKEY_HW2
	DHDCFLAGS += -DDHD_SUPPORT_VFS_CALL
	# Skip pktlogging of data packets
	DHDCFLAGS += -DDHD_SKIP_PKTLOGGING_FOR_DATA_PKTS
        # Allow wl event forwarding as network packet
        DHDCFLAGS += -DWL_EVENT_ENAB
        ifneq ($(CONFIG_BCMDHD_PCIE),)
	    # LB RXP Flow control to avoid OOM
	    DHDCFLAGS += -DLB_RXP_STOP_THR=200 -DLB_RXP_STRT_THR=199
        endif
        DHDCFLAGS += -DDHD_LINUX_STD_FW_API
        DHDCFLAGS += -DDHD_FW_NAME="\"fw_bcmdhd.bin\""
        DHDCFLAGS += -DDHD_NVRAM_NAME="\"bcmdhd.cal\""
        DHDCFLAGS += -DDHD_CLM_NAME="\"bcmdhd_clm.blob\""
        DHDCFLAGS += -DDHD_MAP_NAME="\"fw_bcmdhd.map\""
        DHDCFLAGS += -DDHD_SUPPORT_VFS_CALL
        # Skip pktlogging of data packets
        DHDCFLAGS += -DDHD_SKIP_PKTLOGGING_FOR_DATA_PKTS
        DHDCFLAGS += -DDHD_IOVAR_LOG_FILTER_DUMP
	DHDCFLAGS += -DDHD_CAP_PLATFORM="\"hikey \""
        # Dongle init fail
	DHDCFLAGS += -DPOWERUP_MAX_RETRY=3
	DHDCFLAGS := $(filter-out -DSIMPLE_MAC_PRINT ,$(DHDCFLAGS))
endif

DHDCFLAGS += -DDHD_DEBUG
DHDCFLAGS += -DDHD_COMPILED=\"$(BCMDHD_ROOT)\"
DHDCFLAGS += -I$(BCMDHD_ROOT)/include/ -I$(BCMDHD_ROOT)/
DHDCFLAGS += -Wno-date-time
ifeq ($(KERNEL_SRC),)
KBUILD_CFLAGS += -I$(LINUXDIR)/include -I$(CURDIR)
endif

DHDOFILES := dhd_pno.o dhd_common.o dhd_ip.o dhd_custom_gpio.o \
    dhd_linux.o dhd_linux_sched.o dhd_cfg80211.o dhd_linux_wq.o aiutils.o \
    bcmevent.o bcmutils.o bcmwifi_channels.o hndpmu_dhd.o linux_osl.o linux_pkt.o \
    siutils.o siutils_host.o wl_android.o wl_cfg80211.o wl_cfgscan.o wl_cfgp2p.o \
	wl_cfgvif.o wl_cfg_btcoex.o wldev_common.o wl_linux_mon.o dhd_linux_platdev.o \
    dhd_pno.o dhd_rtt.o dhd_linux_pktdump.o wl_cfg_btcoex.o hnd_pktq.o bcmcapext.o\
    hnd_pktpool.o wl_cfgvendor.o bcmxtlv.o bcm_app_utils.o dhd_debug.o frag.o \
    dhd_debug_linux.o wl_cfgnan.o dhd_mschdbg.o bcmbloom.o dhd_dbg_ring.o bcmstdlib_s.o \
    dhd_linux_exportfs.o dhd_linux_tx.o dhd_linux_rx.o dhd_log_dump.o

# This file will be here only for internal builds and sets flags which may
# affect subsequent behavior. See extended comment within it for details.
_dhd_lx_mk_dir := $(dir $(lastword $(MAKEFILE_LIST)))
-include $(_dhd_lx_mk_dir)bcminternal-android.mk

DHDCFLAGS += $(BCMINTERNAL_DFLAGS)
DHDOFILES += $(BCMINTERNAL_DHDOFILES)

# extra Source files
ifneq ($(filter -DSOCI_NCI_BUS, $(DHDCFLAGS)),)
	DHDOFILES += nciutils.o nciutils_host.o
endif

DHDOFILES += wl_roam.o
ifneq ($(filter -DWBRC, $(DHDCFLAGS)),)
	DHDOFILES += wb_regon_coordinator.o
endif

ifneq ($(filter -DDHD_PKT_LOGGING,$(DHDCFLAGS)),)
	DHDOFILES += dhd_pktlog.o
endif

ifneq ($(filter -DDHD_STATUS_LOGGING,$(DHDCFLAGS)),)
	DHDOFILES += dhd_statlog.o
endif

ifneq ($(filter y, $(CONFIG_SOC_GOOGLE) $(CONFIG_SOC_EXYNOS9820)),)
	DHDOFILES += dhd_custom_google.o
else ifneq ($(CONFIG_ARCH_HISI),)
	DHDOFILES += dhd_custom_hikey.o
endif

ifneq ($(CONFIG_BROADCOM_WIFI_RESERVED_MEM),)
    DHDOFILES += dhd_custom_memprealloc.o
endif

ifneq ($(CONFIG_BCMDHD_SDIO),)
    DHDOFILES += bcmsdh.o bcmsdh_linux.o bcmsdh_sdmmc.o bcmsdh_sdmmc_linux.o
    DHDOFILES += dhd_cdc.o dhd_wlfc.o dhd_sdio.o
endif

ifneq ($(CONFIG_BCMDHD_PCIE),)
    DHDOFILES += dhd_pcie.o dhd_pcie_linux.o dhd_msgbuf.o dhd_flowring.o
    DHDOFILES += pcie_core_host.o
endif

ifneq ($(filter -DDHD_LB, $(DHDCFLAGS)),)
    DHDOFILES += dhd_linux_lb.o
endif

ifneq ($(filter -DDHD_EVENT_LOG_FILTER, $(DHDCFLAGS)),)
    DHDOFILES += dhd_event_log_filter.o
endif

ifneq ($(filter -DUSE_CID_CHECK, $(DHDCFLAGS)),)
    DHDOFILES += dhd_custom_cis.o
endif

ifneq ($(filter -DWL_CELLULAR_CHAN_AVOID, $(DHDCFLAGS)),)
DHDOFILES += wl_cfg_cellavoid.o
endif

bcmdhd$(BCM_WLAN_CHIP_SUFFIX)-objs := $(DHDOFILES)
obj-$(DRIVER_TYPE)   += bcmdhd$(BCM_WLAN_CHIP_SUFFIX).o
ccflags-y := $(KBUILD_CFLAGS)
ccflags-y += $(DHDCFLAGS)

# For in-tree model, define make rules here (KERNEL_SRC will be NULL)
ifeq ($(KERNEL_SRC),)
all:
	@echo "$(MAKE) --no-print-directory -C $(KDIR) SUBDIRS=$(CURDIR) modules $(KBUILD_OPTIONS)"
	@$(MAKE) --no-print-directory -C $(KDIR) SUBDIRS=$(CURDIR) modules $(KBUILD_OPTIONS)

modules_install:
	@$(MAKE) --no-print-directory -C $(KDIR) \
		SUBDIRS=$(CURDIR) modules_install

clean:
	rm -rf *.o *.ko *.mod.c *~ .*.cmd *.o.cmd .*.o.cmd \
	Module.symvers modules.order .tmp_versions modules.builtin
endif
# vim: filetype=make shiftwidth=2