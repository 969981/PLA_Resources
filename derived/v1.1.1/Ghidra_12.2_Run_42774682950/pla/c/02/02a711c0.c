/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a711c0; name: FUN_02a711c0
 */


void FUN_02a711c0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_48;
  
  plVar5 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  if ((plVar5 != plVar4) && (*plVar5 != param_2)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) goto LAB_02a71224;
    } while (*plVar5 != param_2);
  }
  if (plVar4 == plVar5) {
LAB_02a71224:
    local_48 = param_2;
    FUN_02a713d4(param_1 + 1,&local_48);
    FUN_02a71ab0(param_1[1],param_1[2]);
  }
  local_48 = *param_1;
  plVar5 = *(long **)(param_2 + 0xa8);
  plVar4 = *(long **)(param_2 + 0xb0);
  if ((plVar5 != plVar4) && (*plVar5 != local_48)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) goto LAB_02a71280;
    } while (*plVar5 != local_48);
  }
  if (plVar4 == plVar5) {
LAB_02a71280:
    FUN_02a713d4((long *)(param_2 + 0xa8),&local_48);
    FUN_02a72590(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  }
  plVar4 = (long *)param_1[8];
  plVar5 = (long *)param_1[9];
  do {
    if (plVar4 == plVar5) {
      return;
    }
    plVar6 = *(long **)(param_2 + 0xa8);
    plVar2 = *(long **)(param_2 + 0xb0);
    lVar7 = *plVar4;
    if ((plVar6 != plVar2) && (*plVar6 != lVar7)) {
      do {
        if (plVar2 + -1 == plVar6) goto LAB_02a7131c;
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != lVar7);
    }
    if (plVar2 != plVar6) {
      sVar3 = (long)plVar2 - (long)(plVar6 + 1);
      if (sVar3 != 0) {
        memmove(plVar6,plVar6 + 1,sVar3);
      }
      *(long **)(param_2 + 0xb0) = plVar6 + ((long)sVar3 >> 3);
    }
LAB_02a7131c:
    plVar6 = *(long **)(lVar7 + 0x70);
    plVar2 = *(long **)(lVar7 + 0x78);
    if ((plVar6 != plVar2) && (*plVar6 != param_2)) {
      do {
        if (plVar2 + -1 == plVar6) goto LAB_02a712a8;
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != param_2);
    }
    if (plVar2 != plVar6) {
      sVar3 = (long)plVar2 - (long)(plVar6 + 1);
      if (sVar3 != 0) {
        memmove(plVar6,plVar6 + 1,sVar3);
      }
      *(long **)(lVar7 + 0x78) = plVar6 + ((long)sVar3 >> 3);
    }
LAB_02a712a8:
    plVar4 = plVar4 + 1;
  } while( true );
}


