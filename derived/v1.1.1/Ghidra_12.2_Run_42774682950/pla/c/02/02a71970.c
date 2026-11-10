/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a71970; name: FUN_02a71970
 */


void FUN_02a71970(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[8];
  plVar2 = (long *)param_1[9];
  if ((plVar4 != plVar2) && (*plVar4 != param_2)) {
    do {
      if (plVar2 + -1 == plVar4) goto LAB_02a719ec;
      plVar1 = plVar4 + 1;
      plVar4 = plVar4 + 1;
    } while (*plVar1 != param_2);
  }
  if (plVar2 != plVar4) {
    sVar3 = (long)plVar2 - (long)(plVar4 + 1);
    if (sVar3 != 0) {
      memmove(plVar4,plVar4 + 1,sVar3);
    }
    param_1[9] = (long)(plVar4 + ((long)sVar3 >> 3));
  }
LAB_02a719ec:
  plVar4 = *(long **)(param_2 + 0x70);
  plVar2 = *(long **)(param_2 + 0x78);
  if ((plVar4 != plVar2) && (*plVar4 != *param_1)) {
    do {
      if (plVar2 + -1 == plVar4) goto LAB_02a71a54;
      plVar1 = plVar4 + 1;
      plVar4 = plVar4 + 1;
    } while (*plVar1 != *param_1);
  }
  if (plVar2 != plVar4) {
    sVar3 = (long)plVar2 - (long)(plVar4 + 1);
    if (sVar3 != 0) {
      memmove(plVar4,plVar4 + 1,sVar3);
    }
    *(long **)(param_2 + 0x78) = plVar4 + ((long)sVar3 >> 3);
  }
LAB_02a71a54:
  plVar2 = (long *)param_1[2];
  for (plVar4 = (long *)param_1[1]; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    FUN_02a71624(*plVar4 + 0x68,param_2);
  }
  return;
}


