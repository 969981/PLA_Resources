/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02948808; name: FUN_02948808
 */


void FUN_02948808(long param_1,long param_2,undefined2 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_760 [768];
  code *local_460;
  undefined1 auStack_440 [1004];
  undefined2 local_54 [2];
  undefined8 local_48;
  
  lVar6 = (ulong)*(byte *)(param_2 + 0x7d) * 8;
  uVar9 = *(undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x390) + 8) + lVar6 + 0x120) + 0x60);
  uVar8 = *(undefined8 *)
           (*(long *)(*(long *)(*(long *)(param_1 + 0x370) + 8) + lVar6 + 0x120) + 0x60);
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
  FUN_009463f0(auStack_760,plVar7 + 0xc);
  pcVar5 = local_460;
  FUN_00945e04(auStack_760);
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
  if (pcVar5 == (code *)0x0) {
    return;
  }
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
  FUN_009463f0(auStack_760,plVar7 + 0xc);
  local_54[0] = param_3;
  local_48 = uVar9;
  (*local_460)(auStack_440,&local_48,local_54);
  FUN_00945e04(auStack_760);
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
      plVar7 = *(long **)(param_1 + 0x1e8);
      goto joined_r0x02948920;
    }
  }
  plVar7 = *(long **)(param_1 + 0x1e8);
joined_r0x02948920:
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
  FUN_009463f0(auStack_760,plVar7 + 0xc);
  local_54[0] = param_3;
  local_48 = uVar8;
  (*local_460)(auStack_440,&local_48,local_54);
  FUN_00945e04(auStack_760);
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
  return;
}


