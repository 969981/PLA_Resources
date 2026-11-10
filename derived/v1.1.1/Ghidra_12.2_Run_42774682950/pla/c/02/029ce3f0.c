/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ce3f0; name: FUN_029ce3f0
 */


void FUN_029ce3f0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  undefined1 auStack_740 [128];
  code *local_6c0;
  undefined1 auStack_6a0 [1632];
  
  plVar7 = *(long **)(param_1 + 0x1e8);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_009463f0(auStack_740,plVar7 + 0xc);
  pcVar5 = local_6c0;
  FUN_00945e04(auStack_740);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
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
  if (pcVar5 != (code *)0x0) {
    plVar7 = *(long **)(param_1 + 0x1e8);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_009463f0(auStack_740,plVar7 + 0xc);
    uVar6 = (*local_6c0)(auStack_6a0);
    FUN_00945e04(auStack_740);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
    *(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x28) + 0x1e4) = uVar6;
    FUN_02a3e6b8(*(undefined8 *)(param_2 + 0x18),0x69,uVar6 & 0xff);
  }
  return;
}


