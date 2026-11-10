/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f2d4; name: FUN_0081f2d4
 */


int FUN_0081f2d4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [24];
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_008219e0(*(undefined8 *)(param_1 + 8),(long)iVar1,param_2,auStack_58 + 0x18);
  iVar1 = iVar1 + -1;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


