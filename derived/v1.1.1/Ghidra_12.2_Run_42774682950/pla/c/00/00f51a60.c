/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f51a60; name: FUN_00f51a60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f51a60(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  string *psVar25;
  ulong uVar26;
  undefined8 uVar27;
  long *plVar28;
  char *pcVar29;
  string *psVar30;
  long lVar31;
  byte local_1b8;
  char acStack_1b7 [7];
  char local_1b0;
  char acStack_1af [7];
  ulong local_1a8;
  string local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  char *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
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
  local_1b8 = 0x1e;
  acStack_1b7 = (char  [7])s_SoundController_039915f8._0_7_;
  local_1b0 = s_SoundController_039915f8[7];
  acStack_1af = (char  [7])s_SoundController_039915f8._8_7_;
  local_1a8 = 0;
  uVar6 = tpidr_el0;
  plVar21 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar21 = plVar1;
  }
  plVar14 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x108,8);
  plVar14[4] = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar28 = plVar14 + 1;
  *plVar28 = 0;
  plVar14[6] = (long)FUN_00f52d70;
  plVar14[7] = (long)FUN_00f52e20;
  *plVar14 = (long)&PTR_FUN_041eebd8;
  plVar14[0xc] = (long)"__haxe_export_GetInstance";
  plVar14[0xd] = (long)FUN_00d7e1e8;
  plVar14[0x10] = (long)FUN_00d7e348;
  plVar14[0x11] = 0;
  plVar14[0x12] = (long)"IsPostAmbientMixer";
  plVar14[0x13] = (long)&LAB_00d7e470;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[0x16] = (long)&DAT_0392da3c;
  plVar14[0x17] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = (long)&DAT_038ca815;
  plVar14[10] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  plVar14[0x20] = 0;
  plVar14[0x1e] = 0;
  *(undefined1 *)(plVar14 + 0x1f) = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = (long)FUN_00f52ff4;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[0xe] = (long)"PostSituationMixer";
  plVar14[0xf] = (long)"PostAmbientMixer";
  plVar14[0x1a] = (long)&LAB_00f532d4;
  plVar14[0x1b] = (long)&LAB_00f535b0;
  plVar14[0x1c] = (long)&LAB_00f535c0;
  plVar14[0x1d] = 0;
  plVar1 = DAT_043f1798;
  plVar21 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar21 = plVar1;
  }
  local_190 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,0x20,8);
  local_190[0x18] = 'e';
  local_190[0x19] = '\0';
  uVar27 = s___haxe_export_GetInstance_0394d4e9._8_8_;
  *(undefined8 *)local_190 = s___haxe_export_GetInstance_0394d4e9._0_8_;
  uVar7 = s___haxe_export_GetInstance_0394d4e9._16_8_;
  *(undefined8 *)(local_190 + 8) = uVar27;
  *(undefined8 *)(local_190 + 0x10) = uVar7;
  local_1a0 = (string)0x21;
  local_16f[0] = s_PostSituationMixer_039131e9[0];
  local_16f[1] = s_PostSituationMixer_039131e9[1];
  local_16f[2] = s_PostSituationMixer_039131e9[2];
  local_16f[3] = s_PostSituationMixer_039131e9[3];
  local_16f[4] = s_PostSituationMixer_039131e9[4];
  local_16f[5] = s_PostSituationMixer_039131e9[5];
  local_16f[6] = s_PostSituationMixer_039131e9[6];
  local_198 = 0x19;
  local_19b = 0;
  local_188 = &LAB_00f535c4;
  puStack_180 = &LAB_00f5360c;
  local_170 = 0x24;
  local_110 = 0x24;
  local_19f = 0;
  local_178 = 0xffffffff;
  local_148 = 0xffffffff;
  local_140 = 0x20;
  cStack_168 = s_PostSituationMixer_039131e9[7];
  acStack_167[0] = s_PostSituationMixer_039131e9[8];
  acStack_167[1] = s_PostSituationMixer_039131e9[9];
  acStack_167[2] = s_PostSituationMixer_039131e9[10];
  acStack_167[3] = s_PostSituationMixer_039131e9[0xb];
  acStack_167[4] = s_PostSituationMixer_039131e9[0xc];
  acStack_167[5] = s_PostSituationMixer_039131e9[0xd];
  acStack_167[6] = s_PostSituationMixer_039131e9[0xe];
  local_150 = &LAB_00f5369c;
  local_160 = 0x726578;
  puStack_158 = &LAB_00f53654;
  local_199 = 0;
  local_118 = 0xffffffff;
  acStack_137[0] = s_PostAmbientMixer_03a73a6c[8];
  acStack_137[1] = s_PostAmbientMixer_03a73a6c[9];
  acStack_137[2] = s_PostAmbientMixer_03a73a6c[10];
  acStack_137[3] = s_PostAmbientMixer_03a73a6c[0xb];
  acStack_137[4] = s_PostAmbientMixer_03a73a6c[0xc];
  acStack_137[5] = s_PostAmbientMixer_03a73a6c[0xd];
  acStack_137[6] = s_PostAmbientMixer_03a73a6c[0xe];
  local_130 = 0x72;
  acStack_13f[0] = s_PostAmbientMixer_03a73a6c[0];
  acStack_13f[1] = s_PostAmbientMixer_03a73a6c[1];
  acStack_13f[2] = s_PostAmbientMixer_03a73a6c[2];
  acStack_13f[3] = s_PostAmbientMixer_03a73a6c[3];
  acStack_13f[4] = s_PostAmbientMixer_03a73a6c[4];
  acStack_13f[5] = s_PostAmbientMixer_03a73a6c[5];
  acStack_13f[6] = s_PostAmbientMixer_03a73a6c[6];
  local_138 = s_PostAmbientMixer_03a73a6c[7];
  local_128 = &LAB_00f536e4;
  puStack_120 = &LAB_00f5372c;
  local_10f[0] = s_IsPostAmbientMixer_039084c9[0];
  local_10f[1] = s_IsPostAmbientMixer_039084c9[1];
  local_10f[2] = s_IsPostAmbientMixer_039084c9[2];
  local_10f[3] = s_IsPostAmbientMixer_039084c9[3];
  local_10f[4] = s_IsPostAmbientMixer_039084c9[4];
  local_10f[5] = s_IsPostAmbientMixer_039084c9[5];
  local_10f[6] = s_IsPostAmbientMixer_039084c9[6];
  local_e8 = 0xffffffff;
  cStack_108 = s_IsPostAmbientMixer_039084c9[7];
  acStack_107[0] = s_IsPostAmbientMixer_039084c9[8];
  acStack_107[1] = s_IsPostAmbientMixer_039084c9[9];
  acStack_107[2] = s_IsPostAmbientMixer_039084c9[10];
  acStack_107[3] = s_IsPostAmbientMixer_039084c9[0xb];
  acStack_107[4] = s_IsPostAmbientMixer_039084c9[0xc];
  acStack_107[5] = s_IsPostAmbientMixer_039084c9[0xd];
  acStack_107[6] = s_IsPostAmbientMixer_039084c9[0xe];
  local_100 = 0x726578;
  local_f8 = &LAB_00f53774;
  puStack_f0 = &LAB_00f537bc;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_dc = 0;
  local_d4 = 0;
  local_c0 = &LAB_00f5384c;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  psVar30 = &local_1a0;
  local_d0 = 0;
  puStack_c8 = &LAB_00f53804;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_00f538dc;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00f53894;
  plVar1 = plVar14 + 3;
  uVar18 = uVar6;
  do {
    uVar15 = *(ulong *)(psVar30 + 8);
    psVar3 = *(string **)(psVar30 + 0x10);
    if (((byte)*psVar30 & 1) == 0) {
      psVar3 = psVar30 + 1;
      uVar15 = (ulong)((byte)*psVar30 >> 1);
    }
    uVar15 = FUN_008e8ed4(local_80,psVar3,uVar15);
    uVar26 = plVar14[2];
    if (uVar26 != 0) {
      uVar18 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar19 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar18 = uVar26 - 1 & uVar15;
      }
      else {
        uVar18 = uVar15;
        if (uVar26 <= uVar15) {
          uVar18 = 0;
          if (uVar26 != 0) {
            uVar18 = uVar15 / uVar26;
          }
          uVar18 = uVar15 - uVar18 * uVar26;
        }
      }
      plVar21 = *(long **)(*plVar28 + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        psVar3 = psVar30 + 1;
        sVar17 = (ulong)((byte)*psVar30 >> 1);
        if (((byte)*psVar30 & 1) != 0) {
          psVar3 = *(string **)(psVar30 + 0x10);
          sVar17 = *(size_t *)(psVar30 + 8);
        }
        if (uVar19 < 2) {
          if (sVar17 == 0) {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar26 - 1) != uVar18) break;
              uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
              if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                uVar19 = plVar21[3];
              }
              if (uVar19 == 0) goto LAB_00f52064;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar26 - 1) != uVar18) break;
              bVar4 = *(byte *)(plVar21 + 2);
              uVar19 = (ulong)(bVar4 >> 1);
              sVar2 = uVar19;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar21[3];
              }
              if (sVar2 == sVar17) {
                if ((bVar4 & 1) == 0) {
                  psVar23 = (string *)((long)plVar21 + 0x11);
                  psVar25 = psVar3;
                  while (*psVar23 == *psVar25) {
                    uVar19 = uVar19 - 1;
                    psVar23 = psVar23 + 1;
                    psVar25 = psVar25 + 1;
                    if (uVar19 == 0) goto LAB_00f52064;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar21[4],psVar3,sVar17);
                  if (iVar8 == 0) goto LAB_00f52064;
                }
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
        else if (sVar17 == 0) {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar26 <= uVar19) {
                uVar5 = 0;
                if (uVar26 != 0) {
                  uVar5 = uVar19 / uVar26;
                }
                uVar19 = uVar19 - uVar5 * uVar26;
              }
              if (uVar19 != uVar18) break;
            }
            uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
            if ((*(byte *)(plVar21 + 2) & 1) != 0) {
              uVar19 = plVar21[3];
            }
            if (uVar19 == 0) goto LAB_00f52064;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar26 <= uVar19) {
                uVar5 = 0;
                if (uVar26 != 0) {
                  uVar5 = uVar19 / uVar26;
                }
                uVar19 = uVar19 - uVar5 * uVar26;
              }
              if (uVar19 != uVar18) break;
            }
            bVar4 = *(byte *)(plVar21 + 2);
            uVar19 = (ulong)(bVar4 >> 1);
            sVar2 = uVar19;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar21[3];
            }
            if (sVar2 == sVar17) {
              if ((bVar4 & 1) == 0) {
                psVar23 = (string *)((long)plVar21 + 0x11);
                psVar25 = psVar3;
                while (*psVar23 == *psVar25) {
                  uVar19 = uVar19 - 1;
                  psVar23 = psVar23 + 1;
                  psVar25 = psVar25 + 1;
                  if (uVar19 == 0) goto LAB_00f52064;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar21[4],psVar3,sVar17);
                if (iVar8 == 0) goto LAB_00f52064;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    plVar21 = DAT_043f1798;
    plVar20 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar21;
    }
    plVar21 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
    std::string::string((string *)(plVar21 + 2),psVar30);
    lVar22 = *(long *)(psVar30 + 0x18);
    lVar24 = *(long *)(psVar30 + 0x28);
    plVar21[6] = *(long *)(psVar30 + 0x20);
    plVar21[7] = lVar24;
    plVar21[5] = lVar22;
    *plVar21 = 0;
    plVar21[1] = uVar15;
    if ((uVar26 == 0) || (*(float *)(plVar14 + 5) * (float)uVar26 < (float)(plVar14[4] + 1))) {
      uVar18 = (ulong)(uVar26 < 3 || (uVar26 & uVar26 - 1) != 0) | uVar26 << 1;
      uVar26 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar26 <= uVar18) {
        uVar26 = uVar18;
      }
      FUN_008e9ae4(plVar28,uVar26);
      uVar26 = plVar14[2];
      if ((uVar26 & uVar26 - 1) == 0) {
        uVar18 = uVar26 - 1 & uVar15;
      }
      else if (uVar15 < uVar26) {
        uVar18 = uVar15;
      }
      else {
        uVar18 = 0;
        if (uVar26 != 0) {
          uVar18 = uVar15 / uVar26;
        }
        uVar18 = uVar15 - uVar18 * uVar26;
      }
    }
    lVar22 = *plVar28;
    plVar20 = *(long **)(lVar22 + uVar18 * 8);
    if (plVar20 == (long *)0x0) {
      *plVar21 = *plVar1;
      *plVar1 = (long)plVar21;
      *(long **)(lVar22 + uVar18 * 8) = plVar1;
      if (*plVar21 != 0) {
        uVar15 = *(ulong *)(*plVar21 + 8);
        if ((uVar26 & uVar26 - 1) == 0) {
          uVar15 = uVar15 & uVar26 - 1;
        }
        else if (uVar26 <= uVar15) {
          uVar19 = 0;
          if (uVar26 != 0) {
            uVar19 = uVar15 / uVar26;
          }
          uVar15 = uVar15 - uVar19 * uVar26;
        }
        plVar20 = (long *)(*plVar28 + uVar15 * 8);
        goto LAB_00f52054;
      }
    }
    else {
      *plVar21 = *plVar20;
LAB_00f52054:
      *plVar20 = (long)plVar21;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_00f52064:
    psVar30 = psVar30 + 0x30;
  } while (psVar30 != (string *)local_80);
  lVar24 = FUN_008cca50();
  lVar22 = 0;
  do {
    lVar16 = FUN_008e8c90(plVar28,lVar24 + lVar22);
    if (lVar16 != 0) {
      FUN_008f2aec(local_80,plVar28,lVar16);
      lVar16 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar16 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar16 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar16 + 0x20), lVar31 != 0)) {
          plVar21 = *(long **)(uVar6 + 0x20);
          if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
            *(long **)(uVar6 + 0x20) = DAT_043f1798;
            plVar21 = plVar1;
          }
          uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(uVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(uVar6 + 0x38d488) = 1;
              *(undefined8 *)(uVar6 + 0x38d478) = 0;
              *(undefined8 *)(uVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(uVar6 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar31,0,8);
              goto LAB_00f5222c;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar31,0,8);
        }
LAB_00f5222c:
        plVar1 = DAT_043f1798;
        plVar21 = *(long **)(uVar6 + 0x20);
        if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
          *(long **)(uVar6 + 0x20) = DAT_043f1798;
          plVar21 = plVar1;
        }
        uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(uVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(uVar6 + 0x38d488) = 1;
            *(undefined8 *)(uVar6 + 0x38d478) = 0;
            *(undefined8 *)(uVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(uVar6 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar16,0,8);
            goto LAB_00f521e4;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar16,0,8);
      }
    }
LAB_00f521e4:
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0x300);
  pcVar29 = (char *)plVar14[0xc];
  sVar17 = strlen(pcVar29);
  iVar8 = FUN_008f2c60(sVar17,pcVar29);
  pcVar29 = (char *)plVar14[0xe];
  sVar17 = strlen(pcVar29);
  iVar9 = FUN_008f2c60(sVar17,pcVar29);
  pcVar29 = (char *)plVar14[0xf];
  sVar17 = strlen(pcVar29);
  iVar10 = FUN_008f2c60(sVar17,pcVar29);
  pcVar29 = (char *)plVar14[0x12];
  sVar17 = strlen(pcVar29);
  iVar11 = FUN_008f2c60(sVar17,pcVar29);
  pcVar29 = (char *)plVar14[0x15];
  sVar17 = strlen(pcVar29);
  iVar12 = FUN_008f2c60(sVar17,pcVar29);
  pcVar29 = (char *)plVar14[0x16];
  sVar17 = strlen(pcVar29);
  iVar13 = FUN_008f2c60(sVar17,pcVar29);
  lVar24 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       ((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0;
  plVar1 = DAT_043f1798;
  lVar22 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar22 = local_d0;
        goto joined_r0x00f52414;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar22 = local_d0;
  }
joined_r0x00f52414:
  lVar24 = local_100;
  local_d0 = lVar22;
  if (((local_e0 & 1) != 0) && (lVar22 != 0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar22,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_100;
        goto joined_r0x00f529d8;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_100;
  }
joined_r0x00f529d8:
  lVar22 = local_130;
  local_100 = lVar24;
  if (((local_110 & 1) != 0) && (lVar24 != 0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar22 = local_130;
        goto joined_r0x00f5257c;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar22 = local_130;
  }
joined_r0x00f5257c:
  lVar24 = local_160;
  local_130 = lVar22;
  if (((local_140 & 1) != 0) && (lVar22 != 0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar22,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_160;
        goto joined_r0x00f52a18;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar22,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_160;
  }
joined_r0x00f52a18:
  pcVar29 = local_190;
  local_160 = lVar24;
  if (((local_170 & 1) != 0) && (lVar24 != 0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar24,0,8);
        plVar1 = DAT_043f1798;
        pcVar29 = local_190;
        goto joined_r0x00f526e4;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar24,0,8);
    plVar1 = DAT_043f1798;
    pcVar29 = local_190;
  }
joined_r0x00f526e4:
  DAT_043f1798 = plVar1;
  local_190 = pcVar29;
  if ((((byte)local_1a0 & 1) != 0) && (pcVar29 != (char *)0x0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,pcVar29,0,8);
        goto LAB_00f52794;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pcVar29,0,8);
  }
LAB_00f52794:
  uVar27 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar27);
  (**(code **)*plVar14)(plVar14,uVar27);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar18 = (ulong)&local_1b8 | 1;
  if ((local_1b8 & 1) != 0) {
    uVar18 = local_1a8;
  }
  FUN_001522a0(uVar27,uVar18);
  uVar18 = local_1a8;
  plVar1 = DAT_043f1798;
  if (((local_1b8 & 1) != 0) && (local_1a8 != 0)) {
    plVar21 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    uVar15 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar21,uVar18,0,8);
        return;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,uVar18,0,8);
  }
  return;
}


