/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03016cdc; name: FUN_03016cdc
 */


void FUN_03016cdc(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_042c7870;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  uVar1 = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xb) = 0;
  iVar2 = FUN_03016d6c(param_1 + 8,0,param_2,0x10);
  if (iVar2 < 0) {
    return;
  }
  FUN_0301707c(param_1 + 3,param_1,uVar1);
  return;
}


