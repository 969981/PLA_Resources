/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027c02c; name: FUN_0027c02c
 */


int FUN_0027c02c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x418) + 0x10) == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  for (lVar2 = *(long *)(*(long *)(param_1 + 0x418) + 0x18); lVar2 != 0;
      lVar2 = *(long *)(lVar2 + 0x68)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


