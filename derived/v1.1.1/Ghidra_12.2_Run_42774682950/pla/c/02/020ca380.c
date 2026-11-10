/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ca380; name: FUN_020ca380
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_020ca380(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  int iVar19;
  long *plVar20;
  char *pcVar21;
  long lVar22;
  size_t sVar23;
  ulong uVar24;
  char *pcVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  string *psVar30;
  long lVar31;
  string *psVar32;
  char *pcVar33;
  undefined8 uVar34;
  long *plVar35;
  string *psVar36;
  long lVar37;
  char *pcVar38;
  ulong local_2d8;
  undefined8 uStack_2d0;
  char *local_2c8;
  string local_2c0;
  undefined4 local_2bf;
  undefined2 local_2bb;
  undefined1 local_2b9;
  undefined8 local_2b8;
  char *local_2b0;
  undefined1 *local_2a8;
  undefined1 *puStack_2a0;
  undefined4 local_298;
  byte local_290;
  char local_28f [7];
  char cStack_288;
  char acStack_287 [7];
  long local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  char acStack_25f [7];
  char local_258;
  char acStack_257 [7];
  long local_250;
  undefined1 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  byte local_230;
  char local_22f [8];
  undefined4 local_227;
  undefined1 local_223;
  undefined2 local_222;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  char acStack_1ff [7];
  char local_1f8;
  char acStack_1f7 [7];
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [8];
  undefined4 local_1c7;
  undefined1 local_1c3;
  undefined2 local_1c2;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  char *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined8 local_168;
  char *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  undefined1 local_139;
  undefined8 local_138;
  char *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  lVar5 = tpidr_el0;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_2c8 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x20,8);
  uVar7 = s_FieldCharacterComponent_038c3af3._0_8_;
  local_2d8 = 0x21;
  uStack_2d0 = 0x17;
  uVar6 = CONCAT71(s_FieldCharacterComponent_038c3af3._16_7_,s_FieldCharacterComponent_038c3af3[0xf]
                  );
  uVar34 = CONCAT17(s_FieldCharacterComponent_038c3af3[0xf],s_FieldCharacterComponent_038c3af3._8_7_
                   );
  local_2c8[0x17] = '\0';
  *(undefined8 *)local_2c8 = uVar7;
  *(undefined8 *)(local_2c8 + 8) = uVar34;
  *(undefined8 *)(local_2c8 + 0xf) = uVar6;
  plVar1 = DAT_043f1798;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  plVar20 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x170,8);
  plVar20[4] = 0;
  plVar35 = plVar20 + 1;
  *plVar35 = 0;
  *(undefined4 *)(plVar20 + 5) = 0x3f800000;
  plVar20[10] = 0;
  plVar20[6] = (long)FUN_020cc230;
  plVar20[7] = (long)FUN_020cc2e0;
  *plVar20 = (long)&PTR_FUN_0425b420;
  plVar20[0xc] = (long)"SethookPhysicsCaluculateFlag";
  plVar20[0xd] = 0xf0;
  pcVar38 = "GetRootMotionAdjuster";
  plVar20[0xe] = 1;
  plVar20[0xf] = (long)"GetLookAtComponent";
  plVar20[0x10] = (long)"GetRootMotionAdjuster";
  plVar20[0x11] = (long)"GetBodyWidth";
  plVar20[0x12] = (long)FUN_01a75574;
  plVar20[0x13] = 0;
  plVar20[0x14] = (long)"SetLodLevelZero";
  plVar20[0x15] = (long)&LAB_01a755f4;
  plVar20[0x18] = (long)&LAB_01a756e8;
  plVar20[0x19] = 0;
  plVar20[0x1a] = (long)"__haxe_export_GetTransform";
  plVar20[0x1b] = (long)&LAB_01a74948;
  plVar20[0x16] = 0;
  plVar20[0x17] = (long)"ResetLodMode";
  *(undefined1 *)(plVar20 + 0xb) = 0;
  plVar20[0x2d] = 0;
  *(undefined1 *)(plVar20 + 0x2c) = 0;
  plVar20[0x1e] = (long)&LAB_01a74950;
  plVar20[0x1f] = 0;
  plVar20[0x22] = (long)&DAT_038ca815;
  plVar20[0x23] = (long)&DAT_0392da3c;
  plVar20[0x20] = (long)"__haxe_export_GetCharacterController";
  plVar20[0x21] = (long)"__haxe_export_GetNavigatorController";
  plVar20[0x26] = (long)FUN_020cc470;
  plVar20[0x27] = (long)&LAB_020cc750;
  plVar20[2] = 0;
  plVar20[3] = 0;
  plVar20[8] = 0;
  plVar20[9] = 0;
  plVar20[0x1c] = 0;
  plVar20[0x1d] = (long)"__haxe_export_GetModelGameObjectTransform";
  plVar20[0x24] = 0;
  plVar20[0x25] = 0;
  plVar20[0x28] = (long)&LAB_020cca30;
  plVar20[0x29] = (long)&LAB_020cca40;
  plVar20[0x2a] = 0;
  plVar20[0x2b] = 0;
  plVar1 = DAT_043f1798;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_2b0 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x20,8);
  local_2b0[0x18] = 'F';
  local_2b0[0x19] = 'l';
  local_2b0[0x1a] = 'a';
  local_2b0[0x1b] = 'g';
  local_2b0[0x1c] = '\0';
  uVar34 = s_SethookPhysicsCaluculateFlag_03890c6a._8_8_;
  *(undefined8 *)local_2b0 = s_SethookPhysicsCaluculateFlag_03890c6a._0_8_;
  uVar6 = s_SethookPhysicsCaluculateFlag_03890c6a._16_8_;
  *(undefined8 *)(local_2b0 + 8) = uVar34;
  *(undefined8 *)(local_2b0 + 0x10) = uVar6;
  plVar1 = DAT_043f1798;
  local_2c0 = (string)0x21;
  local_2b8 = 0x1c;
  local_2b9 = 0;
  local_2a8 = &LAB_020cca44;
  puStack_2a0 = &LAB_020cca8c;
  local_290 = 0x24;
  local_28f[0] = s_GetLookAtComponent_038c3b0b[0];
  local_28f[1] = s_GetLookAtComponent_038c3b0b[1];
  local_28f[2] = s_GetLookAtComponent_038c3b0b[2];
  local_28f[3] = s_GetLookAtComponent_038c3b0b[3];
  local_28f[4] = s_GetLookAtComponent_038c3b0b[4];
  local_28f[5] = s_GetLookAtComponent_038c3b0b[5];
  local_28f[6] = s_GetLookAtComponent_038c3b0b[6];
  cStack_288 = s_GetLookAtComponent_038c3b0b[7];
  acStack_287[0] = s_GetLookAtComponent_038c3b0b[8];
  acStack_287[1] = s_GetLookAtComponent_038c3b0b[9];
  acStack_287[2] = s_GetLookAtComponent_038c3b0b[10];
  acStack_287[3] = s_GetLookAtComponent_038c3b0b[0xb];
  acStack_287[4] = s_GetLookAtComponent_038c3b0b[0xc];
  acStack_287[5] = s_GetLookAtComponent_038c3b0b[0xd];
  acStack_287[6] = s_GetLookAtComponent_038c3b0b[0xe];
  local_280 = 0x746e65;
  puStack_278 = &LAB_020ccad4;
  local_270 = &LAB_020ccb1c;
  local_260 = 0x2a;
  acStack_257[0] = s_GetRootMotionAdjuster_038cdb63[8];
  acStack_257[1] = s_GetRootMotionAdjuster_038cdb63[9];
  acStack_257[2] = s_GetRootMotionAdjuster_038cdb63[10];
  acStack_257[3] = s_GetRootMotionAdjuster_038cdb63[0xb];
  acStack_257[4] = s_GetRootMotionAdjuster_038cdb63[0xc];
  acStack_257[5] = s_GetRootMotionAdjuster_038cdb63[0xd];
  acStack_257[6] = s_GetRootMotionAdjuster_038cdb63[0xe];
  local_250 = 0x72657473756a;
  acStack_25f[0] = s_GetRootMotionAdjuster_038cdb63[0];
  acStack_25f[1] = s_GetRootMotionAdjuster_038cdb63[1];
  acStack_25f[2] = s_GetRootMotionAdjuster_038cdb63[2];
  acStack_25f[3] = s_GetRootMotionAdjuster_038cdb63[3];
  acStack_25f[4] = s_GetRootMotionAdjuster_038cdb63[4];
  acStack_25f[5] = s_GetRootMotionAdjuster_038cdb63[5];
  acStack_25f[6] = s_GetRootMotionAdjuster_038cdb63[6];
  local_258 = s_GetRootMotionAdjuster_038cdb63[7];
  local_248 = &LAB_020ccb64;
  puStack_240 = &LAB_020ccbac;
  local_2bb = 0;
  local_2bf = 0;
  local_298 = 0xffffffff;
  local_268 = 0xffffffff;
  local_238 = 0xffffffff;
  local_230 = 0x18;
  local_227 = 0x68746469;
  local_22f[0] = s_GetBodyWidth_0396d444[0];
  local_22f[1] = s_GetBodyWidth_0396d444[1];
  local_22f[2] = s_GetBodyWidth_0396d444[2];
  local_22f[3] = s_GetBodyWidth_0396d444[3];
  local_22f[4] = s_GetBodyWidth_0396d444[4];
  local_22f[5] = s_GetBodyWidth_0396d444[5];
  local_22f[6] = s_GetBodyWidth_0396d444[6];
  local_22f[7] = s_GetBodyWidth_0396d444[7];
  local_220 = 0;
  puStack_218 = &LAB_020ccbf4;
  local_210 = &LAB_020ccc3c;
  local_222 = 0;
  local_200 = 0x1e;
  local_223 = 0;
  local_208 = 0xffffffff;
  acStack_1f7[0] = s_SetLodLevelZero_038a6a12[8];
  acStack_1f7[1] = s_SetLodLevelZero_038a6a12[9];
  acStack_1f7[2] = s_SetLodLevelZero_038a6a12[10];
  acStack_1f7[3] = s_SetLodLevelZero_038a6a12[0xb];
  acStack_1f7[4] = s_SetLodLevelZero_038a6a12[0xc];
  acStack_1f7[5] = s_SetLodLevelZero_038a6a12[0xd];
  acStack_1f7[6] = s_SetLodLevelZero_038a6a12[0xe];
  local_1f0 = 0;
  acStack_1ff[0] = s_SetLodLevelZero_038a6a12[0];
  acStack_1ff[1] = s_SetLodLevelZero_038a6a12[1];
  acStack_1ff[2] = s_SetLodLevelZero_038a6a12[2];
  acStack_1ff[3] = s_SetLodLevelZero_038a6a12[3];
  acStack_1ff[4] = s_SetLodLevelZero_038a6a12[4];
  acStack_1ff[5] = s_SetLodLevelZero_038a6a12[5];
  acStack_1ff[6] = s_SetLodLevelZero_038a6a12[6];
  local_1f8 = s_SetLodLevelZero_038a6a12[7];
  local_1d0 = 0x18;
  local_1d8 = 0xffffffff;
  local_1e8 = &LAB_020ccc84;
  puStack_1e0 = &LAB_020ccccc;
  local_1c7 = 0x65646f4d;
  local_1cf[0] = s_ResetLodMode_0399426c[0];
  local_1cf[1] = s_ResetLodMode_0399426c[1];
  local_1cf[2] = s_ResetLodMode_0399426c[2];
  local_1cf[3] = s_ResetLodMode_0399426c[3];
  local_1cf[4] = s_ResetLodMode_0399426c[4];
  local_1cf[5] = s_ResetLodMode_0399426c[5];
  local_1cf[6] = s_ResetLodMode_0399426c[6];
  local_1cf[7] = s_ResetLodMode_0399426c[7];
  local_1c3 = 0;
  local_1c2 = 0;
  local_1b0 = &LAB_020ccd5c;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_020ccd14;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_190 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x20,8);
  local_190[0x18] = 'r';
  local_190[0x19] = 'm';
  local_190[0x1a] = '\0';
  uVar34 = s___haxe_export_GetTransform_03914c12._8_8_;
  *(undefined8 *)local_190 = s___haxe_export_GetTransform_03914c12._0_8_;
  uVar6 = s___haxe_export_GetTransform_03914c12._16_8_;
  *(undefined8 *)(local_190 + 8) = uVar34;
  *(undefined8 *)(local_190 + 0x10) = uVar6;
  plVar1 = DAT_043f1798;
  local_1a0 = 0x21;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_198 = 0x1a;
  local_178 = 0xffffffff;
  local_188 = &LAB_020ccda4;
  puStack_180 = &LAB_020ccdec;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x30,8);
  local_160[0x28] = 'm';
  uVar34 = s___haxe_export_GetModelGameObject_03934460._8_8_;
  *(undefined8 *)local_160 = s___haxe_export_GetModelGameObject_03934460._0_8_;
  *(undefined8 *)(local_160 + 8) = uVar34;
  uVar34 = s___haxe_export_GetModelGameObject_03934460._24_8_;
  *(undefined8 *)(local_160 + 0x10) = s___haxe_export_GetModelGameObject_03934460._16_8_;
  uVar6 = s___haxe_export_GetModelGameObject_03934460._32_8_;
  *(undefined8 *)(local_160 + 0x18) = uVar34;
  *(undefined8 *)(local_160 + 0x20) = uVar6;
  local_160[0x29] = '\0';
  plVar1 = DAT_043f1798;
  local_170 = 0x31;
  local_169 = 0;
  local_16b = 0;
  local_16f = 0;
  local_168 = 0x29;
  local_158 = &LAB_020cce34;
  puStack_150 = &LAB_020cce7c;
  local_148 = 0xffffffff;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x30,8);
  local_130[0x20] = 'l';
  uVar34 = s___haxe_export_GetCharacterContro_038cda35._8_8_;
  local_130[0x21] = 'l';
  local_130[0x22] = 'e';
  local_130[0x23] = 'r';
  psVar36 = &local_2c0;
  *(undefined8 *)local_130 = s___haxe_export_GetCharacterContro_038cda35._0_8_;
  *(undefined8 *)(local_130 + 8) = uVar34;
  uVar6 = s___haxe_export_GetCharacterContro_038cda35._24_8_;
  uVar34 = s___haxe_export_GetCharacterContro_038cda35._16_8_;
  local_130[0x24] = '\0';
  *(undefined8 *)(local_130 + 0x10) = uVar34;
  *(undefined8 *)(local_130 + 0x18) = uVar6;
  plVar1 = DAT_043f1798;
  local_140 = 0x31;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x24;
  local_118 = 0xffffffff;
  local_128 = &LAB_020ccec4;
  puStack_120 = &LAB_020ccf0c;
  plVar27 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar27 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar27 + 0x10))(plVar27,0x30,8);
  local_100[0x20] = 'l';
  uVar34 = s___haxe_export_GetNavigatorContro_03933f13._8_8_;
  local_100[0x21] = 'l';
  local_100[0x22] = 'e';
  local_100[0x23] = 'r';
  *(undefined8 *)local_100 = s___haxe_export_GetNavigatorContro_03933f13._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar34;
  uVar6 = s___haxe_export_GetNavigatorContro_03933f13._24_8_;
  uVar34 = s___haxe_export_GetNavigatorContro_03933f13._16_8_;
  plVar1 = plVar20 + 3;
  local_100[0x24] = '\0';
  *(undefined8 *)(local_100 + 0x10) = uVar34;
  *(undefined8 *)(local_100 + 0x18) = uVar6;
  local_110 = 0x31;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_f8 = &LAB_020ccf54;
  local_108 = 0x24;
  local_f0 = &LAB_020ccf9c;
  local_e0 = 6;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c8 = &LAB_020ccfe4;
  local_c0 = &LAB_020cd02c;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_020cd074;
  local_a0 = 0;
  local_90 = &LAB_020cd0bc;
  local_88 = 0xffffffff;
  do {
    uVar24 = *(ulong *)(psVar36 + 8);
    psVar3 = *(string **)(psVar36 + 0x10);
    if (((byte)*psVar36 & 1) == 0) {
      psVar3 = psVar36 + 1;
      uVar24 = (ulong)((byte)*psVar36 >> 1);
    }
    pcVar21 = (char *)FUN_008e8ed4(local_80,psVar3,uVar24);
    pcVar33 = (char *)plVar20[2];
    if (pcVar33 != (char *)0x0) {
      uVar24 = (long)pcVar33 - ((ulong)pcVar33 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        pcVar38 = (char *)((ulong)(pcVar33 + -1) & (ulong)pcVar21);
      }
      else {
        pcVar38 = pcVar21;
        if (pcVar33 <= pcVar21) {
          uVar29 = 0;
          if (pcVar33 != (char *)0x0) {
            uVar29 = (ulong)pcVar21 / (ulong)pcVar33;
          }
          pcVar38 = pcVar21 + -(uVar29 * (long)pcVar33);
        }
      }
      plVar27 = *(long **)(*plVar35 + (long)pcVar38 * 8);
      if ((plVar27 != (long *)0x0) && (plVar27 = (long *)*plVar27, plVar27 != (long *)0x0)) {
        psVar3 = psVar36 + 1;
        sVar23 = (ulong)((byte)*psVar36 >> 1);
        if (((byte)*psVar36 & 1) != 0) {
          psVar3 = *(string **)(psVar36 + 0x10);
          sVar23 = *(size_t *)(psVar36 + 8);
        }
        if (uVar24 < 2) {
          if (sVar23 == 0) {
            do {
              if ((char *)plVar27[1] != pcVar21 &&
                  (char *)((ulong)plVar27[1] & (ulong)(pcVar33 + -1)) != pcVar38) break;
              uVar24 = (ulong)(*(byte *)(plVar27 + 2) >> 1);
              if ((*(byte *)(plVar27 + 2) & 1) != 0) {
                uVar24 = plVar27[3];
              }
              if (uVar24 == 0) goto LAB_020cace4;
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar27[1] != pcVar21 &&
                  (char *)((ulong)plVar27[1] & (ulong)(pcVar33 + -1)) != pcVar38) break;
              bVar4 = *(byte *)(plVar27 + 2);
              uVar24 = (ulong)(bVar4 >> 1);
              sVar2 = uVar24;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar27[3];
              }
              if (sVar2 == sVar23) {
                if ((bVar4 & 1) == 0) {
                  psVar30 = (string *)((long)plVar27 + 0x11);
                  psVar32 = psVar3;
                  while (*psVar30 == *psVar32) {
                    uVar24 = uVar24 - 1;
                    psVar30 = psVar30 + 1;
                    psVar32 = psVar32 + 1;
                    if (uVar24 == 0) goto LAB_020cace4;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar27[4],psVar3,sVar23);
                  if (iVar8 == 0) goto LAB_020cace4;
                }
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
        }
        else if (sVar23 == 0) {
          do {
            pcVar25 = (char *)plVar27[1];
            if (pcVar25 != pcVar21) {
              if (pcVar33 <= pcVar25) {
                uVar24 = 0;
                if (pcVar33 != (char *)0x0) {
                  uVar24 = (ulong)pcVar25 / (ulong)pcVar33;
                }
                pcVar25 = pcVar25 + -(uVar24 * (long)pcVar33);
              }
              if (pcVar25 != pcVar38) break;
            }
            uVar24 = (ulong)(*(byte *)(plVar27 + 2) >> 1);
            if ((*(byte *)(plVar27 + 2) & 1) != 0) {
              uVar24 = plVar27[3];
            }
            if (uVar24 == 0) goto LAB_020cace4;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            pcVar25 = (char *)plVar27[1];
            if (pcVar25 != pcVar21) {
              if (pcVar33 <= pcVar25) {
                uVar24 = 0;
                if (pcVar33 != (char *)0x0) {
                  uVar24 = (ulong)pcVar25 / (ulong)pcVar33;
                }
                pcVar25 = pcVar25 + -(uVar24 * (long)pcVar33);
              }
              if (pcVar25 != pcVar38) break;
            }
            bVar4 = *(byte *)(plVar27 + 2);
            uVar24 = (ulong)(bVar4 >> 1);
            sVar2 = uVar24;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar27[3];
            }
            if (sVar2 == sVar23) {
              if ((bVar4 & 1) == 0) {
                psVar30 = (string *)((long)plVar27 + 0x11);
                psVar32 = psVar3;
                while (*psVar30 == *psVar32) {
                  uVar24 = uVar24 - 1;
                  psVar30 = psVar30 + 1;
                  psVar32 = psVar32 + 1;
                  if (uVar24 == 0) goto LAB_020cace4;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar27[4],psVar3,sVar23);
                if (iVar8 == 0) goto LAB_020cace4;
              }
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
      }
    }
    plVar27 = DAT_043f1798;
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar27;
    }
    plVar27 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x40,8);
    std::string::string((string *)(plVar27 + 2),psVar36);
    lVar28 = *(long *)(psVar36 + 0x18);
    lVar31 = *(long *)(psVar36 + 0x28);
    plVar27[6] = *(long *)(psVar36 + 0x20);
    plVar27[7] = lVar31;
    plVar27[5] = lVar28;
    *plVar27 = 0;
    plVar27[1] = (long)pcVar21;
    if ((pcVar33 == (char *)0x0) ||
       (*(float *)(plVar20 + 5) * (float)pcVar33 < (float)(plVar20[4] + 1))) {
      uVar24 = (ulong)(pcVar33 < (char *)0x3 || ((ulong)pcVar33 & (ulong)(pcVar33 + -1)) != 0) |
               (long)pcVar33 << 1;
      uVar29 = (ulong)((float)(plVar20[4] + 1) / *(float *)(plVar20 + 5));
      if (uVar29 <= uVar24) {
        uVar29 = uVar24;
      }
      FUN_008e9ae4(plVar35,uVar29);
      pcVar33 = (char *)plVar20[2];
      if (((ulong)pcVar33 & (ulong)(pcVar33 + -1)) == 0) {
        pcVar38 = (char *)((ulong)(pcVar33 + -1) & (ulong)pcVar21);
      }
      else if (pcVar21 < pcVar33) {
        pcVar38 = pcVar21;
      }
      else {
        uVar24 = 0;
        if (pcVar33 != (char *)0x0) {
          uVar24 = (ulong)pcVar21 / (ulong)pcVar33;
        }
        pcVar38 = pcVar21 + -(uVar24 * (long)pcVar33);
      }
    }
    lVar28 = *plVar35;
    plVar26 = *(long **)(lVar28 + (long)pcVar38 * 8);
    if (plVar26 == (long *)0x0) {
      *plVar27 = *plVar1;
      *plVar1 = (long)plVar27;
      *(long **)(lVar28 + (long)pcVar38 * 8) = plVar1;
      if (*plVar27 != 0) {
        pcVar21 = *(char **)(*plVar27 + 8);
        if (((ulong)pcVar33 & (ulong)(pcVar33 + -1)) == 0) {
          pcVar21 = (char *)((ulong)pcVar21 & (ulong)(pcVar33 + -1));
        }
        else if (pcVar33 <= pcVar21) {
          uVar24 = 0;
          if (pcVar33 != (char *)0x0) {
            uVar24 = (ulong)pcVar21 / (ulong)pcVar33;
          }
          pcVar21 = pcVar21 + -(uVar24 * (long)pcVar33);
        }
        plVar26 = (long *)(*plVar35 + (long)pcVar21 * 8);
        goto LAB_020cacd4;
      }
    }
    else {
      *plVar27 = *plVar26;
LAB_020cacd4:
      *plVar26 = (long)plVar27;
    }
    plVar20[4] = plVar20[4] + 1;
LAB_020cace4:
    psVar36 = psVar36 + 0x30;
  } while (psVar36 != (string *)local_80);
  lVar31 = FUN_008cca50();
  lVar28 = 0;
  do {
    lVar22 = FUN_008e8c90(plVar35,lVar31 + lVar28);
    if (lVar22 != 0) {
      FUN_008f2aec(local_80,plVar35,lVar22);
      lVar22 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar22 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar22 + 0x10) & 1) != 0)) &&
           (lVar37 = *(long *)(lVar22 + 0x20), lVar37 != 0)) {
          plVar27 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar27 = plVar1;
          }
          uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
          if ((uVar24 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar27,lVar37,0,8);
              goto LAB_020caf54;
            }
          }
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar37,0,8);
        }
LAB_020caf54:
        plVar1 = DAT_043f1798;
        plVar27 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar27 = plVar1;
        }
        uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
        if ((uVar24 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar27,lVar22,0,8);
            goto LAB_020caf0c;
          }
        }
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar22,0,8);
      }
    }
LAB_020caf0c:
    lVar28 = lVar28 + 0x18;
  } while (lVar28 != 0x300);
  pcVar38 = (char *)plVar20[0xc];
  sVar23 = strlen(pcVar38);
  iVar8 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0xf];
  sVar23 = strlen(pcVar38);
  iVar9 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x10];
  sVar23 = strlen(pcVar38);
  iVar10 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x11];
  sVar23 = strlen(pcVar38);
  iVar11 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x14];
  sVar23 = strlen(pcVar38);
  iVar12 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x17];
  sVar23 = strlen(pcVar38);
  iVar13 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x1a];
  sVar23 = strlen(pcVar38);
  iVar14 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x1d];
  sVar23 = strlen(pcVar38);
  iVar15 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x20];
  sVar23 = strlen(pcVar38);
  iVar16 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x21];
  sVar23 = strlen(pcVar38);
  iVar17 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x22];
  sVar23 = strlen(pcVar38);
  iVar18 = FUN_008f2c60(sVar23,pcVar38);
  pcVar38 = (char *)plVar20[0x23];
  sVar23 = strlen(pcVar38);
  iVar19 = FUN_008f2c60(sVar23,pcVar38);
  lVar31 = local_a0;
  *(bool *)(plVar20 + 0xb) =
       ((((((((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
            iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0) ||
       iVar18 != 0) || iVar19 != 0;
  plVar1 = DAT_043f1798;
  lVar28 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar31,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_d0;
        goto joined_r0x020cb1d0;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar31,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_d0;
  }
joined_r0x020cb1d0:
  pcVar38 = local_100;
  local_d0 = lVar28;
  if (((local_e0 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        pcVar38 = local_100;
        goto joined_r0x020cbbcc;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    pcVar38 = local_100;
  }
joined_r0x020cbbcc:
  pcVar21 = local_130;
  local_100 = pcVar38;
  if (((local_110 & 1) != 0) && (pcVar38 != (char *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar38,0,8);
        plVar1 = DAT_043f1798;
        pcVar21 = local_130;
        goto joined_r0x020cb338;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar38,0,8);
    plVar1 = DAT_043f1798;
    pcVar21 = local_130;
  }
joined_r0x020cb338:
  pcVar38 = local_160;
  local_130 = pcVar21;
  if (((local_140 & 1) != 0) && (pcVar21 != (char *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar21,0,8);
        plVar1 = DAT_043f1798;
        pcVar38 = local_160;
        goto joined_r0x020cbc0c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar21,0,8);
    plVar1 = DAT_043f1798;
    pcVar38 = local_160;
  }
joined_r0x020cbc0c:
  pcVar21 = local_190;
  local_160 = pcVar38;
  if (((local_170 & 1) != 0) && (pcVar38 != (char *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar38,0,8);
        plVar1 = DAT_043f1798;
        pcVar21 = local_190;
        goto joined_r0x020cb4a0;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar38,0,8);
    plVar1 = DAT_043f1798;
    pcVar21 = local_190;
  }
joined_r0x020cb4a0:
  lVar28 = local_1c0;
  local_190 = pcVar21;
  if (((local_1a0 & 1) != 0) && (pcVar21 != (char *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar21,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_1c0;
        goto joined_r0x020cbc4c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar21,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_1c0;
  }
joined_r0x020cbc4c:
  lVar31 = local_1f0;
  local_1c0 = lVar28;
  if (((local_1d0 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar31 = local_1f0;
        goto joined_r0x020cb608;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar31 = local_1f0;
  }
joined_r0x020cb608:
  lVar28 = local_220;
  local_1f0 = lVar31;
  if (((local_200 & 1) != 0) && (lVar31 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar31,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_220;
        goto joined_r0x020cbc8c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar31,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_220;
  }
joined_r0x020cbc8c:
  lVar31 = local_250;
  local_220 = lVar28;
  if (((local_230 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar31 = local_250;
        goto joined_r0x020cb770;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar31 = local_250;
  }
joined_r0x020cb770:
  lVar28 = local_280;
  local_250 = lVar31;
  if (((local_260 & 1) != 0) && (lVar31 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar31,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_280;
        goto joined_r0x020cbccc;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar31,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_280;
  }
joined_r0x020cbccc:
  pcVar38 = local_2b0;
  local_280 = lVar28;
  if (((local_290 & 1) != 0) && (lVar28 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar28,0,8);
        plVar1 = DAT_043f1798;
        pcVar38 = local_2b0;
        goto joined_r0x020cb8d8;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar28,0,8);
    plVar1 = DAT_043f1798;
    pcVar38 = local_2b0;
  }
joined_r0x020cb8d8:
  DAT_043f1798 = plVar1;
  local_2b0 = pcVar38;
  if ((((byte)local_2c0 & 1) != 0) && (pcVar38 != (char *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar38,0,8);
        goto LAB_020cb988;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar38,0,8);
  }
LAB_020cb988:
  uVar34 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar34);
  (**(code **)*plVar20)(plVar20,uVar34);
  (**(code **)(*plVar20 + 0x10))(plVar20);
  pcVar38 = (char *)((ulong)&local_2d8 | 1);
  if ((local_2d8 & 1) != 0) {
    pcVar38 = local_2c8;
  }
  FUN_001522a0(uVar34,pcVar38);
  pcVar38 = local_2c8;
  plVar1 = DAT_043f1798;
  if (((local_2d8 & 1) != 0) && (local_2c8 != (char *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pcVar38,0,8);
        return;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pcVar38,0,8);
  }
  return;
}


