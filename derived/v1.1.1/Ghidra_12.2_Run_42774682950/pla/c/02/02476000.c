/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02476000; name: FUN_02476000
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02476000(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
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
  ulong uVar16;
  long lVar17;
  size_t sVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  string *psVar24;
  long lVar25;
  string *psVar26;
  ulong uVar27;
  undefined8 uVar28;
  char *pcVar29;
  string *psVar30;
  long *plVar31;
  long lVar32;
  ulong unaff_x28;
  byte local_248;
  char acStack_247 [5];
  undefined2 uStack_242;
  char cStack_240;
  char acStack_23f [5];
  undefined1 local_23a;
  undefined1 uStack_239;
  ulong local_238;
  string local_230;
  undefined2 local_22f;
  undefined1 local_22d;
  undefined8 local_22c;
  undefined4 local_224;
  long local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined7 local_1fb;
  undefined4 uStack_1f4;
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
  char local_19f [7];
  char cStack_198;
  char acStack_197 [7];
  long local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  char acStack_16f [6];
  char local_169 [2];
  char acStack_167 [6];
  undefined1 local_161;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char acStack_13f [7];
  char local_138;
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
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [8];
  undefined2 local_d7;
  undefined1 local_d5;
  undefined4 local_d4;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [8];
  undefined1 local_a7;
  undefined4 local_a6;
  undefined2 local_a2;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar15 = DAT_043f1798;
  uStack_239 = 0;
  psVar30 = &local_230;
  local_248 = 0x1a;
  local_238 = 0;
  acStack_247 = (char  [5])s_RingumaSearch_0389e0a9._0_5_;
  local_23a = 0;
  uStack_242 = s_RingumaSearch_0389e0a9._5_2_;
  cStack_240 = s_RingumaSearch_0389e0a9[7];
  acStack_23f = (char  [5])s_RingumaSearch_0389e0a9._8_5_;
  lVar5 = tpidr_el0;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar15;
  }
  plVar15 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x170,8);
  plVar15[2] = 0;
  plVar15[4] = 0;
  plVar19 = plVar15 + 1;
  *plVar19 = 0;
  plVar31 = plVar15 + 3;
  *plVar31 = 0;
  plVar15[6] = (long)FUN_024777e0;
  plVar15[7] = (long)FUN_02477890;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  *plVar15 = (long)&PTR_FUN_0425c160;
  plVar15[0xc] = (long)&DAT_038ca815;
  plVar15[0xd] = (long)&DAT_0392da3c;
  plVar15[0xf] = (long)"GetSearchResult";
  plVar15[0x10] = (long)FUN_0247776c;
  plVar15[0x13] = (long)&LAB_0269a58c;
  plVar15[0x14] = 0;
  plVar15[0x15] = (long)"CallHitTrigger";
  plVar15[0x16] = (long)&LAB_0269a700;
  plVar15[0x19] = (long)&LAB_0269a8f4;
  plVar15[0x1a] = 0;
  plVar15[0x1f] = (long)&LAB_0269b890;
  plVar15[0x20] = 0;
  plVar15[0x21] = (long)"SearchOff";
  plVar15[0x22] = (long)&LAB_024777bc;
  plVar15[0x1b] = (long)"FoundRandomItem";
  plVar15[0x1c] = (long)&LAB_0269b4bc;
  plVar15[0x25] = 0;
  plVar15[0x26] = (long)FUN_02477a20;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  *(undefined1 *)(plVar15 + 0xe) = 0;
  plVar15[0x2d] = 0;
  plVar15[0x2b] = 0;
  *(undefined1 *)(plVar15 + 0x2c) = 0;
  plVar15[0x11] = 0;
  plVar15[0x12] = (long)"IsHitCallTriggerItem";
  plVar15[0x17] = 0;
  plVar15[0x18] = (long)"FoundSearchItem";
  plVar15[0x1d] = 0;
  plVar15[0x1e] = (long)"IsNotFound";
  plVar15[0x23] = 0;
  plVar15[0x24] = 0;
  plVar15[0x27] = (long)&LAB_02477d00;
  plVar15[0x28] = (long)&LAB_02477fe0;
  plVar15[0x29] = (long)&LAB_02477ff0;
  plVar15[0x2a] = 0;
  local_1e0 = &LAB_024780cc;
  local_1cf[0] = s_GetSearchResult_038e29bd[0];
  local_1cf[1] = s_GetSearchResult_038e29bd[1];
  local_1cf[2] = s_GetSearchResult_038e29bd[2];
  local_1cf[3] = s_GetSearchResult_038e29bd[3];
  local_1cf[4] = s_GetSearchResult_038e29bd[4];
  local_1cf[5] = s_GetSearchResult_038e29bd[5];
  local_1cf[6] = s_GetSearchResult_038e29bd[6];
  local_230 = (string)0x6;
  local_22f = 0x656e;
  local_210 = &LAB_0247803c;
  local_22d = 0x77;
  local_1ff = 0x63675f5f;
  local_22c = 0;
  local_224 = 0;
  local_200 = 8;
  local_1fb = 0;
  uStack_1f4 = 0;
  cStack_1c8 = s_GetSearchResult_038e29bd[7];
  acStack_1c7[0] = s_GetSearchResult_038e29bd[8];
  acStack_1c7[1] = s_GetSearchResult_038e29bd[9];
  acStack_1c7[2] = s_GetSearchResult_038e29bd[10];
  acStack_1c7[3] = s_GetSearchResult_038e29bd[0xb];
  acStack_1c7[4] = s_GetSearchResult_038e29bd[0xc];
  acStack_1c7[5] = s_GetSearchResult_038e29bd[0xd];
  acStack_1c7[6] = s_GetSearchResult_038e29bd[0xe];
  local_1c0 = 0;
  local_1b8 = &LAB_02478114;
  puStack_1b0 = &LAB_0247815c;
  local_1a0 = 0x28;
  local_220 = 0;
  local_218 = &LAB_02477ff4;
  local_208 = 0xffffffff;
  local_1d8 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_1f0 = 0;
  puStack_1e8 = &LAB_02478084;
  local_1d0 = 0x1e;
  local_19f[0] = s_IsHitCallTriggerItem_039224a9[0];
  local_19f[1] = s_IsHitCallTriggerItem_039224a9[1];
  local_19f[2] = s_IsHitCallTriggerItem_039224a9[2];
  local_19f[3] = s_IsHitCallTriggerItem_039224a9[3];
  local_19f[4] = s_IsHitCallTriggerItem_039224a9[4];
  local_19f[5] = s_IsHitCallTriggerItem_039224a9[5];
  local_19f[6] = s_IsHitCallTriggerItem_039224a9[6];
  local_178 = 0xffffffff;
  cStack_198 = s_IsHitCallTriggerItem_039224a9[7];
  acStack_197[0] = s_IsHitCallTriggerItem_039224a9[8];
  acStack_197[1] = s_IsHitCallTriggerItem_039224a9[9];
  acStack_197[2] = s_IsHitCallTriggerItem_039224a9[10];
  acStack_197[3] = s_IsHitCallTriggerItem_039224a9[0xb];
  acStack_197[4] = s_IsHitCallTriggerItem_039224a9[0xc];
  acStack_197[5] = s_IsHitCallTriggerItem_039224a9[0xd];
  acStack_197[6] = s_IsHitCallTriggerItem_039224a9[0xe];
  local_190 = 0x6d65744972;
  local_188 = &LAB_024781a4;
  puStack_180 = &LAB_024781ec;
  local_170 = 0x1c;
  acStack_167[0] = s_CallHitTrigger_038944c3[8];
  acStack_167[1] = s_CallHitTrigger_038944c3[9];
  acStack_167[2] = s_CallHitTrigger_038944c3[10];
  acStack_167[3] = s_CallHitTrigger_038944c3[0xb];
  acStack_167[4] = s_CallHitTrigger_038944c3[0xc];
  acStack_167[5] = s_CallHitTrigger_038944c3[0xd];
  acStack_16f[0] = s_CallHitTrigger_038944c3[0];
  acStack_16f[1] = s_CallHitTrigger_038944c3[1];
  acStack_16f[2] = s_CallHitTrigger_038944c3[2];
  acStack_16f[3] = s_CallHitTrigger_038944c3[3];
  acStack_16f[4] = s_CallHitTrigger_038944c3[4];
  acStack_16f[5] = s_CallHitTrigger_038944c3[5];
  local_169[0] = s_CallHitTrigger_038944c3[6];
  local_169[1] = s_CallHitTrigger_038944c3[7];
  local_161 = 0;
  local_150 = &LAB_0247827c;
  local_148 = 0xffffffff;
  local_140 = 0x1e;
  local_160 = 0;
  puStack_158 = &LAB_02478234;
  acStack_137[0] = s_FoundSearchItem_03a73510[8];
  acStack_137[1] = s_FoundSearchItem_03a73510[9];
  acStack_137[2] = s_FoundSearchItem_03a73510[10];
  acStack_137[3] = s_FoundSearchItem_03a73510[0xb];
  acStack_137[4] = s_FoundSearchItem_03a73510[0xc];
  acStack_137[5] = s_FoundSearchItem_03a73510[0xd];
  acStack_137[6] = s_FoundSearchItem_03a73510[0xe];
  local_130 = 0;
  acStack_13f[0] = s_FoundSearchItem_03a73510[0];
  acStack_13f[1] = s_FoundSearchItem_03a73510[1];
  acStack_13f[2] = s_FoundSearchItem_03a73510[2];
  acStack_13f[3] = s_FoundSearchItem_03a73510[3];
  acStack_13f[4] = s_FoundSearchItem_03a73510[4];
  acStack_13f[5] = s_FoundSearchItem_03a73510[5];
  acStack_13f[6] = s_FoundSearchItem_03a73510[6];
  local_138 = s_FoundSearchItem_03a73510[7];
  local_118 = 0xffffffff;
  local_110 = 0x1e;
  local_128 = &LAB_024782c4;
  puStack_120 = &LAB_0247830c;
  local_10f[0] = s_FoundRandomItem_03a73500[0];
  local_10f[1] = s_FoundRandomItem_03a73500[1];
  local_10f[2] = s_FoundRandomItem_03a73500[2];
  local_10f[3] = s_FoundRandomItem_03a73500[3];
  local_10f[4] = s_FoundRandomItem_03a73500[4];
  local_10f[5] = s_FoundRandomItem_03a73500[5];
  local_10f[6] = s_FoundRandomItem_03a73500[6];
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02478354;
  puStack_f0 = &LAB_0247839c;
  local_e0 = 0x14;
  cStack_108 = s_FoundRandomItem_03a73500[7];
  acStack_107[0] = s_FoundRandomItem_03a73500[8];
  acStack_107[1] = s_FoundRandomItem_03a73500[9];
  acStack_107[2] = s_FoundRandomItem_03a73500[10];
  acStack_107[3] = s_FoundRandomItem_03a73500[0xb];
  acStack_107[4] = s_FoundRandomItem_03a73500[0xc];
  acStack_107[5] = s_FoundRandomItem_03a73500[0xd];
  acStack_107[6] = s_FoundRandomItem_03a73500[0xe];
  local_100 = 0;
  local_df[0] = s_IsNotFound_03a7353c[0];
  local_df[1] = s_IsNotFound_03a7353c[1];
  local_df[2] = s_IsNotFound_03a7353c[2];
  local_df[3] = s_IsNotFound_03a7353c[3];
  local_df[4] = s_IsNotFound_03a7353c[4];
  local_df[5] = s_IsNotFound_03a7353c[5];
  local_df[6] = s_IsNotFound_03a7353c[6];
  local_df[7] = s_IsNotFound_03a7353c[7];
  local_d7 = 0x646e;
  local_d5 = 0;
  local_d4 = 0;
  local_c0 = &LAB_0247842c;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_024783e4;
  local_b0 = 0x12;
  local_af[0] = s_SearchOff_03946a51[0];
  local_af[1] = s_SearchOff_03946a51[1];
  local_af[2] = s_SearchOff_03946a51[2];
  local_af[3] = s_SearchOff_03946a51[3];
  local_af[4] = s_SearchOff_03946a51[4];
  local_af[5] = s_SearchOff_03946a51[5];
  local_af[6] = s_SearchOff_03946a51[6];
  local_af[7] = s_SearchOff_03946a51[7];
  local_a7 = 0x66;
  local_a6 = 0;
  local_a2 = 0;
  local_90 = &LAB_024784bc;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_02478474;
  do {
    uVar16 = *(ulong *)(psVar30 + 8);
    psVar2 = *(string **)(psVar30 + 0x10);
    if (((byte)*psVar30 & 1) == 0) {
      psVar2 = psVar30 + 1;
      uVar16 = (ulong)((byte)*psVar30 >> 1);
    }
    uVar16 = FUN_008e8ed4(local_80,psVar2,uVar16);
    uVar27 = plVar15[2];
    if (uVar27 != 0) {
      uVar20 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        unaff_x28 = uVar27 - 1 & uVar16;
      }
      else {
        unaff_x28 = uVar16;
        if (uVar27 <= uVar16) {
          uVar4 = 0;
          if (uVar27 != 0) {
            uVar4 = uVar16 / uVar27;
          }
          unaff_x28 = uVar16 - uVar4 * uVar27;
        }
      }
      plVar22 = *(long **)(*plVar19 + unaff_x28 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        psVar2 = psVar30 + 1;
        sVar18 = (ulong)((byte)*psVar30 >> 1);
        if (((byte)*psVar30 & 1) != 0) {
          psVar2 = *(string **)(psVar30 + 0x10);
          sVar18 = *(size_t *)(psVar30 + 8);
        }
        if (uVar20 < 2) {
          if (sVar18 == 0) {
            do {
              if (plVar22[1] != uVar16 && (plVar22[1] & uVar27 - 1) != unaff_x28) break;
              uVar20 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
              if ((*(byte *)(plVar22 + 2) & 1) != 0) {
                uVar20 = plVar22[3];
              }
              if (uVar20 == 0) goto LAB_0247663c;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              if (plVar22[1] != uVar16 && (plVar22[1] & uVar27 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar22 + 2);
              uVar20 = (ulong)(bVar3 >> 1);
              sVar1 = uVar20;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar22[3];
              }
              if (sVar1 == sVar18) {
                if ((bVar3 & 1) == 0) {
                  psVar24 = (string *)((long)plVar22 + 0x11);
                  psVar26 = psVar2;
                  while (*psVar24 == *psVar26) {
                    uVar20 = uVar20 - 1;
                    psVar24 = psVar24 + 1;
                    psVar26 = psVar26 + 1;
                    if (uVar20 == 0) goto LAB_0247663c;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar22[4],psVar2,sVar18);
                  if (iVar6 == 0) goto LAB_0247663c;
                }
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
        else if (sVar18 == 0) {
          do {
            uVar20 = plVar22[1];
            if (uVar20 != uVar16) {
              if (uVar27 <= uVar20) {
                uVar4 = 0;
                if (uVar27 != 0) {
                  uVar4 = uVar20 / uVar27;
                }
                uVar20 = uVar20 - uVar4 * uVar27;
              }
              if (uVar20 != unaff_x28) break;
            }
            uVar20 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
            if ((*(byte *)(plVar22 + 2) & 1) != 0) {
              uVar20 = plVar22[3];
            }
            if (uVar20 == 0) goto LAB_0247663c;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar22[1];
            if (uVar20 != uVar16) {
              if (uVar27 <= uVar20) {
                uVar4 = 0;
                if (uVar27 != 0) {
                  uVar4 = uVar20 / uVar27;
                }
                uVar20 = uVar20 - uVar4 * uVar27;
              }
              if (uVar20 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar22 + 2);
            uVar20 = (ulong)(bVar3 >> 1);
            sVar1 = uVar20;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar22[3];
            }
            if (sVar1 == sVar18) {
              if ((bVar3 & 1) == 0) {
                psVar24 = (string *)((long)plVar22 + 0x11);
                psVar26 = psVar2;
                while (*psVar24 == *psVar26) {
                  uVar20 = uVar20 - 1;
                  psVar24 = psVar24 + 1;
                  psVar26 = psVar26 + 1;
                  if (uVar20 == 0) goto LAB_0247663c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar22[4],psVar2,sVar18);
                if (iVar6 == 0) goto LAB_0247663c;
              }
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    plVar22 = DAT_043f1798;
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar22;
    }
    plVar22 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
    std::string::string((string *)(plVar22 + 2),psVar30);
    lVar23 = *(long *)(psVar30 + 0x18);
    lVar25 = *(long *)(psVar30 + 0x28);
    plVar22[6] = *(long *)(psVar30 + 0x20);
    plVar22[7] = lVar25;
    plVar22[5] = lVar23;
    *plVar22 = 0;
    plVar22[1] = uVar16;
    if ((uVar27 == 0) || (*(float *)(plVar15 + 5) * (float)uVar27 < (float)(plVar15[4] + 1))) {
      uVar27 = (ulong)(uVar27 < 3 || (uVar27 & uVar27 - 1) != 0) | uVar27 << 1;
      uVar20 = (ulong)((float)(plVar15[4] + 1) / *(float *)(plVar15 + 5));
      if (uVar20 <= uVar27) {
        uVar20 = uVar27;
      }
      FUN_008e9ae4(plVar19,uVar20);
      uVar27 = plVar15[2];
      if ((uVar27 & uVar27 - 1) == 0) {
        unaff_x28 = uVar27 - 1 & uVar16;
      }
      else if (uVar16 < uVar27) {
        unaff_x28 = uVar16;
      }
      else {
        uVar20 = 0;
        if (uVar27 != 0) {
          uVar20 = uVar16 / uVar27;
        }
        unaff_x28 = uVar16 - uVar20 * uVar27;
      }
    }
    lVar23 = *plVar19;
    plVar21 = *(long **)(lVar23 + unaff_x28 * 8);
    if (plVar21 == (long *)0x0) {
      *plVar22 = *plVar31;
      *plVar31 = (long)plVar22;
      *(long **)(lVar23 + unaff_x28 * 8) = plVar31;
      if (*plVar22 != 0) {
        uVar16 = *(ulong *)(*plVar22 + 8);
        if ((uVar27 & uVar27 - 1) == 0) {
          uVar16 = uVar16 & uVar27 - 1;
        }
        else if (uVar27 <= uVar16) {
          uVar20 = 0;
          if (uVar27 != 0) {
            uVar20 = uVar16 / uVar27;
          }
          uVar16 = uVar16 - uVar20 * uVar27;
        }
        plVar21 = (long *)(*plVar19 + uVar16 * 8);
        goto LAB_0247662c;
      }
    }
    else {
      *plVar22 = *plVar21;
LAB_0247662c:
      *plVar21 = (long)plVar22;
    }
    plVar15[4] = plVar15[4] + 1;
LAB_0247663c:
    psVar30 = psVar30 + 0x30;
  } while (psVar30 != (string *)local_80);
  lVar25 = FUN_008cca50();
  lVar23 = 0;
  do {
    lVar17 = FUN_008e8c90(plVar19,lVar25 + lVar23);
    if (lVar17 != 0) {
      FUN_008f2aec(local_80,plVar19,lVar17);
      lVar17 = local_80[0];
      plVar31 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar17 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar17 + 0x10) & 1) != 0)) &&
           (lVar32 = *(long *)(lVar17 + 0x20), lVar32 != 0)) {
          plVar22 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar22 = plVar31;
          }
          uVar16 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar22,lVar32,0,8);
              goto LAB_02476870;
            }
          }
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar32,0,8);
        }
LAB_02476870:
        plVar31 = DAT_043f1798;
        plVar22 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar22 = plVar31;
        }
        uVar16 = (**(code **)(*plVar22 + 0xc0))(plVar22);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar22,lVar17,0,8);
            goto LAB_02476828;
          }
        }
        (**(code **)(*plVar22 + 0x18))(plVar22,lVar17,0,8);
      }
    }
LAB_02476828:
    lVar23 = lVar23 + 0x18;
  } while (lVar23 != 0x300);
  pcVar29 = (char *)plVar15[0xc];
  sVar18 = strlen(pcVar29);
  iVar6 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0xd];
  sVar18 = strlen(pcVar29);
  iVar7 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0xf];
  sVar18 = strlen(pcVar29);
  iVar8 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x12];
  sVar18 = strlen(pcVar29);
  iVar9 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x15];
  sVar18 = strlen(pcVar29);
  iVar10 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x18];
  sVar18 = strlen(pcVar29);
  iVar11 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x1b];
  sVar18 = strlen(pcVar29);
  iVar12 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x1e];
  sVar18 = strlen(pcVar29);
  iVar13 = FUN_008f2c60(sVar18,pcVar29);
  pcVar29 = (char *)plVar15[0x21];
  sVar18 = strlen(pcVar29);
  iVar14 = FUN_008f2c60(sVar18,pcVar29);
  lVar25 = local_a0;
  *(bool *)(plVar15 + 0xb) =
       (((((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0
         ) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0;
  plVar19 = DAT_043f1798;
  lVar23 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_d0;
        goto joined_r0x02476a9c;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_d0;
  }
joined_r0x02476a9c:
  lVar25 = local_100;
  local_d0 = lVar23;
  if (((local_e0 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_100;
        goto joined_r0x02477280;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_100;
  }
joined_r0x02477280:
  lVar23 = local_130;
  local_100 = lVar25;
  if (((local_110 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_130;
        goto joined_r0x02476c04;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_130;
  }
joined_r0x02476c04:
  lVar25 = local_160;
  local_130 = lVar23;
  if (((local_140 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_160;
        goto joined_r0x024772c0;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_160;
  }
joined_r0x024772c0:
  lVar23 = local_190;
  local_160 = lVar25;
  if (((local_170 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_190;
        goto joined_r0x02476d6c;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_190;
  }
joined_r0x02476d6c:
  lVar25 = local_1c0;
  local_190 = lVar23;
  if (((local_1a0 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_1c0;
        goto joined_r0x02477300;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_1c0;
  }
joined_r0x02477300:
  lVar23 = local_1f0;
  local_1c0 = lVar25;
  if (((local_1d0 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        plVar19 = DAT_043f1798;
        lVar23 = local_1f0;
        goto joined_r0x02476ed4;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
    plVar19 = DAT_043f1798;
    lVar23 = local_1f0;
  }
joined_r0x02476ed4:
  lVar25 = local_220;
  local_1f0 = lVar23;
  if (((local_200 & 1) != 0) && (lVar23 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar19;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar23,0,8);
        plVar19 = DAT_043f1798;
        lVar25 = local_220;
        goto joined_r0x02477340;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar23,0,8);
    plVar19 = DAT_043f1798;
    lVar25 = local_220;
  }
joined_r0x02477340:
  DAT_043f1798 = plVar19;
  local_220 = lVar25;
  if ((((byte)local_230 & 1) != 0) && (lVar25 != 0)) {
    plVar31 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar19;
      plVar31 = plVar19;
    }
    uVar16 = (**(code **)(*plVar31 + 0xc0))(plVar31);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar31,lVar25,0,8);
        goto LAB_02477038;
      }
    }
    (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
  }
LAB_02477038:
  uVar28 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar28);
  (**(code **)*plVar15)(plVar15,uVar28);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  uVar16 = (ulong)&local_248 | 1;
  if ((local_248 & 1) != 0) {
    uVar16 = local_238;
  }
  FUN_001522a0(uVar28,uVar16);
  uVar16 = local_238;
  plVar15 = DAT_043f1798;
  if (((local_248 & 1) != 0) && (local_238 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar15;
    }
    uVar27 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,uVar16,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,uVar16,0,8);
  }
  return;
}


