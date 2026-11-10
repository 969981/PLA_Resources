/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01748610; name: FUN_01748610
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01748610(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  size_t sVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  string *psVar26;
  long lVar27;
  string *psVar28;
  ulong uVar29;
  undefined8 uVar30;
  long *plVar31;
  char *pcVar32;
  string *psVar33;
  long lVar34;
  ulong uVar35;
  byte local_248;
  char local_247 [6];
  char acStack_241 [2];
  char acStack_23f [6];
  undefined1 local_239;
  ulong local_238;
  string local_230;
  char local_22f [7];
  char cStack_228;
  char acStack_227 [7];
  long local_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined2 local_1fb;
  undefined1 local_1f9;
  undefined8 local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined3 uStack_1cb;
  undefined1 local_1c8;
  undefined4 local_1c7;
  undefined3 uStack_1c3;
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
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
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
  
  plVar1 = DAT_043f1798;
  local_248 = 0x1c;
  local_247 = (char  [6])s_NpcTalkManager_0397f208._0_6_;
  local_238 = 0;
  local_239 = 0;
  acStack_241 = (char  [2])s_NpcTalkManager_0397f208._6_2_;
  acStack_23f = (char  [6])s_NpcTalkManager_0397f208._8_6_;
  lVar6 = tpidr_el0;
  plVar24 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar24 = plVar1;
  }
  plVar18 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x148,8);
  plVar18[4] = 0;
  plVar31 = plVar18 + 1;
  *plVar31 = 0;
  *(undefined4 *)(plVar18 + 5) = 0x3f800000;
  plVar18[10] = 0;
  plVar18[6] = (long)FUN_01749f50;
  plVar18[7] = (long)FUN_0174a000;
  *plVar18 = (long)&PTR_FUN_04225000;
  plVar18[0xe] = (long)"Advance";
  plVar18[0xf] = (long)&LAB_01698f60;
  plVar18[0x12] = (long)&LAB_01699010;
  plVar18[0x13] = 0;
  plVar18[0x14] = (long)"PushEventCommandDataFromCurrentData";
  plVar18[0x15] = (long)&LAB_016990a8;
  plVar18[0x18] = (long)&LAB_01699500;
  plVar18[0x19] = 0;
  plVar18[0x1a] = (long)"GetTargetNpcType";
  plVar18[0x1b] = (long)&LAB_01749f30;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = (long)&DAT_038ca815;
  plVar18[0x1e] = (long)&DAT_0392da3c;
  plVar18[0x1f] = 0;
  plVar18[0x20] = 0;
  plVar18[0x21] = (long)FUN_0174a190;
  plVar18[0x22] = (long)&LAB_0174a470;
  plVar18[0x23] = (long)&LAB_0174a750;
  *(undefined1 *)(plVar18 + 0xb) = 0;
  plVar18[0x28] = 0;
  plVar18[0x26] = 0;
  *(undefined1 *)(plVar18 + 0x27) = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[0xc] = (long)"GetCurrentNpcTalkData";
  plVar18[0xd] = (long)"GetCurrentNpcPokemonTalkData";
  plVar18[0x10] = 0;
  plVar18[0x11] = (long)"__haxe_export_GetCurrentMessageFilePath";
  plVar18[0x16] = 0;
  plVar18[0x17] = (long)"PushEventCommandDataFromCurrentNpcPokemonData";
  plVar18[0x24] = (long)&LAB_0174a760;
  plVar18[0x25] = 0;
  plVar1 = DAT_043f1798;
  local_230 = (string)0x2a;
  local_22f[0] = s_GetCurrentNpcTalkData_03914631[0];
  local_22f[1] = s_GetCurrentNpcTalkData_03914631[1];
  local_22f[2] = s_GetCurrentNpcTalkData_03914631[2];
  local_22f[3] = s_GetCurrentNpcTalkData_03914631[3];
  local_22f[4] = s_GetCurrentNpcTalkData_03914631[4];
  local_22f[5] = s_GetCurrentNpcTalkData_03914631[5];
  local_22f[6] = s_GetCurrentNpcTalkData_03914631[6];
  cStack_228 = s_GetCurrentNpcTalkData_03914631[7];
  acStack_227[0] = s_GetCurrentNpcTalkData_03914631[8];
  acStack_227[1] = s_GetCurrentNpcTalkData_03914631[9];
  acStack_227[2] = s_GetCurrentNpcTalkData_03914631[10];
  acStack_227[3] = s_GetCurrentNpcTalkData_03914631[0xb];
  acStack_227[4] = s_GetCurrentNpcTalkData_03914631[0xc];
  acStack_227[5] = s_GetCurrentNpcTalkData_03914631[0xd];
  acStack_227[6] = s_GetCurrentNpcTalkData_03914631[0xe];
  local_220 = 0x617461446b6c;
  local_208 = 0xffffffff;
  local_218 = &LAB_0174a764;
  puStack_210 = &LAB_0174a7ac;
  plVar24 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar24 = plVar1;
  }
  local_1f0 = (char *)(**(code **)(*plVar24 + 0x10))(plVar24,0x20,8);
  local_1f0[0x18] = 'D';
  local_1f0[0x19] = 'a';
  local_1f0[0x1a] = 't';
  local_1f0[0x1b] = 'a';
  local_1f0[0x1c] = '\0';
  uVar30 = s_GetCurrentNpcPokemonTalkData_039a4dfe._8_8_;
  *(undefined8 *)local_1f0 = s_GetCurrentNpcPokemonTalkData_039a4dfe._0_8_;
  uVar8 = s_GetCurrentNpcPokemonTalkData_039a4dfe._16_8_;
  *(undefined8 *)(local_1f0 + 8) = uVar30;
  *(undefined8 *)(local_1f0 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_1f8 = 0x1c;
  local_1d0 = 0xe;
  local_200 = 0x21;
  local_1fb = 0;
  local_1e8 = &LAB_0174a7f4;
  puStack_1e0 = &LAB_0174a83c;
  local_1ff = 0;
  local_1d8 = 0xffffffff;
  local_1c8 = 0;
  local_1cf = 0x61766441;
  uStack_1cb = 0x65636e;
  local_1f9 = 0;
  local_1c7 = 0;
  uStack_1c3 = 0;
  local_1b0 = &LAB_0174a8cc;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_0174a884;
  plVar24 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar24 = plVar1;
  }
  local_190 = (char *)(**(code **)(*plVar24 + 0x10))(plVar24,0x30,8);
  uVar30 = s___haxe_export_GetCurrentMessageF_038f5762._8_8_;
  uVar35 = 0x31;
  *(undefined8 *)local_190 = s___haxe_export_GetCurrentMessageF_038f5762._0_8_;
  *(undefined8 *)(local_190 + 8) = uVar30;
  uVar30 = CONCAT17(s___haxe_export_GetCurrentMessageF_038f5762[0x1f],
                    s___haxe_export_GetCurrentMessageF_038f5762._24_7_);
  *(undefined8 *)(local_190 + 0x10) = s___haxe_export_GetCurrentMessageF_038f5762._16_8_;
  *(undefined8 *)(local_190 + 0x18) = uVar30;
  *(ulong *)(local_190 + 0x1f) =
       CONCAT71(s___haxe_export_GetCurrentMessageF_038f5762._32_7_,
                s___haxe_export_GetCurrentMessageF_038f5762[0x1f]);
  local_190[0x27] = '\0';
  plVar1 = DAT_043f1798;
  local_1a0 = 0x31;
  local_19b = 0;
  local_19f = 0;
  local_199 = 0;
  local_198 = 0x27;
  local_188 = &LAB_0174a914;
  puStack_180 = &LAB_0174a95c;
  local_178 = 0xffffffff;
  plVar24 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar24 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar24 + 0x10))(plVar24,0x30,8);
  local_160[0x1f] = 'D';
  uVar30 = s_PushEventCommandDataFromCurrentD_03933e87._8_8_;
  local_160[0x20] = 'a';
  local_160[0x21] = 't';
  local_160[0x22] = 'a';
  *(undefined8 *)local_160 = s_PushEventCommandDataFromCurrentD_03933e87._0_8_;
  *(undefined8 *)(local_160 + 8) = uVar30;
  uVar8 = s_PushEventCommandDataFromCurrentD_03933e87._24_8_;
  uVar30 = s_PushEventCommandDataFromCurrentD_03933e87._16_8_;
  local_160[0x23] = '\0';
  *(undefined8 *)(local_160 + 0x10) = uVar30;
  *(undefined8 *)(local_160 + 0x18) = uVar8;
  plVar1 = DAT_043f1798;
  local_170 = 0x31;
  local_16b = 0;
  local_16f = 0;
  local_169 = 0;
  local_168 = 0x23;
  local_148 = 0xffffffff;
  local_158 = &LAB_0174a9a4;
  puStack_150 = &LAB_0174a9ec;
  plVar24 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar24 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar24 + 0x10))(plVar24,0x30,8);
  uVar30 = s_PushEventCommandDataFromCurrentN_03933eab._8_8_;
  *(undefined8 *)local_130 = s_PushEventCommandDataFromCurrentN_03933eab._0_8_;
  *(undefined8 *)(local_130 + 8) = uVar30;
  uVar8 = s_PushEventCommandDataFromCurrentN_03933eab._24_8_;
  *(undefined8 *)(local_130 + 0x10) = s_PushEventCommandDataFromCurrentN_03933eab._16_8_;
  uVar30 = CONCAT35(s_PushEventCommandDataFromCurrentN_03933eab._37_3_,
                    s_PushEventCommandDataFromCurrentN_03933eab._32_5_);
  *(undefined8 *)(local_130 + 0x18) = uVar8;
  *(undefined8 *)(local_130 + 0x20) = uVar30;
  uVar30 = CONCAT53(s_PushEventCommandDataFromCurrentN_03933eab._40_5_,
                    s_PushEventCommandDataFromCurrentN_03933eab._37_3_);
  local_130[0x2d] = '\0';
  psVar33 = &local_230;
  *(undefined8 *)(local_130 + 0x25) = uVar30;
  local_140 = 0x31;
  local_13b = 0;
  local_13f = 0;
  local_128 = &LAB_0174aa34;
  puStack_120 = &LAB_0174aa7c;
  local_138 = 0x2d;
  local_110 = 0x20;
  local_139 = 0;
  local_118 = 0xffffffff;
  local_10f[0] = s_GetTargetNpcType_03914647[0];
  local_10f[1] = s_GetTargetNpcType_03914647[1];
  local_10f[2] = s_GetTargetNpcType_03914647[2];
  local_10f[3] = s_GetTargetNpcType_03914647[3];
  local_10f[4] = s_GetTargetNpcType_03914647[4];
  local_10f[5] = s_GetTargetNpcType_03914647[5];
  local_10f[6] = s_GetTargetNpcType_03914647[6];
  cStack_108 = s_GetTargetNpcType_03914647[7];
  acStack_107[0] = s_GetTargetNpcType_03914647[8];
  acStack_107[1] = s_GetTargetNpcType_03914647[9];
  acStack_107[2] = s_GetTargetNpcType_03914647[10];
  acStack_107[3] = s_GetTargetNpcType_03914647[0xb];
  acStack_107[4] = s_GetTargetNpcType_03914647[0xc];
  acStack_107[5] = s_GetTargetNpcType_03914647[0xd];
  acStack_107[6] = s_GetTargetNpcType_03914647[0xe];
  local_100 = 0x65;
  local_f8 = &LAB_0174aac4;
  puStack_f0 = &LAB_0174ab0c;
  local_e0 = 6;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_d4 = 0;
  local_dc = 0;
  local_c0 = &LAB_0174ab9c;
  local_d0 = 0;
  puStack_c8 = &LAB_0174ab54;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  puStack_98 = &LAB_0174abe4;
  plVar1 = plVar18 + 3;
  local_90 = &LAB_0174ac2c;
  local_88 = 0xffffffff;
  do {
    uVar19 = *(ulong *)(psVar33 + 8);
    psVar3 = *(string **)(psVar33 + 0x10);
    if (((byte)*psVar33 & 1) == 0) {
      psVar3 = psVar33 + 1;
      uVar19 = (ulong)((byte)*psVar33 >> 1);
    }
    uVar19 = FUN_008e8ed4(local_80,psVar3,uVar19);
    uVar29 = plVar18[2];
    if (uVar29 != 0) {
      uVar35 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar35 = (uVar35 & 0x3333333333333333) + (uVar35 >> 2 & 0x3333333333333333);
      uVar22 = (uVar35 + (uVar35 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar35 = uVar29 - 1 & uVar19;
      }
      else {
        uVar35 = uVar19;
        if (uVar29 <= uVar19) {
          uVar35 = 0;
          if (uVar29 != 0) {
            uVar35 = uVar19 / uVar29;
          }
          uVar35 = uVar19 - uVar35 * uVar29;
        }
      }
      plVar24 = *(long **)(*plVar31 + uVar35 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        psVar3 = psVar33 + 1;
        sVar21 = (ulong)((byte)*psVar33 >> 1);
        if (((byte)*psVar33 & 1) != 0) {
          psVar3 = *(string **)(psVar33 + 0x10);
          sVar21 = *(size_t *)(psVar33 + 8);
        }
        if (uVar22 < 2) {
          if (sVar21 == 0) {
            do {
              if (plVar24[1] != uVar19 && (plVar24[1] & uVar29 - 1) != uVar35) break;
              uVar22 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
              if ((*(byte *)(plVar24 + 2) & 1) != 0) {
                uVar22 = plVar24[3];
              }
              if (uVar22 == 0) goto LAB_01748dfc;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              if (plVar24[1] != uVar19 && (plVar24[1] & uVar29 - 1) != uVar35) break;
              bVar4 = *(byte *)(plVar24 + 2);
              uVar22 = (ulong)(bVar4 >> 1);
              sVar2 = uVar22;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar24[3];
              }
              if (sVar2 == sVar21) {
                if ((bVar4 & 1) == 0) {
                  psVar26 = (string *)((long)plVar24 + 0x11);
                  psVar28 = psVar3;
                  while (*psVar26 == *psVar28) {
                    uVar22 = uVar22 - 1;
                    psVar26 = psVar26 + 1;
                    psVar28 = psVar28 + 1;
                    if (uVar22 == 0) goto LAB_01748dfc;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar24[4],psVar3,sVar21);
                  if (iVar9 == 0) goto LAB_01748dfc;
                }
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
        else if (sVar21 == 0) {
          do {
            uVar22 = plVar24[1];
            if (uVar22 != uVar19) {
              if (uVar29 <= uVar22) {
                uVar5 = 0;
                if (uVar29 != 0) {
                  uVar5 = uVar22 / uVar29;
                }
                uVar22 = uVar22 - uVar5 * uVar29;
              }
              if (uVar22 != uVar35) break;
            }
            uVar22 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
            if ((*(byte *)(plVar24 + 2) & 1) != 0) {
              uVar22 = plVar24[3];
            }
            if (uVar22 == 0) goto LAB_01748dfc;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 != uVar19) {
              if (uVar29 <= uVar22) {
                uVar5 = 0;
                if (uVar29 != 0) {
                  uVar5 = uVar22 / uVar29;
                }
                uVar22 = uVar22 - uVar5 * uVar29;
              }
              if (uVar22 != uVar35) break;
            }
            bVar4 = *(byte *)(plVar24 + 2);
            uVar22 = (ulong)(bVar4 >> 1);
            sVar2 = uVar22;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar24[3];
            }
            if (sVar2 == sVar21) {
              if ((bVar4 & 1) == 0) {
                psVar26 = (string *)((long)plVar24 + 0x11);
                psVar28 = psVar3;
                while (*psVar26 == *psVar28) {
                  uVar22 = uVar22 - 1;
                  psVar26 = psVar26 + 1;
                  psVar28 = psVar28 + 1;
                  if (uVar22 == 0) goto LAB_01748dfc;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar24[4],psVar3,sVar21);
                if (iVar9 == 0) goto LAB_01748dfc;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    plVar24 = DAT_043f1798;
    plVar23 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar23 = plVar24;
    }
    plVar24 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x40,8);
    std::string::string((string *)(plVar24 + 2),psVar33);
    lVar25 = *(long *)(psVar33 + 0x18);
    lVar27 = *(long *)(psVar33 + 0x28);
    plVar24[6] = *(long *)(psVar33 + 0x20);
    plVar24[7] = lVar27;
    plVar24[5] = lVar25;
    *plVar24 = 0;
    plVar24[1] = uVar19;
    if ((uVar29 == 0) || (*(float *)(plVar18 + 5) * (float)uVar29 < (float)(plVar18[4] + 1))) {
      uVar35 = (ulong)(uVar29 < 3 || (uVar29 & uVar29 - 1) != 0) | uVar29 << 1;
      uVar29 = (ulong)((float)(plVar18[4] + 1) / *(float *)(plVar18 + 5));
      if (uVar29 <= uVar35) {
        uVar29 = uVar35;
      }
      FUN_008e9ae4(plVar31,uVar29);
      uVar29 = plVar18[2];
      if ((uVar29 & uVar29 - 1) == 0) {
        uVar35 = uVar29 - 1 & uVar19;
      }
      else if (uVar19 < uVar29) {
        uVar35 = uVar19;
      }
      else {
        uVar35 = 0;
        if (uVar29 != 0) {
          uVar35 = uVar19 / uVar29;
        }
        uVar35 = uVar19 - uVar35 * uVar29;
      }
    }
    lVar25 = *plVar31;
    plVar23 = *(long **)(lVar25 + uVar35 * 8);
    if (plVar23 == (long *)0x0) {
      *plVar24 = *plVar1;
      *plVar1 = (long)plVar24;
      *(long **)(lVar25 + uVar35 * 8) = plVar1;
      if (*plVar24 != 0) {
        uVar19 = *(ulong *)(*plVar24 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar19 = uVar19 & uVar29 - 1;
        }
        else if (uVar29 <= uVar19) {
          uVar22 = 0;
          if (uVar29 != 0) {
            uVar22 = uVar19 / uVar29;
          }
          uVar19 = uVar19 - uVar22 * uVar29;
        }
        plVar23 = (long *)(*plVar31 + uVar19 * 8);
        goto LAB_01748dec;
      }
    }
    else {
      *plVar24 = *plVar23;
LAB_01748dec:
      *plVar23 = (long)plVar24;
    }
    plVar18[4] = plVar18[4] + 1;
LAB_01748dfc:
    psVar33 = psVar33 + 0x30;
  } while (psVar33 != (string *)local_80);
  lVar27 = FUN_008cca50();
  lVar25 = 0;
  do {
    lVar20 = FUN_008e8c90(plVar31,lVar27 + lVar25);
    if (lVar20 != 0) {
      FUN_008f2aec(local_80,plVar31,lVar20);
      lVar20 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar20 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar20 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar20 + 0x20), lVar34 != 0)) {
          plVar24 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar24 = plVar1;
          }
          uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
          if ((uVar35 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar24,lVar34,0,8);
              goto LAB_01749034;
            }
          }
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar34,0,8);
        }
LAB_01749034:
        plVar1 = DAT_043f1798;
        plVar24 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar24 = plVar1;
        }
        uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar35 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar20,0,8);
            goto LAB_01748fec;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar20,0,8);
      }
    }
LAB_01748fec:
    lVar25 = lVar25 + 0x18;
  } while (lVar25 != 0x300);
  pcVar32 = (char *)plVar18[0xc];
  sVar21 = strlen(pcVar32);
  iVar9 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0xd];
  sVar21 = strlen(pcVar32);
  iVar10 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0xe];
  sVar21 = strlen(pcVar32);
  iVar11 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0x11];
  sVar21 = strlen(pcVar32);
  iVar12 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0x14];
  sVar21 = strlen(pcVar32);
  iVar13 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0x17];
  sVar21 = strlen(pcVar32);
  iVar14 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0x1a];
  sVar21 = strlen(pcVar32);
  iVar15 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0x1d];
  sVar21 = strlen(pcVar32);
  iVar16 = FUN_008f2c60(sVar21,pcVar32);
  pcVar32 = (char *)plVar18[0x1e];
  sVar21 = strlen(pcVar32);
  iVar17 = FUN_008f2c60(sVar21,pcVar32);
  lVar27 = local_a0;
  *(bool *)(plVar18 + 0xb) =
       (((((((iVar10 != 0 || iVar9 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
         iVar14 != 0) || iVar15 != 0) || iVar16 != 0) || iVar17 != 0;
  plVar1 = DAT_043f1798;
  lVar25 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_d0;
        goto joined_r0x01749260;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_d0;
  }
joined_r0x01749260:
  lVar27 = local_100;
  local_d0 = lVar25;
  if (((local_e0 & 1) != 0) && (lVar25 != 0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar27 = local_100;
        goto joined_r0x01749a44;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar27 = local_100;
  }
joined_r0x01749a44:
  pcVar32 = local_130;
  local_100 = lVar27;
  if (((local_110 & 1) != 0) && (lVar27 != 0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar27,0,8);
        plVar1 = DAT_043f1798;
        pcVar32 = local_130;
        goto joined_r0x017493c8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar27,0,8);
    plVar1 = DAT_043f1798;
    pcVar32 = local_130;
  }
joined_r0x017493c8:
  pcVar7 = local_160;
  local_130 = pcVar32;
  if (((local_140 & 1) != 0) && (pcVar32 != (char *)0x0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,pcVar32,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_160;
        goto joined_r0x01749a84;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pcVar32,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_160;
  }
joined_r0x01749a84:
  pcVar32 = local_190;
  local_160 = pcVar7;
  if (((local_170 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        pcVar32 = local_190;
        goto joined_r0x01749530;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    pcVar32 = local_190;
  }
joined_r0x01749530:
  lVar25 = local_1c0;
  local_190 = pcVar32;
  if (((local_1a0 & 1) != 0) && (pcVar32 != (char *)0x0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,pcVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_1c0;
        goto joined_r0x01749ac4;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pcVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_1c0;
  }
joined_r0x01749ac4:
  pcVar32 = local_1f0;
  local_1c0 = lVar25;
  if (((local_1d0 & 1) != 0) && (lVar25 != 0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar25,0,8);
        plVar1 = DAT_043f1798;
        pcVar32 = local_1f0;
        goto joined_r0x01749698;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar25,0,8);
    plVar1 = DAT_043f1798;
    pcVar32 = local_1f0;
  }
joined_r0x01749698:
  lVar25 = local_220;
  local_1f0 = pcVar32;
  if (((local_200 & 1) != 0) && (pcVar32 != (char *)0x0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,pcVar32,0,8);
        plVar1 = DAT_043f1798;
        lVar25 = local_220;
        goto joined_r0x01749b04;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pcVar32,0,8);
    plVar1 = DAT_043f1798;
    lVar25 = local_220;
  }
joined_r0x01749b04:
  DAT_043f1798 = plVar1;
  local_220 = lVar25;
  if ((((byte)local_230 & 1) != 0) && (lVar25 != 0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar35 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar35 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar25,0,8);
        goto LAB_017497fc;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar25,0,8);
  }
LAB_017497fc:
  uVar30 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar30);
  (**(code **)*plVar18)(plVar18,uVar30);
  (**(code **)(*plVar18 + 0x10))(plVar18);
  uVar35 = (ulong)&local_248 | 1;
  if ((local_248 & 1) != 0) {
    uVar35 = local_238;
  }
  FUN_001522a0(uVar30,uVar35);
  uVar35 = local_238;
  plVar1 = DAT_043f1798;
  if (((local_248 & 1) != 0) && (local_238 != 0)) {
    plVar24 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    uVar19 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar24,uVar35,0,8);
        return;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,uVar35,0,8);
  }
  return;
}


