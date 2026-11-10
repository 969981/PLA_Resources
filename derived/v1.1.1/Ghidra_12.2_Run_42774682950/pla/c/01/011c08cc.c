/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c08cc; name: FUN_011c08cc
 */


void FUN_011c08cc(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar9 = *param_1;
  plVar12 = *(long **)(lVar9 + 0x1b8);
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = *param_1;
  }
  plVar13 = *(long **)(lVar9 + 0x1c0);
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  param_2 = param_2 + (long)param_3 * 4;
  uVar4 = *(undefined2 *)(param_2 + 0xe);
  bVar3 = *(byte *)(param_2 + 0x10);
  lVar9 = *(long *)(param_1[1] + 0xb0);
  if (lVar9 != 0) {
    plVar10 = *(long **)(lVar9 + 0x270);
    if (plVar10 != *(long **)(lVar9 + 0x278)) {
      iVar8 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar10 != 0) {
          plVar2 = (long *)(*plVar10 + 0x58);
        }
        if (*plVar2 == -0x4b2e2515051fdd55) goto LAB_011c09dc;
        plVar10 = plVar10 + 1;
        iVar8 = iVar8 + 1;
      } while (*(long **)(lVar9 + 0x278) != plVar10);
    }
  }
  iVar8 = 0;
LAB_011c09dc:
  FUN_02c2e33c(param_1[1],iVar8,plVar13);
  local_60 = 0xe38047769dab4dad;
  pcStack_58 = "pane_L_wazainfo_00_T_dex_00";
  local_50 = 0x1b;
  local_48 = (long *)0x0;
  FUN_0283ce7c(*param_1,&local_60,plVar13,10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((bVar3 & 1) == 0) {
    FUN_02c395d0(plVar12,0,uVar4,3,0,1);
    lVar9 = param_1[1];
    lVar11 = *(long *)(lVar9 + 0xb0);
    if (lVar11 != 0) {
      plVar10 = *(long **)(lVar11 + 0x270);
      if (plVar10 != *(long **)(lVar11 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == -0x4b2e1f15051fd323) goto LAB_011c0ab8;
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar10);
      }
    }
  }
  else {
    lVar9 = param_1[1];
    lVar11 = *(long *)(lVar9 + 0xb0);
    if (lVar11 != 0) {
      plVar10 = *(long **)(lVar11 + 0x270);
      if (plVar10 != *(long **)(lVar11 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == -0x4b2e2015051fd4d6) goto LAB_011c0ab8;
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar10);
      }
    }
  }
  iVar8 = 0;
LAB_011c0ab8:
  FUN_02c2e33c(lVar9,iVar8,plVar13);
  lVar11 = *param_1;
  local_50 = 0x1b;
  local_48 = (long *)0x0;
  local_60 = 0xe38046769dab4bfa;
  pcStack_58 = "pane_L_wazainfo_00_T_dex_01";
  uVar7 = *(undefined8 *)(lVar11 + 0x1c0);
  lVar9 = *(long *)(lVar11 + 0x1c8);
  lVar14 = *(long *)(lVar11 + 0x1b8);
  *(undefined4 *)(lVar14 + 0x124) = 0;
  *(undefined2 *)(lVar14 + 0x128) = 0;
  *(undefined4 *)(lVar14 + 300) = 0;
  *(undefined4 *)(lVar14 + 0x134) = 0;
  FUN_02c33414(lVar14,uVar7);
  if (*(char *)(lVar9 + 0x7c) != '\0') {
    **(undefined2 **)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar14,lVar9,uVar7,0,0);
  FUN_0283ce7c(lVar11,&local_60,*(undefined8 *)(lVar11 + 0x1c8),10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


