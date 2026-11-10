/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b764f4; name: FUN_02b764f4
 */


void FUN_02b764f4(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 auStack_28 [2];
  
  local_2c = param_2;
  auStack_28[0] = param_3;
  FUN_02b76540(param_1,&local_2c,auStack_28);
  iVar1 = FUN_02b59060(param_3);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar1;
  return;
}


