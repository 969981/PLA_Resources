/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6648; name: FUN_02ef6648
 */


void FUN_02ef6648(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [12];
  
  if (*(long *)(param_1 + 4) == 0) {
    auVar1 = FUN_02e966f8(DAT_0440a148,*param_1,param_4);
    *param_3 = auVar1._8_4_;
    *param_2 = auVar1._0_8_;
  }
  else {
    *param_3 = param_1[2];
    *param_2 = *(undefined8 *)(param_1 + 4);
  }
  return;
}


