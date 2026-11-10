/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e83050; name: FUN_02e83050
 */


void FUN_02e83050(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)0x0;
  do {
    while (plVar4 = plVar3, lVar2 = plVar4[2], *(int *)(lVar2 + 0x30) != param_2) {
LAB_02e830b0:
      plVar3 = (long *)*plVar4;
      plVar5 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        return;
      }
    }
    if (*(int *)(lVar2 + 0x34) != 0) {
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + -1;
      goto LAB_02e830b0;
    }
    FUN_02e84578(param_1);
    plVar3 = (long *)*plVar4;
    plVar1 = (long *)(param_1 + 0x50);
    if (*(long **)(param_1 + 0x50) != plVar4) {
      plVar1 = plVar5;
    }
    *plVar1 = (long)plVar3;
    if (*(long **)(param_1 + 0x58) == plVar4) {
      *(long **)(param_1 + 0x58) = plVar5;
    }
    *plVar4 = *(long *)(param_1 + 0x60);
    *(long **)(param_1 + 0x60) = plVar4;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    if (plVar3 == (long *)0x0) {
      return;
    }
  } while( true );
}


