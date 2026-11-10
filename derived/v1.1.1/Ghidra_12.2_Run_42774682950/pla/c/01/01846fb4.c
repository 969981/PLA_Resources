/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01846fb4; name: FUN_01846fb4
 */


undefined1  [16] FUN_01846fb4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  local_38 = 0;
  lVar5 = FUN_00957dc4(auStack_28,*(undefined8 *)(param_1 + 8),&local_38);
  *(ulong *)(lVar5 + 0x1e0) = *(ulong *)(lVar5 + 0x1e0) | 8;
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_018471f0;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x70) = lVar5;
  local_38 = 0;
  lVar5 = FUN_00957dc4(auStack_28,*(undefined8 *)(param_1 + 8),&local_38);
  *(ulong *)(lVar5 + 0x1e0) = *(ulong *)(lVar5 + 0x1e0) | 8;
  if (lVar5 != 0) {
    lVar9 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_018471f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar9 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x78) = lVar5;
  pcVar8 = *(code **)(lVar9 + 0x3a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x3b0) = 0;
    *(undefined8 *)(lVar9 + 0x3b8) = 0;
    *(undefined8 *)(lVar9 + 0x3a0) = 0;
    *(undefined8 *)(lVar9 + 0x3a8) = 0;
    (*pcVar8)(lVar9 + 0x3c0);
  }
  *(undefined1 **)(lVar9 + 0x3c8) = &LAB_01847208;
  *(long *)(lVar9 + 0x3c0) = param_1;
  *(undefined8 *)(lVar9 + 0x3d0) = 0;
  *(undefined1 **)(lVar9 + 0x3a0) = &LAB_0184bd94;
  *(undefined1 **)(lVar9 + 0x3a8) = &LAB_0184bdb0;
  *(undefined1 **)(lVar9 + 0x3b0) = &LAB_0184bdb4;
  *(undefined1 **)(lVar9 + 0x3b8) = &LAB_0184bdc8;
  lVar5 = *(long *)(param_1 + 0x78);
  pcVar8 = *(code **)(lVar5 + 0x3a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x3b0) = 0;
    *(undefined8 *)(lVar5 + 0x3b8) = 0;
    *(undefined8 *)(lVar5 + 0x3a0) = 0;
    *(undefined8 *)(lVar5 + 0x3a8) = 0;
    (*pcVar8)(lVar5 + 0x3c0);
  }
  *(long *)(lVar5 + 0x3c0) = param_1;
  *(undefined1 **)(lVar5 + 0x3c8) = &LAB_0184720c;
  *(undefined8 *)(lVar5 + 0x3d0) = 0;
  *(undefined1 **)(lVar5 + 0x3a0) = &LAB_0184bd94;
  *(undefined1 **)(lVar5 + 0x3a8) = &LAB_0184bdb0;
  *(undefined1 **)(lVar5 + 0x3b0) = &LAB_0184bdb4;
  *(undefined1 **)(lVar5 + 0x3b8) = &LAB_0184bdc8;
  return *(undefined1 (*) [16])(param_1 + 0x70);
}


