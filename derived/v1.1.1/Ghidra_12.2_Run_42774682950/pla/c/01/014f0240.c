/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f0240; name: FUN_014f0240
 */


void FUN_014f0240(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_28;
  
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar7 == (long *)0x0) {
    FUN_010c6004(0,0,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    FUN_02a439f4(plVar7[0xb]);
    FUN_010c6004(plVar7,0,*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_02a43a5c(plVar7[0xb]);
    if ((uVar5 & 1) != 0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 0xe9d9772b4e885ace;
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar7 == (long *)0x0) {
    FUN_02c2e7d0(uVar6,&local_28,0);
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
    FUN_02c2e7d0(uVar6,&local_28,plVar7);
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
  FUN_0283d080(*(undefined8 *)(param_1 + 8),param_1 + 0x30,10);
  return;
}


