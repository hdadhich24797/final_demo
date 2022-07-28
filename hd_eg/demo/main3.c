#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#include "demo3.pb-c.h"

#define TEST_REF_CLK 10
#define TEST_BAUD_RATE 115200
#define TEST_DWLD_TIMEOUT 2000
#define TEST_FEC_MODE 24
#define TEST_LDO_MODE_PLL 31
#define TEST_LDO_MODE_TXRX 32

void plr_rules_t_populate_easy(Marvell__PlrRulesT *node)
{
    if (!node)
        return;
    node->ref_clk = TEST_REF_CLK;
    node->baud_rate = TEST_BAUD_RATE;
    node->sfec_en = true;
    node->show_debug_info = false;
    node->fw_dwld_timeout = TEST_DWLD_TIMEOUT;
    node->ieee_demap = true;
    node->fw_warn_if_mismatched = false;
    node->sfp56_tp7_en = true;
}

void plr_rules_t_print_easy(Marvell__PlrRulesT *node)
{
    if (!node)
        return;
    printf("ref_clk is %d \r\n", node->ref_clk);
    printf("baud rate is %d \r\n", node->baud_rate);
    printf("sfec_en is %d\r\n", node->sfec_en);
    printf("show debug info is %d\r\n", node->show_debug_info);
    printf("fw dnld timwout is %d\r\n", node->fw_dwld_timeout);
    printf("ieee demap is %d\r\n", node->ieee_demap);
    printf("fw warn if mismatched is %d\r\n", node->fw_warn_if_mismatched);
    printf("sfp56 is %d\r\n", node->sfp56_tp7_en);

}

void plr_rules_t_populate_enum(Marvell__PlrRulesT *node)
{
    if (!node)
        return;
    node->package_type = MARVELL__E_PLR_PACKAGE_TYPE__PLR_PACKAGE_TYPE_8x10_DD;
    node->operational_mode = MARVELL__E_PLR_OPERATIONAL_MODE__PLR_MODE_DUAL_PRBS;
    node->ref_clk_mode = MARVELL__E_PLR_REF_CLK_MODE__PLR_CLK_MODE_LOCAL;
}

void plr_rules_t_print_enum(Marvell__PlrRulesT *node)
{
    if (!node)
        return;
    printf("package type is %d\r\n", node->package_type);
    printf("op mode is %d\r\n", node->operational_mode);
    printf("ref clk mode %d\r\n", node->ref_clk_mode);
}
void plr_advance_rules_t_populate(Marvell__PlrAdvancedRulesT *node)
{
    if (!node)
        return;

    node->fll_low_bw_en = true;
    node->ldo_mode_pll = TEST_LDO_MODE_PLL;
    node->ldo_mode_txrx = TEST_LDO_MODE_TXRX;
    
    node->gck_en = false;
    node->breakout_en = true;
    node->los_thresholds_en = false;
    node->avs_en = true;
}

void plr_advance_rules_t_print(Marvell__PlrAdvancedRulesT *node)
{
    if (!node)
    {
        printf("Node is null %d \r\n", __LINE__);
        return;
    }

    printf("fll_low_bw_en %d\r\n", node->fll_low_bw_en);
    printf("ldo_mode_pll %d\r\n", node->ldo_mode_pll);
    printf("ldo_mode_txrx %d\r\n", node->ldo_mode_txrx);
    printf("gck_en %d\r\n", node->gck_en);
    printf("breakout_en %d\r\n", node->breakout_en);
    printf("los_thresholds_en %d\r\n", node->los_thresholds_en);
    printf("avs_en %d\r\n", node->avs_en);
}

void plr_lm_rules_t_populate(Marvell__PlrLmRulesT *node)
{
    if (!node)
        return;
    node->fec_mode = TEST_FEC_MODE;
    node->fec_interleave = false;
}
void plr_lm_rules_t_print(Marvell__PlrLmRulesT *node)
{
    if (!node)
        return;
    printf("Fec mode %d\r\n", node->fec_mode);
    printf("Fec interleave is %d\r\n", node->fec_interleave);
}

void print_x_bar(uint16_t *p_arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", p_arr[i]);
    }
    printf("\r\n");
}
void plr_tx_rules_populate(Marvell__PlrTxRulesT *node)
{
  node->channel_enable = true;
  node->squelch_lock = false;
  node->signalling = MARVELL__E_PLR_SIGNAL_MODE__PLR_SIGNAL_MODE_NRZ; //1
  node->gray_mapping = true;
  node->invert_chan = false;
  node->n_fir_tap = 0;
  node->fir_tap = NULL;
  node->inner_eye1 = 51;
  node->inner_eye2 = 52;
  node->dfe_precoder_en = true;
    
}
void plr_tx_rules_print(Marvell__PlrTxRulesT *node)
{
  printf("chan %d\r\n", node->channel_enable);
  printf("lock %d\r\n", node->squelch_lock);
  printf("signal %d\r\n", node->signalling); //1
  printf("gray map %d\r\n", node->gray_mapping);
  printf("invert chan %d\r\n", node->invert_chan);
  printf("n_fir_cap %ld\r\n", node->n_fir_tap);
  printf("inner eye 1 %d \r\n", node->inner_eye1);
  printf("inner eye 2 %d\r\n", node->inner_eye2);
  printf("dfe precode en %d\r\n", node->dfe_precoder_en);

}

void plr_rx_qc_rules_populate(Marvell__PlrRxQcRulesT *node)
{
    if(!node)
        return;
    node->slc_err_limit = 41;
    node->snr_threshold_mm_enter = MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__PLR_RX_QC_SNR_THRESH_22dB;
    node->snr_threshold_mm_exit = MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__PLR_RX_QC_SNR_THRESH_23dB;
}

void plr_rx_qc_rules_print(Marvell__PlrRxQcRulesT *node)
{
    if(!node)
        return;
    printf("slc_err_limit %d\r\n", node->slc_err_limit);
    printf("snr thresh mm enter is %d\r\n", node->snr_threshold_mm_enter);
    printf("snr thresh mm exit is %d\r\n", node->snr_threshold_mm_exit);
}

void plr_lrx_rules_populate(Marvell__PlrLrxRulesT *node)
{
    if (!node)
        return;
  node->channel_enable = true;
  node->signalling = MARVELL__E_PLR_SIGNAL_MODE__PLR_SIGNAL_MODE_NRZ;
  node->dsp_mode = MARVELL__E_PLR_DSP_MODE__PLR_DSP_MODE_DFE1_MPICAN_SLC2;
  node->gray_mapping = false;
  node->dfe_precoder_en = true;
  node->invert_chan = false;
  node->vga_tracking_en = true;
  node->oim_en = false;
  node->preamp_bias_ctrl = 67;
  node->qc_all_dis = true;
  node->qc_hist_dis = false;
  node->qc_slc_dis = true;
  node->qc_snr_dis = false;
}

void plr_lrx_rules_print(Marvell__PlrLrxRulesT *node)
{
    if (!node)
        return;
  printf("channel enable is %d \r\n", node->channel_enable);
  printf("sig mode is %d \r\n", node->signalling);
  printf("dsp mode is %d \r\n", node->dsp_mode);
  printf("gray mapping is %d \r\n", node->gray_mapping);
  printf("dfe precoder is %d \r\n", node->dfe_precoder_en);
  printf("invert chan %d \r\n", node->invert_chan);
  printf("vga track en %d \r\n", node->vga_tracking_en);
  printf("oim en %d \r\n", node->oim_en);
  printf("preamp bias ctrl %d \r\n", node->preamp_bias_ctrl);
  printf("qc all dis %d \r\n", node->qc_all_dis);
  printf("qc hist dis %d \r\n", node->qc_hist_dis);
  printf("qc slc dis %d \r\n", node->qc_slc_dis);
  printf("qc snr dis %d \r\n", node->qc_snr_dis);
  printf("status  %d \r\n", node->status->status);
}

void plr_hrx_rules_populate(Marvell__PlrHrxRulesT *node)
{
    if (!node)
        return;
  node->channel_enable = true;
  node->gray_mapping = false;
  node->invert_chan = false;
  node->kr_dsp_mode = MARVELL__E_PLR_DSP_MODE__PLR_DSP_MODE_DFE1_MPICAN_SLC2;
  node->kr_dfe_precoder_en = true;
  node->kr_auto_ctle_en = true; 
  node->kr_ctle_code = 81;
  node->kr_vga_tracking_en = true;
  node->kr_oim_en = false;
  node->kr_preamp_bias_ctrl = 87;
  node->kr_pga_att_en = true;
  node->sr_vco_mode = false;
}

void plr_hrx_rules_print(Marvell__PlrHrxRulesT *node)
{
    if (!node)
        return;
  printf("channel enable is %d \r\n", node->channel_enable);
  printf("gray mapping is %d \r\n", node->gray_mapping);
  printf("invert chan %d \r\n", node->invert_chan);
  printf("dsp mode is %d \r\n", node->kr_dsp_mode);
  printf("dfe precoder is %d \r\n", node->kr_dfe_precoder_en);
  printf("auto ctle en is %d\r\n", node->kr_auto_ctle_en);
  printf("crle mode is %d\r\n", node->kr_ctle_code);
  printf("vga track en %d \r\n", node->kr_vga_tracking_en);
  printf("oim en %d \r\n", node->kr_oim_en);
  printf("preamp bias ctrl %d \r\n", node->kr_preamp_bias_ctrl);
  printf("pga att en %d\r\n", node->kr_pga_att_en);
  printf("status  %d \r\n", node->kr_qc_status->status);
}

uint32_t id[2] = {0, 1};
uint32_t baud_rate[2] = {9600, 19200};
uint32_t operational_mode[2] = {101, 201};
bool ieee_demap[2] = {true, false};

uint32_t hrx[2] = {301, 302};
uint32_t htx[2] = {303, 304};
uint32_t lrx[2] = {305, 306};
uint32_t ltx[2] = {307, 308};

uint32_t ltx_xbar[2][4] = {311, 312, 313, 314, 315, 316, 317, 318};
uint32_t htx_xbar[2][4] = {321, 322, 323, 324, 324, 326, 327, 328};


void plr_populate_bundle(Marvell__PlrBundlesRulesT *node)
{
    if (!node)
        return;
    node->n_id = 2;
    node->id = (uint32_t *)id;
    
    node->n_baud_rate = 2;
    node->baud_rate = baud_rate;

    node->n_operational_mode = 2;
    node->operational_mode = (uint32_t *)operational_mode;
    
    node->n_ieee_demap = 2;
    node->ieee_demap = (protobuf_c_boolean *)ieee_demap;
    
    node->n_lrx_qc = 2;
    node->n_hrx_qc = 2;
    
    node->n_hrx = 2;
    node->hrx = (uint32_t *)hrx;
    
    node->n_htx = 2;
    node->htx = (uint32_t *)htx;
    
    node->n_lrx = 2;
    node->lrx = (uint32_t *)lrx;
    
    node->n_ltx = 2;
    node->ltx = (uint32_t *)ltx;
    
    node->n_ltx_xbar = 2 * 4;
    
    node->ltx_xbar = (uint32_t *)ltx_xbar;
    
    node->n_htx_xbar = 2 * 4;
    node->htx_xbar = (uint32_t *)htx_xbar;
}
void plr_bundle_print(Marvell__PlrBundlesRulesT *node)
{
    printf("id are %d %d\r\n", node->id[0], node->id[1]);
    printf("baud_rate are %d %d\r\n", node->baud_rate[0], node->baud_rate[1]);
    printf("operational_mode are %d %d\r\n", node->operational_mode[0], node->operational_mode[1]);
    printf("ieee_demap are %d %d\r\n", (protobuf_c_boolean) node->ieee_demap[0], (protobuf_c_boolean) node->ieee_demap[1]);
    printf("hrx are %d %d\r\n", node->hrx[0], node->hrx[1]);
    printf("hrx are %d %d\r\n", node->hrx[0], node->htx[1]);
    printf("lrx are %d %d\r\n", node->lrx[0], node->lrx[1]);
    printf("ltx are %d %d\r\n", node->ltx[0], node->ltx[1]);

    printf("ltx_xbar is below");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", node->ltx_xbar[i]);
    }
    printf("\n");
    printf("htx_xbar is below");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", node->htx_xbar[i]);
    }
    printf("\n");

    printf("Qc rules inside PLR rules***\r\n");

    plr_rx_qc_rules_print(node->lrx_qc[0]);
    plr_rx_qc_rules_print(node->lrx_qc[1]);
    plr_rx_qc_rules_print(node->hrx_qc[0]);
    plr_rx_qc_rules_print(node->hrx_qc[1]);
}

uint16_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};



int main()
{

    Marvell__PlrRulesT plr_rules = MARVELL__PLR_RULES_T__INIT;
    Marvell__PlrAdvancedRulesT advanded = MARVELL__PLR_ADVANCED_RULES_T__INIT;
    Marvell__PlrLmRulesT lm = MARVELL__PLR_LM_RULES_T__INIT;
    Marvell__PlrTxRulesT plr_tx_rules = MARVELL__PLR_TX_RULES_T__INIT;
    Marvell__PlrRxQcRulesT lrx_qc = MARVELL__PLR_RX_QC_RULES_T__INIT;
    Marvell__PlrRxQcRulesT hrx_qc = MARVELL__PLR_RX_QC_RULES_T__INIT;
    Marvell__PlrLrxRulesT plr_lrx_rules = MARVELL__PLR_LRX_RULES_T__INIT;
    Marvell__PlrHrxRulesT plr_hrx_rules = MARVELL__PLR_HRX_RULES_T__INIT;
    Marvell__PlrRxQcStatusT plr_qc_status =  MARVELL__PLR_RX_QC_STATUS_T__INIT;

    /***** Populate plr_rules_t for the demp   */

    plr_rules_t_populate_easy(&plr_rules);
    plr_rules_t_populate_enum(&plr_rules);
    


    plr_advance_rules_t_populate(&advanded);
    plr_lm_rules_t_populate(&lm);
    
    plr_rules.n_htx_xbar = sizeof(arr)/sizeof(arr[0]);
    plr_rules.n_ltx_xbar = sizeof(arr)/sizeof(arr[0]);
    plr_rules.htx_xbar = (uint32_t *)arr;
    plr_rules.ltx_xbar = (uint32_t *)arr;
    
    plr_rules.lm = &lm;
    plr_rules.advanded = &advanded;

   
    /*TODO Double pointer issue */

    plr_tx_rules_populate(&plr_tx_rules);

    /*  LTX and HTX */

    plr_rules.n_ltx = 9;
    plr_rules.ltx = (Marvell__PlrTxRulesT **)malloc(sizeof(Marvell__PlrTxRulesT) * plr_rules.n_ltx);

    for (int i = 0; i < plr_rules.n_ltx; i++)
    {
       plr_rules.ltx[i] = &plr_tx_rules; 
    }

    plr_rules.n_htx = 9;
    plr_rules.htx = (Marvell__PlrTxRulesT **)malloc(sizeof(Marvell__PlrTxRulesT) * plr_rules.n_htx);

    for (int i = 0; i < plr_rules.n_htx; i++)
    {
       plr_rules.htx[i] = &plr_tx_rules; 
    }

    /*  END of LTX and HTX  */

    /*
    Marvell__PlrTxRulesT plr_tx_rules_arr[9];
    for (int i = 0; i < 9; i++)
    {
        plr_tx_rules_arr[i] = plr_tx_rules;
    }
    
    
    ptr = plr_tx_rules_arr;
    dptr = &ptr;
    plr_rules.ltx = dptr;
    
    plr_rules.n_ltx = 2;
    for (int i = 0; i < plr_rules.n_ltx; i++)
    {
        plr_rules.ltx[i] = &plr_tx_rules_arr[i];
    }

    dptr1 = &ptr;
    dptr2 = &ptr;
    dptr3 = &ptr;
    dptr4 = &ptr;
    dptr5 = &ptr;
    plr_rules.htx = dptr1;
    plr_rules.n_htx = 2;
    for (int i = 0; i < plr_rules.n_htx; i++)
    {
        plr_rules.htx[i] = &plr_tx_rules_arr[i];
    }
*/

    /*  END OF Double Pointer Issue */

    /*  LRX_QC and HRX_QC   */
    plr_rx_qc_rules_populate(&lrx_qc);
    plr_rx_qc_rules_populate(&hrx_qc);
    plr_rules.lrx_qc = &lrx_qc;
    plr_rules.hrx_qc = &hrx_qc;


    /*  LRX Rules   */
    
    plr_lrx_rules_populate(&plr_lrx_rules);
    plr_qc_status.status = 71;
    plr_lrx_rules.status = &plr_qc_status; 
    plr_rules.n_lrx = 9;
    plr_rules.lrx = (Marvell__PlrLrxRulesT **)malloc(sizeof(Marvell__PlrLrxRulesT) * plr_rules.n_lrx);

    for (int i = 0; i < plr_rules.n_lrx; i++)
    {
       plr_rules.lrx[i] = &plr_lrx_rules; 
    }


    /*  HRX Rules   */
    plr_hrx_rules_populate(&plr_hrx_rules);
    plr_qc_status.status = 71;
    plr_hrx_rules.kr_qc_status = &plr_qc_status; 
    plr_rules.n_hrx = 9;
    plr_rules.hrx = (Marvell__PlrHrxRulesT **)malloc(sizeof(Marvell__PlrHrxRulesT) * plr_rules.n_hrx);

    for (int i = 0; i < plr_rules.n_hrx; i++)
    {
       plr_rules.hrx[i] = &plr_hrx_rules; 
    }


    /*  Bundle  */
    /*  Create a single bundle  */
    Marvell__PlrBundlesRulesT bundle_element = MARVELL__PLR_BUNDLES_RULES_T__INIT;
    plr_populate_bundle(&bundle_element);
    bundle_element.lrx_qc = (Marvell__PlrRxQcRulesT **)malloc(sizeof(Marvell__PlrRxQcRulesT) * 2);
    bundle_element.lrx_qc[0] = &lrx_qc;
    bundle_element.lrx_qc[1] = &lrx_qc;
    bundle_element.hrx_qc = (Marvell__PlrRxQcRulesT **)malloc(sizeof(Marvell__PlrRxQcRulesT) * 2);
    bundle_element.hrx_qc[0] = &hrx_qc;
    bundle_element.hrx_qc[1] = &hrx_qc;

    /*  Create bundle 2D array  */
    plr_rules.n_bundle = 4;
    plr_rules.bundle = (Marvell__PlrBundlesRulesT **)malloc(sizeof(Marvell__PlrBundlesRulesT) * 2 * 2);
    plr_rules.bundle[0] = &bundle_element;
    plr_rules.bundle[1] = &bundle_element;
    plr_rules.bundle[2] = &bundle_element;
    plr_rules.bundle[3] = &bundle_element;

    /*  Packing start  */

    const Marvell__PlrRulesT c_plr_rules = plr_rules;
    
    uint8_t out[2056];
    size_t verify_len = marvell__plr_rules_t__pack(&c_plr_rules, out);
    printf("Verify packed len is %ld\r\n", verify_len);

    Marvell__PlrRulesT *de_plr_rules_t_ptr = NULL;
    de_plr_rules_t_ptr = marvell__plr_rules_t__unpack(NULL, verify_len, out);
    
    printf("***** PLR rules are below: ****\r\n");
    if (de_plr_rules_t_ptr == NULL)
    {

        printf("Null\r\n");
        return 0;
    }

    /*  print   */
    plr_rules_t_print_easy(de_plr_rules_t_ptr);
    plr_rules_t_print_enum(de_plr_rules_t_ptr);
    print_x_bar((uint16_t *)de_plr_rules_t_ptr->htx_xbar, de_plr_rules_t_ptr->n_htx_xbar);
    print_x_bar((uint16_t *)de_plr_rules_t_ptr->ltx_xbar, de_plr_rules_t_ptr->n_ltx_xbar);
    plr_advance_rules_t_print(de_plr_rules_t_ptr->advanded);
    plr_lm_rules_t_print(de_plr_rules_t_ptr->lm);
    
    printf("\n***LTX\r\n");
    for (int i = 0; i < de_plr_rules_t_ptr->n_ltx; i++)
    {
        printf("%d \n", i);
        plr_tx_rules_print(de_plr_rules_t_ptr->ltx[i]);
    }
   
    printf("\n***HTX\r\n");
    for (int i = 0; i < de_plr_rules_t_ptr->n_htx; i++)
    {
        printf("%d \n", i);
        plr_tx_rules_print(de_plr_rules_t_ptr->htx[i]);
    }

    printf("****LRX QC and HRX QC\r\n");
    plr_rx_qc_rules_print(de_plr_rules_t_ptr->lrx_qc);
    plr_rx_qc_rules_print(de_plr_rules_t_ptr->hrx_qc);

    printf("\n***LRX\r\n");
    for (int i = 0; i < de_plr_rules_t_ptr->n_lrx; i++)
    {
        printf("%d \n", i);
        plr_lrx_rules_print(de_plr_rules_t_ptr->lrx[i]);
    }

    printf("\n***HRX\r\n");
    for (int i = 0; i < de_plr_rules_t_ptr->n_hrx; i++)
    {
        printf("%d \n", i);
        plr_hrx_rules_print(de_plr_rules_t_ptr->hrx[i]);
    }

    printf("\n***Bundle\r\n");
    for (int i = 0; i < de_plr_rules_t_ptr->n_bundle; i++)
    {
        printf("%d \n", i);
        plr_bundle_print(de_plr_rules_t_ptr->bundle[i]);
    }

    marvell__plr_rules_t__free_unpacked(de_plr_rules_t_ptr, NULL);

    //plr_tx_rules_print(de_plr_rules_t_ptr->htx);
    return 0;
}
