/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120f3d0; name: FUN_0120f3d0
 */


void FUN_0120f3d0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_68;
  undefined1 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = &DAT_e2c06acab97c29c2;
  pcStack_58 = "CommonOptionBar";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  uVar5 = FUN_00d6adf4(param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar8[0x38];
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar12[0xd];
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar10 = plVar12[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  FUN_0120f32c(param_1);
  lVar10 = plVar11[0x16];
  if (lVar10 != 0) {
    plVar12 = *(long **)(lVar10 + 0x270);
    if (plVar12 != *(long **)(lVar10 + 0x278)) {
      iVar7 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar12 != 0) {
          plVar2 = (long *)(*plVar12 + 0x58);
        }
        if (*plVar2 == -0x503ffef945911830) goto LAB_0120f558;
        plVar12 = plVar12 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar10 + 0x278) != plVar12);
    }
  }
  iVar7 = 0;
LAB_0120f558:
  FUN_02c2e33c(plVar11,iVar7,plVar9);
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = plVar9;
  FUN_02814858(uVar5,0,1,&local_68);
  if (local_68 != (long *)0x0) {
    plVar12 = local_68 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_02814a44(uVar5,1);
  FUN_0280779c(uVar5,0);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  plVar9 = plVar8 + 10;
  do {
    iVar7 = (int)*plVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return;
}


