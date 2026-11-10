/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01031050; name: FUN_01031050
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01031050(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  size_t sVar19;
  long *plVar20;
  char *pcVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  byte local_308;
  undefined6 uStack_307;
  char cStack_301;
  char cStack_300;
  undefined6 local_2ff;
  char cStack_2f9;
  char cStack_2f8;
  undefined2 uStack_2f7;
  undefined1 uStack_2f5;
  undefined4 uStack_2f4;
  byte local_2f0;
  undefined2 local_2ef;
  undefined1 local_2ed;
  undefined8 local_2ec;
  undefined4 local_2e4;
  long local_2e0;
  undefined1 *puStack_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  byte local_2c0;
  undefined4 local_2bf;
  undefined7 local_2bb;
  undefined4 uStack_2b4;
  long local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  byte local_290;
  undefined4 local_28f;
  undefined1 local_28b;
  undefined6 uStack_28a;
  char cStack_284;
  char cStack_283;
  undefined2 uStack_282;
  long local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  char local_25f [8];
  undefined1 local_257;
  undefined4 local_256;
  undefined2 local_252;
  long local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  undefined4 local_22f;
  undefined1 local_22b;
  undefined6 uStack_22a;
  char cStack_224;
  char cStack_223;
  undefined2 uStack_222;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined2 local_1fb;
  char local_1f9;
  char local_1f8;
  undefined7 uStack_1f7;
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined4 uStack_1cb;
  undefined4 uStack_1c7;
  undefined3 uStack_1c3;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char local_19f [8];
  undefined1 local_197;
  undefined4 local_196;
  undefined2 local_192;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined3 uStack_16b;
  undefined1 local_168;
  undefined4 local_167;
  undefined3 uStack_163;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar15 = DAT_043f1798;
  cStack_2f8 = 0;
  uStack_2f7 = 0;
  uStack_2f5 = 0;
  uStack_2f4 = 0;
  local_308 = 0x1c;
  cStack_2f9 = 0;
  uStack_307 = s_AudioComponent_038f4490._0_6_;
  cStack_301 = s_AudioComponent_038f4490[6];
  cStack_300 = s_AudioComponent_038f4490[7];
  local_2ff = s_AudioComponent_038f4490._8_6_;
  lVar1 = tpidr_el0;
  plVar20 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar20 = plVar15;
  }
  plVar15 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x150,8);
  plVar15[4] = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar20 = plVar15 + 1;
  *plVar20 = 0;
  plVar15[6] = (long)FUN_01033c00;
  plVar15[7] = (long)FUN_01033cb0;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  *plVar15 = (long)&PTR_FUN_041ef318;
  plVar15[0xc] = (long)&DAT_038ca815;
  plVar15[0xd] = (long)&DAT_0392da3c;
  plVar15[0x11] = (long)"StopAllPlayingId";
  plVar15[0x12] = (long)FUN_0290a5c0;
  plVar15[0x17] = (long)"SetRTPC";
  plVar15[0x18] = (long)"SetOutputVolume";
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  *(undefined1 *)(plVar15 + 0xe) = 0;
  plVar15[0x19] = (long)&LAB_0290ceb8;
  plVar15[0x1a] = 0;
  plVar15[0x1d] = (long)FUN_0290d098;
  plVar15[0x1e] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[0xf] = (long)"PostEventRequest";
  plVar15[0x10] = (long)"PostEvent";
  plVar15[0x13] = 0;
  plVar15[0x14] = (long)"IsActivePlayingId";
  plVar15[0x15] = (long)"PostTrigger";
  plVar15[0x16] = (long)"SetSwitch";
  plVar15[0x1b] = (long)"SetAuxBusVolume";
  plVar15[0x1c] = (long)"GetActiveEventCount";
  plVar15[0x1f] = (long)"GetActiveEventName";
  plVar15[0x20] = 0;
  plVar15[0x21] = 0;
  plVar15[0x22] = (long)FUN_01033e40;
  plVar15[0x29] = 0;
  plVar15[0x27] = 0;
  *(undefined1 *)(plVar15 + 0x28) = 0;
  plVar15[0x23] = (long)&LAB_01034120;
  plVar15[0x24] = (long)&LAB_01034400;
  plVar15[0x25] = (long)&LAB_01034410;
  plVar15[0x26] = 0;
  local_2d0 = &LAB_0103445c;
  local_2f0 = 6;
  local_2a0 = &LAB_010344ec;
  local_2ef = 0x656e;
  local_28f = 0x74736f50;
  local_2ed = 0x77;
  local_28b = 0x45;
  uStack_282 = 0x7365;
  uStack_28a = s_PostEventRequest_03960c43._5_6_;
  cStack_284 = s_PostEventRequest_03960c43[0xb];
  cStack_283 = s_PostEventRequest_03960c43[0xc];
  local_270 = &LAB_0103457c;
  local_2ec = 0;
  local_2e4 = 0;
  local_2c8 = 0xffffffff;
  local_2c0 = 8;
  local_2bf = 0x63675f5f;
  local_2bb = 0;
  uStack_2b4 = 0;
  local_298 = 0xffffffff;
  local_268 = 0xffffffff;
  local_260 = 0x12;
  local_257 = 0x74;
  local_2e0 = 0;
  puStack_2d8 = &LAB_01034414;
  local_2b0 = 0;
  puStack_2a8 = &LAB_010344a4;
  local_290 = 0x20;
  local_280 = 0x74;
  puStack_278 = &LAB_01034534;
  local_25f[0] = s_PostEvent_03956545[0];
  local_25f[1] = s_PostEvent_03956545[1];
  local_25f[2] = s_PostEvent_03956545[2];
  local_25f[3] = s_PostEvent_03956545[3];
  local_25f[4] = s_PostEvent_03956545[4];
  local_25f[5] = s_PostEvent_03956545[5];
  local_25f[6] = s_PostEvent_03956545[6];
  local_25f[7] = s_PostEvent_03956545[7];
  local_256 = 0;
  local_252 = 0;
  local_240 = &LAB_0103460c;
  local_238 = 0xffffffff;
  local_230 = 0x20;
  local_250 = 0;
  puStack_248 = &LAB_010345c4;
  local_22f = 0x706f7453;
  local_22b = 0x41;
  uStack_222 = 0x4967;
  uStack_22a = s_StopAllPlayingId_039a3b37._5_6_;
  cStack_224 = s_StopAllPlayingId_039a3b37[0xb];
  cStack_223 = s_StopAllPlayingId_039a3b37[0xc];
  local_210 = &LAB_0103469c;
  local_208 = 0xffffffff;
  local_220 = 100;
  puStack_218 = &LAB_01034654;
  local_200 = 0x22;
  uStack_1f7._0_1_ = s_IsActivePlayingId_039b41ff[8];
  uStack_1f7._1_1_ = s_IsActivePlayingId_039b41ff[9];
  uStack_1f7._2_1_ = s_IsActivePlayingId_039b41ff[10];
  uStack_1f7._3_1_ = s_IsActivePlayingId_039b41ff[0xb];
  uStack_1f7._4_1_ = s_IsActivePlayingId_039b41ff[0xc];
  uStack_1f7._5_1_ = s_IsActivePlayingId_039b41ff[0xd];
  uStack_1f7._6_1_ = s_IsActivePlayingId_039b41ff[0xe];
  local_1ff = s_IsActivePlayingId_039b41ff._0_4_;
  local_1fb = s_IsActivePlayingId_039b41ff._4_2_;
  local_1f9 = s_IsActivePlayingId_039b41ff[6];
  local_1f8 = s_IsActivePlayingId_039b41ff[7];
  local_1e0 = &LAB_0103472c;
  local_1d8 = 0xffffffff;
  local_1f0 = 0x6449;
  local_1e8 = &LAB_010346e4;
  local_1d0 = 0x16;
  local_1cf = s_PostTrigger_0394d457._0_4_;
  uStack_1cb = CONCAT13(0x67,s_PostTrigger_0394d457._4_3_);
  uStack_1c7 = 0x726567;
  uStack_1c3 = 0;
  local_1b0 = &LAB_010347bc;
  local_1a8 = 0xffffffff;
  local_1a0 = 0x12;
  local_1c0 = 0;
  puStack_1b8 = &LAB_01034774;
  local_19f[0] = s_SetSwitch_03987564[0];
  local_19f[1] = s_SetSwitch_03987564[1];
  local_19f[2] = s_SetSwitch_03987564[2];
  local_19f[3] = s_SetSwitch_03987564[3];
  local_19f[4] = s_SetSwitch_03987564[4];
  local_19f[5] = s_SetSwitch_03987564[5];
  local_19f[6] = s_SetSwitch_03987564[6];
  local_19f[7] = s_SetSwitch_03987564[7];
  local_197 = 0x68;
  local_196 = 0;
  local_192 = 0;
  local_180 = &LAB_0103484c;
  local_170 = 0xe;
  local_178 = 0xffffffff;
  local_190 = 0;
  puStack_188 = &LAB_01034804;
  local_16f = 0x52746553;
  uStack_16b = 0x435054;
  local_168 = 0;
  local_150 = &LAB_010348dc;
  local_167 = 0;
  uStack_163 = 0;
  local_148 = 0xffffffff;
  local_160 = 0;
  puStack_158 = &LAB_01034894;
  local_140 = 0x1e;
  local_13f[0] = s_SetOutputVolume_03944742[0];
  local_13f[1] = s_SetOutputVolume_03944742[1];
  local_13f[2] = s_SetOutputVolume_03944742[2];
  local_13f[3] = s_SetOutputVolume_03944742[3];
  local_13f[4] = s_SetOutputVolume_03944742[4];
  local_13f[5] = s_SetOutputVolume_03944742[5];
  local_13f[6] = s_SetOutputVolume_03944742[6];
  local_110 = 0x1e;
  local_118 = 0xffffffff;
  local_128 = &LAB_01034924;
  puStack_120 = &LAB_0103496c;
  cStack_138 = s_SetOutputVolume_03944742[7];
  acStack_137[0] = s_SetOutputVolume_03944742[8];
  acStack_137[1] = s_SetOutputVolume_03944742[9];
  acStack_137[2] = s_SetOutputVolume_03944742[10];
  acStack_137[3] = s_SetOutputVolume_03944742[0xb];
  acStack_137[4] = s_SetOutputVolume_03944742[0xc];
  acStack_137[5] = s_SetOutputVolume_03944742[0xd];
  acStack_137[6] = s_SetOutputVolume_03944742[0xe];
  local_130 = 0;
  local_10f[0] = s_SetAuxBusVolume_03a73580[0];
  local_10f[1] = s_SetAuxBusVolume_03a73580[1];
  local_10f[2] = s_SetAuxBusVolume_03a73580[2];
  local_10f[3] = s_SetAuxBusVolume_03a73580[3];
  local_10f[4] = s_SetAuxBusVolume_03a73580[4];
  local_10f[5] = s_SetAuxBusVolume_03a73580[5];
  local_10f[6] = s_SetAuxBusVolume_03a73580[6];
  local_f8 = &LAB_010349b4;
  local_f0 = &LAB_010349fc;
  local_e0 = 0x26;
  cStack_108 = s_SetAuxBusVolume_03a73580[7];
  acStack_107[0] = s_SetAuxBusVolume_03a73580[8];
  acStack_107[1] = s_SetAuxBusVolume_03a73580[9];
  acStack_107[2] = s_SetAuxBusVolume_03a73580[10];
  acStack_107[3] = s_SetAuxBusVolume_03a73580[0xb];
  acStack_107[4] = s_SetAuxBusVolume_03a73580[0xc];
  acStack_107[5] = s_SetAuxBusVolume_03a73580[0xd];
  acStack_107[6] = s_SetAuxBusVolume_03a73580[0xe];
  local_100 = 0;
  local_e8 = 0xffffffff;
  local_df[0] = s_GetActiveEventCount_03a735f4[0];
  local_df[1] = s_GetActiveEventCount_03a735f4[1];
  local_df[2] = s_GetActiveEventCount_03a735f4[2];
  local_df[3] = s_GetActiveEventCount_03a735f4[3];
  local_df[4] = s_GetActiveEventCount_03a735f4[4];
  local_df[5] = s_GetActiveEventCount_03a735f4[5];
  local_df[6] = s_GetActiveEventCount_03a735f4[6];
  local_d0 = 0x746e756f;
  local_c8 = &LAB_01034a44;
  local_c0 = &LAB_01034a8c;
  local_b0 = 0x24;
  cStack_d8 = s_GetActiveEventCount_03a735f4[7];
  acStack_d7[0] = s_GetActiveEventCount_03a735f4[8];
  acStack_d7[1] = s_GetActiveEventCount_03a735f4[9];
  acStack_d7[2] = s_GetActiveEventCount_03a735f4[10];
  acStack_d7[3] = s_GetActiveEventCount_03a735f4[0xb];
  acStack_d7[4] = s_GetActiveEventCount_03a735f4[0xc];
  acStack_d7[5] = s_GetActiveEventCount_03a735f4[0xd];
  acStack_d7[6] = s_GetActiveEventCount_03a735f4[0xe];
  local_b8 = 0xffffffff;
  local_af[0] = s_GetActiveEventName_03944752[0];
  local_af[1] = s_GetActiveEventName_03944752[1];
  local_af[2] = s_GetActiveEventName_03944752[2];
  local_af[3] = s_GetActiveEventName_03944752[3];
  local_af[4] = s_GetActiveEventName_03944752[4];
  local_af[5] = s_GetActiveEventName_03944752[5];
  local_af[6] = s_GetActiveEventName_03944752[6];
  local_a0 = 0x656d61;
  cStack_a8 = s_GetActiveEventName_03944752[7];
  acStack_a7[0] = s_GetActiveEventName_03944752[8];
  acStack_a7[1] = s_GetActiveEventName_03944752[9];
  acStack_a7[2] = s_GetActiveEventName_03944752[10];
  acStack_a7[3] = s_GetActiveEventName_03944752[0xb];
  acStack_a7[4] = s_GetActiveEventName_03944752[0xc];
  acStack_a7[5] = s_GetActiveEventName_03944752[0xd];
  acStack_a7[6] = s_GetActiveEventName_03944752[0xe];
  local_98 = &LAB_01034ad4;
  local_90 = &LAB_01034b1c;
  local_88 = 0xffffffff;
  FUN_01034b64(plVar20,&local_2f0,0xd);
  lVar16 = FUN_008cca50();
  lVar24 = 0;
  do {
    lVar17 = FUN_008e8c90(plVar20,lVar16 + lVar24);
    if (lVar17 != 0) {
      FUN_008f2aec(local_80,plVar20,lVar17);
      lVar17 = local_80[0];
      plVar23 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar17 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar17 + 0x10) & 1) != 0)) &&
           (lVar26 = *(long *)(lVar17 + 0x20), lVar26 != 0)) {
          plVar25 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar25 = plVar23;
          }
          uVar18 = (**(code **)(*plVar25 + 0xc0))(plVar25);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar25,lVar26,0,8);
              goto LAB_010315f4;
            }
          }
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
        }
LAB_010315f4:
        plVar23 = DAT_043f1798;
        plVar25 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar25 = plVar23;
        }
        uVar18 = (**(code **)(*plVar25 + 0xc0))(plVar25);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar25,lVar17,0,8);
            goto LAB_010315a8;
          }
        }
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar17,0,8);
      }
    }
LAB_010315a8:
    lVar24 = lVar24 + 0x18;
  } while (lVar24 != 0x300);
  pcVar21 = (char *)plVar15[0xc];
  sVar19 = strlen(pcVar21);
  iVar2 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0xd];
  sVar19 = strlen(pcVar21);
  iVar3 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0xf];
  sVar19 = strlen(pcVar21);
  iVar4 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x10];
  sVar19 = strlen(pcVar21);
  iVar5 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x11];
  sVar19 = strlen(pcVar21);
  iVar6 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x14];
  sVar19 = strlen(pcVar21);
  iVar7 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x15];
  sVar19 = strlen(pcVar21);
  iVar8 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x16];
  sVar19 = strlen(pcVar21);
  iVar9 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x17];
  sVar19 = strlen(pcVar21);
  iVar10 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x18];
  sVar19 = strlen(pcVar21);
  iVar11 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x1b];
  sVar19 = strlen(pcVar21);
  iVar12 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x1c];
  sVar19 = strlen(pcVar21);
  iVar13 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x1f];
  sVar19 = strlen(pcVar21);
  iVar14 = FUN_008f2c60(sVar19,pcVar21);
  lVar16 = local_a0;
  *(bool *)(plVar15 + 0xb) =
       (((((((((((iVar3 != 0 || iVar2 != 0) || iVar4 != 0) || iVar5 != 0) || iVar6 != 0) ||
             iVar7 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0) ||
        iVar12 != 0) || iVar13 != 0) || iVar14 != 0;
  plVar20 = DAT_043f1798;
  lVar24 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_d0;
        goto joined_r0x01031870;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_d0;
  }
joined_r0x01031870:
  lVar16 = local_100;
  local_d0 = lVar24;
  if (((local_e0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_100;
        goto joined_r0x010325f4;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_100;
  }
joined_r0x010325f4:
  lVar24 = local_130;
  local_100 = lVar16;
  if (((local_110 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_130;
        goto joined_r0x010319d0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_130;
  }
joined_r0x010319d0:
  lVar16 = local_160;
  local_130 = lVar24;
  if (((local_140 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_160;
        goto joined_r0x01032634;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_160;
  }
joined_r0x01032634:
  lVar24 = local_190;
  local_160 = lVar16;
  if (((local_170 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_190;
        goto joined_r0x01031b30;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_190;
  }
joined_r0x01031b30:
  lVar16 = local_1c0;
  local_190 = lVar24;
  if (((local_1a0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_1c0;
        goto joined_r0x01032674;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_1c0;
  }
joined_r0x01032674:
  lVar24 = local_1f0;
  local_1c0 = lVar16;
  if (((local_1d0 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_1f0;
        goto joined_r0x01031c90;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_1f0;
  }
joined_r0x01031c90:
  lVar16 = local_220;
  local_1f0 = lVar24;
  if (((local_200 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_220;
        goto joined_r0x010326b4;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_220;
  }
joined_r0x010326b4:
  lVar24 = local_250;
  local_220 = lVar16;
  if (((local_230 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_250;
        goto joined_r0x01031df0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_250;
  }
joined_r0x01031df0:
  lVar16 = local_280;
  local_250 = lVar24;
  if (((local_260 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_280;
        goto joined_r0x010326f4;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_280;
  }
joined_r0x010326f4:
  lVar24 = local_2b0;
  local_280 = lVar16;
  if (((local_290 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_2b0;
        goto joined_r0x01031f50;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_2b0;
  }
joined_r0x01031f50:
  lVar16 = local_2e0;
  local_2b0 = lVar24;
  if (((local_2c0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_2e0;
        goto joined_r0x01032734;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_2e0;
  }
joined_r0x01032734:
  DAT_043f1798 = plVar20;
  local_2e0 = lVar16;
  if (((local_2f0 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        goto LAB_010320ac;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
  }
LAB_010320ac:
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar22);
  (**(code **)*plVar15)(plVar15,uVar22);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  uVar18 = (ulong)&local_308 | 1;
  if ((local_308 & 1) != 0) {
    uVar18 = CONCAT44(uStack_2f4,CONCAT13(uStack_2f5,CONCAT21(uStack_2f7,cStack_2f8)));
  }
  FUN_001522a0(uVar22,uVar18);
  plVar15 = DAT_043f1798;
  if (((local_308 & 1) != 0) &&
     (lVar24 = CONCAT44(uStack_2f4,CONCAT13(uStack_2f5,CONCAT21(uStack_2f7,cStack_2f8))),
     lVar24 != 0)) {
    plVar20 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar20 = plVar15;
    }
    uVar18 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar20,lVar24,0,8);
        goto LAB_010321a8;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar24,0,8);
  }
LAB_010321a8:
  plVar15 = DAT_043f1798;
  local_308 = 0x24;
  uStack_2f4 = 0;
  uStack_2f7 = 0x7265;
  uStack_307 = s_BGMLayerController_03960c54._0_6_;
  cStack_301 = s_BGMLayerController_03960c54[6];
  cStack_300 = s_BGMLayerController_03960c54[7];
  local_2ff = s_BGMLayerController_03960c54._8_6_;
  cStack_2f9 = s_BGMLayerController_03960c54[0xe];
  cStack_2f8 = s_BGMLayerController_03960c54[0xf];
  uStack_2f5 = 0;
  plVar20 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar20 = plVar15;
  }
  plVar15 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x138,8);
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar20 = plVar15 + 1;
  *plVar20 = 0;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  plVar15[6] = (long)FUN_0103de40;
  plVar15[7] = (long)FUN_0103def0;
  plVar15[0xc] = (long)&DAT_0399a639;
  plVar15[0xd] = (long)&DAT_038c0f26;
  plVar15[0x14] = (long)&LAB_01033aa0;
  plVar15[0x15] = 0;
  plVar15[0x10] = (long)&DAT_039b3942;
  plVar15[0x11] = (long)&LAB_01033a04;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = (long)FUN_0103e080;
  plVar15[0x16] = (long)&DAT_038ae2b6;
  plVar15[0x17] = (long)&LAB_01033ac0;
  plVar15[0x20] = (long)&LAB_0103e360;
  plVar15[0x18] = 0;
  plVar15[0x19] = (long)"Unlock";
  plVar15[0x21] = (long)&LAB_01034400;
  *plVar15 = (long)&PTR_FUN_041ef340;
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  plVar15[0x26] = 0;
  plVar15[0x24] = 0;
  *(undefined1 *)(plVar15 + 0x25) = 0;
  plVar15[0x1a] = (long)&LAB_01033b58;
  plVar15[0x1b] = 0;
  plVar15[0x22] = (long)&LAB_01034410;
  plVar15[0x23] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[0xe] = (long)&LAB_01033968;
  plVar15[0xf] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = (long)"IsPlaying";
  plVar15[0x1c] = (long)&DAT_0392da3c;
  plVar15[0x1d] = 0;
  local_2f0 = 6;
  local_2ef = 0x6553;
  local_2ed = 0x74;
  local_2d0 = &LAB_0103e684;
  local_2a0 = &LAB_0103e714;
  local_2ec = 0;
  local_2e4 = 0;
  local_2c8 = 0xffffffff;
  local_2c0 = 8;
  local_2bb = 0;
  uStack_2b4 = 0;
  local_298 = 0xffffffff;
  local_290 = 8;
  cStack_283 = 0;
  uStack_282 = 0;
  local_28b = 0;
  uStack_28a = 0;
  cStack_284 = 0;
  local_270 = &LAB_0103e7a4;
  local_268 = 0xffffffff;
  local_2e0 = 0;
  puStack_2d8 = &LAB_0103e63c;
  local_2bf = 0x79616c50;
  local_2b0 = 0;
  puStack_2a8 = &LAB_0103e6cc;
  local_28f = 0x706f7453;
  local_280 = 0;
  puStack_278 = &LAB_0103e75c;
  local_260 = 0x12;
  local_25f[0] = s_IsPlaying_0396088a[0];
  local_25f[1] = s_IsPlaying_0396088a[1];
  local_25f[2] = s_IsPlaying_0396088a[2];
  local_25f[3] = s_IsPlaying_0396088a[3];
  local_25f[4] = s_IsPlaying_0396088a[4];
  local_25f[5] = s_IsPlaying_0396088a[5];
  local_25f[6] = s_IsPlaying_0396088a[6];
  local_25f[7] = s_IsPlaying_0396088a[7];
  local_257 = 0x67;
  local_256 = 0;
  local_252 = 0;
  local_240 = &LAB_0103e834;
  local_238 = 0xffffffff;
  local_230 = 8;
  local_250 = 0;
  puStack_248 = &LAB_0103e7ec;
  local_22f = 0x6b636f4c;
  cStack_223 = 0;
  uStack_222 = 0;
  local_22b = 0;
  uStack_22a = 0;
  cStack_224 = 0;
  local_210 = &LAB_0103e8c4;
  local_208 = 0xffffffff;
  local_220 = 0;
  puStack_218 = &LAB_0103e87c;
  local_200 = 0xc;
  local_1fb = 0x6b63;
  local_1ff = 0x6f6c6e55;
  local_1f9 = 0;
  local_1d8 = 0xffffffff;
  local_1d0 = 8;
  local_1e8 = &LAB_0103e90c;
  local_1e0 = &LAB_0103e954;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = 0;
  local_1cf = 0x63675f5f;
  uStack_1c3 = 0;
  uStack_1cb = 0;
  uStack_1c7 = 0;
  local_1b0 = &LAB_0103e9e4;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_0103e99c;
  FUN_01034b64(plVar20,&local_2f0,7);
  lVar16 = FUN_008cca50();
  lVar24 = 0;
  do {
    lVar17 = FUN_008e8c90(plVar20,lVar16 + lVar24);
    if (lVar17 != 0) {
      FUN_008f2aec(local_80,plVar20,lVar17);
      lVar17 = local_80[0];
      plVar23 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar17 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar17 + 0x10) & 1) != 0)) &&
           (lVar26 = *(long *)(lVar17 + 0x20), lVar26 != 0)) {
          plVar25 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar25 = plVar23;
          }
          uVar18 = (**(code **)(*plVar25 + 0xc0))(plVar25);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar25,lVar26,0,8);
              goto LAB_01032d38;
            }
          }
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar26,0,8);
        }
LAB_01032d38:
        plVar23 = DAT_043f1798;
        plVar25 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar25 = plVar23;
        }
        uVar18 = (**(code **)(*plVar25 + 0xc0))(plVar25);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar25,lVar17,0,8);
            goto LAB_01032ce8;
          }
        }
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar17,0,8);
      }
    }
LAB_01032ce8:
    lVar24 = lVar24 + 0x18;
  } while (lVar24 != 0x300);
  pcVar21 = (char *)plVar15[0xc];
  sVar19 = strlen(pcVar21);
  iVar2 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0xd];
  sVar19 = strlen(pcVar21);
  iVar3 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x10];
  sVar19 = strlen(pcVar21);
  iVar4 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x13];
  sVar19 = strlen(pcVar21);
  iVar5 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x16];
  sVar19 = strlen(pcVar21);
  iVar6 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x19];
  sVar19 = strlen(pcVar21);
  iVar7 = FUN_008f2c60(sVar19,pcVar21);
  pcVar21 = (char *)plVar15[0x1c];
  sVar19 = strlen(pcVar21);
  iVar8 = FUN_008f2c60(sVar19,pcVar21);
  lVar16 = local_1c0;
  *(bool *)(plVar15 + 0xb) =
       (((((iVar3 != 0 || iVar2 != 0) || iVar4 != 0) || iVar5 != 0) || iVar6 != 0) || iVar7 != 0) ||
       iVar8 != 0;
  plVar20 = DAT_043f1798;
  lVar24 = local_1f0;
  if (((local_1d0 & 1) != 0) && (local_1c0 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_1f0;
        goto joined_r0x01032f1c;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_1f0;
  }
joined_r0x01032f1c:
  lVar16 = local_220;
  local_1f0 = lVar24;
  if (((local_200 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_220;
        goto joined_r0x01033550;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_220;
  }
joined_r0x01033550:
  lVar24 = local_250;
  local_220 = lVar16;
  if (((local_230 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_250;
        goto joined_r0x0103307c;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_250;
  }
joined_r0x0103307c:
  lVar16 = local_280;
  local_250 = lVar24;
  if (((local_260 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_280;
        goto joined_r0x01033590;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_280;
  }
joined_r0x01033590:
  lVar24 = local_2b0;
  local_280 = lVar16;
  if (((local_290 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        plVar20 = DAT_043f1798;
        lVar24 = local_2b0;
        goto joined_r0x010331dc;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
    plVar20 = DAT_043f1798;
    lVar24 = local_2b0;
  }
joined_r0x010331dc:
  lVar16 = local_2e0;
  local_2b0 = lVar24;
  if (((local_2c0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar20;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar20 = DAT_043f1798;
        lVar16 = local_2e0;
        goto joined_r0x010335d0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar20 = DAT_043f1798;
    lVar16 = local_2e0;
  }
joined_r0x010335d0:
  DAT_043f1798 = plVar20;
  local_2e0 = lVar16;
  if (((local_2f0 & 1) != 0) && (lVar16 != 0)) {
    plVar23 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar20;
      plVar23 = plVar20;
    }
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar16,0,8);
        goto LAB_01033338;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,0,8);
  }
LAB_01033338:
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar22);
  (**(code **)*plVar15)(plVar15,uVar22);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  uVar18 = (ulong)&local_308 | 1;
  if ((local_308 & 1) != 0) {
    uVar18 = CONCAT44(uStack_2f4,CONCAT13(uStack_2f5,CONCAT21(uStack_2f7,cStack_2f8)));
  }
  FUN_001522a0(uVar22,uVar18);
  plVar15 = DAT_043f1798;
  if (((local_308 & 1) != 0) &&
     (lVar24 = CONCAT44(uStack_2f4,CONCAT13(uStack_2f5,CONCAT21(uStack_2f7,cStack_2f8))),
     lVar24 != 0)) {
    plVar20 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar20 = plVar15;
    }
    uVar18 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar20,lVar24,0,8);
        return;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar24,0,8);
  }
  return;
}


