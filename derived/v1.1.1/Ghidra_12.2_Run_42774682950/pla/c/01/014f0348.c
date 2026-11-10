/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f0348; name: FUN_014f0348
 */


void FUN_014f0348(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_28;
  
  plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar8 == (long *)0x0) {
    uVar5 = FUN_02c5be48(*(undefined8 *)(param_1 + 0x10));
    FUN_02c36a60(0,0,uVar5);
  }
  else {
    FUN_02a439f4(plVar8[0xb]);
    uVar5 = FUN_02c5be48(*(undefined8 *)(param_1 + 0x10));
    FUN_02c36a60(plVar8,0,uVar5);
    uVar6 = FUN_02a43a5c(plVar8[0xb]);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_28 = 0x6a714f66c16e03a5;
  plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar8 == (long *)0x0) {
    FUN_02c2e7d0(uVar7,&local_28,0);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02c2e7d0(uVar7,&local_28,plVar8);
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  FUN_0283d080(*(undefined8 *)(param_1 + 8),param_1 + 0x50,10);
  return;
}


