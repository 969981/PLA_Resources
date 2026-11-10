/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127354c; name: FUN_0127354c
 */


void FUN_0127354c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00d40044(param_1,param_2,param_3 & 1);
  *param_1 = &PTR_LAB_04200ab0;
  param_1[9] = &PTR_LAB_04200bb8;
  param_1[10] = &PTR_LAB_04200c00;
  FUN_012735b4(param_1 + 0xae);
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 1;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  return;
}


