/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01047930; name: FUN_01047930
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01047930(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  size_t sVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  byte local_1b8;
  undefined4 local_1b7;
  uint uStack_1b3;
  undefined4 local_1af;
  undefined1 uStack_1ab;
  undefined2 local_1aa;
  long local_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  byte local_188;
  undefined2 local_187;
  char cStack_185;
  char cStack_184;
  char cStack_183;
  char cStack_182;
  char cStack_181;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined2 uStack_17a;
  long local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined4 local_160;
  byte local_158;
  undefined2 local_157;
  undefined1 uStack_155;
  undefined1 uStack_154;
  undefined4 uStack_153;
  undefined4 uStack_14f;
  undefined1 uStack_14b;
  undefined2 uStack_14a;
  long local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined4 local_130;
  byte local_128;
  undefined2 local_127;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined4 uStack_123;
  uint uStack_11f;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  long local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined4 local_100;
  byte local_f8;
  undefined2 local_f7;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined7 uStack_f3;
  undefined4 uStack_ec;
  long local_e8;
  undefined1 *puStack_e0;
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
  char local_90;
  char cStack_8f;
  char cStack_8e;
  char cStack_8d;
  char cStack_8c;
  char cStack_8b;
  undefined2 uStack_8a;
  ulong local_88;
  long local_80 [2];
  char local_70;
  
  FUN_00f9d930();
  FUN_00ffb6b0(param_1);
  FUN_00f5b9d0(param_1);
  FUN_01031050(param_1);
  FUN_00fe5200(param_1);
  FUN_00fd0dd0(param_1);
  plVar7 = DAT_043f1798;
  cStack_8d = 0;
  cStack_8c = 0;
  cStack_8b = 0;
  uStack_8a = 0;
  local_98 = 0x12;
  local_88 = 0;
  uStack_97 = s_RayResult_0397dffe._0_7_;
  local_90 = s_RayResult_0397dffe[7];
  cStack_8f = 0x74;
  cStack_8e = 0;
  lVar1 = tpidr_el0;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xf0,8);
  plVar7[4] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  plVar7[10] = 0;
  plVar7[6] = (long)FUN_0104c540;
  plVar7[7] = (long)FUN_0104c5e0;
  *plVar7 = (long)&PTR_FUN_041ef490;
  plVar7[0xc] = (long)"position";
  plVar7[0xd] = 0;
  plVar7[0xe] = (long)"normal";
  plVar7[0xf] = 0x10;
  plVar7[0x10] = (long)"rawId";
  plVar7[0x11] = 0x20;
  plVar7[0x12] = (long)&DAT_038ca815;
  plVar7[0x13] = (long)&DAT_0392da3c;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  *(undefined1 *)(plVar7 + 0x1c) = 1;
  plVar7[0x1d] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = (long)FUN_0104c7b4;
  plVar7[0x17] = (long)&LAB_0104ca94;
  plVar7[0x18] = (long)&LAB_0104cd70;
  plVar7[0x19] = (long)&LAB_0104cd80;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  local_1b8 = 0x10;
  local_198 = &LAB_0104cda0;
  local_1b7 = 0x69736f70;
  uStack_1b3 = 0x6e6f6974;
  local_1af = 0;
  uStack_1ab = 0;
  local_1aa = 0;
  local_190 = 0xffffffff;
  cStack_181 = 0;
  local_160 = 0xffffffff;
  uStack_14a = 0;
  uStack_14f = 0;
  uStack_14b = 0;
  local_130 = 0xffffffff;
  local_1a8 = 0;
  puStack_1a0 = &LAB_0104cd84;
  local_188 = 0xc;
  local_187 = 0x6f6e;
  cStack_185 = 0x72;
  cStack_184 = 0x6d;
  cStack_183 = 0x61;
  cStack_182 = 0x6c;
  local_170 = &LAB_0104cdbc;
  local_168 = &LAB_0104cdd8;
  local_158 = 10;
  uStack_153 = 100;
  local_157 = 0x6172;
  uStack_155 = 0x77;
  uStack_154 = 0x49;
  local_138 = &LAB_0104ce10;
  local_148 = 0;
  puStack_140 = &LAB_0104cdf4;
  local_128 = 6;
  uStack_125 = 0x77;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_17b = 0;
  uStack_17a = 0;
  local_178 = 0;
  local_127 = 0x656e;
  uStack_124 = 0;
  uStack_123 = 0;
  local_108 = &LAB_0104ce74;
  uStack_11f = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_100 = 0xffffffff;
  local_f8 = 8;
  local_118 = 0;
  puStack_110 = &LAB_0104ce2c;
  local_f7 = 0x5f5f;
  uStack_f5 = 0x67;
  uStack_f4 = 99;
  uStack_f3 = 0;
  uStack_ec = 0;
  local_d8 = &LAB_0104cf04;
  local_d0 = 0xffffffff;
  local_e8 = 0;
  puStack_e0 = &LAB_0104cebc;
  FUN_0104cf4c(plVar13,&local_1b8,5);
  lVar8 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar13,lVar8 + lVar14);
    if (lVar9 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar9);
      lVar9 = local_80[0];
      plVar17 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar9 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar9 + 0x20), lVar19 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar17;
          }
          uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar19,0,8);
              goto LAB_01047d04;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
        }
LAB_01047d04:
        plVar17 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar17;
        }
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar9,0,8);
            goto LAB_01047c68;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
      }
    }
LAB_01047c68:
    lVar9 = local_e8;
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  *(undefined1 *)(plVar7 + 0xb) = 1;
  plVar13 = DAT_043f1798;
  lVar14 = local_118;
  if (((local_f8 & 1) != 0) && (local_e8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar9,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_118;
        goto joined_r0x01047e5c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar9,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_118;
  }
joined_r0x01047e5c:
  lVar8 = local_148;
  local_118 = lVar14;
  if (((local_128 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_148;
        goto joined_r0x010485dc;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_148;
  }
joined_r0x010485dc:
  lVar14 = local_178;
  local_148 = lVar8;
  if (((local_158 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_178;
        goto joined_r0x01047fbc;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_178;
  }
joined_r0x01047fbc:
  lVar8 = local_1a8;
  local_178 = lVar14;
  if (((local_188 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_1a8;
        goto joined_r0x0104861c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_1a8;
  }
joined_r0x0104861c:
  DAT_043f1798 = plVar13;
  local_1a8 = lVar8;
  if (((local_1b8 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        goto LAB_01048118;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
  }
LAB_01048118:
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar7)(plVar7,uVar16);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar10 = local_88;
  }
  FUN_001522a0(uVar16,uVar10);
  uVar10 = local_88;
  plVar7 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        goto LAB_01048214;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
LAB_01048214:
  plVar7 = DAT_043f1798;
  local_98 = 0x1e;
  local_88 = 0;
  uStack_97._0_1_ = s_ShapeCastResult_039133ef[0];
  uStack_97._1_1_ = s_ShapeCastResult_039133ef[1];
  uStack_97._2_1_ = s_ShapeCastResult_039133ef[2];
  uStack_97._3_1_ = s_ShapeCastResult_039133ef[3];
  uStack_97._4_1_ = s_ShapeCastResult_039133ef[4];
  uStack_97._5_1_ = s_ShapeCastResult_039133ef[5];
  uStack_97._6_1_ = s_ShapeCastResult_039133ef[6];
  local_90 = s_ShapeCastResult_039133ef[7];
  cStack_8f = s_ShapeCastResult_039133ef[8];
  cStack_8e = s_ShapeCastResult_039133ef[9];
  cStack_8d = s_ShapeCastResult_039133ef[10];
  cStack_8c = s_ShapeCastResult_039133ef[0xb];
  cStack_8b = s_ShapeCastResult_039133ef[0xc];
  uStack_8a = s_ShapeCastResult_039133ef._13_2_;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x100,8);
  plVar7[4] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  plVar7[10] = 0;
  plVar7[6] = (long)FUN_010558a0;
  plVar7[7] = (long)FUN_01055940;
  *plVar7 = (long)&PTR_FUN_041ef4b8;
  plVar7[0xc] = (long)"position";
  plVar7[0xd] = 0;
  plVar7[0xe] = (long)"normal";
  plVar7[0xf] = 0x10;
  plVar7[0x10] = (long)"distance";
  plVar7[0x11] = 0x20;
  plVar7[0x12] = (long)"rawId";
  plVar7[0x13] = 0x24;
  plVar7[0x14] = (long)&DAT_038ca815;
  plVar7[0x15] = (long)&DAT_0392da3c;
  plVar7[0x16] = 0;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  plVar7[0x1d] = 0;
  *(undefined1 *)(plVar7 + 0x1e) = 1;
  plVar7[0x1f] = 0;
  plVar7[0x17] = 0;
  plVar7[0x18] = (long)FUN_01055b14;
  plVar7[0x19] = (long)&LAB_01055df4;
  plVar7[0x1a] = (long)&LAB_0104cd70;
  plVar7[0x1b] = (long)&LAB_0104cd80;
  plVar7[0x1c] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  local_1b7 = 0x69736f70;
  uStack_1b3 = 0x6e6f6974;
  local_1b8 = 0x10;
  local_158 = 0x10;
  local_157 = 0x6964;
  uStack_155 = 0x73;
  uStack_154 = 0x74;
  uStack_153 = 0x65636e61;
  local_198 = &LAB_010560ec;
  local_1af = 0;
  uStack_1ab = 0;
  local_1aa = 0;
  local_190 = 0xffffffff;
  cStack_181 = 0;
  local_160 = 0xffffffff;
  uStack_14b = 0;
  uStack_14a = 0;
  uStack_14f = 0;
  local_130 = 0xffffffff;
  local_1a8 = 0;
  puStack_1a0 = &LAB_010560d0;
  local_188 = 0xc;
  local_187 = 0x6f6e;
  cStack_185 = 0x72;
  cStack_184 = 0x6d;
  cStack_183 = 0x61;
  cStack_182 = 0x6c;
  local_148 = 0;
  puStack_140 = &LAB_01056140;
  local_128 = 10;
  local_170 = &LAB_01056108;
  local_168 = &LAB_01056124;
  local_138 = &LAB_010561fc;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_17b = 0;
  uStack_17a = 0;
  local_178 = 0;
  local_127 = 0x6172;
  uStack_125 = 0x77;
  uStack_124 = 0x49;
  uStack_123 = 100;
  uStack_11f = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_108 = &LAB_01056234;
  local_100 = 0xffffffff;
  local_118 = 0;
  puStack_110 = &LAB_01056218;
  local_f8 = 6;
  local_f7 = 0x656e;
  uStack_f5 = 0x77;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_ec = 0;
  local_d8 = &LAB_01056298;
  local_d0 = 0xffffffff;
  local_c8 = 8;
  local_e8 = 0;
  puStack_e0 = &LAB_01056250;
  local_c7 = 0x63675f5f;
  local_c3 = 0;
  uStack_bc = 0;
  local_a8 = &LAB_01056328;
  local_a0 = 0xffffffff;
  local_b8 = 0;
  puStack_b0 = &LAB_010562e0;
  FUN_0104cf4c(plVar13,&local_1b8,6);
  lVar8 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar13,lVar8 + lVar14);
    if (lVar9 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar9);
      lVar9 = local_80[0];
      plVar17 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar9 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar9 + 0x20), lVar19 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar17;
          }
          uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar19,0,8);
              goto LAB_010489a8;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
        }
LAB_010489a8:
        plVar17 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar17;
        }
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar9,0,8);
            goto LAB_0104890c;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
      }
    }
LAB_0104890c:
    lVar9 = local_b8;
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  *(undefined1 *)(plVar7 + 0xb) = 1;
  plVar13 = DAT_043f1798;
  lVar14 = local_e8;
  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar9,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_e8;
        goto joined_r0x01048b00;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar9,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_e8;
  }
joined_r0x01048b00:
  lVar8 = local_118;
  local_e8 = lVar14;
  if (((local_f8 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_118;
        goto joined_r0x0104926c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_118;
  }
joined_r0x0104926c:
  lVar14 = local_148;
  local_118 = lVar8;
  if (((local_128 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_148;
        goto joined_r0x01048c60;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_148;
  }
joined_r0x01048c60:
  lVar8 = local_178;
  local_148 = lVar14;
  if (((local_158 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_178;
        goto joined_r0x010492ac;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_178;
  }
joined_r0x010492ac:
  lVar14 = local_1a8;
  local_178 = lVar8;
  if (((local_188 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_1a8;
        goto joined_r0x01048dc0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_1a8;
  }
joined_r0x01048dc0:
  DAT_043f1798 = plVar13;
  local_1a8 = lVar14;
  if (((local_1b8 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        goto LAB_01048e6c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
  }
LAB_01048e6c:
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar7)(plVar7,uVar16);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar10 = local_88;
  }
  FUN_001522a0(uVar16,uVar10);
  uVar10 = local_88;
  plVar7 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        goto LAB_01048f6c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
LAB_01048f6c:
  plVar7 = DAT_043f1798;
  cStack_8b = 0;
  uStack_8a = 0;
  local_98 = 0x16;
  cStack_8f = 0x61;
  cStack_8e = 0x70;
  cStack_8d = 0x65;
  local_88 = 0;
  uStack_97 = s_SphereShape_0394da53._0_7_;
  local_90 = s_SphereShape_0394da53[7];
  cStack_8c = 0;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xe0,8);
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  plVar7[6] = (long)FUN_0105e140;
  plVar7[7] = (long)FUN_0105e1e0;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  *plVar7 = (long)&PTR_FUN_041ef4e0;
  plVar7[0xc] = (long)"m_pos";
  plVar7[0xd] = 0x10;
  plVar7[0xe] = (long)&DAT_0393a4c6;
  plVar7[0xf] = 0x20;
  plVar7[0x10] = (long)&DAT_038ca815;
  plVar7[0x11] = (long)&DAT_0392da3c;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = (long)FUN_0105e3b4;
  plVar7[10] = 0;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  plVar7[0x19] = 0;
  *(undefined1 *)(plVar7 + 0x1a) = 1;
  plVar7[0x1b] = 0;
  plVar7[0x15] = (long)&LAB_0105e694;
  plVar7[0x16] = (long)&LAB_0104cd70;
  plVar7[0x17] = (long)&LAB_0104cd80;
  plVar7[0x18] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  local_1b8 = 10;
  local_1b7 = 0x6f705f6d;
  local_198 = &LAB_0105ea60;
  local_187 = 0x5f6d;
  cStack_185 = 0x72;
  uStack_1b3 = 0x73;
  local_1af = 0;
  uStack_1ab = 0;
  local_1aa = 0;
  local_190 = 0xffffffff;
  cStack_184 = 0;
  cStack_183 = 0;
  cStack_182 = 0;
  cStack_181 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_17b = 0;
  uStack_17a = 0;
  local_168 = &LAB_0105ebbc;
  local_160 = 0xffffffff;
  uStack_154 = 0;
  uStack_153 = 0;
  uStack_14f = 0;
  uStack_14b = 0;
  uStack_14a = 0;
  local_130 = 0xffffffff;
  local_128 = 8;
  local_1a8 = 0;
  puStack_1a0 = &LAB_0105e970;
  local_188 = 6;
  local_158 = 6;
  uStack_155 = 0x77;
  local_157 = 0x656e;
  local_178 = 0;
  local_170 = &LAB_0105eba0;
  local_138 = &LAB_0105ecc8;
  local_148 = 0;
  puStack_140 = &LAB_0105ec80;
  local_127 = 0x5f5f;
  uStack_125 = 0x67;
  uStack_124 = 99;
  uStack_123 = 0;
  uStack_11f = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_108 = &LAB_0105ed58;
  local_100 = 0xffffffff;
  local_118 = 0;
  puStack_110 = &LAB_0105ed10;
  FUN_0104cf4c(plVar13,&local_1b8,4);
  lVar8 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar13,lVar8 + lVar14);
    if (lVar9 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar9);
      lVar9 = local_80[0];
      plVar17 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar9 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar9 + 0x20), lVar19 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar17;
          }
          uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar19,0,8);
              goto LAB_010496ac;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
        }
LAB_010496ac:
        plVar17 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar17;
        }
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar9,0,8);
            goto LAB_01049610;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
      }
    }
LAB_01049610:
    lVar9 = local_118;
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  *(undefined1 *)(plVar7 + 0xb) = 1;
  plVar13 = DAT_043f1798;
  lVar14 = local_148;
  if (((local_128 & 1) != 0) && (local_118 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar9,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_148;
        goto joined_r0x01049804;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar9,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_148;
  }
joined_r0x01049804:
  lVar8 = local_178;
  local_148 = lVar14;
  if (((local_158 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_178;
        goto joined_r0x01049e6c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_178;
  }
joined_r0x01049e6c:
  lVar14 = local_1a8;
  local_178 = lVar8;
  if (((local_188 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_1a8;
        goto joined_r0x01049964;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_1a8;
  }
joined_r0x01049964:
  DAT_043f1798 = plVar13;
  local_1a8 = lVar14;
  if (((local_1b8 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        goto LAB_01049a10;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
  }
LAB_01049a10:
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar7)(plVar7,uVar16);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar10 = local_88;
  }
  FUN_001522a0(uVar16,uVar10);
  uVar10 = local_88;
  plVar7 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        goto LAB_01049b0c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
LAB_01049b0c:
  plVar7 = DAT_043f1798;
  local_88 = 0;
  cStack_8e = 0;
  cStack_8d = 0;
  cStack_8c = 0;
  cStack_8b = 0;
  uStack_8a = 0;
  local_98 = 0x10;
  uStack_97 = 0x70616853786f42;
  local_90 = 0x65;
  cStack_8f = 0;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xf0,8);
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  plVar7[6] = (long)FUN_01066460;
  plVar7[7] = (long)FUN_01066500;
  *plVar7 = (long)&PTR_FUN_041ef508;
  plVar7[0xc] = (long)"m_pos";
  plVar7[0xd] = 0x10;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  plVar7[0xe] = (long)"m_rot";
  plVar7[0xf] = 0x20;
  plVar7[10] = 0;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x10] = (long)"m_extend";
  plVar7[0x11] = 0x30;
  plVar7[0x12] = (long)&DAT_038ca815;
  plVar7[0x13] = (long)&DAT_0392da3c;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x16] = (long)FUN_010666d4;
  plVar7[0x17] = (long)&LAB_010669b4;
  plVar7[0x18] = (long)&LAB_0104cd70;
  plVar7[0x19] = (long)&LAB_0104cd80;
  plVar7[0x1a] = 0;
  *(undefined1 *)(plVar7 + 0x1c) = 1;
  plVar7[8] = 0;
  plVar7[9] = 0;
  local_1b8 = 10;
  *(undefined1 *)((undefined4 *)((ulong)&local_1b8 | 1) + 1) = 0x73;
  *(undefined4 *)((ulong)&local_1b8 | 1) = 0x6f705f6d;
  local_198 = &LAB_01066cac;
  local_1aa = 0;
  uStack_1b3 = uStack_1b3 & 0xff;
  local_1af = 0;
  uStack_1ab = 0;
  local_190 = 0xffffffff;
  local_188 = 10;
  local_1a8 = 0;
  puStack_1a0 = &LAB_01066c90;
  cStack_183 = 0x74;
  local_187 = 0x5f6d;
  cStack_185 = 0x72;
  cStack_184 = 0x6f;
  local_168 = &LAB_01066cd0;
  local_138 = &LAB_01066d08;
  uStack_17a = 0;
  cStack_182 = 0;
  cStack_181 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_17b = 0;
  local_160 = 0xffffffff;
  local_158 = 0x10;
  uStack_14f = 0;
  uStack_14b = 0;
  uStack_14a = 0;
  local_130 = 0xffffffff;
  local_178 = 0;
  local_170 = &LAB_01066cc8;
  local_157 = 0x5f6d;
  uStack_155 = 0x65;
  uStack_154 = 0x78;
  uStack_153 = 0x646e6574;
  local_148 = 0;
  puStack_140 = &LAB_01066cec;
  local_128 = 6;
  uStack_125 = 0x77;
  local_127 = 0x656e;
  uStack_11b = 0;
  uStack_11a = 0;
  uStack_124 = 0;
  uStack_123 = 0;
  uStack_11f = uStack_11f & 0xff000000;
  local_108 = &LAB_01066d6c;
  local_100 = 0xffffffff;
  local_f8 = 8;
  local_118 = 0;
  puStack_110 = &LAB_01066d24;
  local_f7 = 0x5f5f;
  uStack_f5 = 0x67;
  uStack_f4 = 99;
  uStack_f3 = 0;
  uStack_ec = 0;
  local_d8 = &LAB_01066dfc;
  local_d0 = 0xffffffff;
  local_e8 = 0;
  puStack_e0 = &LAB_01066db4;
  FUN_0104cf4c(plVar13,&local_1b8,5);
  lVar8 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar13,lVar8 + lVar14);
    if (lVar9 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar9);
      lVar9 = local_80[0];
      plVar17 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar9 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar9 + 0x20), lVar19 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar17;
          }
          uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar19,0,8);
              goto LAB_0104a1d8;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
        }
LAB_0104a1d8:
        plVar17 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar17;
        }
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar9,0,8);
            goto LAB_0104a134;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
      }
    }
LAB_0104a134:
    lVar9 = local_e8;
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  *(undefined1 *)(plVar7 + 0xb) = 1;
  plVar13 = DAT_043f1798;
  lVar14 = local_118;
  if (((local_f8 & 1) != 0) && (local_e8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar9,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_118;
        goto joined_r0x0104a338;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar9,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_118;
  }
joined_r0x0104a338:
  lVar8 = local_148;
  local_118 = lVar14;
  if (((local_128 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_148;
        goto joined_r0x0104aaa0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_148;
  }
joined_r0x0104aaa0:
  lVar14 = local_178;
  local_148 = lVar8;
  if (((local_158 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_178;
        goto joined_r0x0104a498;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_178;
  }
joined_r0x0104a498:
  lVar8 = local_1a8;
  local_178 = lVar14;
  if (((local_188 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_1a8;
        goto joined_r0x0104aae0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_1a8;
  }
joined_r0x0104aae0:
  DAT_043f1798 = plVar13;
  local_1a8 = lVar8;
  if (((local_1b8 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        goto LAB_0104a5f4;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
  }
LAB_0104a5f4:
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar7)(plVar7,uVar16);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar10 = local_88;
  }
  FUN_001522a0(uVar16,uVar10);
  uVar10 = local_88;
  plVar7 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        goto LAB_0104a6f0;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
LAB_0104a6f0:
  plVar7 = DAT_043f1798;
  uStack_8a = 0;
  local_98 = 0x18;
  local_88 = 0;
  cStack_8f = 0x68;
  cStack_8e = 0x61;
  cStack_8d = 0x70;
  cStack_8c = 0x65;
  uStack_97 = s_CapsuleShape_039744cc._0_7_;
  local_90 = s_CapsuleShape_039744cc[7];
  cStack_8b = 0;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x100,8);
  plVar7[4] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  plVar7[10] = 0;
  plVar7[6] = (long)FUN_0106ed70;
  plVar7[7] = (long)FUN_0106ee10;
  *plVar7 = (long)&PTR_FUN_041ef530;
  plVar7[0xc] = (long)"m_pos";
  plVar7[0xd] = 0x10;
  plVar7[0xe] = (long)"m_rot";
  plVar7[0xf] = 0x20;
  plVar7[0x10] = (long)&DAT_0393a4c6;
  plVar7[0x11] = 0x30;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x12] = (long)"m_height";
  plVar7[0x13] = 0x34;
  plVar7[0x14] = (long)&DAT_038ca815;
  plVar7[0x15] = (long)&DAT_0392da3c;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x18] = (long)FUN_0106efa0;
  plVar7[0x19] = (long)&LAB_0106f280;
  plVar7[0x1a] = (long)&LAB_0104cd70;
  plVar7[0x1b] = (long)&LAB_0104cd80;
  plVar7[0x1c] = 0;
  *(undefined1 *)(plVar7 + 0x1e) = 1;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  local_1b8 = 10;
  *(undefined1 *)((undefined4 *)((ulong)&local_1b8 | 1) + 1) = 0x73;
  *(undefined4 *)((ulong)&local_1b8 | 1) = 0x6f705f6d;
  local_198 = &LAB_0106f578;
  local_1aa = 0;
  uStack_1b3 = uStack_1b3 & 0xff;
  local_1af = 0;
  uStack_1ab = 0;
  local_190 = 0xffffffff;
  local_188 = 10;
  local_1a8 = 0;
  puStack_1a0 = &LAB_0106f55c;
  cStack_183 = 0x74;
  local_187 = 0x5f6d;
  cStack_185 = 0x72;
  cStack_184 = 0x6f;
  local_168 = &LAB_0106f59c;
  uStack_17a = 0;
  cStack_182 = 0;
  cStack_181 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_17b = 0;
  local_160 = 0xffffffff;
  local_178 = 0;
  local_170 = &LAB_0106f594;
  local_158 = 6;
  uStack_155 = 0x72;
  local_157 = 0x5f6d;
  local_128 = 0x10;
  local_138 = &LAB_0106f5d4;
  uStack_14b = 0;
  uStack_14a = 0;
  uStack_154 = 0;
  uStack_153 = 0;
  uStack_14f = 0;
  local_130 = 0xffffffff;
  local_148 = 0;
  puStack_140 = &LAB_0106f5b8;
  local_127 = 0x5f6d;
  uStack_125 = 0x68;
  uStack_124 = 0x65;
  uStack_123 = 0x74686769;
  local_f8 = 6;
  uStack_11f = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_108 = &LAB_0106f60c;
  local_100 = 0xffffffff;
  local_118 = 0;
  puStack_110 = &LAB_0106f5f0;
  uStack_f5 = 0x77;
  local_f7 = 0x656e;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  local_d8 = &LAB_0106f670;
  local_d0 = 0xffffffff;
  local_c8 = 8;
  local_e8 = 0;
  puStack_e0 = &LAB_0106f628;
  local_c7 = 0x63675f5f;
  local_c3 = 0;
  uStack_bc = 0;
  local_a8 = &LAB_0106f700;
  local_a0 = 0xffffffff;
  local_b8 = 0;
  puStack_b0 = &LAB_0106f6b8;
  FUN_0104cf4c(plVar13,&local_1b8,6);
  lVar8 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar13,lVar8 + lVar14);
    if (lVar9 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar9);
      lVar9 = local_80[0];
      plVar17 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar9 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar9 + 0x20), lVar19 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar17;
          }
          uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar19,0,8);
              goto LAB_0104ae70;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
        }
LAB_0104ae70:
        plVar17 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar17;
        }
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar9,0,8);
            goto LAB_0104add4;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
      }
    }
LAB_0104add4:
    lVar9 = local_b8;
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  *(undefined1 *)(plVar7 + 0xb) = 1;
  plVar13 = DAT_043f1798;
  lVar14 = local_e8;
  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar9,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_e8;
        goto joined_r0x0104afd0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar9,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_e8;
  }
joined_r0x0104afd0:
  lVar8 = local_118;
  local_e8 = lVar14;
  if (((local_f8 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_118;
        goto joined_r0x0104b790;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_118;
  }
joined_r0x0104b790:
  lVar14 = local_148;
  local_118 = lVar8;
  if (((local_128 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_148;
        goto joined_r0x0104b130;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_148;
  }
joined_r0x0104b130:
  lVar8 = local_178;
  local_148 = lVar14;
  if (((local_158 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_178;
        goto joined_r0x0104b7d0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_178;
  }
joined_r0x0104b7d0:
  lVar14 = local_1a8;
  local_178 = lVar8;
  if (((local_188 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_1a8;
        goto joined_r0x0104b290;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_1a8;
  }
joined_r0x0104b290:
  DAT_043f1798 = plVar13;
  local_1a8 = lVar14;
  if (((local_1b8 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        goto LAB_0104b33c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
  }
LAB_0104b33c:
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar7)(plVar7,uVar16);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar10 = local_88;
  }
  FUN_001522a0(uVar16,uVar10);
  uVar10 = local_88;
  plVar7 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        goto LAB_0104b438;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
LAB_0104b438:
  plVar7 = DAT_043f1798;
  cStack_8b = 0;
  uStack_8a = 0;
  local_98 = 0x16;
  cStack_8f = 0x65;
  cStack_8e = 0x33;
  cStack_8d = 0x44;
  local_88 = 0;
  uStack_97 = s_DebugLine3D_039b4994._0_7_;
  local_90 = s_DebugLine3D_039b4994[7];
  cStack_8c = 0;
  plVar13 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar13 = plVar7;
  }
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xe8,8);
  plVar7[4] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  plVar7[10] = 0;
  plVar7[6] = (long)FUN_01073b40;
  plVar7[7] = (long)FUN_01073be0;
  *plVar7 = (long)&PTR_FUN_041ef558;
  plVar7[0xc] = (long)"SetColor";
  plVar7[0xd] = (long)&LAB_02b4467c;
  plVar7[0xe] = (long)"SetLineWidth";
  plVar7[0xf] = (long)&LAB_02b44348;
  plVar7[0x10] = (long)&DAT_039744d9;
  plVar7[0x11] = (long)&DAT_038ca815;
  plVar7[0x14] = 0;
  plVar7[0x15] = (long)FUN_01073db4;
  plVar7[0x16] = (long)&LAB_01074094;
  plVar7[0x17] = (long)&LAB_0104cd70;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1a] = 0;
  *(undefined1 *)(plVar7 + 0x1b) = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[0x12] = (long)&DAT_0392da3c;
  plVar7[0x13] = 0;
  plVar7[0x18] = (long)&LAB_0104cd80;
  plVar7[0x19] = 0;
  local_1b8 = 0x10;
  local_187 = s_SetLineWidth_03a7376c._0_2_;
  cStack_185 = s_SetLineWidth_03a7376c[2];
  cStack_184 = s_SetLineWidth_03a7376c[3];
  cStack_183 = s_SetLineWidth_03a7376c[4];
  cStack_182 = s_SetLineWidth_03a7376c[5];
  cStack_181 = s_SetLineWidth_03a7376c[6];
  local_1b7 = 0x43746553;
  uStack_1b3 = 0x726f6c6f;
  local_198 = &LAB_010743b8;
  local_1af = 0;
  uStack_1ab = 0;
  local_1aa = 0;
  local_190 = 0xffffffff;
  uStack_17b = 0;
  uStack_17a = 0;
  local_160 = 0xffffffff;
  local_158 = 8;
  uStack_14b = 0;
  uStack_14a = 0;
  uStack_153 = 0;
  uStack_14f = 0;
  local_130 = 0xffffffff;
  local_178 = 0;
  local_170 = &LAB_01074400;
  local_157 = 0x7244;
  uStack_155 = 0x61;
  uStack_154 = 0x77;
  local_1a8 = 0;
  puStack_1a0 = &LAB_01074370;
  local_188 = 0x18;
  uStack_180 = CONCAT31(0x746469,s_SetLineWidth_03a7376c[7]);
  uStack_17c = 0x68;
  local_168 = &LAB_01074448;
  local_138 = &LAB_010744d8;
  local_148 = 0;
  puStack_140 = &LAB_01074490;
  local_128 = 6;
  uStack_125 = 0x77;
  local_127 = 0x656e;
  uStack_124 = 0;
  uStack_123 = 0;
  uStack_11f = 0;
  uStack_11b = 0;
  uStack_11a = 0;
  local_108 = &LAB_01074568;
  local_100 = 0xffffffff;
  local_f8 = 8;
  local_118 = 0;
  puStack_110 = &LAB_01074520;
  local_f7 = 0x5f5f;
  uStack_f5 = 0x67;
  uStack_f4 = 99;
  uStack_f3 = 0;
  uStack_ec = 0;
  local_d8 = &LAB_010745f8;
  local_d0 = 0xffffffff;
  local_e8 = 0;
  puStack_e0 = &LAB_010745b0;
  FUN_0104cf4c(plVar13,&local_1b8,5);
  lVar8 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar13,lVar8 + lVar14);
    if (lVar9 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar9);
      lVar9 = local_80[0];
      plVar17 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar9 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar9 + 0x20), lVar19 != 0)) {
          plVar18 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar18 = plVar17;
          }
          uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar19,0,8);
              goto LAB_0104bbc4;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
        }
LAB_0104bbc4:
        plVar17 = DAT_043f1798;
        plVar18 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar18 = plVar17;
        }
        uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar9,0,8);
            goto LAB_0104bb28;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar9,0,8);
      }
    }
LAB_0104bb28:
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  pcVar15 = (char *)plVar7[0xc];
  sVar12 = strlen(pcVar15);
  iVar2 = FUN_008f2c60(sVar12,pcVar15);
  pcVar15 = (char *)plVar7[0xe];
  sVar12 = strlen(pcVar15);
  iVar3 = FUN_008f2c60(sVar12,pcVar15);
  pcVar15 = (char *)plVar7[0x10];
  sVar12 = strlen(pcVar15);
  iVar4 = FUN_008f2c60(sVar12,pcVar15);
  pcVar15 = (char *)plVar7[0x11];
  sVar12 = strlen(pcVar15);
  iVar5 = FUN_008f2c60(sVar12,pcVar15);
  pcVar15 = (char *)plVar7[0x12];
  sVar12 = strlen(pcVar15);
  iVar6 = FUN_008f2c60(sVar12,pcVar15);
  lVar8 = local_e8;
  *(bool *)(plVar7 + 0xb) = (((iVar3 != 0 || iVar2 != 0) || iVar4 != 0) || iVar5 != 0) || iVar6 != 0
  ;
  plVar13 = DAT_043f1798;
  lVar14 = local_118;
  if (((local_f8 & 1) != 0) && (local_e8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_118;
        goto joined_r0x0104bda0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_118;
  }
joined_r0x0104bda0:
  lVar8 = local_148;
  local_118 = lVar14;
  if (((local_128 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_148;
        goto joined_r0x0104c224;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_148;
  }
joined_r0x0104c224:
  lVar14 = local_178;
  local_148 = lVar8;
  if (((local_158 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        plVar13 = DAT_043f1798;
        lVar14 = local_178;
        goto joined_r0x0104bf00;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
    plVar13 = DAT_043f1798;
    lVar14 = local_178;
  }
joined_r0x0104bf00:
  lVar8 = local_1a8;
  local_178 = lVar14;
  if (((local_188 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar13 = DAT_043f1798;
        lVar8 = local_1a8;
        goto joined_r0x0104c264;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar13 = DAT_043f1798;
    lVar8 = local_1a8;
  }
joined_r0x0104c264:
  DAT_043f1798 = plVar13;
  local_1a8 = lVar8;
  if (((local_1b8 & 1) != 0) && (lVar8 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar13;
      plVar17 = plVar13;
    }
    uVar10 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar8,0,8);
        goto LAB_0104c05c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar8,0,8);
  }
LAB_0104c05c:
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar7)(plVar7,uVar16);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar10 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar10 = local_88;
  }
  FUN_001522a0(uVar16,uVar10);
  uVar10 = local_88;
  plVar7 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar7;
    }
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        return;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
  return;
}


