/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: auto_gen_demo.proto */

#ifndef PROTOBUF_C_auto_5fgen_5fdemo_2eproto__INCLUDED
#define PROTOBUF_C_auto_5fgen_5fdemo_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Marvell__PlrRxQcStatusT Marvell__PlrRxQcStatusT;
typedef struct _Marvell__PlrRxQcRulesT Marvell__PlrRxQcRulesT;
typedef struct _Marvell__PlrLrxRulesT Marvell__PlrLrxRulesT;
typedef struct _Marvell__PlrHrxRulesT Marvell__PlrHrxRulesT;
typedef struct _Marvell__PlrTxRulesT Marvell__PlrTxRulesT;
typedef struct _Marvell__PlrAdvancedRulesT Marvell__PlrAdvancedRulesT;
typedef struct _Marvell__PlrLmRulesS Marvell__PlrLmRulesS;
typedef struct _Marvell__PlrRulesT Marvell__PlrRulesT;
typedef struct _Marvell__PlrRulesS Marvell__PlrRulesS;


/* --- enums --- */

typedef enum _Marvell__EPlrPackageType {
  MARVELL__E_PLR_PACKAGE_TYPE__A = 0
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARVELL__E_PLR_PACKAGE_TYPE)
} Marvell__EPlrPackageType;
typedef enum _Marvell__EPlrOperationalMode {
  MARVELL__E_PLR_OPERATIONAL_MODE__B = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARVELL__E_PLR_OPERATIONAL_MODE)
} Marvell__EPlrOperationalMode;
typedef enum _Marvell__EPlrRefClkMode {
  MARVELL__E_PLR_REF_CLK_MODE__C = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARVELL__E_PLR_REF_CLK_MODE)
} Marvell__EPlrRefClkMode;
typedef enum _Marvell__EPlrRxQcSnrThreshold {
  MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__D = 44
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARVELL__E_PLR_RX_QC_SNR_THRESHOLD)
} Marvell__EPlrRxQcSnrThreshold;
typedef enum _Marvell__EPlrSignalMode {
  MARVELL__E_PLR_SIGNAL_MODE__E = 54
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARVELL__E_PLR_SIGNAL_MODE)
} Marvell__EPlrSignalMode;
typedef enum _Marvell__EPlrDspMode {
  MARVELL__E_PLR_DSP_MODE__F = 64
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MARVELL__E_PLR_DSP_MODE)
} Marvell__EPlrDspMode;

/* --- messages --- */

struct  _Marvell__PlrRxQcStatusT
{
  ProtobufCMessage base;
  uint32_t status;
};
#define MARVELL__PLR_RX_QC_STATUS_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_rx_qc_status_t__descriptor) \
    , 0 }


struct  _Marvell__PlrRxQcRulesT
{
  ProtobufCMessage base;
  Marvell__EPlrRxQcSnrThreshold snr_threshold_mm_enter;
  Marvell__EPlrRxQcSnrThreshold snr_threshold_mm_exit;
  uint32_t slc_err_limit;
};
#define MARVELL__PLR_RX_QC_RULES_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_rx_qc_rules_t__descriptor) \
    , MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__D, MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__D, 0 }


struct  _Marvell__PlrLrxRulesT
{
  ProtobufCMessage base;
  protobuf_c_boolean channel_enable;
  Marvell__EPlrSignalMode signalling;
  Marvell__EPlrDspMode dsp_mode;
  protobuf_c_boolean gray_mapping;
  protobuf_c_boolean dfe_precoder_en;
  protobuf_c_boolean invert_chan;
  protobuf_c_boolean vga_tracking_en;
  protobuf_c_boolean oim_en;
  uint32_t preamp_bias_ctrl;
  protobuf_c_boolean qc_all_dis;
  protobuf_c_boolean qc_hist_dis;
  protobuf_c_boolean qc_slc_dis;
  protobuf_c_boolean qc_snr_dis;
  Marvell__PlrRxQcStatusT *qc_status;
};
#define MARVELL__PLR_LRX_RULES_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_lrx_rules_t__descriptor) \
    , 0, MARVELL__E_PLR_SIGNAL_MODE__E, MARVELL__E_PLR_DSP_MODE__F, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL }


struct  _Marvell__PlrHrxRulesT
{
  ProtobufCMessage base;
  protobuf_c_boolean channel_enable;
  Marvell__EPlrSignalMode signalling;
  protobuf_c_boolean gray_mapping;
  protobuf_c_boolean invert_chan;
  Marvell__EPlrDspMode kr_dsp_mode;
  protobuf_c_boolean kr_dfe_precoder_en;
  protobuf_c_boolean kr_auto_ctle_en;
  uint32_t kr_ctle_code;
  protobuf_c_boolean kr_vga_tracking_en;
  protobuf_c_boolean kr_oim_en;
  uint32_t kr_preamp_bias_ctrl;
  protobuf_c_boolean kr_pga_att_en;
  protobuf_c_boolean kr_qc_all_dis;
  protobuf_c_boolean kr_qc_hist_dis;
  protobuf_c_boolean kr_qc_slc_dis;
  protobuf_c_boolean kr_qc_snr_dis;
  Marvell__PlrRxQcStatusT *kr_qc_status;
  protobuf_c_boolean sr_skip_adapt;
  protobuf_c_boolean sr_ctle_adapt_dis;
  uint32_t sr_ctle_override;
  protobuf_c_boolean sr_ctle_c_adapt_en;
  protobuf_c_boolean sr_ctle_r_adapt_dis;
  protobuf_c_boolean sr_lfeq_adapt_dis;
  uint32_t sr_lfeq_override;
  protobuf_c_boolean sr_dfe_adapt_dis;
  protobuf_c_boolean sr_data_skew_adapt_dis;
  protobuf_c_boolean sr_edge_skew_adapt_dis;
  protobuf_c_boolean sr_slc_adapt_dis;
  protobuf_c_boolean sr_edge_off_adapt_dis;
  protobuf_c_boolean sr_agc_adapt_dis;
  protobuf_c_boolean sr_vco_temp_cal_dis;
  protobuf_c_boolean sr_afe_low_bw;
  protobuf_c_boolean sr_afe_bw_adapt_dis;
  protobuf_c_boolean sr_dc_off_adapt_dis;
  protobuf_c_boolean sr_vco_mode;
  protobuf_c_boolean sr_lfeq_adapt_dis_after_init_adapt;
};
#define MARVELL__PLR_HRX_RULES_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_hrx_rules_t__descriptor) \
    , 0, MARVELL__E_PLR_SIGNAL_MODE__E, 0, 0, MARVELL__E_PLR_DSP_MODE__F, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  _Marvell__PlrTxRulesT
{
  ProtobufCMessage base;
  protobuf_c_boolean channel_enable;
  protobuf_c_boolean squelch_lock;
  Marvell__EPlrSignalMode signalling;
  protobuf_c_boolean gray_mapping;
  protobuf_c_boolean invert_chan;
  size_t n_fir_tap;
  int32_t *fir_tap;
  uint32_t inner_eye1;
  uint32_t inner_eye2;
  protobuf_c_boolean dfe_precoder_en;
};
#define MARVELL__PLR_TX_RULES_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_tx_rules_t__descriptor) \
    , 0, 0, MARVELL__E_PLR_SIGNAL_MODE__E, 0, 0, 0,NULL, 0, 0, 0 }


struct  _Marvell__PlrAdvancedRulesT
{
  ProtobufCMessage base;
  protobuf_c_boolean fll_low_bw_en;
  uint32_t ldo_mode_pll;
  uint32_t ldo_mode_txrx;
  protobuf_c_boolean gck_en;
  protobuf_c_boolean breakout_en;
  protobuf_c_boolean los_thresholds_en;
  protobuf_c_boolean avs_en;
};
#define MARVELL__PLR_ADVANCED_RULES_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_advanced_rules_t__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0 }


struct  _Marvell__PlrLmRulesS
{
  ProtobufCMessage base;
  uint32_t fec_mode;
  protobuf_c_boolean fec_interleave;
};
#define MARVELL__PLR_LM_RULES_S__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_lm_rules_s__descriptor) \
    , 0, 0 }


struct  _Marvell__PlrRulesT
{
  ProtobufCMessage base;
  size_t n_id;
  uint32_t *id;
  size_t n_baud_rate;
  uint32_t *baud_rate;
  size_t n_operational_mode;
  uint32_t *operational_mode;
  size_t n_ieee_demap;
  protobuf_c_boolean *ieee_demap;
  size_t n_lrx_qc;
  Marvell__PlrRxQcRulesT **lrx_qc;
  size_t n_hrx_qc;
  Marvell__PlrRxQcRulesT **hrx_qc;
  size_t n_hrx;
  uint32_t *hrx;
  size_t n_htx;
  uint32_t *htx;
  size_t n_lrx;
  uint32_t *lrx;
  size_t n_ltx;
  uint32_t *ltx;
  size_t n_ltx_xbar;
  uint32_t *ltx_xbar;
  size_t n_htx_xbar;
  uint32_t *htx_xbar;
};
#define MARVELL__PLR_RULES_T__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_rules_t__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _Marvell__PlrRulesS
{
  ProtobufCMessage base;
  Marvell__EPlrPackageType package_type;
  Marvell__EPlrOperationalMode operational_mode;
  Marvell__EPlrRefClkMode ref_clk_mode;
  uint32_t ref_clk;
  uint32_t baud_rate;
  protobuf_c_boolean sfec_en;
  size_t n_bundle;
  Marvell__PlrRulesT **bundle;
  Marvell__PlrRxQcRulesT *lrx_qc;
  Marvell__PlrRxQcRulesT *hrx_qc;
  protobuf_c_boolean show_debug_info;
  uint32_t fw_dwld_timeout;
  protobuf_c_boolean ieee_demap;
  protobuf_c_boolean fw_warn_if_mismatched;
  protobuf_c_boolean sfp56_tp7_en;
  size_t n_lrx;
  Marvell__PlrLrxRulesT **lrx;
  size_t n_hrx;
  Marvell__PlrHrxRulesT **hrx;
  size_t n_ltx;
  Marvell__PlrTxRulesT **ltx;
  size_t n_htx;
  Marvell__PlrTxRulesT **htx;
  size_t n_htx_xbar;
  uint32_t *htx_xbar;
  size_t n_ltx_xbar;
  uint32_t *ltx_xbar;
  Marvell__PlrAdvancedRulesT *advanced;
  Marvell__PlrLmRulesS *lm;
};
#define MARVELL__PLR_RULES_S__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&marvell__plr_rules_s__descriptor) \
    , MARVELL__E_PLR_PACKAGE_TYPE__A, MARVELL__E_PLR_OPERATIONAL_MODE__B, MARVELL__E_PLR_REF_CLK_MODE__C, 0, 0, 0, 0,NULL, NULL, NULL, 0, 0, 0, 0, 0, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, NULL, NULL }


/* Marvell__PlrRxQcStatusT methods */
void   marvell__plr_rx_qc_status_t__init
                     (Marvell__PlrRxQcStatusT         *message);
size_t marvell__plr_rx_qc_status_t__get_packed_size
                     (const Marvell__PlrRxQcStatusT   *message);
size_t marvell__plr_rx_qc_status_t__pack
                     (const Marvell__PlrRxQcStatusT   *message,
                      uint8_t             *out);
size_t marvell__plr_rx_qc_status_t__pack_to_buffer
                     (const Marvell__PlrRxQcStatusT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrRxQcStatusT *
       marvell__plr_rx_qc_status_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_rx_qc_status_t__free_unpacked
                     (Marvell__PlrRxQcStatusT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrRxQcRulesT methods */
void   marvell__plr_rx_qc_rules_t__init
                     (Marvell__PlrRxQcRulesT         *message);
size_t marvell__plr_rx_qc_rules_t__get_packed_size
                     (const Marvell__PlrRxQcRulesT   *message);
size_t marvell__plr_rx_qc_rules_t__pack
                     (const Marvell__PlrRxQcRulesT   *message,
                      uint8_t             *out);
size_t marvell__plr_rx_qc_rules_t__pack_to_buffer
                     (const Marvell__PlrRxQcRulesT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrRxQcRulesT *
       marvell__plr_rx_qc_rules_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_rx_qc_rules_t__free_unpacked
                     (Marvell__PlrRxQcRulesT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrLrxRulesT methods */
void   marvell__plr_lrx_rules_t__init
                     (Marvell__PlrLrxRulesT         *message);
size_t marvell__plr_lrx_rules_t__get_packed_size
                     (const Marvell__PlrLrxRulesT   *message);
size_t marvell__plr_lrx_rules_t__pack
                     (const Marvell__PlrLrxRulesT   *message,
                      uint8_t             *out);
size_t marvell__plr_lrx_rules_t__pack_to_buffer
                     (const Marvell__PlrLrxRulesT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrLrxRulesT *
       marvell__plr_lrx_rules_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_lrx_rules_t__free_unpacked
                     (Marvell__PlrLrxRulesT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrHrxRulesT methods */
void   marvell__plr_hrx_rules_t__init
                     (Marvell__PlrHrxRulesT         *message);
size_t marvell__plr_hrx_rules_t__get_packed_size
                     (const Marvell__PlrHrxRulesT   *message);
size_t marvell__plr_hrx_rules_t__pack
                     (const Marvell__PlrHrxRulesT   *message,
                      uint8_t             *out);
size_t marvell__plr_hrx_rules_t__pack_to_buffer
                     (const Marvell__PlrHrxRulesT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrHrxRulesT *
       marvell__plr_hrx_rules_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_hrx_rules_t__free_unpacked
                     (Marvell__PlrHrxRulesT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrTxRulesT methods */
void   marvell__plr_tx_rules_t__init
                     (Marvell__PlrTxRulesT         *message);
size_t marvell__plr_tx_rules_t__get_packed_size
                     (const Marvell__PlrTxRulesT   *message);
size_t marvell__plr_tx_rules_t__pack
                     (const Marvell__PlrTxRulesT   *message,
                      uint8_t             *out);
size_t marvell__plr_tx_rules_t__pack_to_buffer
                     (const Marvell__PlrTxRulesT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrTxRulesT *
       marvell__plr_tx_rules_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_tx_rules_t__free_unpacked
                     (Marvell__PlrTxRulesT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrAdvancedRulesT methods */
void   marvell__plr_advanced_rules_t__init
                     (Marvell__PlrAdvancedRulesT         *message);
size_t marvell__plr_advanced_rules_t__get_packed_size
                     (const Marvell__PlrAdvancedRulesT   *message);
size_t marvell__plr_advanced_rules_t__pack
                     (const Marvell__PlrAdvancedRulesT   *message,
                      uint8_t             *out);
size_t marvell__plr_advanced_rules_t__pack_to_buffer
                     (const Marvell__PlrAdvancedRulesT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrAdvancedRulesT *
       marvell__plr_advanced_rules_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_advanced_rules_t__free_unpacked
                     (Marvell__PlrAdvancedRulesT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrLmRulesS methods */
void   marvell__plr_lm_rules_s__init
                     (Marvell__PlrLmRulesS         *message);
size_t marvell__plr_lm_rules_s__get_packed_size
                     (const Marvell__PlrLmRulesS   *message);
size_t marvell__plr_lm_rules_s__pack
                     (const Marvell__PlrLmRulesS   *message,
                      uint8_t             *out);
size_t marvell__plr_lm_rules_s__pack_to_buffer
                     (const Marvell__PlrLmRulesS   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrLmRulesS *
       marvell__plr_lm_rules_s__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_lm_rules_s__free_unpacked
                     (Marvell__PlrLmRulesS *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrRulesT methods */
void   marvell__plr_rules_t__init
                     (Marvell__PlrRulesT         *message);
size_t marvell__plr_rules_t__get_packed_size
                     (const Marvell__PlrRulesT   *message);
size_t marvell__plr_rules_t__pack
                     (const Marvell__PlrRulesT   *message,
                      uint8_t             *out);
size_t marvell__plr_rules_t__pack_to_buffer
                     (const Marvell__PlrRulesT   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrRulesT *
       marvell__plr_rules_t__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_rules_t__free_unpacked
                     (Marvell__PlrRulesT *message,
                      ProtobufCAllocator *allocator);
/* Marvell__PlrRulesS methods */
void   marvell__plr_rules_s__init
                     (Marvell__PlrRulesS         *message);
size_t marvell__plr_rules_s__get_packed_size
                     (const Marvell__PlrRulesS   *message);
size_t marvell__plr_rules_s__pack
                     (const Marvell__PlrRulesS   *message,
                      uint8_t             *out);
size_t marvell__plr_rules_s__pack_to_buffer
                     (const Marvell__PlrRulesS   *message,
                      ProtobufCBuffer     *buffer);
Marvell__PlrRulesS *
       marvell__plr_rules_s__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   marvell__plr_rules_s__free_unpacked
                     (Marvell__PlrRulesS *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Marvell__PlrRxQcStatusT_Closure)
                 (const Marvell__PlrRxQcStatusT *message,
                  void *closure_data);
typedef void (*Marvell__PlrRxQcRulesT_Closure)
                 (const Marvell__PlrRxQcRulesT *message,
                  void *closure_data);
typedef void (*Marvell__PlrLrxRulesT_Closure)
                 (const Marvell__PlrLrxRulesT *message,
                  void *closure_data);
typedef void (*Marvell__PlrHrxRulesT_Closure)
                 (const Marvell__PlrHrxRulesT *message,
                  void *closure_data);
typedef void (*Marvell__PlrTxRulesT_Closure)
                 (const Marvell__PlrTxRulesT *message,
                  void *closure_data);
typedef void (*Marvell__PlrAdvancedRulesT_Closure)
                 (const Marvell__PlrAdvancedRulesT *message,
                  void *closure_data);
typedef void (*Marvell__PlrLmRulesS_Closure)
                 (const Marvell__PlrLmRulesS *message,
                  void *closure_data);
typedef void (*Marvell__PlrRulesT_Closure)
                 (const Marvell__PlrRulesT *message,
                  void *closure_data);
typedef void (*Marvell__PlrRulesS_Closure)
                 (const Marvell__PlrRulesS *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    marvell__e_plr_package_type__descriptor;
extern const ProtobufCEnumDescriptor    marvell__e_plr_operational_mode__descriptor;
extern const ProtobufCEnumDescriptor    marvell__e_plr_ref_clk_mode__descriptor;
extern const ProtobufCEnumDescriptor    marvell__e_plr_rx_qc_snr_threshold__descriptor;
extern const ProtobufCEnumDescriptor    marvell__e_plr_signal_mode__descriptor;
extern const ProtobufCEnumDescriptor    marvell__e_plr_dsp_mode__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_rx_qc_status_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_rx_qc_rules_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_lrx_rules_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_hrx_rules_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_tx_rules_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_advanced_rules_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_lm_rules_s__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_rules_t__descriptor;
extern const ProtobufCMessageDescriptor marvell__plr_rules_s__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_auto_5fgen_5fdemo_2eproto__INCLUDED */