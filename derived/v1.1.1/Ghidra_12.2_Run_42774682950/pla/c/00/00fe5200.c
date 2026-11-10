/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fe5200; name: FUN_00fe5200
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00fe5200(long param_1)

{
  long lVar1;
  undefined7 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  byte local_158;
  char local_157 [8];
  undefined2 local_14f;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined2 local_14b;
  undefined1 local_149;
  long local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined4 local_130;
  byte local_128;
  undefined7 local_127;
  char cStack_120;
  undefined4 local_11f;
  undefined2 local_11b;
  char local_119;
  long local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  byte local_f8;
  char local_f7 [7];
  char cStack_f0;
  char acStack_ef [7];
  long local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  byte local_c8;
  undefined4 local_c7;
  undefined7 local_c3;
  undefined4 uStack_bc;
  long local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined2 local_8f;
  undefined5 uStack_8d;
  ulong local_88;
  long local_80 [2];
  char local_70;
  
  plVar8 = DAT_043f1798;
  uStack_8d = 0;
  local_98 = 0x12;
  local_88 = 0;
  uStack_97 = s_Character_0389aa0b._0_7_;
  uVar2 = uStack_97;
  cStack_90 = s_Character_0389aa0b[7];
  cVar3 = cStack_90;
  local_8f = 0x72;
  lVar1 = tpidr_el0;
  plVar14 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar14 = plVar8;
  }
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xd0,8);
  plVar8[4] = 0;
  plVar14 = plVar8 + 1;
  *plVar14 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[0xe] = (long)"GetWarpRotation";
  plVar8[0xf] = (long)&DAT_0392da3c;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0x19] = 0;
  plVar8[6] = (long)FUN_00fe6890;
  plVar8[7] = (long)FUN_00fe6940;
  plVar8[0x12] = (long)FUN_00fe6b14;
  plVar8[0x13] = (long)&LAB_00fe6df4;
  *plVar8 = (long)&PTR_FUN_041ef110;
  plVar8[0x14] = (long)&LAB_00fe70d0;
  plVar8[0x15] = (long)&LAB_00fe70e0;
  *(undefined1 *)(plVar8 + 0x18) = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = (long)"GetWarpRequest";
  plVar8[0xd] = (long)"GetWarpPosition";
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0;
  local_158 = 0x1c;
  pcVar15 = (char *)((ulong)&local_158 | 1);
  local_14f = 0x7165;
  uStack_14d = 0x75;
  uStack_14c = 0x65;
  local_138 = &LAB_00fe712c;
  local_127._0_1_ = s_GetWarpPosition_03a73628[0];
  local_127._1_1_ = s_GetWarpPosition_03a73628[1];
  local_127._2_1_ = s_GetWarpPosition_03a73628[2];
  local_127._3_1_ = s_GetWarpPosition_03a73628[3];
  local_127._4_1_ = s_GetWarpPosition_03a73628[4];
  local_127._5_1_ = s_GetWarpPosition_03a73628[5];
  local_127._6_1_ = s_GetWarpPosition_03a73628[6];
  local_157[0] = s_GetWarpRequest_03a73548[0];
  local_157[1] = s_GetWarpRequest_03a73548[1];
  local_157[2] = s_GetWarpRequest_03a73548[2];
  local_157[3] = s_GetWarpRequest_03a73548[3];
  local_157[4] = s_GetWarpRequest_03a73548[4];
  local_157[5] = s_GetWarpRequest_03a73548[5];
  local_157[6] = s_GetWarpRequest_03a73548[6];
  local_157[7] = s_GetWarpRequest_03a73548[7];
  local_14b = 0x7473;
  local_149 = 0;
  local_130 = 0xffffffff;
  local_100 = 0xffffffff;
  local_d0 = 0xffffffff;
  local_c8 = 8;
  cStack_120 = s_GetWarpPosition_03a73628[7];
  local_11f = s_GetWarpPosition_03a73628._8_4_;
  local_11b = s_GetWarpPosition_03a73628._12_2_;
  local_119 = s_GetWarpPosition_03a73628[0xe];
  local_118 = 0;
  local_110 = &LAB_00fe7174;
  local_108 = &LAB_00fe71bc;
  local_f7[0] = s_GetWarpRotation_03960c1f[0];
  local_f7[1] = s_GetWarpRotation_03960c1f[1];
  local_f7[2] = s_GetWarpRotation_03960c1f[2];
  local_f7[3] = s_GetWarpRotation_03960c1f[3];
  local_f7[4] = s_GetWarpRotation_03960c1f[4];
  local_f7[5] = s_GetWarpRotation_03960c1f[5];
  local_f7[6] = s_GetWarpRotation_03960c1f[6];
  local_148 = 0;
  puStack_140 = &LAB_00fe70e4;
  local_128 = 0x1e;
  local_f8 = 0x1e;
  cStack_f0 = s_GetWarpRotation_03960c1f[7];
  acStack_ef[0] = s_GetWarpRotation_03960c1f[8];
  acStack_ef[1] = s_GetWarpRotation_03960c1f[9];
  acStack_ef[2] = s_GetWarpRotation_03960c1f[10];
  acStack_ef[3] = s_GetWarpRotation_03960c1f[0xb];
  acStack_ef[4] = s_GetWarpRotation_03960c1f[0xc];
  acStack_ef[5] = s_GetWarpRotation_03960c1f[0xd];
  acStack_ef[6] = s_GetWarpRotation_03960c1f[0xe];
  local_e8 = 0;
  local_e0 = &LAB_00fe7204;
  local_d8 = &LAB_00fe724c;
  local_c7 = 0x63675f5f;
  local_c3 = 0;
  uStack_bc = 0;
  local_a8 = &LAB_00fe72dc;
  local_a0 = 0xffffffff;
  local_b8 = 0;
  puStack_b0 = &LAB_00fe7294;
  FUN_00fe7324(plVar14,&local_158,4);
  lVar9 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar10 = FUN_008e8c90(plVar14,lVar9 + lVar19);
    if (lVar10 != 0) {
      FUN_008f2aec(local_80,plVar14,lVar10);
      lVar10 = local_80[0];
      plVar18 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar10 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) &&
           (lVar21 = *(long *)(lVar10 + 0x20), lVar21 != 0)) {
          plVar20 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar20 = plVar18;
          }
          uVar11 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar21,0,8);
              goto LAB_00fe54e0;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar21,0,8);
        }
LAB_00fe54e0:
        plVar18 = DAT_043f1798;
        plVar20 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar20 = plVar18;
        }
        uVar11 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar10,0,8);
            goto LAB_00fe5494;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar10,0,8);
      }
    }
LAB_00fe5494:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar16 = (char *)plVar8[0xc];
  sVar12 = strlen(pcVar16);
  iVar4 = FUN_008f2c60(sVar12,pcVar16);
  pcVar16 = (char *)plVar8[0xd];
  sVar12 = strlen(pcVar16);
  iVar5 = FUN_008f2c60(sVar12,pcVar16);
  pcVar16 = (char *)plVar8[0xe];
  sVar12 = strlen(pcVar16);
  iVar6 = FUN_008f2c60(sVar12,pcVar16);
  pcVar16 = (char *)plVar8[0xf];
  sVar12 = strlen(pcVar16);
  iVar7 = FUN_008f2c60(sVar12,pcVar16);
  lVar9 = local_b8;
  *(bool *)(plVar8 + 0xb) = ((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0;
  plVar14 = DAT_043f1798;
  lVar19 = local_e8;
  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar9,0,8);
        plVar14 = DAT_043f1798;
        lVar19 = local_e8;
        goto joined_r0x00fe5684;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
    plVar14 = DAT_043f1798;
    lVar19 = local_e8;
  }
joined_r0x00fe5684:
  lVar9 = local_118;
  local_e8 = lVar19;
  if (((local_f8 & 1) != 0) && (lVar19 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar14;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar19,0,8);
        plVar14 = DAT_043f1798;
        lVar9 = local_118;
        goto joined_r0x00fe5cd0;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
    plVar14 = DAT_043f1798;
    lVar9 = local_118;
  }
joined_r0x00fe5cd0:
  lVar19 = local_148;
  local_118 = lVar9;
  if (((local_128 & 1) != 0) && (lVar9 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar14;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar9,0,8);
        plVar14 = DAT_043f1798;
        lVar19 = local_148;
        goto joined_r0x00fe57e4;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
    plVar14 = DAT_043f1798;
    lVar19 = local_148;
  }
joined_r0x00fe57e4:
  DAT_043f1798 = plVar14;
  local_148 = lVar19;
  if (((local_158 & 1) != 0) && (lVar19 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar14;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar19,0,8);
        goto LAB_00fe5890;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
  }
LAB_00fe5890:
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar17);
  (**(code **)*plVar8)(plVar8,uVar17);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar11 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar11 = local_88;
  }
  FUN_001522a0(uVar17,uVar11);
  uVar11 = local_88;
  plVar8 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar8;
    }
    uVar13 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,uVar11,0,8);
        goto LAB_00fe598c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,uVar11,0,8);
  }
LAB_00fe598c:
  plVar8 = DAT_043f1798;
  uStack_8d = 0;
  local_98 = 0x12;
  local_88 = 0;
  local_8f = 0x72;
  plVar14 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar14 = plVar8;
  }
  uStack_97 = uVar2;
  cStack_90 = cVar3;
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,200,8);
  plVar14 = plVar8 + 1;
  *plVar14 = 0;
  plVar8[0xe] = (long)&DAT_0392da3c;
  plVar8[0xf] = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[0x10] = 0;
  plVar8[0x11] = (long)FUN_00fef5f0;
  plVar8[0x12] = (long)&LAB_00fef8d0;
  plVar8[0x13] = (long)&LAB_00fe70d0;
  plVar8[6] = (long)FUN_00fef3b0;
  plVar8[7] = (long)FUN_00fef460;
  *plVar8 = (long)&PTR_FUN_041ef138;
  plVar8[4] = 0;
  plVar8[0x14] = (long)&LAB_00fe70e0;
  plVar8[0x15] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0x18] = 0;
  plVar8[0x16] = 0;
  *(undefined1 *)(plVar8 + 0x17) = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = (long)"GetShapeType";
  plVar8[0xd] = (long)"GetCapsuleShape";
  uVar17 = s_GetShapeType_03960c2f._0_8_;
  local_158 = 0x14;
  *(undefined8 *)pcVar15 = s_class_cast_038dd4e7._0_8_;
  pcVar15[8] = 's';
  pcVar15[9] = 't';
  local_138 = &LAB_00fefbf4;
  uStack_14d = 0;
  uStack_14c = 0;
  local_14b = 0;
  local_149 = 0;
  local_130 = 0xffffffff;
  local_148 = 0;
  puStack_140 = &LAB_00fefbac;
  local_128 = 0x18;
  local_127 = (undefined7)uVar17;
  cStack_120 = SUB81(uVar17,7);
  local_11f = 0x65707954;
  local_108 = &LAB_00fefc84;
  local_11b = 0;
  local_119 = 0;
  local_100 = 0xffffffff;
  local_118 = 0;
  local_110 = &LAB_00fefc3c;
  local_f8 = 0x1e;
  acStack_ef[0] = s_GetCapsuleShape_0391326f[8];
  acStack_ef[1] = s_GetCapsuleShape_0391326f[9];
  acStack_ef[2] = s_GetCapsuleShape_0391326f[10];
  acStack_ef[3] = s_GetCapsuleShape_0391326f[0xb];
  acStack_ef[4] = s_GetCapsuleShape_0391326f[0xc];
  acStack_ef[5] = s_GetCapsuleShape_0391326f[0xd];
  acStack_ef[6] = s_GetCapsuleShape_0391326f[0xe];
  local_f7[0] = s_GetCapsuleShape_0391326f[0];
  local_f7[1] = s_GetCapsuleShape_0391326f[1];
  local_f7[2] = s_GetCapsuleShape_0391326f[2];
  local_f7[3] = s_GetCapsuleShape_0391326f[3];
  local_f7[4] = s_GetCapsuleShape_0391326f[4];
  local_f7[5] = s_GetCapsuleShape_0391326f[5];
  local_f7[6] = s_GetCapsuleShape_0391326f[6];
  cStack_f0 = s_GetCapsuleShape_0391326f[7];
  local_d8 = &LAB_00fefd14;
  local_d0 = 0xffffffff;
  local_c8 = 8;
  local_e8 = 0;
  local_e0 = &LAB_00fefccc;
  local_c7 = 0x63675f5f;
  local_c3 = 0;
  uStack_bc = 0;
  local_a8 = &LAB_00fefda4;
  local_a0 = 0xffffffff;
  local_b8 = 0;
  puStack_b0 = &LAB_00fefd5c;
  FUN_00fe7324(plVar14,&local_158,4);
  lVar9 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar10 = FUN_008e8c90(plVar14,lVar9 + lVar19);
    if (lVar10 != 0) {
      FUN_008f2aec(local_80,plVar14,lVar10);
      lVar10 = local_80[0];
      plVar18 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar10 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) &&
           (lVar21 = *(long *)(lVar10 + 0x20), lVar21 != 0)) {
          plVar20 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar20 = plVar18;
          }
          uVar11 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar21,0,8);
              goto LAB_00fe5ff8;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar21,0,8);
        }
LAB_00fe5ff8:
        plVar18 = DAT_043f1798;
        plVar20 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar20 = plVar18;
        }
        uVar11 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar10,0,8);
            goto LAB_00fe5fac;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar10,0,8);
      }
    }
LAB_00fe5fac:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar15 = (char *)plVar8[0xc];
  sVar12 = strlen(pcVar15);
  iVar4 = FUN_008f2c60(sVar12,pcVar15);
  pcVar15 = (char *)plVar8[0xd];
  sVar12 = strlen(pcVar15);
  iVar5 = FUN_008f2c60(sVar12,pcVar15);
  pcVar15 = (char *)plVar8[0xe];
  sVar12 = strlen(pcVar15);
  iVar6 = FUN_008f2c60(sVar12,pcVar15);
  lVar9 = local_b8;
  *(bool *)(plVar8 + 0xb) = (iVar5 != 0 || iVar4 != 0) || iVar6 != 0;
  plVar14 = DAT_043f1798;
  lVar19 = local_e8;
  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar9,0,8);
        plVar14 = DAT_043f1798;
        lVar19 = local_e8;
        goto joined_r0x00fe6180;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
    plVar14 = DAT_043f1798;
    lVar19 = local_e8;
  }
joined_r0x00fe6180:
  lVar9 = local_118;
  local_e8 = lVar19;
  if (((local_f8 & 1) != 0) && (lVar19 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar14;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar19,0,8);
        plVar14 = DAT_043f1798;
        lVar9 = local_118;
        goto joined_r0x00fe65bc;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
    plVar14 = DAT_043f1798;
    lVar9 = local_118;
  }
joined_r0x00fe65bc:
  lVar19 = local_148;
  local_118 = lVar9;
  if (((local_128 & 1) != 0) && (lVar9 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar14;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar9,0,8);
        plVar14 = DAT_043f1798;
        lVar19 = local_148;
        goto joined_r0x00fe62e8;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
    plVar14 = DAT_043f1798;
    lVar19 = local_148;
  }
joined_r0x00fe62e8:
  DAT_043f1798 = plVar14;
  local_148 = lVar19;
  if (((local_158 & 1) != 0) && (lVar19 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar14;
      plVar18 = plVar14;
    }
    uVar11 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar19,0,8);
        goto LAB_00fe6398;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
  }
LAB_00fe6398:
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar17);
  (**(code **)*plVar8)(plVar8,uVar17);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar11 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar11 = local_88;
  }
  FUN_001522a0(uVar17,uVar11);
  uVar11 = local_88;
  plVar8 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar8;
    }
    uVar13 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,uVar11,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,uVar11,0,8);
  }
  return;
}


