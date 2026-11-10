/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c0488; name: FUN_011c0488
 */


void FUN_011c0488(long *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar8 = *param_1;
  plVar13 = *(long **)(lVar8 + 0x1b8);
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = *param_1;
  }
  plVar14 = *(long **)(lVar8 + 0x1c0);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  sVar3 = *(short *)((long)param_2 + (long)param_3 * 2 + 8);
  lVar8 = *(long *)(param_1[1] + 0xb0);
  if (lVar8 != 0) {
    plVar9 = *(long **)(lVar8 + 0x270);
    if (plVar9 != *(long **)(lVar8 + 0x278)) {
      iVar7 = 0;
      do {
        plVar11 = (long *)PTR_DAT_04379c88;
        if (*plVar9 != 0) {
          plVar11 = (long *)(*plVar9 + 0x58);
        }
        if (*plVar11 == -0x4b2e2615051fdf08) goto LAB_011c0594;
        plVar9 = plVar9 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar9);
    }
  }
  iVar7 = 0;
LAB_011c0594:
  FUN_02c2e33c(param_1[1],iVar7,plVar14);
  local_60 = 0x2af1fb98af6a1129;
  pcStack_58 = "pane_L_wazainfo_00_T_power_00";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_60,plVar14,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar2 = *param_2;
  plVar9 = &DAT_0428af30 + (ulong)uVar2 * 6;
  lVar8 = *plVar9;
  if (lVar8 == 0) {
    plVar11 = &DAT_0428af30;
  }
  else {
    plVar11 = &DAT_0428af30;
    if (*(char *)(lVar8 + 0x1e1) != '\0') {
      plVar11 = plVar9;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar11 + 0x250) + (ulong)**(uint **)(*plVar11 + 0x250));
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) ||
      (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar12 == 0)) ||
     (*(char *)((long)piVar1 + uVar12) == '\0')) {
    if ((sVar3 != 0) && (uVar2 != 0x1ce)) goto LAB_011c06b4;
  }
  else {
    plVar11 = &DAT_0428af30;
    if ((lVar8 != 0) && (plVar11 = &DAT_0428af30, *(char *)(lVar8 + 0x1e1) != '\0')) {
      plVar11 = plVar9;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar11 + 0x250) + (ulong)**(uint **)(*plVar11 + 0x250));
    if (((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
        (uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar12 != 0)) &&
       ((sVar3 != 0 && ((uVar2 != 0x1ce && (*(char *)((long)piVar1 + uVar12) != '\0')))))) {
LAB_011c06b4:
      FUN_02c395d0(plVar13,0,sVar3,3,0,1);
      lVar8 = param_1[1];
      lVar10 = *(long *)(lVar8 + 0xb0);
      if (lVar10 != 0) {
        plVar9 = *(long **)(lVar10 + 0x270);
        if (plVar9 != *(long **)(lVar10 + 0x278)) {
          iVar7 = 0;
          do {
            plVar11 = (long *)PTR_DAT_04379c88;
            if (*plVar9 != 0) {
              plVar11 = (long *)(*plVar9 + 0x58);
            }
            if (*plVar11 == -0x4b2e1f15051fd323) goto LAB_011c07a0;
            plVar9 = plVar9 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar9);
        }
      }
      goto LAB_011c079c;
    }
  }
  lVar8 = param_1[1];
  lVar10 = *(long *)(lVar8 + 0xb0);
  if (lVar10 != 0) {
    plVar9 = *(long **)(lVar10 + 0x270);
    if (plVar9 != *(long **)(lVar10 + 0x278)) {
      iVar7 = 0;
      do {
        plVar11 = (long *)PTR_DAT_04379c88;
        if (*plVar9 != 0) {
          plVar11 = (long *)(*plVar9 + 0x58);
        }
        if (*plVar11 == -0x4b2e2015051fd4d6) goto LAB_011c07a0;
        plVar9 = plVar9 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar10 + 0x278) != plVar9);
    }
  }
LAB_011c079c:
  iVar7 = 0;
LAB_011c07a0:
  FUN_02c2e33c(lVar8,iVar7,plVar14);
  lVar10 = *param_1;
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  local_60 = 0x2af1fa98af6a0f76;
  pcStack_58 = "pane_L_wazainfo_00_T_power_01";
  uVar6 = *(undefined8 *)(lVar10 + 0x1c0);
  lVar8 = *(long *)(lVar10 + 0x1c8);
  lVar15 = *(long *)(lVar10 + 0x1b8);
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,uVar6);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar8,uVar6,0,0);
  FUN_0283ce7c(lVar10,&local_60,*(undefined8 *)(lVar10 + 0x1c8),10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


