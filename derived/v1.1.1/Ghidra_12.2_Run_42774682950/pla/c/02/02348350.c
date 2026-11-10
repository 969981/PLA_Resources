/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02348350; name: FUN_02348350
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02348350(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
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
  ulong uVar20;
  long lVar21;
  size_t sVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  string *psVar27;
  long lVar28;
  string *psVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  long *plVar33;
  char *pcVar34;
  string *psVar35;
  long lVar36;
  byte local_278;
  undefined7 uStack_277;
  char cStack_270;
  undefined7 uStack_26f;
  undefined4 local_268;
  undefined4 uStack_264;
  string local_260;
  undefined2 local_25f;
  undefined1 local_25d;
  undefined8 local_25c;
  undefined4 local_254;
  long local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  undefined4 local_22f;
  undefined7 local_22b;
  undefined4 uStack_224;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  char local_1ff [8];
  undefined2 local_1f7;
  undefined1 local_1f5;
  undefined4 local_1f4;
  long local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  char local_1cf [7];
  char cStack_1c8;
  char acStack_1c7 [7];
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  char acStack_19f [7];
  char local_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  char acStack_16f [7];
  char local_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
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
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  undefined *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  local_278 = 0x26;
  uStack_26f = s_PlayerFaceComponent_038ce085._8_7_;
  local_268 = CONCAT31(0x746e65,s_PlayerFaceComponent_038ce085[0xf]);
  uStack_277 = s_PlayerFaceComponent_038ce085._0_7_;
  cStack_270 = s_PlayerFaceComponent_038ce085[7];
  uStack_264 = 0;
  uVar6 = tpidr_el0;
  plVar26 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar26 = plVar1;
  }
  plVar19 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x170,8);
  plVar19[4] = 0;
  plVar33 = plVar19 + 1;
  *plVar33 = 0;
  *(undefined4 *)(plVar19 + 5) = 0x3f800000;
  plVar19[10] = 0;
  *(undefined1 *)(plVar19 + 0xb) = 0;
  plVar19[6] = (long)FUN_02349db0;
  plVar19[7] = (long)FUN_02349e60;
  *plVar19 = (long)&PTR_FUN_0425bc90;
  plVar19[0x13] = (long)FUN_025d46fc;
  plVar19[0x14] = 0;
  plVar19[0xc] = (long)&DAT_038ca815;
  plVar19[0xd] = (long)&DAT_0392da3c;
  plVar19[0x19] = (long)&LAB_025d51a4;
  plVar19[0x1a] = 0;
  plVar19[0xf] = (long)"StartBuddyTalkSmile";
  plVar19[0x10] = (long)FUN_025d4194;
  plVar19[0x1b] = (long)"StartBuddyTalkHappySurprise";
  plVar19[0x1c] = (long)&LAB_025d5704;
  plVar19[0x15] = (long)"StartBuddyTalkTrouble";
  plVar19[0x16] = (long)&LAB_025d4c50;
  plVar19[0x1f] = (long)&LAB_025d5c64;
  plVar19[0x20] = 0;
  plVar19[0x21] = (long)"CheckBuddyReaction";
  plVar19[0x22] = (long)FUN_025d61b8;
  plVar19[0x25] = 0;
  plVar19[0x26] = (long)FUN_02349ff0;
  plVar19[0x27] = (long)&LAB_0234a2d0;
  plVar19[0x28] = (long)&LAB_0234a5b0;
  plVar19[0x29] = (long)&LAB_0234a5c0;
  plVar19[0x2a] = 0;
  *(undefined1 *)(plVar19 + 0xe) = 0;
  plVar19[0x2d] = 0;
  plVar19[0x2b] = 0;
  *(undefined1 *)(plVar19 + 0x2c) = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[0x11] = 0;
  plVar19[0x12] = (long)"StartBuddyTalkFailure";
  plVar19[0x17] = 0;
  plVar19[0x18] = (long)"StartBuddyTalkUnHappySurprise";
  plVar19[0x1d] = 0;
  plVar19[0x1e] = (long)"StartBuddyTalkRandomSurprise";
  plVar19[0x23] = 0;
  plVar19[0x24] = 0;
  plVar1 = DAT_043f1798;
  local_260 = (string)0x6;
  local_25f = 0x656e;
  local_25d = 0x77;
  local_240 = &LAB_0234a60c;
  local_25c = 0;
  local_254 = 0;
  local_238 = 0xffffffff;
  local_230 = 8;
  local_22b = 0;
  uStack_224 = 0;
  local_210 = &LAB_0234a69c;
  local_208 = 0xffffffff;
  local_250 = 0;
  local_248 = &LAB_0234a5c4;
  local_22f = 0x63675f5f;
  local_220 = 0;
  puStack_218 = &LAB_0234a654;
  local_200 = 0x14;
  local_1f7 = 0x7473;
  local_1ff[0] = s_class_cast_038dd4e7[0];
  local_1ff[1] = s_class_cast_038dd4e7[1];
  local_1ff[2] = s_class_cast_038dd4e7[2];
  local_1ff[3] = s_class_cast_038dd4e7[3];
  local_1ff[4] = s_class_cast_038dd4e7[4];
  local_1ff[5] = s_class_cast_038dd4e7[5];
  local_1ff[6] = s_class_cast_038dd4e7[6];
  local_1ff[7] = s_class_cast_038dd4e7[7];
  local_1f5 = 0;
  local_1f4 = 0;
  local_1e0 = &LAB_0234a72c;
  local_1d8 = 0xffffffff;
  local_1d0 = 0x26;
  local_1f0 = 0;
  puStack_1e8 = &LAB_0234a6e4;
  local_1cf[0] = s_StartBuddyTalkSmile_039634b7[0];
  local_1cf[1] = s_StartBuddyTalkSmile_039634b7[1];
  local_1cf[2] = s_StartBuddyTalkSmile_039634b7[2];
  local_1cf[3] = s_StartBuddyTalkSmile_039634b7[3];
  local_1cf[4] = s_StartBuddyTalkSmile_039634b7[4];
  local_1cf[5] = s_StartBuddyTalkSmile_039634b7[5];
  local_1cf[6] = s_StartBuddyTalkSmile_039634b7[6];
  local_1a8 = 0xffffffff;
  cStack_1c8 = s_StartBuddyTalkSmile_039634b7[7];
  acStack_1c7[0] = s_StartBuddyTalkSmile_039634b7[8];
  acStack_1c7[1] = s_StartBuddyTalkSmile_039634b7[9];
  acStack_1c7[2] = s_StartBuddyTalkSmile_039634b7[10];
  acStack_1c7[3] = s_StartBuddyTalkSmile_039634b7[0xb];
  acStack_1c7[4] = s_StartBuddyTalkSmile_039634b7[0xc];
  acStack_1c7[5] = s_StartBuddyTalkSmile_039634b7[0xd];
  acStack_1c7[6] = s_StartBuddyTalkSmile_039634b7[0xe];
  local_1c0 = 0x656c696d;
  local_1a0 = 0x2a;
  acStack_197[0] = s_StartBuddyTalkFailure_039aea31[8];
  acStack_197[1] = s_StartBuddyTalkFailure_039aea31[9];
  acStack_197[2] = s_StartBuddyTalkFailure_039aea31[10];
  acStack_197[3] = s_StartBuddyTalkFailure_039aea31[0xb];
  acStack_197[4] = s_StartBuddyTalkFailure_039aea31[0xc];
  acStack_197[5] = s_StartBuddyTalkFailure_039aea31[0xd];
  acStack_197[6] = s_StartBuddyTalkFailure_039aea31[0xe];
  local_1b8 = &LAB_0234a774;
  puStack_1b0 = &LAB_0234a7bc;
  acStack_19f[0] = s_StartBuddyTalkFailure_039aea31[0];
  acStack_19f[1] = s_StartBuddyTalkFailure_039aea31[1];
  acStack_19f[2] = s_StartBuddyTalkFailure_039aea31[2];
  acStack_19f[3] = s_StartBuddyTalkFailure_039aea31[3];
  acStack_19f[4] = s_StartBuddyTalkFailure_039aea31[4];
  acStack_19f[5] = s_StartBuddyTalkFailure_039aea31[5];
  acStack_19f[6] = s_StartBuddyTalkFailure_039aea31[6];
  local_198 = s_StartBuddyTalkFailure_039aea31[7];
  local_180 = &LAB_0234a84c;
  local_178 = 0xffffffff;
  local_170 = 0x2a;
  local_190 = 0x6572756c6961;
  puStack_188 = &LAB_0234a804;
  acStack_167[0] = s_StartBuddyTalkTrouble_03977392[8];
  acStack_167[1] = s_StartBuddyTalkTrouble_03977392[9];
  acStack_167[2] = s_StartBuddyTalkTrouble_03977392[10];
  acStack_167[3] = s_StartBuddyTalkTrouble_03977392[0xb];
  acStack_167[4] = s_StartBuddyTalkTrouble_03977392[0xc];
  acStack_167[5] = s_StartBuddyTalkTrouble_03977392[0xd];
  acStack_167[6] = s_StartBuddyTalkTrouble_03977392[0xe];
  acStack_16f[0] = s_StartBuddyTalkTrouble_03977392[0];
  acStack_16f[1] = s_StartBuddyTalkTrouble_03977392[1];
  acStack_16f[2] = s_StartBuddyTalkTrouble_03977392[2];
  acStack_16f[3] = s_StartBuddyTalkTrouble_03977392[3];
  acStack_16f[4] = s_StartBuddyTalkTrouble_03977392[4];
  acStack_16f[5] = s_StartBuddyTalkTrouble_03977392[5];
  acStack_16f[6] = s_StartBuddyTalkTrouble_03977392[6];
  local_168 = s_StartBuddyTalkTrouble_03977392[7];
  local_148 = 0xffffffff;
  local_160 = 0x656c62756f72;
  puStack_158 = &LAB_0234a894;
  local_150 = &LAB_0234a8dc;
  plVar26 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar26 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar26 + 0x10))(plVar26,0x20,8);
  local_130[0x1d] = '\0';
  uVar8 = s_StartBuddyTalkUnHappySurprise_038e27d7._8_8_;
  *(undefined8 *)local_130 = s_StartBuddyTalkUnHappySurprise_038e27d7._0_8_;
  *(ulong *)(local_130 + 0x15) =
       CONCAT53(s_StartBuddyTalkUnHappySurprise_038e27d7._24_5_,
                s_StartBuddyTalkUnHappySurprise_038e27d7._21_3_);
  uVar32 = CONCAT35(s_StartBuddyTalkUnHappySurprise_038e27d7._21_3_,
                    s_StartBuddyTalkUnHappySurprise_038e27d7._16_5_);
  *(undefined8 *)(local_130 + 8) = uVar8;
  *(undefined8 *)(local_130 + 0x10) = uVar32;
  plVar1 = DAT_043f1798;
  local_140 = 0x21;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_138 = 0x1d;
  local_118 = 0xffffffff;
  local_128 = &LAB_0234a924;
  puStack_120 = &LAB_0234a96c;
  plVar26 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar26 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar26 + 0x10))(plVar26,0x20,8);
  local_100[0x17] = 'r';
  local_100[0x18] = 'i';
  local_100[0x19] = 's';
  local_100[0x1a] = 'e';
  local_100[0x1b] = '\0';
  uVar32 = s_StartBuddyTalkHappySurprise_039634cb._8_8_;
  *(undefined8 *)local_100 = s_StartBuddyTalkHappySurprise_039634cb._0_8_;
  uVar8 = s_StartBuddyTalkHappySurprise_039634cb._16_8_;
  *(undefined8 *)(local_100 + 8) = uVar32;
  *(undefined8 *)(local_100 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_110 = 0x21;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_108 = 0x1b;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0234a9b4;
  puStack_f0 = &LAB_0234a9fc;
  plVar26 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar26 = plVar1;
  }
  local_d0 = (char *)(**(code **)(*plVar26 + 0x10))(plVar26,0x20,8);
  local_d0[0x18] = 'r';
  local_d0[0x19] = 'i';
  local_d0[0x1a] = 's';
  local_d0[0x1b] = 'e';
  local_d0[0x1c] = '\0';
  uVar32 = s_StartBuddyTalkRandomSurprise_0392bae9._8_8_;
  *(undefined8 *)local_d0 = s_StartBuddyTalkRandomSurprise_0392bae9._0_8_;
  uVar8 = s_StartBuddyTalkRandomSurprise_0392bae9._16_8_;
  psVar35 = &local_260;
  *(undefined8 *)(local_d0 + 8) = uVar32;
  *(undefined8 *)(local_d0 + 0x10) = uVar8;
  local_e0 = 0x21;
  local_d9 = 0;
  local_db = 0;
  local_df = 0;
  local_d8 = 0x1c;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_0234aa44;
  puStack_c0 = &LAB_0234aa8c;
  local_b0 = 0x24;
  local_af[0] = s_CheckBuddyReaction_0393e257[0];
  local_af[1] = s_CheckBuddyReaction_0393e257[1];
  local_af[2] = s_CheckBuddyReaction_0393e257[2];
  local_af[3] = s_CheckBuddyReaction_0393e257[3];
  local_af[4] = s_CheckBuddyReaction_0393e257[4];
  local_af[5] = s_CheckBuddyReaction_0393e257[5];
  local_af[6] = s_CheckBuddyReaction_0393e257[6];
  cStack_a8 = s_CheckBuddyReaction_0393e257[7];
  acStack_a7[0] = s_CheckBuddyReaction_0393e257[8];
  acStack_a7[1] = s_CheckBuddyReaction_0393e257[9];
  acStack_a7[2] = s_CheckBuddyReaction_0393e257[10];
  acStack_a7[3] = s_CheckBuddyReaction_0393e257[0xb];
  acStack_a7[4] = s_CheckBuddyReaction_0393e257[0xc];
  acStack_a7[5] = s_CheckBuddyReaction_0393e257[0xd];
  acStack_a7[6] = s_CheckBuddyReaction_0393e257[0xe];
  local_a0 = &DAT_006e6f69;
  local_90 = &LAB_0234ab1c;
  local_98 = &LAB_0234aad4;
  local_88 = 0xffffffff;
  plVar1 = plVar19 + 3;
  uVar23 = uVar6;
  do {
    uVar20 = *(ulong *)(psVar35 + 8);
    psVar3 = *(string **)(psVar35 + 0x10);
    if (((byte)*psVar35 & 1) == 0) {
      psVar3 = psVar35 + 1;
      uVar20 = (ulong)((byte)*psVar35 >> 1);
    }
    uVar20 = FUN_008e8ed4(local_80,psVar3,uVar20);
    uVar31 = plVar19[2];
    if (uVar31 != 0) {
      uVar23 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar24 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar24 < 2) {
        uVar23 = uVar31 - 1 & uVar20;
      }
      else {
        uVar23 = uVar20;
        if (uVar31 <= uVar20) {
          uVar23 = 0;
          if (uVar31 != 0) {
            uVar23 = uVar20 / uVar31;
          }
          uVar23 = uVar20 - uVar23 * uVar31;
        }
      }
      plVar26 = *(long **)(*plVar33 + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        psVar3 = psVar35 + 1;
        sVar22 = (ulong)((byte)*psVar35 >> 1);
        if (((byte)*psVar35 & 1) != 0) {
          psVar3 = *(string **)(psVar35 + 0x10);
          sVar22 = *(size_t *)(psVar35 + 8);
        }
        if (uVar24 < 2) {
          if (sVar22 == 0) {
            do {
              if (plVar26[1] != uVar20 && (plVar26[1] & uVar31 - 1) != uVar23) break;
              uVar24 = (ulong)(*(byte *)(plVar26 + 2) >> 1);
              if ((*(byte *)(plVar26 + 2) & 1) != 0) {
                uVar24 = plVar26[3];
              }
              if (uVar24 == 0) goto LAB_02348b94;
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              if (plVar26[1] != uVar20 && (plVar26[1] & uVar31 - 1) != uVar23) break;
              bVar4 = *(byte *)(plVar26 + 2);
              uVar24 = (ulong)(bVar4 >> 1);
              sVar2 = uVar24;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar26[3];
              }
              if (sVar2 == sVar22) {
                if ((bVar4 & 1) == 0) {
                  psVar27 = (string *)((long)plVar26 + 0x11);
                  psVar29 = psVar3;
                  while (*psVar27 == *psVar29) {
                    uVar24 = uVar24 - 1;
                    psVar27 = psVar27 + 1;
                    psVar29 = psVar29 + 1;
                    if (uVar24 == 0) goto LAB_02348b94;
                  }
                }
                else {
                  iVar10 = memcmp((void *)plVar26[4],psVar3,sVar22);
                  if (iVar10 == 0) goto LAB_02348b94;
                }
              }
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
        }
        else if (sVar22 == 0) {
          do {
            uVar24 = plVar26[1];
            if (uVar24 != uVar20) {
              if (uVar31 <= uVar24) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar24 / uVar31;
                }
                uVar24 = uVar24 - uVar5 * uVar31;
              }
              if (uVar24 != uVar23) break;
            }
            uVar24 = (ulong)(*(byte *)(plVar26 + 2) >> 1);
            if ((*(byte *)(plVar26 + 2) & 1) != 0) {
              uVar24 = plVar26[3];
            }
            if (uVar24 == 0) goto LAB_02348b94;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar26[1];
            if (uVar24 != uVar20) {
              if (uVar31 <= uVar24) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar24 / uVar31;
                }
                uVar24 = uVar24 - uVar5 * uVar31;
              }
              if (uVar24 != uVar23) break;
            }
            bVar4 = *(byte *)(plVar26 + 2);
            uVar24 = (ulong)(bVar4 >> 1);
            sVar2 = uVar24;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar26[3];
            }
            if (sVar2 == sVar22) {
              if ((bVar4 & 1) == 0) {
                psVar27 = (string *)((long)plVar26 + 0x11);
                psVar29 = psVar3;
                while (*psVar27 == *psVar29) {
                  uVar24 = uVar24 - 1;
                  psVar27 = psVar27 + 1;
                  psVar29 = psVar29 + 1;
                  if (uVar24 == 0) goto LAB_02348b94;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar26[4],psVar3,sVar22);
                if (iVar10 == 0) goto LAB_02348b94;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    plVar26 = DAT_043f1798;
    plVar25 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar25 = plVar26;
    }
    plVar26 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x40,8);
    std::string::string((string *)(plVar26 + 2),psVar35);
    lVar28 = *(long *)(psVar35 + 0x18);
    lVar30 = *(long *)(psVar35 + 0x28);
    plVar26[6] = *(long *)(psVar35 + 0x20);
    plVar26[7] = lVar30;
    plVar26[5] = lVar28;
    *plVar26 = 0;
    plVar26[1] = uVar20;
    if ((uVar31 == 0) || (*(float *)(plVar19 + 5) * (float)uVar31 < (float)(plVar19[4] + 1))) {
      uVar23 = (ulong)(uVar31 < 3 || (uVar31 & uVar31 - 1) != 0) | uVar31 << 1;
      uVar31 = (ulong)((float)(plVar19[4] + 1) / *(float *)(plVar19 + 5));
      if (uVar31 <= uVar23) {
        uVar31 = uVar23;
      }
      FUN_008e9ae4(plVar33,uVar31);
      uVar31 = plVar19[2];
      if ((uVar31 & uVar31 - 1) == 0) {
        uVar23 = uVar31 - 1 & uVar20;
      }
      else if (uVar20 < uVar31) {
        uVar23 = uVar20;
      }
      else {
        uVar23 = 0;
        if (uVar31 != 0) {
          uVar23 = uVar20 / uVar31;
        }
        uVar23 = uVar20 - uVar23 * uVar31;
      }
    }
    lVar28 = *plVar33;
    plVar25 = *(long **)(lVar28 + uVar23 * 8);
    if (plVar25 == (long *)0x0) {
      *plVar26 = *plVar1;
      *plVar1 = (long)plVar26;
      *(long **)(lVar28 + uVar23 * 8) = plVar1;
      if (*plVar26 != 0) {
        uVar20 = *(ulong *)(*plVar26 + 8);
        if ((uVar31 & uVar31 - 1) == 0) {
          uVar20 = uVar20 & uVar31 - 1;
        }
        else if (uVar31 <= uVar20) {
          uVar24 = 0;
          if (uVar31 != 0) {
            uVar24 = uVar20 / uVar31;
          }
          uVar20 = uVar20 - uVar24 * uVar31;
        }
        plVar25 = (long *)(*plVar33 + uVar20 * 8);
        goto LAB_02348b84;
      }
    }
    else {
      *plVar26 = *plVar25;
LAB_02348b84:
      *plVar25 = (long)plVar26;
    }
    plVar19[4] = plVar19[4] + 1;
LAB_02348b94:
    psVar35 = psVar35 + 0x30;
  } while (psVar35 != (string *)local_80);
  lVar30 = FUN_008cca50();
  lVar28 = 0;
  do {
    lVar21 = FUN_008e8c90(plVar33,lVar30 + lVar28);
    if (lVar21 != 0) {
      FUN_008f2aec(local_80,plVar33,lVar21);
      lVar21 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar21 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar21 + 0x10) & 1) != 0)) &&
           (lVar36 = *(long *)(lVar21 + 0x20), lVar36 != 0)) {
          plVar26 = *(long **)(uVar6 + 0x20);
          if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
            *(long **)(uVar6 + 0x20) = DAT_043f1798;
            plVar26 = plVar1;
          }
          uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
          if ((uVar23 & 1) != 0) {
            if (*(char *)(uVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(uVar6 + 0x38d488) = 1;
              *(undefined8 *)(uVar6 + 0x38d478) = 0;
              *(undefined8 *)(uVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(uVar6 + 0x38d480)) {
              FUN_02bcc824(plVar26,lVar36,0,8);
              goto LAB_02348d78;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar36,0,8);
        }
LAB_02348d78:
        plVar1 = DAT_043f1798;
        plVar26 = *(long **)(uVar6 + 0x20);
        if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
          *(long **)(uVar6 + 0x20) = DAT_043f1798;
          plVar26 = plVar1;
        }
        uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
        if ((uVar23 & 1) != 0) {
          if (*(char *)(uVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(uVar6 + 0x38d488) = 1;
            *(undefined8 *)(uVar6 + 0x38d478) = 0;
            *(undefined8 *)(uVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(uVar6 + 0x38d480)) {
            FUN_02bcc824(plVar26,lVar21,0,8);
            goto LAB_02348d30;
          }
        }
        (**(code **)(*plVar26 + 0x18))(plVar26,lVar21,0,8);
      }
    }
LAB_02348d30:
    lVar28 = lVar28 + 0x18;
  } while (lVar28 != 0x300);
  pcVar34 = (char *)plVar19[0xc];
  sVar22 = strlen(pcVar34);
  iVar10 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0xd];
  sVar22 = strlen(pcVar34);
  iVar11 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0xf];
  sVar22 = strlen(pcVar34);
  iVar12 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0x12];
  sVar22 = strlen(pcVar34);
  iVar13 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0x15];
  sVar22 = strlen(pcVar34);
  iVar14 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0x18];
  sVar22 = strlen(pcVar34);
  iVar15 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0x1b];
  sVar22 = strlen(pcVar34);
  iVar16 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0x1e];
  sVar22 = strlen(pcVar34);
  iVar17 = FUN_008f2c60(sVar22,pcVar34);
  pcVar34 = (char *)plVar19[0x21];
  sVar22 = strlen(pcVar34);
  iVar18 = FUN_008f2c60(sVar22,pcVar34);
  puVar9 = local_a0;
  *(bool *)(plVar19 + 0xb) =
       (((((((iVar11 != 0 || iVar10 != 0) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0) ||
         iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0;
  plVar1 = DAT_043f1798;
  pcVar34 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (undefined *)0x0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,puVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar34 = local_d0;
        goto joined_r0x02348fac;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,puVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar34 = local_d0;
  }
joined_r0x02348fac:
  pcVar7 = local_100;
  local_d0 = pcVar34;
  if (((local_e0 & 1) != 0) && (pcVar34 != (char *)0x0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,pcVar34,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_100;
        goto joined_r0x0234983c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pcVar34,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_100;
  }
joined_r0x0234983c:
  pcVar34 = local_130;
  local_100 = pcVar7;
  if (((local_110 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        pcVar34 = local_130;
        goto joined_r0x02349114;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    pcVar34 = local_130;
  }
joined_r0x02349114:
  lVar28 = local_160;
  local_130 = pcVar34;
  if (((local_140 & 1) != 0) && (pcVar34 != (char *)0x0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,pcVar34,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_160;
        goto joined_r0x0234987c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pcVar34,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_160;
  }
joined_r0x0234987c:
  lVar30 = local_190;
  local_160 = lVar28;
  if (((local_170 & 1) != 0) && (lVar28 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_190;
        goto joined_r0x0234927c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_190;
  }
joined_r0x0234927c:
  lVar28 = local_1c0;
  local_190 = lVar30;
  if (((local_1a0 & 1) != 0) && (lVar30 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_1c0;
        goto joined_r0x023498bc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_1c0;
  }
joined_r0x023498bc:
  lVar30 = local_1f0;
  local_1c0 = lVar28;
  if (((local_1d0 & 1) != 0) && (lVar28 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_1f0;
        goto joined_r0x023493e4;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_1f0;
  }
joined_r0x023493e4:
  lVar28 = local_220;
  local_1f0 = lVar30;
  if (((local_200 & 1) != 0) && (lVar30 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar30,0,8);
        plVar1 = DAT_043f1798;
        lVar28 = local_220;
        goto joined_r0x023498fc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,0,8);
    plVar1 = DAT_043f1798;
    lVar28 = local_220;
  }
joined_r0x023498fc:
  lVar30 = local_250;
  local_220 = lVar28;
  if (((local_230 & 1) != 0) && (lVar28 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar30 = local_250;
        goto joined_r0x0234954c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar30 = local_250;
  }
joined_r0x0234954c:
  DAT_043f1798 = plVar1;
  local_250 = lVar30;
  if ((((byte)local_260 & 1) != 0) && (lVar30 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar30,0,8);
        goto LAB_023495fc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,0,8);
  }
LAB_023495fc:
  uVar32 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar32);
  (**(code **)*plVar19)(plVar19,uVar32);
  (**(code **)(*plVar19 + 0x10))(plVar19);
  uVar23 = (ulong)&local_278 | 1;
  if ((local_278 & 1) != 0) {
    uVar23 = CONCAT44(uStack_264,local_268);
  }
  FUN_001522a0(uVar32,uVar23);
  plVar1 = DAT_043f1798;
  if (((local_278 & 1) != 0) && (lVar28 = CONCAT44(uStack_264,local_268), lVar28 != 0)) {
    plVar26 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar28,0,8);
        return;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar28,0,8);
  }
  return;
}


