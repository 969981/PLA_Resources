/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275c5c8; name: FUN_0275c5c8
 */


void FUN_0275c5c8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *__dest;
  long lVar3;
  long lVar4;
  
  __dest = *(long **)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0xa0);
  plVar2 = __dest + lVar3;
  if ((lVar3 != 0) && (*__dest != param_2)) {
    lVar4 = lVar3 * 8;
    do {
      lVar4 = lVar4 + -8;
      if (lVar4 == 0) {
        return;
      }
      plVar1 = __dest + 1;
      __dest = __dest + 1;
    } while (*plVar1 != param_2);
  }
  if (plVar2 != __dest) {
    plVar1 = __dest + 1;
    if (plVar1 != plVar2) {
      memmove(__dest,plVar1,(long)plVar2 - (long)plVar1);
      lVar3 = *(long *)(param_1 + 0xa0);
    }
    *(long *)(param_1 + 0xa0) = lVar3 + -1;
  }
  return;
}


