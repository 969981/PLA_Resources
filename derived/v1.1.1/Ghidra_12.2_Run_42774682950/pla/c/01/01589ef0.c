/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01589ef0; name: FUN_01589ef0
 */


undefined1  [16] FUN_01589ef0(undefined8 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined4 local_30 [8];
  
  if (param_2 == -100) {
    FUN_02daafcc(local_30);
  }
  else {
    local_30[0] = 0x3f800000;
  }
  auVar1._4_4_ = local_30[0];
  auVar1._0_4_ = local_30[0];
  auVar1._8_4_ = local_30[0];
  auVar1._12_4_ = 0;
  return auVar1;
}


