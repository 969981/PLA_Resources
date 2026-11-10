/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e62390; name: FUN_00e62390
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e62390(long param_1)

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
  int iVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  size_t sVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  string *psVar25;
  long lVar26;
  string *psVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  char *pcVar31;
  string *psVar32;
  long *plVar33;
  long lVar34;
  ulong unaff_x28;
  byte local_2a8;
  undefined7 uStack_2a7;
  char cStack_2a0;
  undefined2 local_29f;
  undefined1 local_29d;
  undefined4 uStack_29c;
  ulong local_298;
  string local_290;
  undefined2 local_28f;
  undefined1 local_28d;
  undefined8 local_28c;
  undefined4 local_284;
  long local_280;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  byte local_260;
  undefined4 local_25f;
  undefined7 local_25b;
  undefined4 uStack_254;
  long local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined4 local_238;
  byte local_230;
  char local_22f [8];
  undefined1 local_227;
  undefined4 local_226;
  undefined2 local_222;
  long local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined4 local_208;
  byte local_200;
  undefined4 local_1ff;
  undefined2 local_1fb;
  undefined1 local_1f9;
  undefined8 local_1f8;
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined7 local_1cb;
  undefined4 uStack_1c4;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined8 local_19f;
  undefined4 local_197;
  undefined3 uStack_193;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  undefined2 local_16f;
  undefined1 local_16d;
  undefined8 local_16c;
  undefined4 local_164;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [8];
  undefined1 local_137;
  undefined4 local_136;
  undefined2 local_132;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined7 local_10f;
  undefined4 uStack_108;
  undefined4 local_104;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [8];
  undefined1 local_d7;
  undefined4 local_d6;
  undefined2 local_d2;
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
  
  plVar17 = DAT_043f1798;
  uStack_29c = 0;
  psVar32 = &local_290;
  local_2a8 = 0x14;
  local_298 = 0;
  local_29f = 0x6d65;
  local_29d = 0;
  uStack_2a7 = s_SaveSystem_0396054b._0_7_;
  cStack_2a0 = s_SaveSystem_0396054b[7];
  lVar5 = tpidr_el0;
  plVar21 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar21 = plVar17;
  }
  plVar17 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x110,8);
  plVar17[2] = 0;
  plVar17[4] = 0;
  plVar21 = plVar17 + 1;
  *plVar21 = 0;
  plVar33 = plVar17 + 3;
  *plVar33 = 0;
  plVar17[6] = (long)FUN_00e63e10;
  plVar17[7] = (long)FUN_00e63ec0;
  *(undefined4 *)(plVar17 + 5) = 0x3f800000;
  *plVar17 = (long)&PTR_FUN_041ee8f0;
  plVar17[0xc] = (long)&DAT_038ca815;
  plVar17[0xd] = (long)&DAT_0392da3c;
  plVar17[0xf] = (long)"EventWork";
  plVar17[0x10] = (long)"MyItem";
  plVar17[0x11] = (long)&DAT_038a3adc;
  plVar17[0x12] = (long)"MyStatus";
  plVar17[0x19] = 0;
  plVar17[0x1a] = (long)FUN_00e64050;
  plVar17[10] = 0;
  plVar17[0x13] = (long)&DAT_039b3c66;
  plVar17[0x14] = (long)"Advresult";
  plVar17[0x1b] = (long)&LAB_00e64330;
  plVar17[0x1c] = (long)&LAB_00e64610;
  plVar17[8] = 0;
  plVar17[9] = 0;
  *(undefined1 *)(plVar17 + 0xb) = 0;
  *(undefined1 *)(plVar17 + 0xe) = 0;
  plVar17[0x21] = 0;
  plVar17[0x1f] = 0;
  *(undefined1 *)(plVar17 + 0x20) = 0;
  plVar17[0x15] = (long)"PokedexSave";
  plVar17[0x16] = (long)"MyDressup";
  plVar17[0x17] = (long)"EventRandomSeedSave";
  plVar17[0x18] = 0;
  plVar17[0x1d] = (long)&LAB_00e64620;
  plVar17[0x1e] = 0;
  local_28f = 0x656e;
  local_270 = &LAB_00e6466c;
  local_28d = 0x77;
  local_25f = 0x63675f5f;
  local_240 = &LAB_00e646fc;
  local_22f[0] = s_EventWork_038e8718[0];
  local_22f[1] = s_EventWork_038e8718[1];
  local_22f[2] = s_EventWork_038e8718[2];
  local_22f[3] = s_EventWork_038e8718[3];
  local_22f[4] = s_EventWork_038e8718[4];
  local_22f[5] = s_EventWork_038e8718[5];
  local_22f[6] = s_EventWork_038e8718[6];
  local_22f[7] = s_EventWork_038e8718[7];
  local_290 = (string)0x6;
  local_28c = 0;
  local_284 = 0;
  local_260 = 8;
  local_25b = 0;
  uStack_254 = 0;
  local_227 = 0x6b;
  local_222 = 0;
  local_280 = 0;
  local_278 = &LAB_00e64624;
  local_268 = 0xffffffff;
  local_238 = 0xffffffff;
  local_250 = 0;
  puStack_248 = &LAB_00e646b4;
  local_230 = 0x12;
  local_226 = 0;
  local_210 = &LAB_00e6478c;
  local_208 = 0xffffffff;
  local_220 = 0;
  puStack_218 = &LAB_00e64744;
  local_200 = 0xc;
  local_1ff = 0x7449794d;
  local_1fb = 0x6d65;
  local_1f9 = 0;
  local_1d8 = 0xffffffff;
  local_1d0 = 8;
  local_1e8 = &LAB_00e647d4;
  puStack_1e0 = &LAB_00e6481c;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1cf = 0x6373694d;
  local_1cb = 0;
  uStack_1c4 = 0;
  local_1b0 = &LAB_00e648ac;
  local_1a8 = 0xffffffff;
  local_1c0 = 0;
  puStack_1b8 = &LAB_00e64864;
  local_1a0 = 0x10;
  local_19f = 0x737574617453794d;
  local_170 = 6;
  local_197 = 0;
  uStack_193 = 0;
  local_180 = &LAB_00e6493c;
  local_178 = 0xffffffff;
  local_190 = 0;
  puStack_188 = &LAB_00e648f4;
  local_16f = 0x6142;
  local_16d = 0x67;
  local_16c = 0;
  local_164 = 0;
  local_150 = &LAB_00e649cc;
  local_148 = 0xffffffff;
  local_140 = 0x12;
  local_160 = 0;
  puStack_158 = &LAB_00e64984;
  local_13f[0] = s_Advresult_03a73804[0];
  local_13f[1] = s_Advresult_03a73804[1];
  local_13f[2] = s_Advresult_03a73804[2];
  local_13f[3] = s_Advresult_03a73804[3];
  local_13f[4] = s_Advresult_03a73804[4];
  local_13f[5] = s_Advresult_03a73804[5];
  local_13f[6] = s_Advresult_03a73804[6];
  local_13f[7] = s_Advresult_03a73804[7];
  local_137 = 0x74;
  local_132 = 0;
  local_136 = 0;
  local_120 = &LAB_00e64a5c;
  local_110 = 0x16;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_00e64a14;
  local_10f = s_PokedexSave_03a73a08._0_7_;
  local_e0 = 0x12;
  uStack_108 = 0x65766153;
  local_104 = 0;
  local_f0 = &LAB_00e64aec;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00e64aa4;
  local_d7 = 0x70;
  local_df[0] = s_MyDressup_03a73980[0];
  local_df[1] = s_MyDressup_03a73980[1];
  local_df[2] = s_MyDressup_03a73980[2];
  local_df[3] = s_MyDressup_03a73980[3];
  local_df[4] = s_MyDressup_03a73980[4];
  local_df[5] = s_MyDressup_03a73980[5];
  local_df[6] = s_MyDressup_03a73980[6];
  local_df[7] = s_MyDressup_03a73980[7];
  local_d2 = 0;
  local_d6 = 0;
  local_c8 = &LAB_00e64b34;
  local_c0 = &LAB_00e64b7c;
  local_b0 = 0x26;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_af[0] = s_EventRandomSeedSave_03974120[0];
  local_af[1] = s_EventRandomSeedSave_03974120[1];
  local_af[2] = s_EventRandomSeedSave_03974120[2];
  local_af[3] = s_EventRandomSeedSave_03974120[3];
  local_af[4] = s_EventRandomSeedSave_03974120[4];
  local_af[5] = s_EventRandomSeedSave_03974120[5];
  local_af[6] = s_EventRandomSeedSave_03974120[6];
  local_98 = &LAB_00e64bc4;
  local_90 = &LAB_00e64c0c;
  cStack_a8 = s_EventRandomSeedSave_03974120[7];
  acStack_a7[0] = s_EventRandomSeedSave_03974120[8];
  acStack_a7[1] = s_EventRandomSeedSave_03974120[9];
  acStack_a7[2] = s_EventRandomSeedSave_03974120[10];
  acStack_a7[3] = s_EventRandomSeedSave_03974120[0xb];
  acStack_a7[4] = s_EventRandomSeedSave_03974120[0xc];
  acStack_a7[5] = s_EventRandomSeedSave_03974120[0xd];
  acStack_a7[6] = s_EventRandomSeedSave_03974120[0xe];
  local_a0 = 0x65766153;
  local_88 = 0xffffffff;
  do {
    uVar18 = *(ulong *)(psVar32 + 8);
    psVar2 = *(string **)(psVar32 + 0x10);
    if (((byte)*psVar32 & 1) == 0) {
      psVar2 = psVar32 + 1;
      uVar18 = (ulong)((byte)*psVar32 >> 1);
    }
    uVar18 = FUN_008e8ed4(local_80,psVar2,uVar18);
    uVar29 = plVar17[2];
    if (uVar29 != 0) {
      uVar22 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        unaff_x28 = uVar29 - 1 & uVar18;
      }
      else {
        unaff_x28 = uVar18;
        if (uVar29 <= uVar18) {
          uVar4 = 0;
          if (uVar29 != 0) {
            uVar4 = uVar18 / uVar29;
          }
          unaff_x28 = uVar18 - uVar4 * uVar29;
        }
      }
      plVar24 = *(long **)(*plVar21 + unaff_x28 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        psVar2 = psVar32 + 1;
        sVar20 = (ulong)((byte)*psVar32 >> 1);
        if (((byte)*psVar32 & 1) != 0) {
          psVar2 = *(string **)(psVar32 + 0x10);
          sVar20 = *(size_t *)(psVar32 + 8);
        }
        if (uVar22 < 2) {
          if (sVar20 == 0) {
            do {
              if (plVar24[1] != uVar18 && (plVar24[1] & uVar29 - 1) != unaff_x28) break;
              uVar22 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
              if ((*(byte *)(plVar24 + 2) & 1) != 0) {
                uVar22 = plVar24[3];
              }
              if (uVar22 == 0) goto LAB_00e62a84;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
          else {
            do {
              if (plVar24[1] != uVar18 && (plVar24[1] & uVar29 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar24 + 2);
              uVar22 = (ulong)(bVar3 >> 1);
              sVar1 = uVar22;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar24[3];
              }
              if (sVar1 == sVar20) {
                if ((bVar3 & 1) == 0) {
                  psVar25 = (string *)((long)plVar24 + 0x11);
                  psVar27 = psVar2;
                  while (*psVar25 == *psVar27) {
                    uVar22 = uVar22 - 1;
                    psVar25 = psVar25 + 1;
                    psVar27 = psVar27 + 1;
                    if (uVar22 == 0) goto LAB_00e62a84;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar24[4],psVar2,sVar20);
                  if (iVar6 == 0) goto LAB_00e62a84;
                }
              }
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
        }
        else if (sVar20 == 0) {
          do {
            uVar22 = plVar24[1];
            if (uVar22 != uVar18) {
              if (uVar29 <= uVar22) {
                uVar4 = 0;
                if (uVar29 != 0) {
                  uVar4 = uVar22 / uVar29;
                }
                uVar22 = uVar22 - uVar4 * uVar29;
              }
              if (uVar22 != unaff_x28) break;
            }
            uVar22 = (ulong)(*(byte *)(plVar24 + 2) >> 1);
            if ((*(byte *)(plVar24 + 2) & 1) != 0) {
              uVar22 = plVar24[3];
            }
            if (uVar22 == 0) goto LAB_00e62a84;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 != uVar18) {
              if (uVar29 <= uVar22) {
                uVar4 = 0;
                if (uVar29 != 0) {
                  uVar4 = uVar22 / uVar29;
                }
                uVar22 = uVar22 - uVar4 * uVar29;
              }
              if (uVar22 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar24 + 2);
            uVar22 = (ulong)(bVar3 >> 1);
            sVar1 = uVar22;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar24[3];
            }
            if (sVar1 == sVar20) {
              if ((bVar3 & 1) == 0) {
                psVar25 = (string *)((long)plVar24 + 0x11);
                psVar27 = psVar2;
                while (*psVar25 == *psVar27) {
                  uVar22 = uVar22 - 1;
                  psVar25 = psVar25 + 1;
                  psVar27 = psVar27 + 1;
                  if (uVar22 == 0) goto LAB_00e62a84;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar24[4],psVar2,sVar20);
                if (iVar6 == 0) goto LAB_00e62a84;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    plVar24 = DAT_043f1798;
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar23 = plVar24;
    }
    plVar24 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x40,8);
    std::string::string((string *)(plVar24 + 2),psVar32);
    lVar26 = *(long *)(psVar32 + 0x18);
    lVar28 = *(long *)(psVar32 + 0x28);
    plVar24[6] = *(long *)(psVar32 + 0x20);
    plVar24[7] = lVar28;
    plVar24[5] = lVar26;
    *plVar24 = 0;
    plVar24[1] = uVar18;
    if ((uVar29 == 0) || (*(float *)(plVar17 + 5) * (float)uVar29 < (float)(plVar17[4] + 1))) {
      uVar29 = (ulong)(uVar29 < 3 || (uVar29 & uVar29 - 1) != 0) | uVar29 << 1;
      uVar22 = (ulong)((float)(plVar17[4] + 1) / *(float *)(plVar17 + 5));
      if (uVar22 <= uVar29) {
        uVar22 = uVar29;
      }
      FUN_008e9ae4(plVar21,uVar22);
      uVar29 = plVar17[2];
      if ((uVar29 & uVar29 - 1) == 0) {
        unaff_x28 = uVar29 - 1 & uVar18;
      }
      else if (uVar18 < uVar29) {
        unaff_x28 = uVar18;
      }
      else {
        uVar22 = 0;
        if (uVar29 != 0) {
          uVar22 = uVar18 / uVar29;
        }
        unaff_x28 = uVar18 - uVar22 * uVar29;
      }
    }
    lVar26 = *plVar21;
    plVar23 = *(long **)(lVar26 + unaff_x28 * 8);
    if (plVar23 == (long *)0x0) {
      *plVar24 = *plVar33;
      *plVar33 = (long)plVar24;
      *(long **)(lVar26 + unaff_x28 * 8) = plVar33;
      if (*plVar24 != 0) {
        uVar18 = *(ulong *)(*plVar24 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar18 = uVar18 & uVar29 - 1;
        }
        else if (uVar29 <= uVar18) {
          uVar22 = 0;
          if (uVar29 != 0) {
            uVar22 = uVar18 / uVar29;
          }
          uVar18 = uVar18 - uVar22 * uVar29;
        }
        plVar23 = (long *)(*plVar21 + uVar18 * 8);
        goto LAB_00e62a74;
      }
    }
    else {
      *plVar24 = *plVar23;
LAB_00e62a74:
      *plVar23 = (long)plVar24;
    }
    plVar17[4] = plVar17[4] + 1;
LAB_00e62a84:
    psVar32 = psVar32 + 0x30;
  } while (psVar32 != (string *)local_80);
  lVar28 = FUN_008cca50();
  lVar26 = 0;
  do {
    lVar19 = FUN_008e8c90(plVar21,lVar28 + lVar26);
    if (lVar19 != 0) {
      FUN_008f2aec(local_80,plVar21,lVar19);
      lVar19 = local_80[0];
      plVar33 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar19 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar19 + 0x10) & 1) != 0)) &&
           (lVar34 = *(long *)(lVar19 + 0x20), lVar34 != 0)) {
          plVar24 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar24 = plVar33;
          }
          uVar18 = (**(code **)(*plVar24 + 0xc0))(plVar24);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar24,lVar34,0,8);
              goto LAB_00e62c78;
            }
          }
          (**(code **)(*plVar24 + 0x18))(plVar24,lVar34,0,8);
        }
LAB_00e62c78:
        plVar33 = DAT_043f1798;
        plVar24 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar24 = plVar33;
        }
        uVar18 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar19,0,8);
            goto LAB_00e62c30;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar19,0,8);
      }
    }
LAB_00e62c30:
    lVar26 = lVar26 + 0x18;
  } while (lVar26 != 0x300);
  pcVar31 = (char *)plVar17[0xc];
  sVar20 = strlen(pcVar31);
  iVar6 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0xd];
  sVar20 = strlen(pcVar31);
  iVar7 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0xf];
  sVar20 = strlen(pcVar31);
  iVar8 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x10];
  sVar20 = strlen(pcVar31);
  iVar9 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x11];
  sVar20 = strlen(pcVar31);
  iVar10 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x12];
  sVar20 = strlen(pcVar31);
  iVar11 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x13];
  sVar20 = strlen(pcVar31);
  iVar12 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x14];
  sVar20 = strlen(pcVar31);
  iVar13 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x15];
  sVar20 = strlen(pcVar31);
  iVar14 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x16];
  sVar20 = strlen(pcVar31);
  iVar15 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x17];
  sVar20 = strlen(pcVar31);
  iVar16 = FUN_008f2c60(sVar20,pcVar31);
  lVar28 = local_a0;
  *(bool *)(plVar17 + 0xb) =
       (((((((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) ||
           iVar11 != 0) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0) || iVar15 != 0) ||
       iVar16 != 0;
  plVar21 = DAT_043f1798;
  lVar26 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar28,0,8);
        plVar21 = DAT_043f1798;
        lVar26 = local_d0;
        goto joined_r0x00e62edc;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar28,0,8);
    plVar21 = DAT_043f1798;
    lVar26 = local_d0;
  }
joined_r0x00e62edc:
  lVar28 = local_100;
  local_d0 = lVar26;
  if (((local_e0 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar21 = DAT_043f1798;
        lVar28 = local_100;
        goto joined_r0x00e63820;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar21 = DAT_043f1798;
    lVar28 = local_100;
  }
joined_r0x00e63820:
  lVar26 = local_130;
  local_100 = lVar28;
  if (((local_110 & 1) != 0) && (lVar28 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar28,0,8);
        plVar21 = DAT_043f1798;
        lVar26 = local_130;
        goto joined_r0x00e63044;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar28,0,8);
    plVar21 = DAT_043f1798;
    lVar26 = local_130;
  }
joined_r0x00e63044:
  lVar28 = local_160;
  local_130 = lVar26;
  if (((local_140 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar21 = DAT_043f1798;
        lVar28 = local_160;
        goto joined_r0x00e63860;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar21 = DAT_043f1798;
    lVar28 = local_160;
  }
joined_r0x00e63860:
  lVar26 = local_190;
  local_160 = lVar28;
  if (((local_170 & 1) != 0) && (lVar28 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar28,0,8);
        plVar21 = DAT_043f1798;
        lVar26 = local_190;
        goto joined_r0x00e631ac;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar28,0,8);
    plVar21 = DAT_043f1798;
    lVar26 = local_190;
  }
joined_r0x00e631ac:
  lVar28 = local_1c0;
  local_190 = lVar26;
  if (((local_1a0 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar21 = DAT_043f1798;
        lVar28 = local_1c0;
        goto joined_r0x00e638a0;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar21 = DAT_043f1798;
    lVar28 = local_1c0;
  }
joined_r0x00e638a0:
  lVar26 = local_1f0;
  local_1c0 = lVar28;
  if (((local_1d0 & 1) != 0) && (lVar28 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar28,0,8);
        plVar21 = DAT_043f1798;
        lVar26 = local_1f0;
        goto joined_r0x00e63314;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar28,0,8);
    plVar21 = DAT_043f1798;
    lVar26 = local_1f0;
  }
joined_r0x00e63314:
  lVar28 = local_220;
  local_1f0 = lVar26;
  if (((local_200 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar21 = DAT_043f1798;
        lVar28 = local_220;
        goto joined_r0x00e638e0;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar21 = DAT_043f1798;
    lVar28 = local_220;
  }
joined_r0x00e638e0:
  lVar26 = local_250;
  local_220 = lVar28;
  if (((local_230 & 1) != 0) && (lVar28 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar28,0,8);
        plVar21 = DAT_043f1798;
        lVar26 = local_250;
        goto joined_r0x00e6347c;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar28,0,8);
    plVar21 = DAT_043f1798;
    lVar26 = local_250;
  }
joined_r0x00e6347c:
  lVar28 = local_280;
  local_250 = lVar26;
  if (((local_260 & 1) != 0) && (lVar26 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar21;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar26,0,8);
        plVar21 = DAT_043f1798;
        lVar28 = local_280;
        goto joined_r0x00e63920;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar26,0,8);
    plVar21 = DAT_043f1798;
    lVar28 = local_280;
  }
joined_r0x00e63920:
  DAT_043f1798 = plVar21;
  local_280 = lVar28;
  if ((((byte)local_290 & 1) != 0) && (lVar28 != 0)) {
    plVar33 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar21;
      plVar33 = plVar21;
    }
    uVar18 = (**(code **)(*plVar33 + 0xc0))(plVar33);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar33,lVar28,0,8);
        goto LAB_00e635e0;
      }
    }
    (**(code **)(*plVar33 + 0x18))(plVar33,lVar28,0,8);
  }
LAB_00e635e0:
  uVar30 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar30);
  (**(code **)*plVar17)(plVar17,uVar30);
  (**(code **)(*plVar17 + 0x10))(plVar17);
  uVar18 = (ulong)&local_2a8 | 1;
  if ((local_2a8 & 1) != 0) {
    uVar18 = local_298;
  }
  FUN_001522a0(uVar30,uVar18);
  uVar18 = local_298;
  plVar17 = DAT_043f1798;
  if (((local_2a8 & 1) != 0) && (local_298 != 0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar17;
    }
    uVar29 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar29 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,uVar18,0,8);
        return;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,uVar18,0,8);
  }
  return;
}


