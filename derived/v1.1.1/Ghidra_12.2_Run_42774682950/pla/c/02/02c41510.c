/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c41510; name: FUN_02c41510
 */


int FUN_02c41510(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
  }
  for (lVar3 = *(long *)(param_1 + 0x50); lVar3 != param_1 + 0x48; lVar3 = *(long *)(lVar3 + 8)) {
    iVar1 = FUN_02c41510(*(undefined8 *)(lVar3 + 0x10));
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


