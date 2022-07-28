#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#include "demo2.pb-c.h"

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

int main()
{

    Marvell__PlrRulesT plr_rules = MARVELL__PLR_RULES_T__INIT;
    
    /***** Populate plr_rules_t for the demp   */

    plr_rules_t_populate_easy(&plr_rules);
    plr_rules_t_populate_enum(&plr_rules);
    
    //plr_rules_t_print_easy(&plr_rules);
    //plr_rules_t_print_enum(&plr_rules);
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
}
