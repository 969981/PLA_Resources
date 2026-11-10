/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281a514; name: FUN_0281a514
 */


int FUN_0281a514(long param_1)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x8b0);
  piVar1 = (int *)(lVar2 + 0x20);
  if (*(int *)(lVar2 + 0x28) != 0) {
    piVar1 = (int *)(lVar2 + 0x24);
  }
  return *(int *)(lVar2 + 0x14) + *piVar1 * *(int *)(lVar2 + 0x10);
}


