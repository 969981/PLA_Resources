/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f9d930; name: FUN_00f9d930
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f9d930(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined7 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  size_t sVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  undefined2 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  char *pcVar30;
  undefined8 uVar31;
  long *plVar32;
  void *pvVar33;
  long lVar34;
  byte local_2e0;
  char acStack_2df [7];
  char local_2d8;
  char acStack_2d7 [7];
  ulong local_2d0;
  undefined7 local_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined7 local_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  byte local_2a8;
  undefined2 local_2a7;
  char cStack_2a5;
  undefined5 uStack_2a4;
  undefined2 uStack_29f;
  undefined1 uStack_29d;
  undefined4 local_29c;
  long local_298;
  undefined1 *puStack_290;
  undefined1 *local_288;
  undefined4 local_280;
  byte local_278;
  undefined2 local_277;
  char cStack_275;
  char cStack_274;
  undefined2 uStack_273;
  undefined2 uStack_271;
  undefined4 uStack_26f;
  undefined2 uStack_26b;
  undefined1 uStack_269;
  long local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  undefined4 local_250;
  byte local_248;
  undefined4 local_247;
  undefined4 uStack_243;
  undefined4 uStack_23f;
  undefined3 uStack_23b;
  void *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined4 local_220;
  byte local_218;
  undefined5 local_217;
  undefined2 uStack_212;
  char cStack_210;
  undefined5 uStack_20f;
  undefined2 local_20a;
  void *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  byte local_1e8;
  char acStack_1e7 [5];
  char local_1e2 [3];
  char acStack_1df [5];
  undefined2 local_1da;
  long local_1d8;
  undefined1 *puStack_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  byte local_1b8;
  char acStack_1b7 [7];
  char local_1b0;
  char acStack_1af [7];
  long local_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  byte local_188;
  char local_187 [7];
  char cStack_180;
  char acStack_17f [7];
  long local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  byte local_158;
  char local_157 [7];
  char cStack_150;
  char acStack_14f [7];
  long local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  byte local_128;
  char local_127 [7];
  char cStack_120;
  char acStack_11f [7];
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
  char local_c7 [7];
  char cStack_c0;
  char acStack_bf [7];
  long local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  byte local_98;
  undefined7 uStack_97;
  char local_90;
  undefined2 uStack_8f;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  plVar19 = DAT_043f1798;
  uStack_8d = 0;
  uStack_8c = 0;
  local_98 = 0x12;
  local_88 = (void *)0x0;
  uStack_97 = s_FnvHash64_039bdc94._0_7_;
  local_90 = s_FnvHash64_039bdc94[7];
  uStack_8f = 0x34;
  lVar1 = tpidr_el0;
  plVar24 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar24 = plVar19;
  }
  plVar19 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xd0,8);
  plVar19[4] = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar24 = plVar19 + 1;
  *plVar24 = 0;
  plVar19[6] = (long)FUN_00fa1ee0;
  plVar19[7] = (long)FUN_00fa1f80;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  *plVar19 = (long)&PTR_FUN_041eef38;
  plVar19[0xc] = (long)&DAT_038ca815;
  plVar19[0xd] = (long)"GetEmptyString";
  plVar19[0xe] = (long)&LAB_00fa1938;
  plVar19[0xf] = (long)&DAT_0392da3c;
  plVar19[10] = 0;
  plVar19[0x12] = (long)FUN_00fa2110;
  plVar19[0x13] = (long)&LAB_00fa23f0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  plVar19[0x19] = 0;
  *(undefined1 *)(plVar19 + 0x18) = 0;
  plVar19[0x10] = 0;
  plVar19[0x11] = 0;
  plVar19[0x14] = (long)&LAB_00fa26d0;
  plVar19[0x15] = (long)&LAB_00fa26e0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0;
  local_2a8 = 6;
  puVar27 = (undefined2 *)((ulong)&local_2a8 | 1);
  local_2a7 = 0x656e;
  cStack_2a5 = 0x77;
  puVar28 = (undefined8 *)((ulong)&local_2a8 | 4);
  local_288 = &LAB_00fa272c;
  uStack_2a4 = 0;
  uStack_29f = 0;
  uStack_29d = 0;
  local_29c = 0;
  local_280 = 0xffffffff;
  uStack_269 = 0;
  local_250 = 0xffffffff;
  local_248 = 8;
  local_298 = 0;
  puStack_290 = &LAB_00fa26e4;
  local_278 = 0x1c;
  local_277 = s_GetEmptyString_038a4ba9._0_2_;
  cStack_275 = s_GetEmptyString_038a4ba9[2];
  cStack_274 = s_GetEmptyString_038a4ba9[3];
  uStack_273 = s_GetEmptyString_038a4ba9._4_2_;
  uStack_271._0_1_ = s_GetEmptyString_038a4ba9[6];
  uStack_271._1_1_ = s_GetEmptyString_038a4ba9[7];
  uStack_26f = s_GetEmptyString_038a4ba9._8_4_;
  uStack_26b = s_GetEmptyString_038a4ba9._12_2_;
  local_258 = &LAB_00fa27bc;
  local_268 = 0;
  puStack_260 = &LAB_00fa2774;
  local_247 = 0x63675f5f;
  uStack_23b = 0;
  uStack_243 = 0;
  uStack_23f = 0;
  local_228 = &LAB_00fa284c;
  local_220 = 0xffffffff;
  local_238 = (void *)0x0;
  local_230 = &LAB_00fa2804;
  FUN_00fa2894(plVar24,&local_2a8,3);
  lVar20 = FUN_008cca50();
  lVar29 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar24,lVar20 + lVar29);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar21);
      plVar32 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar21 + 0x20), lVar34 != 0)) {
          plVar26 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar26 = plVar32;
          }
          uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar22 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar34,0,8);
              goto LAB_00f9dc28;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar34,0,8);
        }
LAB_00f9dc28:
        plVar32 = DAT_043f1798;
        plVar26 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar26 = plVar32;
        }
        uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar22 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar21,0,8);
            goto LAB_00f9db8c;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar21,0,8);
      }
    }
LAB_00f9db8c:
    lVar29 = lVar29 + 0x18;
  } while (lVar29 != 0x300);
  pcVar30 = (char *)plVar19[0xc];
  sVar23 = strlen(pcVar30);
  iVar8 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xd];
  sVar23 = strlen(pcVar30);
  iVar9 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xf];
  sVar23 = strlen(pcVar30);
  iVar10 = FUN_008f2c60(sVar23,pcVar30);
  pvVar33 = local_238;
  *(bool *)(plVar19 + 0xb) = (iVar9 != 0 || iVar8 != 0) || iVar10 != 0;
  plVar24 = DAT_043f1798;
  lVar29 = local_268;
  if (((local_248 & 1) != 0) && (local_238 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar33,0,8);
        plVar24 = DAT_043f1798;
        lVar29 = local_268;
        goto joined_r0x00f9ddc8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar33,0,8);
    plVar24 = DAT_043f1798;
    lVar29 = local_268;
  }
joined_r0x00f9ddc8:
  lVar20 = local_298;
  local_268 = lVar29;
  if (((local_278 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar24;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar24 = DAT_043f1798;
        lVar20 = local_298;
        goto joined_r0x00f9e740;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar24 = DAT_043f1798;
    lVar20 = local_298;
  }
joined_r0x00f9e740:
  DAT_043f1798 = plVar24;
  local_298 = lVar20;
  if (((local_2a8 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        goto LAB_00f9df24;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
  }
LAB_00f9df24:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar19)(plVar19,uVar31);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  pvVar33 = (void *)((ulong)&local_98 | 1);
  if ((local_98 & 1) != 0) {
    pvVar33 = local_88;
  }
  FUN_001522a0(uVar31,pvVar33);
  pvVar33 = local_88;
  plVar19 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != (void *)0x0)) {
    plVar24 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar24 = plVar19;
    }
    uVar22 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar33,0,8);
        goto LAB_00f9e020;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar33,0,8);
  }
LAB_00f9e020:
  plVar19 = DAT_043f1798;
  local_2e0 = 0x1e;
  acStack_2df[0] = s_TransformObject_0388eb3d[0];
  acStack_2df[1] = s_TransformObject_0388eb3d[1];
  acStack_2df[2] = s_TransformObject_0388eb3d[2];
  acStack_2df[3] = s_TransformObject_0388eb3d[3];
  acStack_2df[4] = s_TransformObject_0388eb3d[4];
  acStack_2df[5] = s_TransformObject_0388eb3d[5];
  acStack_2df[6] = s_TransformObject_0388eb3d[6];
  local_2d8 = s_TransformObject_0388eb3d[7];
  acStack_2d7[0] = s_TransformObject_0388eb3d[8];
  acStack_2d7[1] = s_TransformObject_0388eb3d[9];
  acStack_2d7[2] = s_TransformObject_0388eb3d[10];
  acStack_2d7[3] = s_TransformObject_0388eb3d[0xb];
  acStack_2d7[4] = s_TransformObject_0388eb3d[0xc];
  acStack_2d7[5] = s_TransformObject_0388eb3d[0xd];
  acStack_2d7[6] = s_TransformObject_0388eb3d[0xe];
  local_2d0 = 0;
  plVar24 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar24 = plVar19;
  }
  plVar24 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x1a0,8);
  plVar24[4] = 0;
  plVar24[2] = 0;
  plVar24[3] = 0;
  plVar32 = plVar24 + 1;
  *plVar32 = 0;
  plVar24[6] = (long)FUN_00fa75f0;
  plVar24[7] = (long)FUN_00fa7690;
  *plVar24 = (long)&PTR_FUN_041eef60;
  plVar24[0xc] = (long)&DAT_038ca815;
  *(undefined4 *)(plVar24 + 5) = 0x3f800000;
  plVar24[0xd] = (long)&DAT_0392da3c;
  plVar24[0xf] = (long)"SetLocalScale";
  plVar24[0x10] = (long)&LAB_00fa194c;
  plVar24[0x11] = 0;
  plVar24[0x12] = (long)"GetLocalScale";
  plVar24[0x15] = (long)"GetWorldScale";
  plVar24[0x16] = (long)&LAB_00fa1970;
  plVar24[0x17] = 0;
  plVar24[0x18] = (long)"SetLocalRotation";
  plVar24[8] = 0;
  plVar24[9] = 0;
  plVar24[10] = 0;
  *(undefined1 *)(plVar24 + 0xb) = 0;
  *(undefined1 *)(plVar24 + 0xe) = 0;
  plVar24[0x13] = (long)&LAB_00fa1968;
  plVar24[0x14] = 0;
  plVar24[0x19] = (long)&LAB_00fa19e4;
  plVar24[0x1a] = 0;
  puVar3 = PTR_FUN_0437d980;
  plVar24[0x1b] = (long)"GetLocalRotation";
  plVar24[0x1c] = (long)puVar3;
  plVar24[0x1d] = 0;
  plVar24[0x1e] = (long)"GetWorldRotation";
  plVar24[0x1f] = (long)FUN_00fa1a08;
  plVar24[0x20] = 0;
  puVar3 = PTR_FUN_0437d988;
  plVar24[0x21] = (long)"SetLocalTranslation";
  plVar24[0x22] = (long)puVar3;
  puVar3 = PTR_FUN_0437d990;
  plVar24[0x33] = 0;
  plVar24[0x31] = 0;
  *(undefined1 *)(plVar24 + 0x32) = 0;
  plVar24[0x25] = (long)puVar3;
  plVar24[0x26] = 0;
  plVar24[0x2b] = 0;
  plVar24[0x2c] = (long)FUN_00fa7820;
  plVar24[0x2d] = (long)&LAB_00fa7b00;
  plVar24[0x2e] = (long)&LAB_00fa26d0;
  plVar24[0x2f] = (long)&LAB_00fa26e0;
  plVar24[0x30] = 0;
  plVar24[0x23] = 0;
  plVar24[0x24] = (long)"GetLocalTranslation";
  plVar24[0x27] = (long)"GetWorldTranslation";
  plVar24[0x28] = (long)FUN_00fa1c50;
  plVar24[0x29] = 0;
  plVar24[0x2a] = 0;
  local_2a8 = 6;
  local_2a7 = 0x656e;
  cStack_2a5 = 0x77;
  local_288 = &LAB_00fa7e24;
  uStack_2a4 = 0;
  uStack_29f = 0;
  uStack_29d = 0;
  local_29c = 0;
  local_278 = 8;
  uStack_273 = 0;
  uStack_271 = 0;
  uStack_26f = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  local_258 = &LAB_00fa7eb4;
  local_298 = 0;
  puStack_290 = &LAB_00fa7ddc;
  local_280 = 0xffffffff;
  local_277 = 0x5f5f;
  cStack_275 = 0x67;
  cStack_274 = 99;
  local_250 = 0xffffffff;
  local_268 = 0;
  puStack_260 = &LAB_00fa7e6c;
  pcVar30 = (char *)plVar24[0xf];
  sVar23 = strlen(pcVar30);
  plVar19 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar23) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar23 < 0x17) {
    local_80 = (byte)((int)sVar23 << 1);
    pvVar33 = (void *)((ulong)&local_80 | 1);
    if (sVar23 != 0) goto LAB_00f9e2b0;
  }
  else {
    uVar22 = sVar23 + 0x10 & 0xfffffffffffffff0;
    plVar26 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar26 = plVar19;
    }
    pvVar33 = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar22,8);
    local_80 = (byte)uVar22 | 1;
    uStack_7f = (undefined7)(uVar22 >> 8);
    local_78 = (undefined1)sVar23;
    uStack_77 = (undefined7)(sVar23 >> 8);
    local_70 = pvVar33;
LAB_00f9e2b0:
    memcpy(pvVar33,pcVar30,sVar23);
  }
  local_238 = local_70;
  uVar7 = uStack_77;
  uVar6 = local_78;
  uVar4 = uStack_7f;
  local_248 = local_80;
  *(undefined1 *)((long)pvVar33 + sVar23) = 0;
  local_80 = 0;
  uStack_7f = 0;
  local_247 = (undefined4)uVar4;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_2b8 = 0;
  uStack_243._0_3_ = (undefined3)((uint7)uVar4 >> 0x20);
  uStack_243 = CONCAT13(uVar6,(undefined3)uStack_243);
  uStack_23f = (undefined4)uVar7;
  uStack_23b = (undefined3)((uint7)uVar7 >> 0x20);
  local_230 = &LAB_00fa7efc;
  local_228 = &LAB_00fa7f44;
  uStack_2b1 = 0;
  uStack_2b0 = 0;
  local_220 = 0xffffffff;
  pcVar30 = (char *)plVar24[0x12];
  sVar23 = strlen(pcVar30);
  plVar19 = DAT_043f1798;
  local_98 = 0;
  uStack_97 = 0;
  local_90 = 0;
  uStack_8f = 0;
  uStack_8d = 0;
  uStack_8c = 0;
  local_88 = (void *)0x0;
  if (0xffffffffffffffef < sVar23) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar23 < 0x17) {
    local_98 = (byte)((int)sVar23 << 1);
    pvVar33 = (void *)((ulong)&local_98 | 1);
    if (sVar23 != 0) goto LAB_00f9e35c;
  }
  else {
    uVar22 = sVar23 + 0x10 & 0xfffffffffffffff0;
    plVar26 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar26 = plVar19;
    }
    pvVar33 = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar22,8);
    local_98 = (byte)uVar22 | 1;
    uStack_97 = (undefined7)(uVar22 >> 8);
    local_90 = (char)sVar23;
    uStack_8f = (undefined2)(sVar23 >> 8);
    uStack_8d = (undefined1)(sVar23 >> 0x18);
    uStack_8c = (undefined4)(sVar23 >> 0x20);
    local_88 = pvVar33;
LAB_00f9e35c:
    memcpy(pvVar33,pcVar30,sVar23);
  }
  local_208 = local_88;
  uVar5 = uStack_8c;
  cStack_210 = local_90;
  uVar4 = uStack_97;
  local_218 = local_98;
  *(undefined1 *)((long)pvVar33 + sVar23) = 0;
  uVar31 = CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,local_90)));
  local_90 = 0;
  uStack_8f = 0;
  uStack_8d = 0;
  uStack_8c = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  uStack_97 = 0;
  local_217 = (undefined5)uVar4;
  uStack_212 = (undefined2)((uint7)uVar4 >> 0x28);
  uStack_20f = (undefined5)((ulong)uVar31 >> 8);
  local_20a = (undefined2)((uint)uVar5 >> 0x10);
  local_1f0 = 0xffffffff;
  local_2c8 = 0;
  uStack_2c1 = 0;
  uStack_2c0 = 0;
  local_200 = &LAB_00fa7f8c;
  local_1f8 = &LAB_00fa7fd4;
  local_1e8 = 0x1a;
  acStack_1df[0] = s_GetWorldScale_0394d57f[8];
  acStack_1df[1] = s_GetWorldScale_0394d57f[9];
  acStack_1df[2] = s_GetWorldScale_0394d57f[10];
  acStack_1df[3] = s_GetWorldScale_0394d57f[0xb];
  acStack_1df[4] = s_GetWorldScale_0394d57f[0xc];
  acStack_1e7[0] = s_GetWorldScale_0394d57f[0];
  acStack_1e7[1] = s_GetWorldScale_0394d57f[1];
  acStack_1e7[2] = s_GetWorldScale_0394d57f[2];
  acStack_1e7[3] = s_GetWorldScale_0394d57f[3];
  acStack_1e7[4] = s_GetWorldScale_0394d57f[4];
  local_1e2[0] = s_GetWorldScale_0394d57f[5];
  local_1e2[1] = s_GetWorldScale_0394d57f[6];
  local_1e2[2] = s_GetWorldScale_0394d57f[7];
  local_1c8 = &LAB_00fa8064;
  local_1da = 0;
  local_1c0 = 0xffffffff;
  acStack_1af[0] = s_SetLocalRotation_03987829[8];
  acStack_1af[1] = s_SetLocalRotation_03987829[9];
  acStack_1af[2] = s_SetLocalRotation_03987829[10];
  acStack_1af[3] = s_SetLocalRotation_03987829[0xb];
  acStack_1af[4] = s_SetLocalRotation_03987829[0xc];
  acStack_1af[5] = s_SetLocalRotation_03987829[0xd];
  acStack_1af[6] = s_SetLocalRotation_03987829[0xe];
  local_1d8 = 0;
  puStack_1d0 = &LAB_00fa801c;
  local_1b8 = 0x20;
  acStack_1b7[0] = s_SetLocalRotation_03987829[0];
  acStack_1b7[1] = s_SetLocalRotation_03987829[1];
  acStack_1b7[2] = s_SetLocalRotation_03987829[2];
  acStack_1b7[3] = s_SetLocalRotation_03987829[3];
  acStack_1b7[4] = s_SetLocalRotation_03987829[4];
  acStack_1b7[5] = s_SetLocalRotation_03987829[5];
  acStack_1b7[6] = s_SetLocalRotation_03987829[6];
  local_1b0 = s_SetLocalRotation_03987829[7];
  local_198 = &LAB_00fa80f4;
  local_190 = 0xffffffff;
  local_188 = 0x20;
  local_1a8 = 0x6e;
  puStack_1a0 = &LAB_00fa80ac;
  local_187[0] = s_GetLocalRotation_039bdc9e[0];
  local_187[1] = s_GetLocalRotation_039bdc9e[1];
  local_187[2] = s_GetLocalRotation_039bdc9e[2];
  local_187[3] = s_GetLocalRotation_039bdc9e[3];
  local_187[4] = s_GetLocalRotation_039bdc9e[4];
  local_187[5] = s_GetLocalRotation_039bdc9e[5];
  local_187[6] = s_GetLocalRotation_039bdc9e[6];
  local_158 = 0x20;
  local_160 = 0xffffffff;
  cStack_180 = s_GetLocalRotation_039bdc9e[7];
  acStack_17f[0] = s_GetLocalRotation_039bdc9e[8];
  acStack_17f[1] = s_GetLocalRotation_039bdc9e[9];
  acStack_17f[2] = s_GetLocalRotation_039bdc9e[10];
  acStack_17f[3] = s_GetLocalRotation_039bdc9e[0xb];
  acStack_17f[4] = s_GetLocalRotation_039bdc9e[0xc];
  acStack_17f[5] = s_GetLocalRotation_039bdc9e[0xd];
  acStack_17f[6] = s_GetLocalRotation_039bdc9e[0xe];
  local_178 = 0x6e;
  local_170 = &LAB_00fa813c;
  puStack_168 = &LAB_00fa8184;
  local_157[0] = s_GetWorldRotation_0396af68[0];
  local_157[1] = s_GetWorldRotation_0396af68[1];
  local_157[2] = s_GetWorldRotation_0396af68[2];
  local_157[3] = s_GetWorldRotation_0396af68[3];
  local_157[4] = s_GetWorldRotation_0396af68[4];
  local_157[5] = s_GetWorldRotation_0396af68[5];
  local_157[6] = s_GetWorldRotation_0396af68[6];
  local_130 = 0xffffffff;
  cStack_150 = s_GetWorldRotation_0396af68[7];
  acStack_14f[0] = s_GetWorldRotation_0396af68[8];
  acStack_14f[1] = s_GetWorldRotation_0396af68[9];
  acStack_14f[2] = s_GetWorldRotation_0396af68[10];
  acStack_14f[3] = s_GetWorldRotation_0396af68[0xb];
  acStack_14f[4] = s_GetWorldRotation_0396af68[0xc];
  acStack_14f[5] = s_GetWorldRotation_0396af68[0xd];
  acStack_14f[6] = s_GetWorldRotation_0396af68[0xe];
  local_148 = 0x6e;
  local_140 = &LAB_00fa81cc;
  puStack_138 = &LAB_00fa8214;
  local_128 = 0x26;
  local_127[0] = s_SetLocalTranslation_03a73a80[0];
  local_127[1] = s_SetLocalTranslation_03a73a80[1];
  local_127[2] = s_SetLocalTranslation_03a73a80[2];
  local_127[3] = s_SetLocalTranslation_03a73a80[3];
  local_127[4] = s_SetLocalTranslation_03a73a80[4];
  local_127[5] = s_SetLocalTranslation_03a73a80[5];
  local_127[6] = s_SetLocalTranslation_03a73a80[6];
  local_108 = &LAB_00fa82a4;
  local_100 = 0xffffffff;
  local_f8 = 0x26;
  cStack_120 = s_SetLocalTranslation_03a73a80[7];
  acStack_11f[0] = s_SetLocalTranslation_03a73a80[8];
  acStack_11f[1] = s_SetLocalTranslation_03a73a80[9];
  acStack_11f[2] = s_SetLocalTranslation_03a73a80[10];
  acStack_11f[3] = s_SetLocalTranslation_03a73a80[0xb];
  acStack_11f[4] = s_SetLocalTranslation_03a73a80[0xc];
  acStack_11f[5] = s_SetLocalTranslation_03a73a80[0xd];
  acStack_11f[6] = s_SetLocalTranslation_03a73a80[0xe];
  local_118 = 0x6e6f6974;
  local_110 = &LAB_00fa825c;
  local_f7[0] = s_GetLocalTranslation_03a73708[0];
  local_f7[1] = s_GetLocalTranslation_03a73708[1];
  local_f7[2] = s_GetLocalTranslation_03a73708[2];
  local_f7[3] = s_GetLocalTranslation_03a73708[3];
  local_f7[4] = s_GetLocalTranslation_03a73708[4];
  local_f7[5] = s_GetLocalTranslation_03a73708[5];
  local_f7[6] = s_GetLocalTranslation_03a73708[6];
  local_e0 = &LAB_00fa82ec;
  local_c8 = 0x26;
  local_e8 = 0x6e6f6974;
  cStack_f0 = s_GetLocalTranslation_03a73708[7];
  acStack_ef[0] = s_GetLocalTranslation_03a73708[8];
  acStack_ef[1] = s_GetLocalTranslation_03a73708[9];
  acStack_ef[2] = s_GetLocalTranslation_03a73708[10];
  acStack_ef[3] = s_GetLocalTranslation_03a73708[0xb];
  acStack_ef[4] = s_GetLocalTranslation_03a73708[0xc];
  acStack_ef[5] = s_GetLocalTranslation_03a73708[0xd];
  acStack_ef[6] = s_GetLocalTranslation_03a73708[0xe];
  local_d8 = &LAB_00fa8334;
  local_d0 = 0xffffffff;
  local_c7[0] = s_GetWorldTranslation_0391da00[0];
  local_c7[1] = s_GetWorldTranslation_0391da00[1];
  local_c7[2] = s_GetWorldTranslation_0391da00[2];
  local_c7[3] = s_GetWorldTranslation_0391da00[3];
  local_c7[4] = s_GetWorldTranslation_0391da00[4];
  local_c7[5] = s_GetWorldTranslation_0391da00[5];
  local_c7[6] = s_GetWorldTranslation_0391da00[6];
  cStack_c0 = s_GetWorldTranslation_0391da00[7];
  acStack_bf[0] = s_GetWorldTranslation_0391da00[8];
  acStack_bf[1] = s_GetWorldTranslation_0391da00[9];
  acStack_bf[2] = s_GetWorldTranslation_0391da00[10];
  acStack_bf[3] = s_GetWorldTranslation_0391da00[0xb];
  acStack_bf[4] = s_GetWorldTranslation_0391da00[0xc];
  acStack_bf[5] = s_GetWorldTranslation_0391da00[0xd];
  acStack_bf[6] = s_GetWorldTranslation_0391da00[0xe];
  local_b0 = &LAB_00fa837c;
  local_b8 = 0x6e6f6974;
  local_a8 = &LAB_00fa83c4;
  local_a0 = 0xffffffff;
  FUN_00fa2894(plVar32,&local_2a8,0xb);
  lVar20 = FUN_008cca50();
  lVar29 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar32,lVar20 + lVar29);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar32,lVar21);
      plVar19 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar21 + 0x20), lVar34 != 0)) {
          plVar26 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar26 = plVar19;
          }
          uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar22 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar34,0,8);
              goto LAB_00f9ea38;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar34,0,8);
        }
LAB_00f9ea38:
        plVar19 = DAT_043f1798;
        plVar26 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar26 = plVar19;
        }
        uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar22 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar21,0,8);
            goto LAB_00f9e99c;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar21,0,8);
      }
    }
LAB_00f9e99c:
    lVar29 = lVar29 + 0x18;
  } while (lVar29 != 0x300);
  pcVar30 = (char *)plVar24[0xc];
  sVar23 = strlen(pcVar30);
  iVar8 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0xd];
  sVar23 = strlen(pcVar30);
  iVar9 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0xf];
  sVar23 = strlen(pcVar30);
  iVar10 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x12];
  sVar23 = strlen(pcVar30);
  iVar11 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x15];
  sVar23 = strlen(pcVar30);
  iVar12 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x18];
  sVar23 = strlen(pcVar30);
  iVar13 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x1b];
  sVar23 = strlen(pcVar30);
  iVar14 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x1e];
  sVar23 = strlen(pcVar30);
  iVar15 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x21];
  sVar23 = strlen(pcVar30);
  iVar16 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x24];
  sVar23 = strlen(pcVar30);
  iVar17 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar24[0x27];
  sVar23 = strlen(pcVar30);
  iVar18 = FUN_008f2c60(sVar23,pcVar30);
  lVar20 = local_b8;
  *(bool *)(plVar24 + 0xb) =
       (((((((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
           iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) ||
       iVar18 != 0;
  plVar19 = DAT_043f1798;
  lVar29 = local_e8;
  if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        plVar19 = DAT_043f1798;
        lVar29 = local_e8;
        goto joined_r0x00f9ec9c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
    plVar19 = DAT_043f1798;
    lVar29 = local_e8;
  }
joined_r0x00f9ec9c:
  lVar20 = local_118;
  local_e8 = lVar29;
  if (((local_f8 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar19 = DAT_043f1798;
        lVar20 = local_118;
        goto joined_r0x00f9f770;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar19 = DAT_043f1798;
    lVar20 = local_118;
  }
joined_r0x00f9f770:
  lVar29 = local_148;
  local_118 = lVar20;
  if (((local_128 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        plVar19 = DAT_043f1798;
        lVar29 = local_148;
        goto joined_r0x00f9edfc;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
    plVar19 = DAT_043f1798;
    lVar29 = local_148;
  }
joined_r0x00f9edfc:
  lVar20 = local_178;
  local_148 = lVar29;
  if (((local_158 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar19 = DAT_043f1798;
        lVar20 = local_178;
        goto joined_r0x00f9f7b0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar19 = DAT_043f1798;
    lVar20 = local_178;
  }
joined_r0x00f9f7b0:
  lVar29 = local_1a8;
  local_178 = lVar20;
  if (((local_188 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        plVar19 = DAT_043f1798;
        lVar29 = local_1a8;
        goto joined_r0x00f9ef5c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
    plVar19 = DAT_043f1798;
    lVar29 = local_1a8;
  }
joined_r0x00f9ef5c:
  lVar20 = local_1d8;
  local_1a8 = lVar29;
  if (((local_1b8 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar19 = DAT_043f1798;
        lVar20 = local_1d8;
        goto joined_r0x00f9f7f0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar19 = DAT_043f1798;
    lVar20 = local_1d8;
  }
joined_r0x00f9f7f0:
  pvVar33 = local_208;
  local_1d8 = lVar20;
  if (((local_1e8 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        plVar19 = DAT_043f1798;
        pvVar33 = local_208;
        goto joined_r0x00f9f0bc;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
    plVar19 = DAT_043f1798;
    pvVar33 = local_208;
  }
joined_r0x00f9f0bc:
  pvVar2 = local_238;
  local_208 = pvVar33;
  if (((local_218 & 1) != 0) && (pvVar33 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar33,0,8);
        plVar19 = DAT_043f1798;
        pvVar2 = local_238;
        goto joined_r0x00f9f830;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar33,0,8);
    plVar19 = DAT_043f1798;
    pvVar2 = local_238;
  }
joined_r0x00f9f830:
  lVar29 = local_268;
  local_238 = pvVar2;
  if (((local_248 & 1) != 0) && (pvVar2 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar2,0,8);
        plVar19 = DAT_043f1798;
        lVar29 = local_268;
        goto joined_r0x00f9f21c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar2,0,8);
    plVar19 = DAT_043f1798;
    lVar29 = local_268;
  }
joined_r0x00f9f21c:
  lVar20 = local_298;
  local_268 = lVar29;
  if (((local_278 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar19 = DAT_043f1798;
        lVar20 = local_298;
        goto joined_r0x00f9f870;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar19 = DAT_043f1798;
    lVar20 = local_298;
  }
joined_r0x00f9f870:
  DAT_043f1798 = plVar19;
  local_298 = lVar20;
  if (((local_2a8 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar19;
      plVar32 = plVar19;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        goto LAB_00f9f378;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
  }
LAB_00f9f378:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar24)(plVar24,uVar31);
  (**(code **)(*plVar24 + 0x10))(plVar24);
  uVar22 = (ulong)&local_2e0 | 1;
  if ((local_2e0 & 1) != 0) {
    uVar22 = local_2d0;
  }
  FUN_001522a0(uVar31,uVar22);
  uVar22 = local_2d0;
  plVar19 = DAT_043f1798;
  if (((local_2e0 & 1) != 0) && (local_2d0 != 0)) {
    plVar24 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar24 = plVar19;
    }
    uVar25 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar24,uVar22,0,8);
        goto LAB_00f9f478;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,uVar22,0,8);
  }
LAB_00f9f478:
  plVar19 = DAT_043f1798;
  local_88 = (void *)0x0;
  uStack_8c = 0;
  local_98 = 0x14;
  uStack_8f = 0x7463;
  uStack_97 = s_GameObject_0393a43c._0_7_;
  local_90 = s_GameObject_0393a43c[7];
  uStack_8d = 0;
  plVar24 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar24 = plVar19;
  }
  plVar19 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xe0,8);
  plVar19[4] = 0;
  plVar24 = plVar19 + 1;
  *plVar24 = 0;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[10] = 0;
  plVar19[6] = (long)FUN_00fb45f0;
  plVar19[7] = (long)FUN_00fb4690;
  plVar19[0xc] = (long)&DAT_038ca815;
  *plVar19 = (long)&PTR_FUN_041eef88;
  plVar19[0xd] = (long)&DAT_0392da3c;
  plVar19[0xf] = (long)"GetChildCount";
  plVar19[0x10] = (long)FUN_00fa1c70;
  plVar19[0x13] = 0;
  plVar19[0x14] = (long)FUN_00fb4820;
  plVar19[0x15] = (long)&LAB_00fb4b00;
  plVar19[0x16] = (long)&LAB_00fa26d0;
  plVar19[0x17] = (long)&LAB_00fa26e0;
  plVar19[0x18] = 0;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  *(undefined1 *)(plVar19 + 0xe) = 0;
  plVar19[0x1b] = 0;
  plVar19[0x19] = 0;
  *(undefined1 *)(plVar19 + 0x1a) = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  uStack_29f = 0x7473;
  local_2a7 = s_class_cast_038dd4e7._0_2_;
  cStack_2a5 = s_class_cast_038dd4e7[2];
  uStack_2a4 = s_class_cast_038dd4e7._3_5_;
  local_288 = &LAB_00fb4e24;
  local_2a8 = 0x14;
  uStack_29d = 0;
  local_29c = 0;
  cStack_274 = 0;
  uStack_273 = 0;
  uStack_271 = 0;
  uStack_26f = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  local_258 = &LAB_00fb4eb4;
  local_248 = 8;
  local_298 = 0;
  puStack_290 = &LAB_00fb4ddc;
  local_280 = 0xffffffff;
  local_278 = 6;
  local_277 = 0x656e;
  cStack_275 = 0x77;
  local_250 = 0xffffffff;
  local_268 = 0;
  puStack_260 = &LAB_00fb4e6c;
  local_247 = 0x63675f5f;
  uStack_23b = 0;
  uStack_243 = 0;
  uStack_23f = 0;
  local_228 = &LAB_00fb4f44;
  local_220 = 0xffffffff;
  local_238 = (void *)0x0;
  local_230 = &LAB_00fb4efc;
  local_218 = 0x1a;
  local_217._0_1_ = s_GetChildCount_039325bb[0];
  local_217._1_1_ = s_GetChildCount_039325bb[1];
  local_217._2_1_ = s_GetChildCount_039325bb[2];
  local_217._3_1_ = s_GetChildCount_039325bb[3];
  local_217._4_1_ = s_GetChildCount_039325bb[4];
  uStack_212 = s_GetChildCount_039325bb._5_2_;
  cStack_210 = s_GetChildCount_039325bb[7];
  uStack_20f._0_1_ = s_GetChildCount_039325bb[8];
  uStack_20f._1_1_ = s_GetChildCount_039325bb[9];
  uStack_20f._2_1_ = s_GetChildCount_039325bb[10];
  uStack_20f._3_1_ = s_GetChildCount_039325bb[0xb];
  uStack_20f._4_1_ = s_GetChildCount_039325bb[0xc];
  local_20a = 0;
  local_1f8 = &LAB_00fb4fd4;
  local_1f0 = 0xffffffff;
  local_208 = (void *)0x0;
  local_200 = &LAB_00fb4f8c;
  FUN_00fa2894(plVar24,&local_2a8,4);
  lVar20 = FUN_008cca50();
  lVar29 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar24,lVar20 + lVar29);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar21);
      plVar32 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar21 + 0x20), lVar34 != 0)) {
          plVar26 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar26 = plVar32;
          }
          uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar22 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar34,0,8);
              goto LAB_00f9fdf4;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar34,0,8);
        }
LAB_00f9fdf4:
        plVar32 = DAT_043f1798;
        plVar26 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar26 = plVar32;
        }
        uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar22 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar21,0,8);
            goto LAB_00f9fd58;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar21,0,8);
      }
    }
LAB_00f9fd58:
    lVar29 = lVar29 + 0x18;
  } while (lVar29 != 0x300);
  pcVar30 = (char *)plVar19[0xc];
  sVar23 = strlen(pcVar30);
  iVar8 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xd];
  sVar23 = strlen(pcVar30);
  iVar9 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xf];
  sVar23 = strlen(pcVar30);
  iVar10 = FUN_008f2c60(sVar23,pcVar30);
  pvVar2 = local_208;
  *(bool *)(plVar19 + 0xb) = (iVar9 != 0 || iVar8 != 0) || iVar10 != 0;
  plVar24 = DAT_043f1798;
  pvVar33 = local_238;
  if (((local_218 & 1) != 0) && (local_208 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar2,0,8);
        plVar24 = DAT_043f1798;
        pvVar33 = local_238;
        goto joined_r0x00f9ff94;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar2,0,8);
    plVar24 = DAT_043f1798;
    pvVar33 = local_238;
  }
joined_r0x00f9ff94:
  lVar29 = local_268;
  local_238 = pvVar33;
  if (((local_248 & 1) != 0) && (pvVar33 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar24;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar33,0,8);
        plVar24 = DAT_043f1798;
        lVar29 = local_268;
        goto joined_r0x00fa054c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar33,0,8);
    plVar24 = DAT_043f1798;
    lVar29 = local_268;
  }
joined_r0x00fa054c:
  lVar20 = local_298;
  local_268 = lVar29;
  if (((local_278 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar24;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar24 = DAT_043f1798;
        lVar20 = local_298;
        goto joined_r0x00fa00f4;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar24 = DAT_043f1798;
    lVar20 = local_298;
  }
joined_r0x00fa00f4:
  DAT_043f1798 = plVar24;
  local_298 = lVar20;
  if (((local_2a8 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        goto LAB_00fa01a0;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
  }
LAB_00fa01a0:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar19)(plVar19,uVar31);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  pvVar33 = (void *)((ulong)&local_98 | 1);
  if ((local_98 & 1) != 0) {
    pvVar33 = local_88;
  }
  FUN_001522a0(uVar31,pvVar33);
  pvVar33 = local_88;
  plVar19 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != (void *)0x0)) {
    plVar24 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar24 = plVar19;
    }
    uVar22 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar33,0,8);
        goto LAB_00fa029c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar33,0,8);
  }
LAB_00fa029c:
  plVar19 = DAT_043f1798;
  uStack_8d = 0;
  uStack_8c = 0;
  local_98 = 0x12;
  local_88 = (void *)0x0;
  uStack_97 = s_Component_0394d58d._0_7_;
  local_90 = s_Component_0394d58d[7];
  uStack_8f = 0x74;
  plVar24 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar24 = plVar19;
  }
  plVar19 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xe0,8);
  plVar19[4] = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar24 = plVar19 + 1;
  *plVar24 = 0;
  plVar19[6] = (long)FUN_00fbc6c0;
  plVar19[7] = (long)FUN_00fbc760;
  *plVar19 = (long)&PTR_FUN_041eefb0;
  plVar19[0xc] = (long)&DAT_038ca815;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  plVar19[0xd] = (long)&DAT_0392da3c;
  *(undefined1 *)(plVar19 + 0xe) = 0;
  puVar3 = PTR_FUN_0437d998;
  plVar19[0x1b] = 0;
  plVar19[0x19] = 0;
  *(undefined1 *)(plVar19 + 0x1a) = 0;
  plVar19[0xf] = (long)"GetRawGameObject";
  plVar19[0x10] = (long)puVar3;
  plVar19[0x13] = 0;
  plVar19[0x14] = (long)FUN_00fbc928;
  plVar19[0x15] = (long)&LAB_00fbcc08;
  plVar19[0x16] = (long)&LAB_00fa26d0;
  plVar19[0x17] = (long)&LAB_00fa26e0;
  plVar19[0x18] = 0;
  plVar19[0x11] = 0;
  plVar19[0x12] = 0;
  local_2a8 = 6;
  local_2a7 = 0x656e;
  cStack_2a5 = 0x77;
  local_288 = &LAB_00fbcf2c;
  uStack_2a4 = 0;
  uStack_29f = 0;
  uStack_29d = 0;
  local_29c = 0;
  local_278 = 8;
  uStack_273 = 0;
  uStack_271 = 0;
  uStack_26f = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  local_258 = &LAB_00fbcfbc;
  local_298 = 0;
  puStack_290 = &LAB_00fbcee4;
  local_280 = 0xffffffff;
  local_277 = 0x5f5f;
  cStack_275 = 0x67;
  cStack_274 = 99;
  local_250 = 0xffffffff;
  local_268 = 0;
  puStack_260 = &LAB_00fbcf74;
  local_248 = 0x20;
  local_247 = s_GetRawGameObject_038d3ff8._0_4_;
  local_220 = 0xffffffff;
  uStack_243._0_3_ = s_GetRawGameObject_038d3ff8._4_3_;
  uStack_243 = CONCAT13(s_GetRawGameObject_038d3ff8[7],(undefined3)uStack_243);
  uStack_23f = s_GetRawGameObject_038d3ff8._8_4_;
  uStack_23b = s_GetRawGameObject_038d3ff8._12_3_;
  local_238 = (void *)0x74;
  local_230 = &LAB_00fbd004;
  local_228 = &LAB_00fbd04c;
  FUN_00fa2894(plVar24,&local_2a8,3);
  lVar20 = FUN_008cca50();
  lVar29 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar24,lVar20 + lVar29);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar21);
      plVar32 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar21 + 0x20), lVar34 != 0)) {
          plVar26 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar26 = plVar32;
          }
          uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar22 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar34,0,8);
              goto LAB_00fa08ac;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar34,0,8);
        }
LAB_00fa08ac:
        plVar32 = DAT_043f1798;
        plVar26 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar26 = plVar32;
        }
        uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar22 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar21,0,8);
            goto LAB_00fa0810;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar21,0,8);
      }
    }
LAB_00fa0810:
    lVar29 = lVar29 + 0x18;
  } while (lVar29 != 0x300);
  pcVar30 = (char *)plVar19[0xc];
  sVar23 = strlen(pcVar30);
  iVar8 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xd];
  sVar23 = strlen(pcVar30);
  iVar9 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xf];
  sVar23 = strlen(pcVar30);
  iVar10 = FUN_008f2c60(sVar23,pcVar30);
  pvVar33 = local_238;
  *(bool *)(plVar19 + 0xb) = (iVar9 != 0 || iVar8 != 0) || iVar10 != 0;
  plVar24 = DAT_043f1798;
  lVar29 = local_268;
  if (((local_248 & 1) != 0) && (local_238 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar33,0,8);
        plVar24 = DAT_043f1798;
        lVar29 = local_268;
        goto joined_r0x00fa0a4c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar33,0,8);
    plVar24 = DAT_043f1798;
    lVar29 = local_268;
  }
joined_r0x00fa0a4c:
  lVar20 = local_298;
  local_268 = lVar29;
  if (((local_278 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar24;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar24 = DAT_043f1798;
        lVar20 = local_298;
        goto joined_r0x00fa0f64;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar24 = DAT_043f1798;
    lVar20 = local_298;
  }
joined_r0x00fa0f64:
  DAT_043f1798 = plVar24;
  local_298 = lVar20;
  if (((local_2a8 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        goto LAB_00fa0ba8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
  }
LAB_00fa0ba8:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar19)(plVar19,uVar31);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  pvVar33 = (void *)((ulong)&local_98 | 1);
  if ((local_98 & 1) != 0) {
    pvVar33 = local_88;
  }
  FUN_001522a0(uVar31,pvVar33);
  pvVar33 = local_88;
  plVar19 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != (void *)0x0)) {
    plVar24 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar24 = plVar19;
    }
    uVar22 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar33,0,8);
        goto LAB_00fa0ca8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar33,0,8);
  }
LAB_00fa0ca8:
  plVar19 = DAT_043f1798;
  uStack_8c = 0;
  local_88 = (void *)0x0;
  local_98 = 0x14;
  uStack_8f = 0x7765;
  uStack_97 = s_StringView_039325c9._0_7_;
  local_90 = s_StringView_039325c9[7];
  uStack_8d = 0;
  plVar24 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar24 = plVar19;
  }
  plVar19 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0xd8,8);
  plVar19[4] = 0;
  plVar24 = plVar19 + 1;
  *plVar24 = 0;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[10] = 0;
  plVar19[6] = (long)FUN_00fc47a0;
  plVar19[7] = (long)FUN_00fc4840;
  *plVar19 = (long)&PTR_FUN_041eefd8;
  plVar19[0xc] = (long)&DAT_038ca815;
  plVar19[0xd] = (long)"ToString";
  plVar19[0xe] = (long)&LAB_00fa1e1c;
  plVar19[0xf] = 0;
  plVar19[0x10] = (long)&DAT_0392da3c;
  plVar19[0x11] = 0;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  plVar19[0x1a] = 0;
  plVar19[0x18] = 0;
  *(undefined1 *)(plVar19 + 0x19) = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = (long)FUN_00fc49d0;
  plVar19[0x14] = (long)&LAB_00fc4cb0;
  plVar19[0x15] = (long)&LAB_00fa26d0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[0x16] = (long)&LAB_00fa26e0;
  plVar19[0x17] = 0;
  local_2a8 = 6;
  *(undefined1 *)(puVar27 + 1) = 0x77;
  *puVar27 = 0x656e;
  *(undefined4 *)(puVar28 + 1) = 0;
  *puVar28 = 0;
  local_288 = &LAB_00fc4fd4;
  uStack_26f = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  local_258 = &LAB_00fc5064;
  local_248 = 8;
  local_298 = 0;
  puStack_290 = &LAB_00fc4f8c;
  local_280 = 0xffffffff;
  local_278 = 0x10;
  local_277 = 0x6f54;
  cStack_275 = 0x53;
  cStack_274 = 0x74;
  uStack_273 = 0x6972;
  uStack_271 = 0x676e;
  local_250 = 0xffffffff;
  local_268 = 0;
  puStack_260 = &LAB_00fc501c;
  local_247 = 0x63675f5f;
  uStack_23b = 0;
  uStack_243 = 0;
  uStack_23f = 0;
  local_228 = &LAB_00fc50f4;
  local_220 = 0xffffffff;
  local_238 = (void *)0x0;
  local_230 = &LAB_00fc50ac;
  FUN_00fa2894(plVar24,&local_2a8,3);
  lVar20 = FUN_008cca50();
  lVar29 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar24,lVar20 + lVar29);
    if (lVar21 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar21);
      plVar32 = DAT_043f1798;
      lVar21 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar21 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar21 + 0x20), lVar34 != 0)) {
          plVar26 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar26 = plVar32;
          }
          uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar22 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar34,0,8);
              goto LAB_00fa124c;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar34,0,8);
        }
LAB_00fa124c:
        plVar32 = DAT_043f1798;
        plVar26 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar26 = plVar32;
        }
        uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar22 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar21,0,8);
            goto LAB_00fa11b0;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar21,0,8);
      }
    }
LAB_00fa11b0:
    lVar29 = lVar29 + 0x18;
  } while (lVar29 != 0x300);
  pcVar30 = (char *)plVar19[0xc];
  sVar23 = strlen(pcVar30);
  iVar8 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0xd];
  sVar23 = strlen(pcVar30);
  iVar9 = FUN_008f2c60(sVar23,pcVar30);
  pcVar30 = (char *)plVar19[0x10];
  sVar23 = strlen(pcVar30);
  iVar10 = FUN_008f2c60(sVar23,pcVar30);
  pvVar33 = local_238;
  *(bool *)(plVar19 + 0xb) = (iVar9 != 0 || iVar8 != 0) || iVar10 != 0;
  plVar24 = DAT_043f1798;
  lVar29 = local_268;
  if (((local_248 & 1) != 0) && (local_238 != (void *)0x0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,pvVar33,0,8);
        plVar24 = DAT_043f1798;
        lVar29 = local_268;
        goto joined_r0x00fa13e8;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pvVar33,0,8);
    plVar24 = DAT_043f1798;
    lVar29 = local_268;
  }
joined_r0x00fa13e8:
  lVar20 = local_298;
  local_268 = lVar29;
  if (((local_278 & 1) != 0) && (lVar29 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar24;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar29,0,8);
        plVar24 = DAT_043f1798;
        lVar20 = local_298;
        goto joined_r0x00fa1708;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar29,0,8);
    plVar24 = DAT_043f1798;
    lVar20 = local_298;
  }
joined_r0x00fa1708:
  DAT_043f1798 = plVar24;
  local_298 = lVar20;
  if (((local_2a8 & 1) != 0) && (lVar20 != 0)) {
    plVar32 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar24;
      plVar32 = plVar24;
    }
    uVar22 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar32,lVar20,0,8);
        goto LAB_00fa1544;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,lVar20,0,8);
  }
LAB_00fa1544:
  uVar31 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar31);
  (**(code **)*plVar19)(plVar19,uVar31);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  pvVar33 = (void *)((ulong)&local_98 | 1);
  if ((local_98 & 1) != 0) {
    pvVar33 = local_88;
  }
  FUN_001522a0(uVar31,pvVar33);
  pvVar33 = local_88;
  plVar19 = DAT_043f1798;
  if (((local_98 & 1) != 0) && (local_88 != (void *)0x0)) {
    plVar24 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar24 = plVar19;
    }
    uVar22 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar33,0,8);
        return;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar33,0,8);
  }
  return;
}


