/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d26384; name: FUN_00d26384
 */


uint FUN_00d26384(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (plVar7 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar6 = (**(code **)(*plVar7 + 0x30))(plVar7);
    if ((uVar6 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x80))(plVar7);
    }
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return uVar5 & 1;
}


