#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#include "demo4.pb-c.h"

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

void plr_lm_rules_t_populate(Marvell__PlrLmRulesT *node)
{
    if (!node)
        return;
    node->fec_mode = TEST_FEC_MODE;
    node->fec_interleave = false;
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

void plr_rx_qc_rules_populate(Marvell__PlrRxQcRulesT *node)
{
    if(!node)
        return;
    node->slc_err_limit = 41;
    node->snr_threshold_mm_enter = MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__PLR_RX_QC_SNR_THRESH_22dB;
    node->snr_threshold_mm_exit = MARVELL__E_PLR_RX_QC_SNR_THRESHOLD__PLR_RX_QC_SNR_THRESH_23dB;
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
  printf("n_fir_cap %d\r\n", node->n_fir_tap);
  printf("inner eye 1 %d \r\n", node->inner_eye1);
  printf("inner eye 2 %d\r\n", node->inner_eye2);
  printf("dfe precode en %d\r\n", node->dfe_precoder_en);

}

//size is 9
uint16_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{

    Marvell__PlrRulesT plr_rules = MARVELL__PLR_RULES_T__INIT;
    
    Marvell__PlrRxQcRulesT lrx_qc = MARVELL__PLR_RX_QC_RULES_T__INIT;
    Marvell__PlrRxQcRulesT hrx_qc = MARVELL__PLR_RX_QC_RULES_T__INIT;
    Marvell__PlrAdvancedRulesT advanded = MARVELL__PLR_ADVANCED_RULES_T__INIT;
    Marvell__PlrLmRulesT lm = MARVELL__PLR_LM_RULES_T__INIT;

    /***** Populate plr_rules_t for the demp   */

    plr_rules_t_populate_easy(&plr_rules);
    plr_rules_t_populate_enum(&plr_rules);
    
    //plr_rules_t_print_easy(&plr_rules);
    //plr_rules_t_print_enum(&plr_rules);
    

    plr_advance_rules_t_populate(&advanded);
    /*
    
    plr_lm_rules_t_populate(&lm);
    plr_rules.lm = &lm;
    
    plr_advance_rules_t_populate(&advanded);
    plr_rules.advanded = &advanded;

    plr_rx_qc_rules_populate(&lrx_qc);
    plr_rx_qc_rules_populate(&hrx_qc);
    plr_rules.lrx_qc = &lrx_qc;
    plr_rules.lrx_qc = &hrx_qc;

    plr_rules.n_htx_xbar = sizeof(arr)/sizeof(arr[0]);
    plr_rules.n_ltx_xbar = sizeof(arr)/sizeof(arr[0]);
    plr_rules.htx_xbar = (uint32_t *)arr;
    plr_rules.ltx_xbar = (uint32_t *)arr;
  
    print_x_bar((uint16_t *)plr_rules.htx_xbar, plr_rules.n_htx_xbar);
    print_x_bar((uint16_t *)plr_rules.ltx_xbar, plr_rules.n_ltx_xbar);

    plr_rules.n_bundle = 0;
    plr_rules.n_lrx = 0;
    plr_rules.n_hrx = 0;
    plr_rules.n_ltx = 0;
    plr_rules.n_htx = 0;
    
    plr_rules.bundle = NULL;
    plr_rules.lrx = NULL;
    plr_rules.hrx = NULL;
    plr_rules.ltx = NULL;
    plr_rules.htx = NULL;
    */

    //uint8_t out[256];
    const Marvell__PlrRulesT c_plr_rules = plr_rules;
    

    uint8_t *out = (uint8_t *) malloc(32);
    size_t verify_len = marvell__plr_rules_t__pack(&c_plr_rules, out);
    printf("Verify packed len is %d\r\n", verify_len);

    Marvell__PlrRulesT *de_plr_rules_t_ptr = NULL;
    de_plr_rules_t_ptr = marvell__plr_rules_t__unpack(NULL, verify_len, out);
    
    printf("*****   PLR easy rules are below: ****\r\n");
    if (de_plr_rules_t_ptr == NULL)
        printf("Null\r\n");
    plr_rules_t_print_easy(de_plr_rules_t_ptr);
    plr_rules_t_print_enum(de_plr_rules_t_ptr);
    return 0;




    uint8_t adv[256];
    const Marvell__PlrAdvancedRulesT c_advanded = advanded;
    int adv_pack_len = marvell__plr_advanced_rules_t__pack(&c_advanded, adv);



    uint8_t plr_tx_rule_out[256];
    Marvell__PlrTxRulesT plr_tx_rules = MARVELL__PLR_TX_RULES_T__INIT;
    plr_tx_rules_populate(&plr_tx_rules);

    int plr_tx_rules_pack_len = marvell__plr_tx_rules_t__pack(&plr_tx_rules, plr_tx_rule_out);

    Marvell__PlrTxRulesT *de_plr_tx_rules = NULL;

    de_plr_tx_rules = marvell__plr_tx_rules_t__unpack(NULL, plr_tx_rules_pack_len, plr_tx_rule_out);

    printf("adv_pack_len is %d\r\n", adv_pack_len);
    Marvell__PlrAdvancedRulesT *de_advanded = NULL;

    de_advanded = marvell__plr_advanced_rules_t__unpack(NULL, adv_pack_len, adv);
    
    printf("*****   Advance rules are below: ****\r\n");
    plr_advance_rules_t_print(de_advanded);
    
    printf("*****   TX rules are below: ****\r\n");
    printf("size is %ld\r\n", sizeof(Marvell__PlrTxRulesT));
    printf("tx rules pack len is %d\r\n", plr_tx_rules_pack_len);
    plr_tx_rules_print(de_plr_tx_rules);
    
    return 0;
}
