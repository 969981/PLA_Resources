/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a71028; name: FUN_02a71028
 */


void FUN_02a71028(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar2 = (long *)param_1[2];
  for (plVar6 = (long *)param_1[1]; plVar6 != plVar2; plVar6 = plVar6 + 1) {
    lVar7 = *plVar6;
    plVar5 = *(long **)(lVar7 + 0xa8);
    plVar3 = *(long **)(lVar7 + 0xb0);
    if ((plVar5 != plVar3) && (*plVar5 != *param_1)) {
      do {
        if (plVar3 + -1 == plVar5) goto LAB_02a710c8;
        plVar1 = plVar5 + 1;
        plVar5 = plVar5 + 1;
      } while (*plVar1 != *param_1);
    }
    if (plVar3 != plVar5) {
      sVar4 = (long)plVar3 - (long)(plVar5 + 1);
      if (sVar4 != 0) {
        memmove(plVar5,plVar5 + 1,sVar4);
      }
      *(long **)(lVar7 + 0xb0) = plVar5 + ((long)sVar4 >> 3);
    }
LAB_02a710c8:
    plVar3 = (long *)param_1[9];
    for (plVar5 = (long *)param_1[8]; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      FUN_02a711c0(*plVar5 + 0x68,lVar7);
    }
  }
  plVar6 = (long *)param_1[8];
  plVar2 = (long *)param_1[9];
  if (plVar6 != plVar2) {
    do {
      lVar7 = *plVar6;
      plVar5 = *(long **)(lVar7 + 0x70);
      plVar3 = *(long **)(lVar7 + 0x78);
      if ((plVar5 != plVar3) && (*plVar5 != *param_1)) {
        do {
          if (plVar3 + -1 == plVar5) goto LAB_02a71118;
          plVar1 = plVar5 + 1;
          plVar5 = plVar5 + 1;
        } while (*plVar1 != *param_1);
      }
      if (plVar3 != plVar5) {
        sVar4 = (long)plVar3 - (long)(plVar5 + 1);
        if (sVar4 != 0) {
          memmove(plVar5,plVar5 + 1,sVar4);
        }
        *(long **)(lVar7 + 0x78) = plVar5 + ((long)sVar4 >> 3);
      }
LAB_02a71118:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
    plVar6 = (long *)param_1[8];
  }
  param_1[2] = param_1[1];
  param_1[9] = (long)plVar6;
  return;
}


