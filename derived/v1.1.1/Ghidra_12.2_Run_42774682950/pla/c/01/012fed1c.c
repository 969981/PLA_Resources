/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fed1c; name: FUN_012fed1c
 */


void FUN_012fed1c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar15 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar6 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_012ff2b0;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)plVar15[0xd];
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar13 = plVar15[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar6 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x30);
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_012ff2b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar16 = (long *)plVar15[0xd];
  if (plVar16 != (long *)0x0) {
    plVar9 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar13 = plVar15[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 10;
    do {
      iVar6 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  local_60 = &DAT_e2c06acab97c29c2;
  pcStack_58 = "CommonOptionBar";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  uVar5 = FUN_00d6adf4(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar13 = *(long *)(param_1 + 0x4a8);
  FUN_012fa5a8(param_1 + 0x1758,*(undefined4 *)(param_1 + 0x1648),plVar12,plVar14,lVar13,0);
  FUN_012fa5a8(param_1 + 0x1888,*(undefined4 *)(param_1 + 0x1648),plVar12,plVar14,lVar13 + 0xc0,1);
  FUN_012fa5a8(param_1 + 0x19b8,*(undefined4 *)(param_1 + 0x1648),plVar12,plVar14,lVar13 + 0x180,2);
  FUN_012fa5a8(param_1 + 0x1ae8,*(undefined4 *)(param_1 + 0x1648),plVar12,plVar14,lVar13 + 0x240,3);
  FUN_012fa5a8(param_1 + 0x1c18,*(undefined4 *)(param_1 + 0x1648),plVar12,plVar14,lVar13 + 0x300,4);
  FUN_012f7af0(param_1 + 0x1d48,*(undefined4 *)(param_1 + 0x1648),plVar12,plVar14,plVar16);
  FUN_012fb880(param_1 + 0x1f68,plVar12,plVar14,uVar5);
  lVar11 = param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38;
  lVar13 = *(long *)(lVar11 + 0x1650);
  lVar11 = *(long *)(lVar11 + 0x1658);
  if (*(char *)(param_1 + 0x1f84) == '\0') {
    if (lVar13 == lVar11) {
      uVar8 = (ulong)*(uint *)(param_1 + 0x1f80);
      uVar10 = (lVar11 - lVar13 >> 4) * -0x5555555555555555;
      bVar7 = false;
    }
    else {
      uVar10 = (lVar11 - lVar13 >> 4) * -0x5555555555555555;
      uVar8 = (ulong)*(uint *)(param_1 + 0x1f80);
      bVar7 = uVar8 < uVar10;
    }
    bVar4 = uVar8 < uVar10 && 1 < uVar10;
    uVar5 = 0;
  }
  else {
    if (lVar13 == lVar11) {
      uVar8 = (ulong)*(uint *)(param_1 + 0x1f80);
      uVar10 = (lVar11 - lVar13 >> 4) * -0x5555555555555555;
      bVar7 = false;
    }
    else {
      uVar10 = (lVar11 - lVar13 >> 4) * -0x5555555555555555;
      uVar8 = (ulong)*(uint *)(param_1 + 0x1f80);
      bVar7 = uVar8 < uVar10;
    }
    bVar4 = uVar8 < uVar10 && 1 < uVar10;
    uVar5 = 2;
  }
  FUN_012fb8dc(param_1 + 0x1f68,uVar5,bVar7,bVar4);
  plVar15 = (long *)plVar12[0x38];
  if (plVar15 == (long *)0x0) {
    lVar13 = plVar14[0x16];
    if (lVar13 != 0) {
      plVar15 = *(long **)(lVar13 + 0x270);
      if (plVar15 != *(long **)(lVar13 + 0x278)) {
        iVar6 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            plVar16 = (long *)(*plVar15 + 0x58);
          }
          if (*plVar16 == 0x174961d3d51ffbe4) goto LAB_012ff2a0;
          plVar15 = plVar15 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar15);
      }
    }
    iVar6 = 0;
LAB_012ff2a0:
    FUN_02c2e33c(plVar14,iVar6,0);
  }
  else {
    plVar16 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar13 = plVar14[0x16];
    if (lVar13 != 0) {
      plVar9 = *(long **)(lVar13 + 0x270);
      if (plVar9 != *(long **)(lVar13 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == 0x174961d3d51ffbe4) goto LAB_012ff0b0;
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar9);
      }
    }
    iVar6 = 0;
LAB_012ff0b0:
    FUN_02c2e33c(plVar14,iVar6,plVar15);
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  local_60 = (undefined1 *)0xfc042340b4f9a6d0;
  pcStack_58 = "pane_T_h_required_material_00";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  FUN_0283d080(plVar12,&local_60,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


