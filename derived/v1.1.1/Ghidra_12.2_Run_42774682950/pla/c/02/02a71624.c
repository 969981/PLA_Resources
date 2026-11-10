/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a71624; name: FUN_02a71624
 */


void FUN_02a71624(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_48;
  
  plVar5 = (long *)param_1[8];
  plVar4 = (long *)param_1[9];
  if ((plVar5 != plVar4) && (*plVar5 != param_2)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) goto LAB_02a71688;
    } while (*plVar5 != param_2);
  }
  if (plVar4 == plVar5) {
LAB_02a71688:
    local_48 = param_2;
    FUN_02a713d4(param_1 + 8,&local_48);
    FUN_02a72590(param_1[8],param_1[9]);
  }
  local_48 = *param_1;
  plVar5 = *(long **)(param_2 + 0x70);
  plVar4 = *(long **)(param_2 + 0x78);
  if ((plVar5 != plVar4) && (*plVar5 != local_48)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) goto LAB_02a716e4;
    } while (*plVar5 != local_48);
  }
  if (plVar4 == plVar5) {
LAB_02a716e4:
    FUN_02a713d4((long *)(param_2 + 0x70),&local_48);
    FUN_02a71ab0(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
  }
  plVar4 = (long *)param_1[1];
  plVar5 = (long *)param_1[2];
  do {
    if (plVar4 == plVar5) {
      return;
    }
    lVar7 = *plVar4;
    plVar6 = *(long **)(lVar7 + 0xa8);
    plVar2 = *(long **)(lVar7 + 0xb0);
    if ((plVar6 != plVar2) && (*plVar6 != param_2)) {
      do {
        if (plVar2 + -1 == plVar6) goto LAB_02a71780;
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != param_2);
    }
    if (plVar2 != plVar6) {
      sVar3 = (long)plVar2 - (long)(plVar6 + 1);
      if (sVar3 != 0) {
        memmove(plVar6,plVar6 + 1,sVar3);
      }
      *(long **)(lVar7 + 0xb0) = plVar6 + ((long)sVar3 >> 3);
    }
LAB_02a71780:
    plVar6 = *(long **)(param_2 + 0x70);
    plVar2 = *(long **)(param_2 + 0x78);
    if ((plVar6 != plVar2) && (*plVar6 != lVar7)) {
      do {
        if (plVar2 + -1 == plVar6) goto LAB_02a7170c;
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != lVar7);
    }
    if (plVar2 != plVar6) {
      sVar3 = (long)plVar2 - (long)(plVar6 + 1);
      if (sVar3 != 0) {
        memmove(plVar6,plVar6 + 1,sVar3);
      }
      *(long **)(param_2 + 0x78) = plVar6 + ((long)sVar3 >> 3);
    }
LAB_02a7170c:
    plVar4 = plVar4 + 1;
  } while( true );
}


