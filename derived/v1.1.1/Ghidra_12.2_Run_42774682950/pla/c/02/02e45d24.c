/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45d24; name: FUN_02e45d24
 */


undefined4 FUN_02e45d24(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_02e453e4();
  *(long *)(param_1 + 0x68) = lVar1;
  *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + 1;
  uVar2 = 0x34;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


