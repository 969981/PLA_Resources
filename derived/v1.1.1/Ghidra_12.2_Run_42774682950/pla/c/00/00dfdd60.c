/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dfdd60; name: FUN_00dfdd60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00dfdd60(long param_1)

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
  long *plVar13;
  ulong uVar14;
  long lVar15;
  size_t sVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  string *psVar22;
  long lVar23;
  string *psVar24;
  ulong uVar25;
  undefined8 uVar26;
  char *pcVar27;
  string *psVar28;
  long *plVar29;
  ulong uVar30;
  long lVar31;
  byte local_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined1 local_1df;
  undefined6 uStack_1de;
  ulong local_1d8;
  string local_1d0;
  undefined2 local_1cf;
  undefined1 local_1cd;
  undefined8 local_1cc;
  undefined4 local_1c4;
  long local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined7 local_19b;
  undefined4 uStack_194;
  long local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined7 local_16b;
  undefined4 uStack_164;
  long local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  undefined4 local_13f;
  undefined7 local_13b;
  undefined4 uStack_134;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [8];
  undefined1 local_107;
  undefined4 local_106;
  undefined2 local_102;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char acStack_df [7];
  char local_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined8 local_af;
  undefined4 local_a7;
  undefined3 uStack_a3;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar13 = DAT_043f1798;
  uVar25 = 0x10;
  uStack_1de = 0;
  psVar28 = &local_1d0;
  local_1d8 = 0;
  local_1e8 = 0x10;
  uStack_1e7 = 0x6f746172626956;
  uStack_1e0 = 0x72;
  local_1df = 0;
  lVar5 = tpidr_el0;
  plVar17 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar17 = plVar13;
  }
  plVar13 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x140,8);
  plVar13[2] = 0;
  plVar17 = plVar13 + 1;
  *plVar17 = 0;
  plVar29 = plVar13 + 3;
  *plVar29 = 0;
  *(undefined4 *)(plVar13 + 5) = 0x3f800000;
  plVar13[6] = (long)FUN_00dff280;
  plVar13[7] = (long)FUN_00dff330;
  *plVar13 = (long)&PTR_FUN_041ee620;
  plVar13[4] = 0;
  plVar13[0xc] = (long)&DAT_038ca815;
  plVar13[0xd] = (long)&DAT_0392da3c;
  plVar13[0xf] = (long)&DAT_038c0f26;
  plVar13[0x10] = (long)FUN_00da3604;
  plVar13[0x15] = (long)"IsPlaying";
  plVar13[0x16] = (long)&LAB_00dff20c;
  plVar13[0x19] = (long)FUN_00da3a70;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = (long)"IsEnable";
  plVar13[0x1c] = (long)&LAB_00dff25c;
  plVar13[0x11] = 0;
  plVar13[0x12] = (long)&DAT_039b3942;
  plVar13[0x1f] = 0;
  plVar13[0x20] = (long)FUN_00dff4c0;
  plVar13[0x13] = (long)&LAB_00dff1bc;
  plVar13[0x14] = 0;
  plVar13[10] = 0;
  *(undefined1 *)(plVar13 + 0xb) = 0;
  *(undefined1 *)(plVar13 + 0xe) = 0;
  plVar13[0x27] = 0;
  plVar13[0x25] = 0;
  *(undefined1 *)(plVar13 + 0x26) = 0;
  plVar13[0x21] = (long)&LAB_00dff7a0;
  plVar13[0x22] = (long)&LAB_00dffa80;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[0x17] = 0;
  plVar13[0x18] = (long)"SetEnableDevice";
  plVar13[0x1d] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x23] = (long)&LAB_00dffa90;
  plVar13[0x24] = 0;
  local_1b0 = &LAB_00dffadc;
  local_1d0 = (string)0x6;
  local_19f = 0x63675f5f;
  local_1cf = 0x656e;
  local_1cd = 0x77;
  local_180 = &LAB_00dffb6c;
  local_1cc = 0;
  local_1c4 = 0;
  local_1a0 = 8;
  local_19b = 0;
  uStack_194 = 0;
  local_170 = 8;
  local_16b = 0;
  uStack_164 = 0;
  local_150 = &LAB_00dffbfc;
  local_140 = 8;
  local_190 = 0;
  puStack_188 = &LAB_00dffb24;
  local_16f = 0x79616c50;
  local_1c0 = 0;
  local_1b8 = &LAB_00dffa94;
  local_1a8 = 0xffffffff;
  local_178 = 0xffffffff;
  local_148 = 0xffffffff;
  local_160 = 0;
  puStack_158 = &LAB_00dffbb4;
  local_13f = 0x706f7453;
  local_13b = 0;
  uStack_134 = 0;
  local_120 = &LAB_00dffc8c;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_00dffc44;
  local_110 = 0x12;
  local_10f[0] = s_IsPlaying_03a73830[0];
  local_10f[1] = s_IsPlaying_03a73830[1];
  local_10f[2] = s_IsPlaying_03a73830[2];
  local_10f[3] = s_IsPlaying_03a73830[3];
  local_10f[4] = s_IsPlaying_03a73830[4];
  local_10f[5] = s_IsPlaying_03a73830[5];
  local_10f[6] = s_IsPlaying_03a73830[6];
  local_10f[7] = s_IsPlaying_03a73830[7];
  local_107 = 0x67;
  local_106 = 0;
  local_102 = 0;
  local_f0 = &LAB_00dffd1c;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00dffcd4;
  local_e0 = 0x1e;
  acStack_d7[0] = s_SetEnableDevice_03a735d4[8];
  acStack_d7[1] = s_SetEnableDevice_03a735d4[9];
  acStack_d7[2] = s_SetEnableDevice_03a735d4[10];
  acStack_d7[3] = s_SetEnableDevice_03a735d4[0xb];
  acStack_d7[4] = s_SetEnableDevice_03a735d4[0xc];
  acStack_d7[5] = s_SetEnableDevice_03a735d4[0xd];
  acStack_d7[6] = s_SetEnableDevice_03a735d4[0xe];
  local_d0 = 0;
  acStack_df[0] = s_SetEnableDevice_03a735d4[0];
  acStack_df[1] = s_SetEnableDevice_03a735d4[1];
  acStack_df[2] = s_SetEnableDevice_03a735d4[2];
  acStack_df[3] = s_SetEnableDevice_03a735d4[3];
  acStack_df[4] = s_SetEnableDevice_03a735d4[4];
  acStack_df[5] = s_SetEnableDevice_03a735d4[5];
  acStack_df[6] = s_SetEnableDevice_03a735d4[6];
  local_d8 = s_SetEnableDevice_03a735d4[7];
  local_b8 = 0xffffffff;
  local_b0 = 0x10;
  local_c8 = &LAB_00dffd64;
  puStack_c0 = &LAB_00dffdac;
  local_af = 0x656c62616e457349;
  local_a7 = 0;
  uStack_a3 = 0;
  local_90 = &LAB_00dffe3c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00dffdf4;
  do {
    uVar14 = *(ulong *)(psVar28 + 8);
    psVar2 = *(string **)(psVar28 + 0x10);
    if (((byte)*psVar28 & 1) == 0) {
      psVar2 = psVar28 + 1;
      uVar14 = (ulong)((byte)*psVar28 >> 1);
    }
    uVar14 = FUN_008e8ed4(local_80,psVar2,uVar14);
    uVar30 = plVar13[2];
    if (uVar30 != 0) {
      uVar25 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar18 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar25 = uVar30 - 1 & uVar14;
      }
      else {
        uVar25 = uVar14;
        if (uVar30 <= uVar14) {
          uVar25 = 0;
          if (uVar30 != 0) {
            uVar25 = uVar14 / uVar30;
          }
          uVar25 = uVar14 - uVar25 * uVar30;
        }
      }
      plVar20 = *(long **)(*plVar17 + uVar25 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        psVar2 = psVar28 + 1;
        sVar16 = (ulong)((byte)*psVar28 >> 1);
        if (((byte)*psVar28 & 1) != 0) {
          psVar2 = *(string **)(psVar28 + 0x10);
          sVar16 = *(size_t *)(psVar28 + 8);
        }
        if (uVar18 < 2) {
          if (sVar16 == 0) {
            do {
              if (plVar20[1] != uVar14 && (plVar20[1] & uVar30 - 1) != uVar25) break;
              uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
              if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                uVar18 = plVar20[3];
              }
              if (uVar18 == 0) goto LAB_00dfe22c;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              if (plVar20[1] != uVar14 && (plVar20[1] & uVar30 - 1) != uVar25) break;
              bVar3 = *(byte *)(plVar20 + 2);
              uVar18 = (ulong)(bVar3 >> 1);
              sVar1 = uVar18;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar20[3];
              }
              if (sVar1 == sVar16) {
                if ((bVar3 & 1) == 0) {
                  psVar22 = (string *)((long)plVar20 + 0x11);
                  psVar24 = psVar2;
                  while (*psVar22 == *psVar24) {
                    uVar18 = uVar18 - 1;
                    psVar22 = psVar22 + 1;
                    psVar24 = psVar24 + 1;
                    if (uVar18 == 0) goto LAB_00dfe22c;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar20[4],psVar2,sVar16);
                  if (iVar6 == 0) goto LAB_00dfe22c;
                }
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
        else if (sVar16 == 0) {
          do {
            uVar18 = plVar20[1];
            if (uVar18 != uVar14) {
              if (uVar30 <= uVar18) {
                uVar4 = 0;
                if (uVar30 != 0) {
                  uVar4 = uVar18 / uVar30;
                }
                uVar18 = uVar18 - uVar4 * uVar30;
              }
              if (uVar18 != uVar25) break;
            }
            uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
            if ((*(byte *)(plVar20 + 2) & 1) != 0) {
              uVar18 = plVar20[3];
            }
            if (uVar18 == 0) goto LAB_00dfe22c;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar20[1];
            if (uVar18 != uVar14) {
              if (uVar30 <= uVar18) {
                uVar4 = 0;
                if (uVar30 != 0) {
                  uVar4 = uVar18 / uVar30;
                }
                uVar18 = uVar18 - uVar4 * uVar30;
              }
              if (uVar18 != uVar25) break;
            }
            bVar3 = *(byte *)(plVar20 + 2);
            uVar18 = (ulong)(bVar3 >> 1);
            sVar1 = uVar18;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar20[3];
            }
            if (sVar1 == sVar16) {
              if ((bVar3 & 1) == 0) {
                psVar22 = (string *)((long)plVar20 + 0x11);
                psVar24 = psVar2;
                while (*psVar22 == *psVar24) {
                  uVar18 = uVar18 - 1;
                  psVar22 = psVar22 + 1;
                  psVar24 = psVar24 + 1;
                  if (uVar18 == 0) goto LAB_00dfe22c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar20[4],psVar2,sVar16);
                if (iVar6 == 0) goto LAB_00dfe22c;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    plVar20 = DAT_043f1798;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar20;
    }
    plVar20 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
    std::string::string((string *)(plVar20 + 2),psVar28);
    lVar21 = *(long *)(psVar28 + 0x18);
    lVar23 = *(long *)(psVar28 + 0x28);
    plVar20[6] = *(long *)(psVar28 + 0x20);
    plVar20[7] = lVar23;
    plVar20[5] = lVar21;
    *plVar20 = 0;
    plVar20[1] = uVar14;
    if ((uVar30 == 0) || (*(float *)(plVar13 + 5) * (float)uVar30 < (float)(plVar13[4] + 1))) {
      uVar25 = (ulong)(uVar30 < 3 || (uVar30 & uVar30 - 1) != 0) | uVar30 << 1;
      uVar30 = (ulong)((float)(plVar13[4] + 1) / *(float *)(plVar13 + 5));
      if (uVar30 <= uVar25) {
        uVar30 = uVar25;
      }
      FUN_008e9ae4(plVar17,uVar30);
      uVar30 = plVar13[2];
      if ((uVar30 & uVar30 - 1) == 0) {
        uVar25 = uVar30 - 1 & uVar14;
      }
      else if (uVar14 < uVar30) {
        uVar25 = uVar14;
      }
      else {
        uVar25 = 0;
        if (uVar30 != 0) {
          uVar25 = uVar14 / uVar30;
        }
        uVar25 = uVar14 - uVar25 * uVar30;
      }
    }
    lVar21 = *plVar17;
    plVar19 = *(long **)(lVar21 + uVar25 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar20 = *plVar29;
      *plVar29 = (long)plVar20;
      *(long **)(lVar21 + uVar25 * 8) = plVar29;
      if (*plVar20 != 0) {
        uVar14 = *(ulong *)(*plVar20 + 8);
        if ((uVar30 & uVar30 - 1) == 0) {
          uVar14 = uVar14 & uVar30 - 1;
        }
        else if (uVar30 <= uVar14) {
          uVar18 = 0;
          if (uVar30 != 0) {
            uVar18 = uVar14 / uVar30;
          }
          uVar14 = uVar14 - uVar18 * uVar30;
        }
        plVar19 = (long *)(*plVar17 + uVar14 * 8);
        goto LAB_00dfe21c;
      }
    }
    else {
      *plVar20 = *plVar19;
LAB_00dfe21c:
      *plVar19 = (long)plVar20;
    }
    plVar13[4] = plVar13[4] + 1;
LAB_00dfe22c:
    psVar28 = psVar28 + 0x30;
  } while (psVar28 != (string *)local_80);
  lVar23 = FUN_008cca50();
  lVar21 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar17,lVar23 + lVar21);
    if (lVar15 != 0) {
      FUN_008f2aec(local_80,plVar17,lVar15);
      lVar15 = local_80[0];
      plVar29 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar15 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar15 + 0x20), lVar31 != 0)) {
          plVar20 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar20 = plVar29;
          }
          uVar25 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar25 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar31,0,8);
              goto LAB_00dfe53c;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar31,0,8);
        }
LAB_00dfe53c:
        plVar29 = DAT_043f1798;
        plVar20 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar20 = plVar29;
        }
        uVar25 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar25 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar15,0,8);
            goto LAB_00dfe4f4;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar15,0,8);
      }
    }
LAB_00dfe4f4:
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x300);
  pcVar27 = (char *)plVar13[0xc];
  sVar16 = strlen(pcVar27);
  iVar6 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0xd];
  sVar16 = strlen(pcVar27);
  iVar7 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0xf];
  sVar16 = strlen(pcVar27);
  iVar8 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0x12];
  sVar16 = strlen(pcVar27);
  iVar9 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0x15];
  sVar16 = strlen(pcVar27);
  iVar10 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0x18];
  sVar16 = strlen(pcVar27);
  iVar11 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0x1b];
  sVar16 = strlen(pcVar27);
  iVar12 = FUN_008f2c60(sVar16,pcVar27);
  lVar23 = local_a0;
  *(bool *)(plVar13 + 0xb) =
       (((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0)
       || iVar12 != 0;
  plVar17 = DAT_043f1798;
  lVar21 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar23,0,8);
        plVar17 = DAT_043f1798;
        lVar21 = local_d0;
        goto joined_r0x00dfe73c;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar23,0,8);
    plVar17 = DAT_043f1798;
    lVar21 = local_d0;
  }
joined_r0x00dfe73c:
  lVar23 = local_100;
  local_d0 = lVar21;
  if (((local_e0 & 1) != 0) && (lVar21 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar17;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar17;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar21,0,8);
        plVar17 = DAT_043f1798;
        lVar23 = local_100;
        goto joined_r0x00dfedbc;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar21,0,8);
    plVar17 = DAT_043f1798;
    lVar23 = local_100;
  }
joined_r0x00dfedbc:
  lVar21 = local_130;
  local_100 = lVar23;
  if (((local_110 & 1) != 0) && (lVar23 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar17;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar17;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar23,0,8);
        plVar17 = DAT_043f1798;
        lVar21 = local_130;
        goto joined_r0x00dfe8a4;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar23,0,8);
    plVar17 = DAT_043f1798;
    lVar21 = local_130;
  }
joined_r0x00dfe8a4:
  lVar23 = local_160;
  local_130 = lVar21;
  if (((local_140 & 1) != 0) && (lVar21 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar17;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar17;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar21,0,8);
        plVar17 = DAT_043f1798;
        lVar23 = local_160;
        goto joined_r0x00dfedfc;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar21,0,8);
    plVar17 = DAT_043f1798;
    lVar23 = local_160;
  }
joined_r0x00dfedfc:
  lVar21 = local_190;
  local_160 = lVar23;
  if (((local_170 & 1) != 0) && (lVar23 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar17;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar17;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar23,0,8);
        plVar17 = DAT_043f1798;
        lVar21 = local_190;
        goto joined_r0x00dfea0c;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar23,0,8);
    plVar17 = DAT_043f1798;
    lVar21 = local_190;
  }
joined_r0x00dfea0c:
  lVar23 = local_1c0;
  local_190 = lVar21;
  if (((local_1a0 & 1) != 0) && (lVar21 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar17;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar17;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar21,0,8);
        plVar17 = DAT_043f1798;
        lVar23 = local_1c0;
        goto joined_r0x00dfee3c;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar21,0,8);
    plVar17 = DAT_043f1798;
    lVar23 = local_1c0;
  }
joined_r0x00dfee3c:
  DAT_043f1798 = plVar17;
  local_1c0 = lVar23;
  if ((((byte)local_1d0 & 1) != 0) && (lVar23 != 0)) {
    plVar29 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar17;
      plVar29 = plVar17;
    }
    uVar25 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar23,0,8);
        goto LAB_00dfeb70;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar23,0,8);
  }
LAB_00dfeb70:
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar13)(plVar13,uVar26);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  uVar25 = (ulong)&local_1e8 | 1;
  if ((local_1e8 & 1) != 0) {
    uVar25 = local_1d8;
  }
  FUN_001522a0(uVar26,uVar25);
  uVar25 = local_1d8;
  plVar13 = DAT_043f1798;
  if (((local_1e8 & 1) != 0) && (local_1d8 != 0)) {
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar13;
    }
    uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar17,uVar25,0,8);
        return;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,uVar25,0,8);
  }
  return;
}


