/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f9644; name: FUN_014f9644
 */


void FUN_014f9644(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_043c75c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c75c8), iVar1 != 0)) {
    DAT_043c75c0 = 0;
    DAT_043c74b0 = 0x45e94572159f209f;
    DAT_043c74b8 = 0x23d7228fdcfbd8cb;
    DAT_043c74c0 = "pane_L_btn_complete_00_T_h_complete_00";
    DAT_043c74c8 = 0x26;
    DAT_043c74d0 = 0;
    DAT_043c74d8 = 0x73cbaee638f8b707;
    DAT_043c74e0 = 0x56c97d0fc1dd357c;
    DAT_043c74e8 = "pane_L_info_adddata_00_T_h_atk_00";
    DAT_043c7500 = 0xba99fb20c8130258;
    DAT_043c7508 = 0xca9ba90eb037aa73;
    DAT_043c74f0 = 0x21;
    DAT_043c74f8 = 0;
    DAT_043c7590 = 0x21;
    DAT_043c7598 = 0;
    DAT_043c7520 = 0;
    DAT_043c7528 = 0xc579c273cc4530e0;
    DAT_043c7510 = "pane_L_info_adddata_00_T_h_def_00";
    DAT_043c7518 = 0x21;
    DAT_043c7530 = 0x73fae213dbc4644b;
    DAT_043c7538 = "pane_L_info_adddata_00_T_h_spatk_00";
    DAT_043c7550 = 0x461746355f001337;
    DAT_043c7558 = 0x62ce0041e6932b7c;
    DAT_043c7540 = 0x23;
    DAT_043c7548 = 0;
    DAT_043c7560 = "pane_L_info_adddata_00_T_h_spdef_00";
    DAT_043c7568 = 0x23;
    DAT_043c7570 = 0;
    DAT_043c7578 = 0x6e12e9868df271f0;
    DAT_043c7580 = 0x1bd92cb864e7df5f;
    DAT_043c7588 = "pane_L_info_adddata_00_T_h_agi_00";
    DAT_043c75a0 = 0xa2ce17628aa78d8d;
    DAT_043c75a8 = 0xbe4ada387b9cabc8;
    DAT_043c75b0 = "pane_L_info_adddata_00_T_h_hp_00";
    DAT_043c75b8 = 0x20;
    FUN_00100250(&LAB_014f58f0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c75c8);
  }
  FUN_014fa560(param_1,DAT_043c74b0,&DAT_043c74b8);
  FUN_014fa560(param_1,DAT_043c74d8,&DAT_043c74e0);
  FUN_014fa560(param_1,DAT_043c7500,&DAT_043c7508);
  FUN_014fa560(param_1,DAT_043c7528,&DAT_043c7530);
  FUN_014fa560(param_1,DAT_043c7550,&DAT_043c7558);
  FUN_014fa560(param_1,DAT_043c7578,&DAT_043c7580);
  FUN_014fa560(param_1,DAT_043c75a0,&DAT_043c75a8);
  return;
}


