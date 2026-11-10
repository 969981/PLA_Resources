/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02585338; name: FUN_02585338
 */


void FUN_02585338(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_025841e4();
  *param_1 = &PTR_FUN_0425dbe0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  param_1[9] = &PTR_LAB_0425dc38;
  param_1[10] = &PTR_LAB_0425dc80;
  *(undefined4 *)((long)param_1 + 0xa4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((long)param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x2c);
  return;
}


