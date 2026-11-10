/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d940; name: FUN_0016d940
 */


void FUN_0016d940(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  plVar2 = (long *)(*(long *)(lVar1 + 0x30) +
                   (long)(int)(*(int *)(lVar1 + 0x3c) - 1U & *(uint *)(param_2 + 0xc)) * 8);
  lVar3 = *plVar2;
  while (lVar3 != param_2) {
    plVar2 = (long *)(lVar3 + 0x10);
    lVar3 = *plVar2;
  }
  *plVar2 = *(long *)(param_2 + 0x10);
  *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
  return;
}


