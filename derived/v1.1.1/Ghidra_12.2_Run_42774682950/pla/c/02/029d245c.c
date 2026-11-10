/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d245c; name: FUN_029d245c
 */


undefined4 FUN_029d245c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined1 auStack_730 [1028];
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  
  iVar2 = *(int *)(param_2 + 0x2b8);
  if (iVar2 == 2) {
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_009463f0(auStack_730,plVar6 + 0xc);
    FUN_00945e04(auStack_730);
    if (plVar6 == (long *)0x0) {
      return local_324;
    }
    plVar1 = plVar6 + 10;
    do {
      iVar2 = (int)*plVar1 + -1;
      bVar5 = iVar2 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      uVar7 = local_324;
    } while (cVar3 != '\0');
  }
  else if (iVar2 == 1) {
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_009463f0(auStack_730,plVar6 + 0xc);
    FUN_00945e04(auStack_730);
    if (plVar6 == (long *)0x0) {
      return local_328;
    }
    plVar1 = plVar6 + 10;
    do {
      iVar2 = (int)*plVar1 + -1;
      bVar5 = iVar2 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      uVar7 = local_328;
    } while (cVar3 != '\0');
  }
  else {
    if (iVar2 != 0) {
      return 0x3f800000;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_009463f0(auStack_730,plVar6 + 0xc);
    FUN_00945e04(auStack_730);
    if (plVar6 == (long *)0x0) {
      return local_32c;
    }
    plVar1 = plVar6 + 10;
    do {
      iVar2 = (int)*plVar1 + -1;
      bVar5 = iVar2 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      uVar7 = local_32c;
    } while (cVar3 != '\0');
  }
  if (bVar5) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return uVar7;
}


