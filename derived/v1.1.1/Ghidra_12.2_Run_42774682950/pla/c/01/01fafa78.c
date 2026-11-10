/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fafa78; name: FUN_01fafa78
 */


void FUN_01fafa78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  FUN_01fb0204();
  *param_1 = &PTR_FUN_0425aeb8;
  param_1[9] = &PTR_LAB_0425af40;
  param_1[10] = &PTR_LAB_0425af88;
  FUN_01fafb6c(param_1 + 0x4d);
  uVar2 = FUN_01fafc58(DAT_043d4b78,param_1[1]);
  uVar3 = FUN_01fafd18(DAT_043d4b78,param_1[1]);
  *(undefined2 *)(param_1 + 0x16) = 0x61;
  uVar1 = s_bin_haxe_release_field_field_reg_038c35f5._8_8_;
  param_1[0x10] = s_bin_haxe_release_field_field_reg_038c35f5._0_8_;
  param_1[0x11] = uVar1;
  uVar1 = s_bin_haxe_release_field_field_reg_038c35f5._40_8_;
  param_1[0x14] = s_bin_haxe_release_field_field_reg_038c35f5._32_8_;
  param_1[0x15] = uVar1;
  uVar1 = s_bin_haxe_release_field_field_reg_038c35f5._24_8_;
  param_1[0x12] = s_bin_haxe_release_field_field_reg_038c35f5._16_8_;
  param_1[0x13] = uVar1;
  pcVar4 = (code *)param_1[0x33];
  param_1[0x30] = uVar2;
  param_1[0x31] = uVar3;
  if (pcVar4 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar4)(param_1 + 0x36);
  }
  param_1[0x32] = &LAB_01fb012c;
  param_1[0x33] = &LAB_01fb0134;
  param_1[0x34] = &LAB_01fb01fc;
  param_1[0x35] = &LAB_01fb0200;
  *(ulong *)((long)param_1 + 0x217) =
       CONCAT71(s_field_regident_039bf993._8_7_,s_field_regident_039bf993[7]);
  param_1[0x42] = CONCAT17(s_field_regident_039bf993[7],s_field_regident_039bf993._0_7_);
  return;
}


