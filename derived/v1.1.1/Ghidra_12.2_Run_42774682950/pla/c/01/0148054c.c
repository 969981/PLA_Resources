/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148054c; name: FUN_0148054c
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0148054c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  
  plVar20 = *(long **)(param_1 + 0x2c8);
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar11 = (int)*plVar22 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  plVar22 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x90);
  if (plVar22 != (long *)0x0) {
    lVar18 = plVar22[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01482260;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar19 = (long *)plVar22[0xd];
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar18 = plVar22[0xb];
  plVar21 = (long *)(param_1 + 0x2c8);
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  local_a0 = 0x7f7b6ae20249ba2c;
  pcStack_98 = "pane_L_fieldinfo_pdinfo";
  local_90 = 0x17;
  local_88 = (long *)0x0;
  lVar18 = FUN_011da5dc(*plVar21,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0xe8), lVar18 != 0)) {
    FUN_00235780(lVar18);
    FUN_002350e8(lVar18,"T_pdinfo_00");
  }
  plVar22 = (long *)plVar20[0x38];
  if (plVar22 == (long *)0x0) {
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x270);
      if (plVar22 != *(long **)(lVar18 + 0x278)) {
        iVar11 = 0;
        do {
          plVar17 = (long *)PTR_DAT_04379c88;
          if (*plVar22 != 0) {
            plVar17 = (long *)(*plVar22 + 0x58);
          }
          if (*plVar17 == 0x12595680b82cc753) goto LAB_01481ff8;
          plVar22 = plVar22 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar22);
      }
    }
    iVar11 = 0;
LAB_01481ff8:
    FUN_02c2e33c(plVar19,iVar11,0);
  }
  else {
    plVar17 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar15 = *(long **)(lVar18 + 0x270);
      if (plVar15 != *(long **)(lVar18 + 0x278)) {
        iVar11 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            plVar16 = (long *)(*plVar15 + 0x58);
          }
          if (*plVar16 == 0x12595680b82cc753) goto LAB_01480718;
          plVar15 = plVar15 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar15);
      }
    }
    iVar11 = 0;
LAB_01480718:
    FUN_02c2e33c(plVar19,iVar11,plVar22);
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  local_90 = 0x23;
  local_88 = (long *)0x0;
  local_a0 = 0x1781e600a97543cd;
  pcStack_98 = "pane_L_fieldinfo_pdinfo_T_pdinfo_00";
  lVar24 = plVar20[0x37];
  lVar18 = plVar20[0x38];
  lVar23 = plVar20[0x39];
  *(undefined4 *)(lVar24 + 0x124) = 0;
  *(undefined2 *)(lVar24 + 0x128) = 0;
  *(undefined4 *)(lVar24 + 300) = 0;
  *(undefined4 *)(lVar24 + 0x134) = 0;
  FUN_02c33414(lVar24,lVar18);
  if (*(char *)(lVar23 + 0x7c) != '\0') {
    **(undefined2 **)(lVar23 + 0x58) = 0;
    *(undefined2 *)(lVar23 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar24,lVar23,lVar18,0,0);
  FUN_0283ce7c(plVar20,&local_a0,plVar20[0x39],10);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar8 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  plVar22 = (long *)plVar20[0x37];
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar18 = plVar22[0xb];
  if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01482260;
  if (*(long *)(lVar18 + 0x10) == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
    *(undefined8 *)(lVar18 + 0x10) = uVar12;
  }
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = (**(code **)(*plVar22 + 0x50))(plVar22,plVar22[0xd],uVar8);
  if ((int)plVar22[0x12] != 0) {
    lVar18 = plVar22[0xd];
    *(ulong *)(plVar22[0x13] + 8) = uVar13 & 0xffff | 0x20000;
    plVar17 = (long *)plVar22[0x13];
    lVar23 = *plVar17;
    if (*(char *)(lVar23 + 0x7c) != '\0') {
      uVar6 = FUN_02c30580(*(undefined8 *)(lVar23 + 0x58),*(undefined8 *)(lVar18 + 0x58),
                           *(undefined2 *)(lVar23 + 0x78));
      *(undefined2 *)(lVar23 + 0x7a) = uVar6;
      plVar17 = (long *)plVar22[0x13];
    }
    *(undefined2 *)(plVar17 + 2) = 0;
    *(ushort *)(plVar22[0x13] + 0x12) = *(ushort *)(plVar22[0x13] + 0x12) & 0xfffe;
  }
  lVar18 = plVar22[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    plVar22 = (long *)plVar20[0x38];
    if (plVar22 == (long *)0x0) goto LAB_01481dc4;
LAB_014808b8:
    plVar17 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar15 = *(long **)(lVar18 + 0x270);
      if (plVar15 != *(long **)(lVar18 + 0x278)) {
        iVar11 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            plVar16 = (long *)(*plVar15 + 0x58);
          }
          if (*plVar16 == 0x12595980b82ccc6c) goto LAB_01480930;
          plVar15 = plVar15 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar15);
      }
    }
    iVar11 = 0;
LAB_01480930:
    FUN_02c2e33c(plVar19,iVar11,plVar22);
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  else {
    plVar22 = (long *)plVar20[0x38];
    if (plVar22 != (long *)0x0) goto LAB_014808b8;
LAB_01481dc4:
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x270);
      if (plVar22 != *(long **)(lVar18 + 0x278)) {
        iVar11 = 0;
        do {
          plVar17 = (long *)PTR_DAT_04379c88;
          if (*plVar22 != 0) {
            plVar17 = (long *)(*plVar22 + 0x58);
          }
          if (*plVar17 == 0x12595980b82ccc6c) goto LAB_01481e28;
          plVar22 = plVar22 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar22);
      }
    }
    iVar11 = 0;
LAB_01481e28:
    FUN_02c2e33c(plVar19,iVar11,0);
  }
  local_90 = 0x23;
  local_88 = (long *)0x0;
  local_a0 = 0x1781e400a9754067;
  pcStack_98 = "pane_L_fieldinfo_pdinfo_T_pdinfo_02";
  lVar24 = plVar20[0x37];
  lVar18 = plVar20[0x38];
  lVar23 = plVar20[0x39];
  *(undefined4 *)(lVar24 + 0x124) = 0;
  *(undefined2 *)(lVar24 + 0x128) = 0;
  *(undefined4 *)(lVar24 + 300) = 0;
  *(undefined4 *)(lVar24 + 0x134) = 0;
  FUN_02c33414(lVar24,lVar18);
  if (*(char *)(lVar23 + 0x7c) != '\0') {
    **(undefined2 **)(lVar23 + 0x58) = 0;
    *(undefined2 *)(lVar23 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar24,lVar23,lVar18,0,0);
  FUN_0283ce7c(plVar20,&local_a0,plVar20[0x39],10);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar9 = FUN_02c5fb2c(*(undefined8 *)(param_1 + 0x5b8));
  uVar10 = FUN_01091730();
  local_a0 = 0x6a593e66de7b36dc;
  pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_textcolor";
  fVar26 = 1.0;
  if (uVar9 <= uVar10) {
    fVar26 = 0.0;
  }
  local_90 = 0x29;
  local_88 = (long *)0x0;
  lVar18 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_a0);
    lVar18 = *plVar21;
  }
  local_a0 = 0x6a593e66de7b36dc;
  pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_textcolor";
  local_90 = 0x29;
  local_88 = (long *)0x0;
  if (lVar18 != 0) {
    fVar25 = (float)FUN_0283b914(lVar18,&local_a0);
    lVar18 = *plVar21;
    if (fVar26 <= fVar25) {
      fVar25 = fVar26;
    }
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x1a0);
      lVar23 = *(long *)(lVar18 + 0x1a8);
      if ((lVar23 == 0) || (*plVar22 == 0x6a593e66de7b36dc)) {
        plVar17 = plVar22;
      }
      else {
        lVar24 = lVar23 * 0x30;
        plVar15 = plVar22;
        do {
          lVar24 = lVar24 + -0x30;
          if (lVar24 == 0) goto LAB_01480b90;
          plVar16 = plVar15 + 6;
          plVar17 = plVar15 + 6;
          plVar15 = plVar15 + 6;
        } while (*plVar16 != 0x6a593e66de7b36dc);
      }
      plVar22 = plVar22 + lVar23 * 6;
      if (plVar17 == plVar22) {
        plVar15 = (long *)0x0;
        if (plVar17 != plVar22) goto LAB_01480b10;
LAB_01480b90:
        if (lVar18 == 0) goto LAB_01480bac;
        FUN_0283b1e8(lVar18,&local_a0);
      }
      else {
        plVar15 = plVar17 + 4;
        if (plVar17 == plVar22) goto LAB_01480b90;
LAB_01480b10:
        uVar13 = (ulong)*(uint *)(plVar15 + 1);
        if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
            (lVar23 = *(long *)(*plVar15 + 600), *(char *)(lVar23 + uVar13 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar23 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_01480b90;
        plVar22 = (long *)(lVar23 + uVar13 * 0x48 + 0x10);
        lVar18 = *plVar22;
        if ((lVar18 != 0) && (*(char *)(lVar23 + uVar13 * 0x48 + 9) == '\0')) {
          fVar26 = *(float *)(lVar18 + 0x20);
          uVar7 = FUN_00227728();
          uVar13 = FUN_00227744(*plVar22);
          if (((float)uVar7 <= fVar26) && ((uVar13 & 1) == 0)) {
            lVar18 = *plVar21;
            goto LAB_01480b90;
          }
        }
      }
      FUN_0283b748(fVar25,*plVar21,&local_a0);
    }
  }
LAB_01480bac:
  plVar22 = (long *)plVar20[0x38];
  if (plVar22 == (long *)0x0) {
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x270);
      if (plVar22 != *(long **)(lVar18 + 0x278)) {
        iVar11 = 0;
        do {
          plVar17 = (long *)PTR_DAT_04379c88;
          if (*plVar22 != 0) {
            plVar17 = (long *)(*plVar22 + 0x58);
          }
          if (*plVar17 == 0x12595a80b82cce1f) goto LAB_0148206c;
          plVar22 = plVar22 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar22);
      }
    }
    iVar11 = 0;
LAB_0148206c:
    FUN_02c2e33c(plVar19,iVar11,0);
    plVar22 = (long *)plVar20[0x37];
joined_r0x0148207c:
    if (plVar22 != (long *)0x0) goto LAB_01480c54;
LAB_01480e34:
    FUN_02c395d0(0,0,uVar9,3,0,1);
  }
  else {
    plVar17 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar18 = plVar19[0x16];
    if (lVar18 != 0) {
      plVar15 = *(long **)(lVar18 + 0x270);
      if (plVar15 != *(long **)(lVar18 + 0x278)) {
        iVar11 = 0;
        do {
          plVar16 = (long *)PTR_DAT_04379c88;
          if (*plVar15 != 0) {
            plVar16 = (long *)(*plVar15 + 0x58);
          }
          if (*plVar16 == 0x12595a80b82cce1f) goto LAB_01480c2c;
          plVar15 = plVar15 + 1;
          iVar11 = iVar11 + 1;
        } while (*(long **)(lVar18 + 0x278) != plVar15);
      }
    }
    iVar11 = 0;
LAB_01480c2c:
    FUN_02c2e33c(plVar19,iVar11,plVar22);
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      plVar22 = (long *)plVar20[0x37];
      goto joined_r0x0148207c;
    }
    plVar22 = (long *)plVar20[0x37];
    if (plVar22 == (long *)0x0) goto LAB_01480e34;
LAB_01480c54:
    lVar18 = plVar22[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01482260;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02c395d0(plVar22,0,uVar9,3,0,1);
    lVar18 = plVar22[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  local_90 = 0x23;
  local_88 = (long *)0x0;
  local_a0 = 0x1781e300a9753eb4;
  pcStack_98 = "pane_L_fieldinfo_pdinfo_T_pdinfo_03";
  lVar24 = plVar20[0x37];
  lVar18 = plVar20[0x38];
  lVar23 = plVar20[0x39];
  *(undefined4 *)(lVar24 + 0x124) = 0;
  *(undefined2 *)(lVar24 + 0x128) = 0;
  *(undefined4 *)(lVar24 + 300) = 0;
  *(undefined4 *)(lVar24 + 0x134) = 0;
  FUN_02c33414(lVar24,lVar18);
  if (*(char *)(lVar23 + 0x7c) != '\0') {
    **(undefined2 **)(lVar23 + 0x58) = 0;
    *(undefined2 *)(lVar23 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar24,lVar23,lVar18,0,0);
  FUN_0283ce7c(plVar20,&local_a0,plVar20[0x39],10);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  iVar11 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  local_a0 = 0x71a9fc5774c0aa6;
  pcStack_98 = "anime_L_fieldinfo_pdinfo_L_icon_seibetsu_00_switch";
  local_90 = 0x32;
  local_88 = (long *)0x0;
  lVar18 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_a0);
    lVar18 = *plVar21;
  }
  local_a0 = 0x71a9fc5774c0aa6;
  pcStack_98 = "anime_L_fieldinfo_pdinfo_L_icon_seibetsu_00_switch";
  local_90 = 0x32;
  local_88 = (long *)0x0;
  if (lVar18 != 0) {
    fVar26 = (float)FUN_0283b914(lVar18,&local_a0);
    lVar18 = *plVar21;
    if ((float)iVar11 <= fVar26) {
      fVar26 = (float)iVar11;
    }
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x1a0);
      lVar23 = *(long *)(lVar18 + 0x1a8);
      if ((lVar23 == 0) || (*plVar22 == 0x71a9fc5774c0aa6)) {
        plVar17 = plVar22;
      }
      else {
        lVar24 = lVar23 * 0x30;
        plVar15 = plVar22;
        do {
          lVar24 = lVar24 + -0x30;
          if (lVar24 == 0) goto LAB_01480ef4;
          plVar16 = plVar15 + 6;
          plVar17 = plVar15 + 6;
          plVar15 = plVar15 + 6;
        } while (*plVar16 != 0x71a9fc5774c0aa6);
      }
      plVar22 = plVar22 + lVar23 * 6;
      if (plVar17 == plVar22) {
        plVar15 = (long *)0x0;
        if (plVar17 != plVar22) goto LAB_01480e74;
LAB_01480ef4:
        if (lVar18 == 0) goto LAB_01480f10;
        FUN_0283b1e8(lVar18,&local_a0);
      }
      else {
        plVar15 = plVar17 + 4;
        if (plVar17 == plVar22) goto LAB_01480ef4;
LAB_01480e74:
        uVar13 = (ulong)*(uint *)(plVar15 + 1);
        if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
            (lVar23 = *(long *)(*plVar15 + 600), *(char *)(lVar23 + uVar13 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar23 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_01480ef4;
        plVar22 = (long *)(lVar23 + uVar13 * 0x48 + 0x10);
        lVar18 = *plVar22;
        if ((lVar18 != 0) && (*(char *)(lVar23 + uVar13 * 0x48 + 9) == '\0')) {
          fVar25 = *(float *)(lVar18 + 0x20);
          uVar7 = FUN_00227728();
          uVar13 = FUN_00227744(*plVar22);
          if (((float)uVar7 <= fVar25) && ((uVar13 & 1) == 0)) {
            lVar18 = *plVar21;
            goto LAB_01480ef4;
          }
        }
      }
      FUN_0283b748(fVar26,*plVar21,&local_a0);
    }
  }
LAB_01480f10:
  lVar18 = *(long *)(param_1 + 0x5b8);
  uVar9 = FUN_02c68b0c(*(undefined8 *)(lVar18 + 0x98));
  uVar10 = FUN_02c70958(*(undefined8 *)(lVar18 + 0x98));
  plVar22 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar18 != 0) && (*plVar22 != 0x7b41453401eed866)) {
    plVar17 = plVar22 + lVar18 * 6;
    lVar18 = lVar18 * 0x30;
    do {
      lVar18 = lVar18 + -0x30;
      if (lVar18 == 0) {
        plVar22 = plVar17;
        break;
      }
      plVar16 = plVar22 + 6;
      plVar15 = plVar22 + 6;
      plVar22 = plVar16;
    } while (*plVar15 != 0x7b41453401eed866);
  }
  *(byte *)(plVar22[4] + 0x58) =
       *(byte *)(plVar22[4] + 0x58) & 0xfe |
       (uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ uVar10 >> 0x10 ^ uVar10 & 0xfff0) < 0x10;
  bVar5 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  plVar22 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar18 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar18 != 0) && (*plVar22 != 0x1adf4c6ac0cf20f1)) {
    plVar17 = plVar22 + lVar18 * 6;
    lVar18 = lVar18 * 0x30;
    do {
      lVar18 = lVar18 + -0x30;
      if (lVar18 == 0) {
        plVar22 = plVar17;
        break;
      }
      plVar16 = plVar22 + 6;
      plVar15 = plVar22 + 6;
      plVar22 = plVar16;
    } while (*plVar15 != 0x1adf4c6ac0cf20f1);
  }
  *(byte *)(plVar22[4] + 0x58) = *(byte *)(plVar22[4] + 0x58) & 0xfe | bVar5 & 1;
  uVar13 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  local_a0 = 0xc13098867cdd3d3c;
  pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_nspoke";
  local_90 = 0x26;
  local_88 = (long *)0x0;
  fVar26 = 1.0;
  if ((uVar13 & 1) == 0) {
    fVar26 = 0.0;
  }
  lVar18 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_a0);
    lVar18 = *plVar21;
  }
  local_a0 = 0xc13098867cdd3d3c;
  pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_nspoke";
  local_90 = 0x26;
  local_88 = (long *)0x0;
  lVar23 = 0;
  if (lVar18 != 0) {
    fVar25 = (float)FUN_0283b914(lVar18,&local_a0);
    lVar18 = *plVar21;
    if (fVar26 <= fVar25) {
      fVar25 = fVar26;
    }
    lVar23 = 0;
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x1a0);
      lVar23 = *(long *)(lVar18 + 0x1a8);
      if ((lVar23 == 0) || (*plVar22 == -0x3ecf67798322c2c4)) {
        plVar17 = plVar22;
      }
      else {
        lVar24 = lVar23 * 0x30;
        plVar15 = plVar22;
        do {
          lVar24 = lVar24 + -0x30;
          if (lVar24 == 0) goto LAB_01481194;
          plVar16 = plVar15 + 6;
          plVar17 = plVar15 + 6;
          plVar15 = plVar15 + 6;
        } while (*plVar16 != -0x3ecf67798322c2c4);
      }
      plVar22 = plVar22 + lVar23 * 6;
      if (plVar17 == plVar22) {
        plVar15 = (long *)0x0;
        if (plVar17 != plVar22) goto LAB_01481114;
LAB_01481194:
        lVar23 = 0;
        if (lVar18 == 0) goto LAB_014811b4;
        FUN_0283b1e8(lVar18,&local_a0);
      }
      else {
        plVar15 = plVar17 + 4;
        if (plVar17 == plVar22) goto LAB_01481194;
LAB_01481114:
        uVar14 = (ulong)*(uint *)(plVar15 + 1);
        if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
            (lVar23 = *(long *)(*plVar15 + 600), *(char *)(lVar23 + uVar14 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar23 + uVar14 * 0x48 + 0xb) == '\0')) goto LAB_01481194;
        plVar22 = (long *)(lVar23 + uVar14 * 0x48 + 0x10);
        lVar18 = *plVar22;
        if ((lVar18 != 0) && (*(char *)(lVar23 + uVar14 * 0x48 + 9) == '\0')) {
          fVar27 = *(float *)(lVar18 + 0x20);
          uVar7 = FUN_00227728();
          uVar14 = FUN_00227744(*plVar22);
          if (((float)uVar7 <= fVar27) && ((uVar14 & 1) == 0)) {
            lVar18 = *plVar21;
            goto LAB_01481194;
          }
        }
      }
      FUN_0283b748(fVar25,*plVar21,&local_a0);
      lVar23 = *plVar21;
    }
  }
LAB_014811b4:
  local_a0 = 0x8804e2b785f2383f;
  pcStack_98 = "anime_switch_nspoke";
  local_90 = 0x13;
  local_88 = (long *)0x0;
  lVar18 = 0;
  if (lVar23 != 0) {
    FUN_0283b1e8(lVar23,&local_a0);
    lVar18 = *plVar21;
  }
  local_a0 = 0x8804e2b785f2383f;
  pcStack_98 = "anime_switch_nspoke";
  local_90 = 0x13;
  local_88 = (long *)0x0;
  if (lVar18 != 0) {
    fVar25 = (float)FUN_0283b914(lVar18,&local_a0);
    lVar18 = *plVar21;
    if (fVar26 <= fVar25) {
      fVar25 = fVar26;
    }
    if (lVar18 != 0) {
      plVar22 = *(long **)(lVar18 + 0x1a0);
      lVar23 = *(long *)(lVar18 + 0x1a8);
      if ((lVar23 == 0) || (*plVar22 == -0x77fb1d487a0dc7c1)) {
        plVar17 = plVar22;
      }
      else {
        lVar24 = lVar23 * 0x30;
        plVar15 = plVar22;
        do {
          lVar24 = lVar24 + -0x30;
          if (lVar24 == 0) goto LAB_014812f8;
          plVar16 = plVar15 + 6;
          plVar17 = plVar15 + 6;
          plVar15 = plVar15 + 6;
        } while (*plVar16 != -0x77fb1d487a0dc7c1);
      }
      plVar22 = plVar22 + lVar23 * 6;
      if (plVar17 == plVar22) {
        plVar15 = (long *)0x0;
        if (plVar17 != plVar22) goto LAB_01481278;
LAB_014812f8:
        if (lVar18 == 0) goto LAB_01481314;
        FUN_0283b1e8(lVar18,&local_a0);
      }
      else {
        plVar15 = plVar17 + 4;
        if (plVar17 == plVar22) goto LAB_014812f8;
LAB_01481278:
        uVar14 = (ulong)*(uint *)(plVar15 + 1);
        if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
            (lVar23 = *(long *)(*plVar15 + 600), *(char *)(lVar23 + uVar14 * 0x48 + 8) == '\0')) ||
           (*(char *)(lVar23 + uVar14 * 0x48 + 0xb) == '\0')) goto LAB_014812f8;
        plVar22 = (long *)(lVar23 + uVar14 * 0x48 + 0x10);
        lVar18 = *plVar22;
        if ((lVar18 != 0) && (*(char *)(lVar23 + uVar14 * 0x48 + 9) == '\0')) {
          fVar26 = *(float *)(lVar18 + 0x20);
          uVar7 = FUN_00227728();
          uVar14 = FUN_00227744(*plVar22);
          if (((float)uVar7 <= fVar26) && ((uVar14 & 1) == 0)) {
            lVar18 = *plVar21;
            goto LAB_014812f8;
          }
        }
      }
      FUN_0283b748(fVar25,*plVar21,&local_a0);
    }
  }
LAB_01481314:
  if ((uVar13 & 1) != 0) goto joined_r0x01481bac;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar18 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar18;
  plVar22 = *(long **)(lVar18 + 0x298);
  if (plVar22 != (long *)0x0) {
    lVar18 = plVar22[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01482260;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar9 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98));
  if ((0x3d4 < (int)uVar9) ||
     (uVar13 = (ulong)uVar9, *(short *)((long)plVar22 + (ulong)uVar9 * 0x58 + 0xe6) == 0)) {
    plVar21 = (long *)plVar20[0x38];
    if (plVar21 == (long *)0x0) {
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar21 = *(long **)(lVar18 + 0x270);
        if (plVar21 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar17 = (long *)PTR_DAT_04379c88;
            if (*plVar21 != 0) {
              plVar17 = (long *)(*plVar21 + 0x58);
            }
            if (*plVar17 == 0x12595780b82cc906) goto LAB_01482164;
            plVar21 = plVar21 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar21);
        }
      }
LAB_01482160:
      iVar11 = 0;
LAB_01482164:
      FUN_02c2e33c(plVar19,iVar11,0);
    }
    else {
      plVar17 = plVar21 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar15 = *(long **)(lVar18 + 0x270);
        if (plVar15 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar16 = (long *)PTR_DAT_04379c88;
            if (*plVar15 != 0) {
              plVar16 = (long *)(*plVar15 + 0x58);
            }
            if (*plVar16 == 0x12595780b82cc906) goto LAB_014816dc;
            plVar15 = plVar15 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar15);
        }
      }
      iVar11 = 0;
LAB_014816dc:
      FUN_02c2e33c(plVar19,iVar11,plVar21);
      do {
        iVar11 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
joined_r0x014816f8:
      if (iVar11 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    local_90 = 0x23;
    local_88 = (long *)0x0;
    local_a0 = 0x1781e100a9753b4e;
    pcStack_98 = "pane_L_fieldinfo_pdinfo_T_pdinfo_05";
    lVar24 = plVar20[0x37];
    lVar18 = plVar20[0x38];
    lVar23 = plVar20[0x39];
    *(undefined4 *)(lVar24 + 0x124) = 0;
    *(undefined2 *)(lVar24 + 0x128) = 0;
    *(undefined4 *)(lVar24 + 300) = 0;
    *(undefined4 *)(lVar24 + 0x134) = 0;
    FUN_02c33414(lVar24,lVar18);
    if (*(char *)(lVar23 + 0x7c) != '\0') {
      **(undefined2 **)(lVar23 + 0x58) = 0;
      *(undefined2 *)(lVar23 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar24,lVar23,lVar18,0,0);
    FUN_0283ce7c(plVar20,&local_a0,plVar20[0x39],10);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    goto joined_r0x01481798;
  }
  if ((*(byte *)((long)plVar22 + uVar13 * 0x58 + 0xdc) >> 1 & 1) == 0) {
    plVar17 = (long *)plVar20[0x38];
    if (plVar17 == (long *)0x0) {
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar17 = *(long **)(lVar18 + 0x270);
        if (plVar17 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar15 = (long *)PTR_DAT_04379c88;
            if (*plVar17 != 0) {
              plVar15 = (long *)(*plVar17 + 0x58);
            }
            if (*plVar15 == 0x12595880b82ccab9) goto LAB_014821d8;
            plVar17 = plVar17 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar17);
        }
      }
      iVar11 = 0;
LAB_014821d8:
      FUN_02c2e33c(plVar19,iVar11,0);
      plVar17 = (long *)plVar20[0x37];
joined_r0x014821e8:
      if (plVar17 != (long *)0x0) goto LAB_01481848;
LAB_01481c1c:
      FUN_02c307d0(_DAT_00000068,0,2,0,1);
      plVar17 = (long *)FUN_00d1603c();
      lVar23 = *plVar17;
      *(long *)PTR_DAT_0437b198 = lVar23;
      lVar18 = _DAT_00000068;
      if (_DAT_00000090 != 0) {
        _DAT_00000098[1] = (ulong)(*(int *)(lVar23 + 0x238) != 3) << 0x12 | 0x220000;
        lVar23 = *_DAT_00000098;
        if (*(char *)(lVar23 + 0x7c) != '\0') {
          uVar6 = FUN_02c30580(*(undefined8 *)(lVar23 + 0x58),*(undefined8 *)(lVar18 + 0x58),
                               *(undefined2 *)(lVar23 + 0x78));
          *(undefined2 *)(lVar23 + 0x7a) = uVar6;
        }
        *(undefined2 *)(_DAT_00000098 + 2) = 0;
        *(ushort *)((long)_DAT_00000098 + 0x12) = *(ushort *)((long)_DAT_00000098 + 0x12) & 0xfffe;
      }
    }
    else {
      plVar15 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar16 = *(long **)(lVar18 + 0x270);
        if (plVar16 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar2 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar2 == 0x12595880b82ccab9) goto LAB_01481820;
            plVar16 = plVar16 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar16);
        }
      }
      iVar11 = 0;
LAB_01481820:
      FUN_02c2e33c(plVar19,iVar11,plVar17);
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar20[0x37];
        goto joined_r0x014821e8;
      }
      plVar17 = (long *)plVar20[0x37];
      if (plVar17 == (long *)0x0) goto LAB_01481c1c;
LAB_01481848:
      lVar18 = plVar17[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_01482260:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02c307d0(plVar17[0xd],0,2,0,1);
      plVar15 = (long *)FUN_00d1603c();
      lVar18 = *plVar15;
      *(long *)PTR_DAT_0437b198 = lVar18;
      if ((int)plVar17[0x12] != 0) {
        lVar23 = plVar17[0xd];
        *(ulong *)(plVar17[0x13] + 8) = (ulong)(*(int *)(lVar18 + 0x238) != 3) << 0x12 | 0x220000;
        plVar15 = (long *)plVar17[0x13];
        lVar18 = *plVar15;
        if (*(char *)(lVar18 + 0x7c) != '\0') {
          uVar6 = FUN_02c30580(*(undefined8 *)(lVar18 + 0x58),*(undefined8 *)(lVar23 + 0x58),
                               *(undefined2 *)(lVar18 + 0x78));
          *(undefined2 *)(lVar18 + 0x7a) = uVar6;
          plVar15 = (long *)plVar17[0x13];
        }
        *(undefined2 *)(plVar15 + 2) = 0;
        *(ushort *)(plVar17[0x13] + 0x12) = *(ushort *)(plVar17[0x13] + 0x12) & 0xfffe;
      }
      lVar18 = plVar17[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    local_90 = 0x23;
    local_88 = (long *)0x0;
    local_a0 = 0x1781e100a9753b4e;
    pcStack_98 = "pane_L_fieldinfo_pdinfo_T_pdinfo_05";
    lVar24 = plVar20[0x37];
    lVar18 = plVar20[0x38];
    lVar23 = plVar20[0x39];
    *(undefined4 *)(lVar24 + 0x124) = 0;
    *(undefined2 *)(lVar24 + 0x128) = 0;
    *(undefined4 *)(lVar24 + 300) = 0;
    *(undefined4 *)(lVar24 + 0x134) = 0;
    FUN_02c33414(lVar24,lVar18);
    if (*(char *)(lVar23 + 0x7c) != '\0') {
      **(undefined2 **)(lVar23 + 0x58) = 0;
      *(undefined2 *)(lVar23 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar24,lVar23,lVar18,0,0);
    FUN_0283ce7c(plVar20,&local_a0,plVar20[0x39],10);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = 0xed376b546a57fce7;
    pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_researchmax";
    local_90 = 0x2b;
    local_88 = (long *)0x0;
    if (*plVar21 == 0) {
      bVar4 = true;
      lVar18 = 0;
    }
    else {
      FUN_0283b1e8(*plVar21,&local_a0);
      lVar18 = *plVar21;
      bVar4 = lVar18 == 0;
    }
    local_a0 = 0xed376b546a57fce7;
    pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_researchmax";
    local_90 = 0x2b;
    local_88 = (long *)0x0;
    if (!bVar4) {
      uVar8 = FUN_0283b914(lVar18,&local_a0);
      lVar18 = *plVar21;
      if (lVar18 != 0) {
        plVar20 = *(long **)(lVar18 + 0x1a0);
        lVar23 = *(long *)(lVar18 + 0x1a8);
        if ((lVar23 == 0) || (*plVar20 == -0x12c894ab95a80319)) {
          plVar17 = plVar20;
        }
        else {
          lVar24 = lVar23 * 0x30;
          plVar15 = plVar20;
          do {
            lVar24 = lVar24 + -0x30;
            if (lVar24 == 0) goto LAB_01481d68;
            plVar16 = plVar15 + 6;
            plVar17 = plVar15 + 6;
            plVar15 = plVar15 + 6;
          } while (*plVar16 != -0x12c894ab95a80319);
        }
        plVar20 = plVar20 + lVar23 * 6;
        if (plVar17 == plVar20) {
          plVar15 = (long *)0x0;
          if (plVar17 != plVar20) goto LAB_01481ce8;
LAB_01481d68:
          if (lVar18 == 0) goto joined_r0x01481798;
          FUN_0283b1e8(lVar18,&local_a0);
        }
        else {
          plVar15 = plVar17 + 4;
          if (plVar17 == plVar20) goto LAB_01481d68;
LAB_01481ce8:
          uVar13 = (ulong)*(uint *)(plVar15 + 1);
          if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
              (lVar23 = *(long *)(*plVar15 + 600), *(char *)(lVar23 + uVar13 * 0x48 + 8) == '\0'))
             || (*(char *)(lVar23 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_01481d68;
          plVar20 = (long *)(lVar23 + uVar13 * 0x48 + 0x10);
          lVar18 = *plVar20;
          if ((lVar18 != 0) && (*(char *)(lVar23 + uVar13 * 0x48 + 9) == '\0')) {
            fVar26 = *(float *)(lVar18 + 0x20);
            uVar7 = FUN_00227728();
            uVar13 = FUN_00227744(*plVar20);
            if (((float)uVar7 <= fVar26) && ((uVar13 & 1) == 0)) {
              lVar18 = *plVar21;
              goto LAB_01481d68;
            }
          }
        }
        lVar18 = *plVar21;
        fVar25 = (float)NEON_fminnm(uVar8,0);
        goto LAB_01481b84;
      }
    }
  }
  else {
    uVar14 = FUN_011357f8(plVar22,uVar13);
    if ((uVar14 & 1) == 0) {
      plVar21 = (long *)plVar20[0x38];
      if (plVar21 == (long *)0x0) {
        lVar18 = plVar19[0x16];
        if (lVar18 != 0) {
          plVar21 = *(long **)(lVar18 + 0x270);
          if (plVar21 != *(long **)(lVar18 + 0x278)) {
            iVar11 = 0;
            do {
              plVar17 = (long *)PTR_DAT_04379c88;
              if (*plVar21 != 0) {
                plVar17 = (long *)(*plVar21 + 0x58);
              }
              if (*plVar17 == 0x12595580b82cc5a0) goto LAB_01482164;
              plVar21 = plVar21 + 1;
              iVar11 = iVar11 + 1;
            } while (*(long **)(lVar18 + 0x278) != plVar21);
          }
        }
        goto LAB_01482160;
      }
      plVar17 = plVar21 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar15 = *(long **)(lVar18 + 0x270);
        if (plVar15 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar16 = (long *)PTR_DAT_04379c88;
            if (*plVar15 != 0) {
              plVar16 = (long *)(*plVar15 + 0x58);
            }
            if (*plVar16 == 0x12595580b82cc5a0) goto LAB_01481ed0;
            plVar15 = plVar15 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar15);
        }
      }
      iVar11 = 0;
LAB_01481ed0:
      FUN_02c2e33c(plVar19,iVar11,plVar21);
      do {
        iVar11 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto joined_r0x014816f8;
    }
    uVar7 = *(ushort *)((long)plVar22 + uVar13 * 0x58 + 0xe4);
    uVar9 = (uint)uVar7;
    if (99 < uVar7) {
      uVar13 = FUN_011357f8(plVar22,uVar13);
      if ((uVar13 & 1) == 0) {
        uVar9 = 99;
      }
      else {
        uVar9 = 100;
      }
    }
    plVar17 = (long *)plVar20[0x38];
    fVar26 = 0.0;
    if (99 < uVar9) {
      fVar26 = 1.0;
    }
    if (plVar17 == (long *)0x0) {
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar17 = *(long **)(lVar18 + 0x270);
        if (plVar17 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar15 = (long *)PTR_DAT_04379c88;
            if (*plVar17 != 0) {
              plVar15 = (long *)(*plVar17 + 0x58);
            }
            if (*plVar15 == 0x12595880b82ccab9) goto LAB_014820e8;
            plVar17 = plVar17 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar17);
        }
      }
      iVar11 = 0;
LAB_014820e8:
      FUN_02c2e33c(plVar19,iVar11,0);
      plVar17 = (long *)plVar20[0x37];
joined_r0x014820f8:
      if (plVar17 != (long *)0x0) goto LAB_01481494;
LAB_01481aa4:
      FUN_02c395d0(0,0,(ulong)uVar9 / 10,2,0,1);
    }
    else {
      plVar15 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar18 = plVar19[0x16];
      if (lVar18 != 0) {
        plVar16 = *(long **)(lVar18 + 0x270);
        if (plVar16 != *(long **)(lVar18 + 0x278)) {
          iVar11 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar2 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar2 == 0x12595880b82ccab9) goto LAB_0148146c;
            plVar16 = plVar16 + 1;
            iVar11 = iVar11 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar16);
        }
      }
      iVar11 = 0;
LAB_0148146c:
      FUN_02c2e33c(plVar19,iVar11,plVar17);
      do {
        iVar11 = (int)*plVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar4) {
          *(int *)plVar15 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        plVar17 = (long *)plVar20[0x37];
        goto joined_r0x014820f8;
      }
      plVar17 = (long *)plVar20[0x37];
      if (plVar17 == (long *)0x0) goto LAB_01481aa4;
LAB_01481494:
      lVar18 = plVar17[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01482260;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02c395d0(plVar17,0,(ulong)uVar9 / 10,2,0,1);
      lVar18 = plVar17[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
    local_90 = 0x23;
    local_88 = (long *)0x0;
    local_a0 = 0x1781e100a9753b4e;
    pcStack_98 = "pane_L_fieldinfo_pdinfo_T_pdinfo_05";
    lVar24 = plVar20[0x37];
    lVar18 = plVar20[0x38];
    lVar23 = plVar20[0x39];
    *(undefined4 *)(lVar24 + 0x124) = 0;
    *(undefined2 *)(lVar24 + 0x128) = 0;
    *(undefined4 *)(lVar24 + 300) = 0;
    *(undefined4 *)(lVar24 + 0x134) = 0;
    FUN_02c33414(lVar24,lVar18);
    if (*(char *)(lVar23 + 0x7c) != '\0') {
      **(undefined2 **)(lVar23 + 0x58) = 0;
      *(undefined2 *)(lVar23 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar24,lVar23,lVar18,0,0);
    FUN_0283ce7c(plVar20,&local_a0,plVar20[0x39],10);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = 0xed376b546a57fce7;
    pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_researchmax";
    local_90 = 0x2b;
    local_88 = (long *)0x0;
    if (*plVar21 == 0) {
      bVar4 = true;
      lVar18 = 0;
    }
    else {
      FUN_0283b1e8(*plVar21,&local_a0);
      lVar18 = *plVar21;
      bVar4 = lVar18 == 0;
    }
    local_a0 = 0xed376b546a57fce7;
    pcStack_98 = "anime_L_fieldinfo_pdinfo_switch_researchmax";
    local_90 = 0x2b;
    local_88 = (long *)0x0;
    if (!bVar4) {
      fVar25 = (float)FUN_0283b914(lVar18,&local_a0);
      lVar18 = *plVar21;
      if (fVar26 <= fVar25) {
        fVar25 = fVar26;
      }
      if (lVar18 != 0) {
        plVar20 = *(long **)(lVar18 + 0x1a0);
        lVar23 = *(long *)(lVar18 + 0x1a8);
        if ((lVar23 == 0) || (*plVar20 == -0x12c894ab95a80319)) {
          plVar17 = plVar20;
        }
        else {
          lVar24 = lVar23 * 0x30;
          plVar15 = plVar20;
          do {
            lVar24 = lVar24 + -0x30;
            if (lVar24 == 0) goto LAB_01481b70;
            plVar16 = plVar15 + 6;
            plVar17 = plVar15 + 6;
            plVar15 = plVar15 + 6;
          } while (*plVar16 != -0x12c894ab95a80319);
        }
        plVar20 = plVar20 + lVar23 * 6;
        if (plVar17 == plVar20) {
          plVar15 = (long *)0x0;
          if (plVar17 != plVar20) goto LAB_01481af0;
LAB_01481b70:
          if (lVar18 == 0) goto joined_r0x01481798;
          FUN_0283b1e8(lVar18,&local_a0);
        }
        else {
          plVar15 = plVar17 + 4;
          if (plVar17 == plVar20) goto LAB_01481b70;
LAB_01481af0:
          uVar13 = (ulong)*(uint *)(plVar15 + 1);
          if (((*(uint *)(*plVar15 + 0x278) <= *(uint *)(plVar15 + 1)) ||
              (lVar23 = *(long *)(*plVar15 + 600), *(char *)(lVar23 + uVar13 * 0x48 + 8) == '\0'))
             || (*(char *)(lVar23 + uVar13 * 0x48 + 0xb) == '\0')) goto LAB_01481b70;
          plVar20 = (long *)(lVar23 + uVar13 * 0x48 + 0x10);
          lVar18 = *plVar20;
          if ((lVar18 != 0) && (*(char *)(lVar23 + uVar13 * 0x48 + 9) == '\0')) {
            fVar26 = *(float *)(lVar18 + 0x20);
            uVar7 = FUN_00227728();
            uVar13 = FUN_00227744(*plVar20);
            if (((float)uVar7 <= fVar26) && ((uVar13 & 1) == 0)) {
              lVar18 = *plVar21;
              goto LAB_01481b70;
            }
          }
        }
        lVar18 = *plVar21;
LAB_01481b84:
        FUN_0283b748(fVar25,lVar18,&local_a0);
      }
    }
  }
joined_r0x01481798:
  if (plVar22 != (long *)0x0) {
    lVar18 = plVar22[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
joined_r0x01481bac:
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 10;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  return;
}


