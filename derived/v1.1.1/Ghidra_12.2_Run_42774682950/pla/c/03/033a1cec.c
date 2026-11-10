/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a1cec; name: FUN_033a1cec
 */


undefined8 FUN_033a1cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) <= iVar3) {
    lVar2 = FUN_0337aec8(PTR_PTR_0434a080,iVar1);
    iVar3 = *(int *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar2;
  }
  FUN_03398ef4(lVar2 + (long)iVar3 * 0x40,param_3,param_2);
  *(int *)(param_1 + 0x10) = iVar1;
  return 1;
}


