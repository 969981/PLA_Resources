/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f89f4; name: FUN_027f89f4
 */


bool FUN_027f89f4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar10 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar10;
  plVar6 = *(long **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = *(long **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = *(long **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  local_50 = &DAT_753f74378b49da9c;
  pcStack_48 = "View_Top";
  local_40 = 8;
  local_38 = (long *)0x0;
  lVar9 = FUN_027f4740(*(undefined8 *)(*(long *)(param_1 + 200) + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar9 = FUN_00d2eb20(lVar9 + 0x180,"grid_panel");
  lVar9 = *(long *)(lVar9 + 0x468);
  iVar5 = *(int *)(lVar9 + 8);
  if (*(int *)(lVar9 + 0x1c) == 0) {
    iVar8 = *(int *)(lVar9 + 0xc);
    iVar2 = 0;
    if (iVar8 != 0) {
      iVar2 = iVar5 / iVar8;
    }
    iVar8 = iVar5 - iVar2 * iVar8;
  }
  else {
    iVar2 = *(int *)(lVar9 + 0x10);
    iVar8 = 0;
    if (iVar2 != 0) {
      iVar8 = iVar5 / iVar2;
    }
    iVar2 = iVar5 - iVar8 * iVar2;
  }
  *(ulong *)(param_1 + 0x150) = CONCAT44(iVar2,iVar8);
  if (*(int *)(*(long *)(lVar10 + 0x50) +
               (ulong)*(byte *)(*(long *)(param_1 + 0x118) + (long)iVar8) * 0x120 + 0x100) == 3) {
    FUN_02867d5c(&local_50);
    plVar6 = *(long **)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined1 **)(param_1 + 0x138) = local_50;
    *(long *)(local_50 + 0x560) = param_1;
  }
  uVar7 = FUN_027f5640(*(undefined8 *)(param_1 + 200),1);
  *(undefined8 *)(param_1 + 0x158) = uVar7;
  if (*(int *)(*(long *)(lVar10 + 0x50) +
               (ulong)*(byte *)(*(long *)(param_1 + 0x118) + (long)(int)uVar7) * 0x120 + 0x100) == 3
     ) {
    FUN_02867d5c(&local_50);
    plVar6 = *(long **)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined1 **)(param_1 + 0x140) = local_50;
  }
  uVar7 = FUN_027f5640(*(undefined8 *)(param_1 + 200),2);
  *(undefined8 *)(param_1 + 0x160) = uVar7;
  if (*(int *)(*(long *)(lVar10 + 0x50) +
               (ulong)*(byte *)(*(long *)(param_1 + 0x118) + (long)(int)uVar7) * 0x120 + 0x100) == 3
     ) {
    FUN_02867d5c(&local_50);
    plVar6 = *(long **)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (plVar6 != (long *)0x0) {
      lVar10 = plVar6[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined1 **)(param_1 + 0x148) = local_50;
  }
  return *(long *)(param_1 + 0x138) != 0;
}


