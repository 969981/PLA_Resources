/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014441e8; name: FUN_014441e8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014441e8(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  short *psVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 local_1c0;
  long local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  long local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180 [2];
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar14 = (long *)plVar15[0x38];
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar9 = (int)*plVar16 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  plVar16 = plVar15 + 10;
  do {
    iVar9 = (int)*plVar16 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *(int *)plVar16 = iVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  lVar12 = *(long *)(*param_2 + 0xb0);
  if (lVar12 != 0) {
    plVar15 = *(long **)(lVar12 + 0x270);
    if (plVar15 != *(long **)(lVar12 + 0x278)) {
      iVar9 = 0;
      do {
        plVar16 = (long *)PTR_DAT_04379c88;
        if (*plVar15 != 0) {
          plVar16 = (long *)(*plVar15 + 0x58);
        }
        if (*plVar16 == param_2[1]) goto LAB_014442c0;
        plVar15 = plVar15 + 1;
        iVar9 = iVar9 + 1;
      } while (*(long **)(lVar12 + 0x278) != plVar15);
    }
  }
  iVar9 = 0;
LAB_014442c0:
  FUN_02c2e33c(*param_2,iVar9,plVar14);
  lVar12 = param_2[2];
  iVar9 = *(int *)((long)param_2 + 0x14);
  bVar4 = *(byte *)(param_2 + 3);
  plVar15 = *(long **)(param_1 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar16 = (long *)plVar15[0x39];
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar18 = (long *)plVar15[0x37];
  if (plVar18 == (long *)0x0) {
    _DAT_00000124 = 0;
    _DAT_00000128 = 0;
    _DAT_0000012c = 0;
    _DAT_00000134 = 0;
    FUN_02c33414(0,plVar14);
    if (*(char *)((long)plVar16 + 0x7c) != '\0') {
      *(undefined2 *)plVar16[0xb] = 0;
      *(undefined2 *)((long)plVar16 + 0x7a) = 0;
    }
    FUN_02c338a4(0,plVar16,plVar14,0,0);
  }
  else {
    lVar19 = plVar18[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar19 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(undefined4 *)((long)plVar18 + 0x124) = 0;
    *(undefined2 *)(plVar18 + 0x25) = 0;
    *(undefined4 *)((long)plVar18 + 300) = 0;
    *(undefined4 *)((long)plVar18 + 0x134) = 0;
    FUN_02c33414(plVar18,plVar14);
    if (*(char *)((long)plVar16 + 0x7c) != '\0') {
      *(undefined2 *)plVar16[0xb] = 0;
      *(undefined2 *)((long)plVar16 + 0x7a) = 0;
    }
    FUN_02c338a4(plVar18,plVar16,plVar14,0,0);
    lVar19 = plVar18[0xb];
    piVar2 = (int *)(lVar19 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  if ((bVar4 & 1) == 0) {
    for (psVar10 = (short *)plVar16[0xb]; *psVar10 != 10; psVar10 = psVar10 + 1) {
      if (*psVar10 == 0) {
        fVar21 = 2.0;
        fVar20 = 0.0;
        goto joined_r0x0144445c;
      }
    }
    fVar21 = 3.0;
    fVar20 = 1.0;
joined_r0x0144445c:
    if ((int)lVar12 != 0) {
      fVar20 = fVar21;
    }
  }
  else {
    fVar20 = 4.0;
  }
  local_1b8 = 0x726adea42ac6066d;
  pcStack_1b0 = "pane_T_00";
  local_198 = -0x7c506287a978674d;
  pcStack_190 = "pane_W_window_00";
  local_180[1] = (long *)0x726adda42ac604ba;
  pcStack_170 = "pane_T_01";
  local_158 = 0x83af9c7856879700;
  pcStack_150 = "pane_W_window_01";
  local_138 = 0x726adca42ac60307;
  pcStack_130 = "pane_T_02";
  local_1a8 = 9;
  local_1a0 = (long *)0x0;
  local_168 = 9;
  local_160 = (long *)0x0;
  local_128 = 9;
  local_120 = (long *)0x0;
  local_118 = 0x83af9f7856879c19;
  pcStack_110 = "pane_W_window_02";
  local_e8 = 9;
  local_e0 = (long *)0x0;
  local_f8 = 0x726adaa42ac5ffa1;
  pcStack_f0 = "pane_T_04";
  local_a8 = 9;
  local_a0 = (long *)0x0;
  local_d8 = 0x83afa17856879f7f;
  pcStack_d0 = "pane_W_window_04";
  local_188 = 0x10;
  local_180[0] = (long *)0x0;
  local_b8 = 0x726adba42ac60154;
  pcStack_b0 = "pane_T_03";
  local_98 = 0x83af9e7856879a66;
  pcStack_90 = "pane_W_window_03";
  local_148 = 0x10;
  local_140 = (long *)0x0;
  local_108 = 0x10;
  local_100 = (long *)0x0;
  local_c8 = 0x10;
  local_c0 = (long *)0x0;
  local_88 = 0x10;
  local_80 = (long *)0x0;
  if (4 < (uint)(int)fVar20) {
    fVar20 = 0.0;
  }
  uVar17 = (ulong)(uint)(int)fVar20;
  FUN_0283ce7c(plVar15,&local_1b8 + uVar17 * 8,plVar16,10);
  plVar14 = (long *)plVar15[0x29];
  lVar12 = plVar15[0x2a];
  lVar19 = (&local_1b8)[uVar17 * 8];
  plVar18 = local_180[uVar17 * 8 + -4];
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar7 = plVar14;
  if ((lVar12 != 0) && (*plVar14 != lVar19)) {
    lVar13 = lVar12 * 0x30;
    plVar11 = plVar14 + lVar12 * 6;
    do {
      lVar13 = lVar13 + -0x30;
      plVar7 = plVar11;
      if (lVar13 == 0) break;
      plVar1 = plVar14 + 6;
      plVar14 = plVar14 + 6;
      plVar7 = plVar14;
    } while (*plVar1 != lVar19);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  fVar21 = *(float *)(plVar7[4] + 0x50);
  if ((uint)(int)fVar21 < 0x80) {
    local_1c0 = 0;
    lVar19 = (&local_198)[uVar17 * 8];
    plVar18 = local_180[uVar17 * 8];
    plVar14 = (long *)plVar15[0x29];
    lVar12 = plVar15[0x2a];
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    plVar7 = plVar14;
    if ((lVar12 != 0) && (*plVar14 != lVar19)) {
      lVar13 = lVar12 * 0x30;
      plVar11 = plVar14 + lVar12 * 6;
      do {
        lVar13 = lVar13 + -0x30;
        plVar7 = plVar11;
        if (lVar13 == 0) break;
        plVar1 = plVar14 + 6;
        plVar14 = plVar14 + 6;
        plVar7 = plVar14;
      } while (*plVar1 != lVar19);
    }
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
    local_1c0 = CONCAT44(*(undefined4 *)(plVar7[4] + 0x54),
                         (*(float *)(plVar7[4] + 0x50) - fVar21) + 128.0);
    FUN_0283ae44(plVar15,&local_198 + uVar17 * 8,&local_1c0);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_180[0] != (long *)0x0) {
    (**(code **)(*local_180[0] + 0x20))();
  }
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  if (*(char *)(param_1 + 0x5ad) == '\0') {
    local_1b8 = 0x3f8701d6a04b6cea;
    pcStack_1b0 = "anime_ptn_size";
    local_1a8 = 0xe;
    local_1a0 = (long *)0x0;
    FUN_0283b1e8(plVar15,&local_1b8);
    FUN_0283b748(fVar20,plVar15,&local_1b8);
    if (plVar16 != (long *)0x0) {
      plVar14 = plVar16 + 10;
      do {
        iVar3 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    local_1b8 = -0x2e054edad4ffb1f;
    pcStack_1b0 = "anime_ptn_tail";
    local_1a8 = 0xe;
    local_1a0 = (long *)0x0;
    FUN_0283b1e8(plVar15,&local_1b8);
    FUN_0283b748((float)iVar9,plVar15,&local_1b8);
    if (*(char *)(param_1 + 0x5ab) == '\0') {
      plVar14 = *(long **)(param_1 + 0x2c8);
      if (plVar14 != (long *)0x0) {
        plVar16 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_1b8 = 0x4a0f571a28d293b4;
      pcStack_1b0 = "anime_close";
      local_1a8 = 0xb;
      local_1a0 = (long *)0x0;
      FUN_0283b430(plVar14,&local_1b8);
      local_1b8 = 0x3b8f5513c2470901;
      pcStack_1b0 = "anime_keep";
      local_1a8 = 10;
      local_1a0 = (long *)0x0;
      FUN_0283b1e8(plVar14,&local_1b8);
      local_1b8 = -0x66b328930d9203c0;
      pcStack_1b0 = "anime_wake";
      local_1a8 = 10;
      local_1a0 = (long *)0x0;
      FUN_0283b1e8(plVar14,&local_1b8);
      *(undefined1 *)(param_1 + 0x5ab) = 1;
      if (plVar14 != (long *)0x0) {
        plVar16 = plVar14 + 10;
        do {
          iVar9 = (int)*plVar16 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    FUN_00d42690(param_1,1,1);
  }
  else {
    FUN_00d42690(param_1,0,1);
    if (plVar16 != (long *)0x0) {
      plVar14 = plVar16 + 10;
      do {
        iVar9 = (int)*plVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar14 = plVar15 + 10;
  do {
    iVar9 = (int)*plVar14 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *(int *)plVar14 = iVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  return;
}


