/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011bf880; name: FUN_011bf880
 */


void FUN_011bf880(long *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar9 = *param_1;
  plVar13 = *(long **)(lVar9 + 0x1b8);
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0xb];
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
  plVar14 = *(long **)(lVar9 + 0x1c0);
  if (plVar14 != (long *)0x0) {
    plVar11 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  uVar10 = (ulong)*(byte *)(param_1 + 4);
  lVar9 = uVar10 * 0x150;
  uVar7 = *(undefined8 *)(&DAT_041f6838 + lVar9);
  puVar4 = (&PTR_s_pane_L_waza_btn_00_T_pp_00_041f6840)[uVar10 * 0x2a];
  uVar16 = *(undefined8 *)(&DAT_041f6848 + lVar9);
  FUN_02c395d0(plVar13,0,*(undefined1 *)((long)param_1 + 0x29),2,0,1);
  lVar12 = *(long *)(param_1[1] + 0xb0);
  if (lVar12 != 0) {
    plVar11 = *(long **)(lVar12 + 0x270);
    if (plVar11 != *(long **)(lVar12 + 0x278)) {
      iVar8 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar11 != 0) {
          plVar2 = (long *)(*plVar11 + 0x58);
        }
        if (*plVar2 == -0x4f86597874ad8543) goto LAB_011bf9bc;
        plVar11 = plVar11 + 1;
        iVar8 = iVar8 + 1;
      } while (*(long **)(lVar12 + 0x278) != plVar11);
    }
  }
  iVar8 = 0;
LAB_011bf9bc:
  FUN_02c2e33c(param_1[1],iVar8,plVar14);
  lVar15 = *param_1;
  local_68 = (long *)0x0;
  lVar17 = *(long *)(lVar15 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar15 + 0x1c0);
  lVar12 = *(long *)(lVar15 + 0x1c8);
  *(undefined4 *)(lVar17 + 0x124) = 0;
  *(undefined2 *)(lVar17 + 0x128) = 0;
  *(undefined4 *)(lVar17 + 300) = 0;
  *(undefined4 *)(lVar17 + 0x134) = 0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar16;
  FUN_02c33414(lVar17,uVar3);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar17,lVar12,uVar3,0,0);
  FUN_0283ce7c(lVar15,&local_80,*(undefined8 *)(lVar15 + 0x1c8),10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar7 = *(undefined8 *)(&DAT_041f6850 + lVar9);
  puVar4 = (&PTR_s_pane_L_waza_btn_00_T_pp_01_041f6858)[uVar10 * 0x2a];
  uVar16 = *(undefined8 *)(&DAT_041f6860 + lVar9);
  lVar12 = *(long *)(param_1[1] + 0xb0);
  if (lVar12 != 0) {
    plVar11 = *(long **)(lVar12 + 0x270);
    if (plVar11 != *(long **)(lVar12 + 0x278)) {
      iVar8 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar11 != 0) {
          plVar2 = (long *)(*plVar11 + 0x58);
        }
        if (*plVar2 == -0x4f865c7874ad8a5c) goto LAB_011bfab8;
        plVar11 = plVar11 + 1;
        iVar8 = iVar8 + 1;
      } while (*(long **)(lVar12 + 0x278) != plVar11);
    }
  }
  iVar8 = 0;
LAB_011bfab8:
  FUN_02c2e33c(param_1[1],iVar8,plVar14);
  local_68 = (long *)0x0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar16;
  FUN_0283ce7c(*param_1,&local_80,plVar14,10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar7 = *(undefined8 *)(&DAT_041f6868 + lVar9);
  puVar4 = (&PTR_s_pane_L_waza_btn_00_T_pp_02_041f6870)[uVar10 * 0x2a];
  uVar16 = *(undefined8 *)(&DAT_041f6878 + lVar9);
  FUN_02c395d0(plVar13,0,*(undefined1 *)((long)param_1 + 0x2a),2,0,1);
  lVar12 = *(long *)(param_1[1] + 0xb0);
  if (lVar12 != 0) {
    plVar11 = *(long **)(lVar12 + 0x270);
    if (plVar11 != *(long **)(lVar12 + 0x278)) {
      iVar8 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar11 != 0) {
          plVar2 = (long *)(*plVar11 + 0x58);
        }
        if (*plVar2 == -0x4f865b7874ad88a9) goto LAB_011bfb7c;
        plVar11 = plVar11 + 1;
        iVar8 = iVar8 + 1;
      } while (*(long **)(lVar12 + 0x278) != plVar11);
    }
  }
  iVar8 = 0;
LAB_011bfb7c:
  FUN_02c2e33c(param_1[1],iVar8,plVar14);
  lVar15 = *param_1;
  local_68 = (long *)0x0;
  lVar17 = *(long *)(lVar15 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar15 + 0x1c0);
  lVar12 = *(long *)(lVar15 + 0x1c8);
  *(undefined4 *)(lVar17 + 0x124) = 0;
  *(undefined2 *)(lVar17 + 0x128) = 0;
  *(undefined4 *)(lVar17 + 300) = 0;
  *(undefined4 *)(lVar17 + 0x134) = 0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar16;
  FUN_02c33414(lVar17,uVar3);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  uVar7 = *(undefined8 *)(&DAT_041f6880 + lVar9);
  puVar4 = (&PTR_s_anime_L_waza_btn_00_PP_color_041f6888)[uVar10 * 0x2a];
  uVar16 = *(undefined8 *)(&DAT_041f6890 + lVar9);
  FUN_02c338a4(lVar17,lVar12,uVar3,0,0);
  FUN_0283ce7c(lVar15,&local_80,*(undefined8 *)(lVar15 + 0x1c8),10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_68 = (long *)0x0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar16;
  FUN_0283b1e8(*param_1,&local_80);
  if (*(byte *)((long)param_1 + 0x29) == 0) {
    lVar9 = *param_1;
    uVar18 = 0x40400000;
  }
  else {
    fVar19 = (float)NEON_ucvtf((uint)*(byte *)((long)param_1 + 0x2a));
    fVar19 = (float)*(byte *)((long)param_1 + 0x29) / fVar19;
    if (fVar19 <= 0.25) {
      lVar9 = *param_1;
      uVar18 = 0x40000000;
    }
    else {
      lVar9 = *param_1;
      if (fVar19 <= 0.5) {
        uVar18 = 0x3f800000;
      }
      else {
        uVar18 = 0;
      }
    }
  }
  local_68 = (long *)0x0;
  local_80 = uVar7;
  puStack_78 = puVar4;
  local_70 = uVar16;
  FUN_0283b748(uVar18,lVar9,&local_80);
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0xb];
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
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


