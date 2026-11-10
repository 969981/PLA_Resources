/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd56c; name: FUN_032bd56c
 */


void FUN_032bd56c(undefined8 *param_1,int param_2,undefined4 param_3)

{
  FUN_032be170();
  *param_1 = &PTR_LAB_04348af8;
  FUN_0332cf84(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  if (0 < param_2) {
    FUN_032bd5d8(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0xb) = param_3;
  return;
}


