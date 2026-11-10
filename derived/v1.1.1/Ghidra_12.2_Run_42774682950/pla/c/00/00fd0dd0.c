/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fd0dd0; name: FUN_00fd0dd0
 */


void FUN_00fd0dd0(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  byte local_128;
  undefined7 uStack_127;
  char local_120;
  undefined2 uStack_11f;
  undefined1 uStack_11d;
  undefined4 local_11c;
  ulong local_118;
  byte local_110;
  char local_10f [8];
  undefined4 local_107;
  undefined1 local_103;
  undefined2 local_102;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined7 uStack_db;
  undefined4 uStack_d4;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar5 = DAT_043f1798;
  local_128 = 0x16;
  uStack_11f = 0x6e65;
  uStack_11d = 0x74;
  local_118 = 0;
  local_11c = 0;
  uStack_127 = s_AiComponent_039326a5._0_7_;
  local_120 = s_AiComponent_039326a5[7];
  lVar1 = tpidr_el0;
  plVar11 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar11 = plVar5;
  }
  plVar5 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xc0,8);
  plVar5[4] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar11 = plVar5 + 1;
  *plVar11 = 0;
  plVar5[6] = (long)FUN_00fd1fd0;
  plVar5[7] = (long)FUN_00fd2080;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  *plVar5 = (long)&PTR_FUN_041ef000;
  plVar5[0xc] = (long)"GetNavigator";
  plVar5[0xd] = (long)&DAT_0392da3c;
  plVar5[10] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0x17] = 0;
  *(undefined1 *)(plVar5 + 0x16) = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0x10] = (long)FUN_00fd2254;
  plVar5[0x11] = (long)&LAB_00fd2534;
  plVar5[0x12] = (long)&LAB_00fd2810;
  plVar5[0x13] = (long)&LAB_00fd2820;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  local_110 = 0x18;
  local_107 = 0x726f7461;
  local_10f[0] = s_GetNavigator_039abd69[0];
  local_10f[1] = s_GetNavigator_039abd69[1];
  local_10f[2] = s_GetNavigator_039abd69[2];
  local_10f[3] = s_GetNavigator_039abd69[3];
  local_10f[4] = s_GetNavigator_039abd69[4];
  local_10f[5] = s_GetNavigator_039abd69[5];
  local_10f[6] = s_GetNavigator_039abd69[6];
  local_10f[7] = s_GetNavigator_039abd69[7];
  local_f0 = &LAB_00fd286c;
  local_103 = 0;
  local_102 = 0;
  local_e8 = 0xffffffff;
  local_e0 = 8;
  local_df = 0x5f5f;
  uStack_dd = 0x67;
  uStack_dc = 99;
  uStack_db = 0;
  uStack_d4 = 0;
  local_c0 = &LAB_00fd28fc;
  local_b8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00fd2824;
  local_d0 = 0;
  puStack_c8 = &LAB_00fd28b4;
  FUN_00fd2944(plVar11,&local_110,2);
  lVar6 = FUN_008cca50();
  lVar12 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar11,lVar6 + lVar12);
    if (lVar7 != 0) {
      FUN_008f2aec(local_80,plVar11,lVar7);
      lVar7 = local_80[0];
      plVar15 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar7 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar16 = *(long *)(lVar7 + 0x20), lVar16 != 0)) {
          plVar17 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar17 = plVar15;
          }
          uVar8 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar16,0,8);
              goto LAB_00fd1080;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar16,0,8);
        }
LAB_00fd1080:
        plVar15 = DAT_043f1798;
        plVar17 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar17 = plVar15;
        }
        uVar8 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar7,0,8);
            goto LAB_00fd0fd0;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar7,0,8);
      }
    }
LAB_00fd0fd0:
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x300);
  pcVar13 = (char *)plVar5[0xc];
  sVar9 = strlen(pcVar13);
  iVar2 = FUN_008f2c60(sVar9,pcVar13);
  pcVar13 = (char *)plVar5[0xd];
  sVar9 = strlen(pcVar13);
  iVar3 = FUN_008f2c60(sVar9,pcVar13);
  lVar6 = local_d0;
  *(bool *)(plVar5 + 0xb) = iVar3 != 0 || iVar2 != 0;
  plVar11 = DAT_043f1798;
  lVar12 = local_100;
  if (((local_e0 & 1) != 0) && (local_d0 != 0)) {
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar11;
    }
    uVar8 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar6,0,8);
        plVar11 = DAT_043f1798;
        lVar12 = local_100;
        goto joined_r0x00fd120c;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar6,0,8);
    plVar11 = DAT_043f1798;
    lVar12 = local_100;
  }
joined_r0x00fd120c:
  DAT_043f1798 = plVar11;
  local_100 = lVar12;
  if (((local_110 & 1) != 0) && (lVar12 != 0)) {
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar11;
      plVar15 = plVar11;
    }
    uVar8 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar12,0,8);
        goto LAB_00fd12b8;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar12,0,8);
  }
LAB_00fd12b8:
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar14);
  (**(code **)*plVar5)(plVar5,uVar14);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar8 = (ulong)&local_128 | 1;
  if ((local_128 & 1) != 0) {
    uVar8 = local_118;
  }
  FUN_001522a0(uVar14,uVar8);
  uVar8 = local_118;
  plVar5 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != 0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar5;
    }
    uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,uVar8,0,8);
        goto LAB_00fd13b4;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,uVar8,0,8);
  }
LAB_00fd13b4:
  plVar5 = DAT_043f1798;
  local_118 = 0;
  uStack_11d = 0;
  local_11c = 0;
  local_128 = 0x12;
  uStack_127 = s_Navigator_038fdc1f._0_7_;
  local_120 = s_Navigator_038fdc1f[7];
  uStack_11f = 0x72;
  plVar11 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar11 = plVar5;
  }
  plVar5 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,200,8);
  plVar5[4] = 0;
  plVar11 = plVar5 + 1;
  *plVar11 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[10] = 0;
  plVar5[6] = (long)FUN_00fdd460;
  plVar5[7] = (long)FUN_00fdd510;
  *plVar5 = (long)&PTR_FUN_041ef028;
  plVar5[0xc] = (long)"GetRadius";
  plVar5[0xd] = (long)&DAT_038ca815;
  plVar5[0xe] = (long)&DAT_0392da3c;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = (long)FUN_00fdd6a0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0x18] = 0;
  plVar5[0x16] = 0;
  *(undefined1 *)(plVar5 + 0x17) = 0;
  plVar5[0x12] = (long)&LAB_00fdd980;
  plVar5[0x13] = (long)&LAB_00fd2810;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[0x14] = (long)&LAB_00fd2820;
  plVar5[0x15] = 0;
  local_10f[0] = s_GetRadius_03991664[0];
  local_10f[1] = s_GetRadius_03991664[1];
  local_10f[2] = s_GetRadius_03991664[2];
  local_10f[3] = s_GetRadius_03991664[3];
  local_10f[4] = s_GetRadius_03991664[4];
  local_10f[5] = s_GetRadius_03991664[5];
  local_10f[6] = s_GetRadius_03991664[6];
  local_10f[7] = s_GetRadius_03991664[7];
  local_f0 = &LAB_00fddca4;
  local_c0 = &LAB_00fddd34;
  local_110 = 0x12;
  local_107 = 0x73;
  local_103 = 0;
  local_102 = 0;
  local_e8 = 0xffffffff;
  uStack_dc = 0;
  uStack_db = 0;
  uStack_d4 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_00fdddc4;
  local_88 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00fddc5c;
  local_e0 = 6;
  local_df = 0x656e;
  uStack_dd = 0x77;
  local_d0 = 0;
  puStack_c8 = &LAB_00fddcec;
  local_a0 = 0;
  puStack_98 = &LAB_00fddd7c;
  FUN_00fd2944(plVar11,&local_110,3);
  lVar6 = FUN_008cca50();
  lVar12 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar11,lVar6 + lVar12);
    if (lVar7 != 0) {
      FUN_008f2aec(local_80,plVar11,lVar7);
      lVar7 = local_80[0];
      plVar15 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar7 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar16 = *(long *)(lVar7 + 0x20), lVar16 != 0)) {
          plVar17 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar17 = plVar15;
          }
          uVar8 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar16,0,8);
              goto LAB_00fd18c8;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar16,0,8);
        }
LAB_00fd18c8:
        plVar15 = DAT_043f1798;
        plVar17 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar17 = plVar15;
        }
        uVar8 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar7,0,8);
            goto LAB_00fd181c;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar7,0,8);
      }
    }
LAB_00fd181c:
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x300);
  pcVar13 = (char *)plVar5[0xc];
  sVar9 = strlen(pcVar13);
  iVar2 = FUN_008f2c60(sVar9,pcVar13);
  pcVar13 = (char *)plVar5[0xd];
  sVar9 = strlen(pcVar13);
  iVar3 = FUN_008f2c60(sVar9,pcVar13);
  pcVar13 = (char *)plVar5[0xe];
  sVar9 = strlen(pcVar13);
  iVar4 = FUN_008f2c60(sVar9,pcVar13);
  lVar6 = local_a0;
  *(bool *)(plVar5 + 0xb) = (iVar3 != 0 || iVar2 != 0) || iVar4 != 0;
  plVar11 = DAT_043f1798;
  lVar12 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar11;
    }
    uVar8 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar6,0,8);
        plVar11 = DAT_043f1798;
        lVar12 = local_d0;
        goto joined_r0x00fd1a6c;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar6,0,8);
    plVar11 = DAT_043f1798;
    lVar12 = local_d0;
  }
joined_r0x00fd1a6c:
  lVar6 = local_100;
  local_d0 = lVar12;
  if (((local_e0 & 1) != 0) && (lVar12 != 0)) {
    plVar15 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar11;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar11;
      plVar15 = plVar11;
    }
    uVar8 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar12,0,8);
        plVar11 = DAT_043f1798;
        lVar6 = local_100;
        goto joined_r0x00fd1d90;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar12,0,8);
    plVar11 = DAT_043f1798;
    lVar6 = local_100;
  }
joined_r0x00fd1d90:
  DAT_043f1798 = plVar11;
  local_100 = lVar6;
  if (((local_110 & 1) != 0) && (lVar6 != 0)) {
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar11;
      plVar15 = plVar11;
    }
    uVar8 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar6,0,8);
        goto LAB_00fd1bc8;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar6,0,8);
  }
LAB_00fd1bc8:
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar14);
  (**(code **)*plVar5)(plVar5,uVar14);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar8 = (ulong)&local_128 | 1;
  if ((local_128 & 1) != 0) {
    uVar8 = local_118;
  }
  FUN_001522a0(uVar14,uVar8);
  uVar8 = local_118;
  plVar5 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != 0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar5;
    }
    uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,uVar8,0,8);
        return;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,uVar8,0,8);
  }
  return;
}


