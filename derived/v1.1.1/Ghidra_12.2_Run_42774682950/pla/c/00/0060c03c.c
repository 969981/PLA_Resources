/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060c03c; name: FUN_0060c03c
 */


long FUN_0060c03c(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar5;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x30);
  if (param_2 != 1) {
    do {
      if (plVar3 == plVar1) {
        return 0;
      }
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
    } while (*(ushort *)(lVar2 + 8) != param_2);
    return lVar2;
  }
  if (plVar3 != plVar1) {
    plVar4 = plVar3;
    do {
      plVar5 = plVar4 + 1;
      lVar2 = *plVar4;
      if (*(short *)(lVar2 + 8) == 1) {
        if (lVar2 != 0) {
          return lVar2;
        }
        break;
      }
      plVar4 = plVar5;
    } while (plVar1 != plVar5);
    do {
      plVar4 = plVar3 + 1;
      if (*(short *)(*plVar3 + 8) == 0x20) {
        return *plVar3;
      }
      plVar3 = plVar4;
    } while (plVar1 != plVar4);
  }
  return 0;
}


