/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012b2720; name: FUN_012b2720
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012b2720(long param_1)

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
  long *plVar11;
  ulong uVar12;
  long lVar13;
  size_t sVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  ulong uVar23;
  undefined8 uVar24;
  char *pcVar25;
  string *psVar26;
  long *plVar27;
  long lVar28;
  ulong unaff_x28;
  byte local_188;
  char acStack_187 [5];
  undefined2 uStack_182;
  char cStack_180;
  char acStack_17f [5];
  undefined1 local_17a;
  undefined1 uStack_179;
  ulong local_178;
  string local_170;
  undefined2 local_16f;
  undefined1 local_16d;
  undefined8 local_16c;
  undefined4 local_164;
  long local_160;
  undefined1 *local_158;
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
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
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
  
  plVar11 = DAT_043f1798;
  uStack_179 = 0;
  psVar26 = &local_170;
  local_188 = 0x1a;
  local_178 = 0;
  acStack_187 = (char  [5])s_EventNameEdit_03928fd7._0_5_;
  local_17a = 0;
  uStack_182 = s_EventNameEdit_03928fd7._5_2_;
  cStack_180 = s_EventNameEdit_03928fd7[7];
  acStack_17f = (char  [5])s_EventNameEdit_03928fd7._8_5_;
  lVar5 = tpidr_el0;
  plVar15 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar15 = plVar11;
  }
  plVar11 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xf8,8);
  plVar11[2] = 0;
  plVar15 = plVar11 + 1;
  *plVar15 = 0;
  plVar27 = plVar11 + 3;
  *plVar27 = 0;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[6] = (long)FUN_012b3850;
  plVar11[7] = (long)FUN_012b3900;
  *plVar11 = (long)&PTR_FUN_04203210;
  plVar11[0xc] = (long)&DAT_038ca815;
  plVar11[0xd] = (long)&DAT_0392da3c;
  plVar11[0xf] = (long)"CallEvent";
  plVar11[0x10] = (long)&LAB_01390c18;
  plVar11[0x11] = (long)"SetPlayerNameString";
  plVar11[0x12] = (long)&LAB_01390ec4;
  plVar11[0x13] = (long)"GetResult";
  plVar11[0x14] = (long)&LAB_012b382c;
  plVar11[4] = 0;
  plVar11[10] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  plVar11[0x1e] = 0;
  *(undefined1 *)(plVar11 + 0x1d) = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = (long)FUN_012b3ad4;
  plVar11[0x18] = (long)&LAB_012b3db4;
  plVar11[0x19] = (long)&LAB_012b4090;
  plVar11[0x1a] = (long)&LAB_012b40a0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  local_170 = (string)0x6;
  local_16f = 0x656e;
  local_150 = &LAB_012b40ec;
  local_16d = 0x77;
  local_13f = 0x63675f5f;
  local_120 = &LAB_012b417c;
  local_10f[0] = s_CallEvent_03a73760[0];
  local_10f[1] = s_CallEvent_03a73760[1];
  local_10f[2] = s_CallEvent_03a73760[2];
  local_10f[3] = s_CallEvent_03a73760[3];
  local_10f[4] = s_CallEvent_03a73760[4];
  local_10f[5] = s_CallEvent_03a73760[5];
  local_10f[6] = s_CallEvent_03a73760[6];
  local_10f[7] = s_CallEvent_03a73760[7];
  local_16c = 0;
  local_164 = 0;
  local_140 = 8;
  local_13b = 0;
  uStack_134 = 0;
  local_107 = 0x74;
  local_102 = 0;
  local_160 = 0;
  local_158 = &LAB_012b40a4;
  local_148 = 0xffffffff;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_012b4134;
  local_110 = 0x12;
  local_106 = 0;
  local_f0 = &LAB_012b420c;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_012b41c4;
  local_e0 = 0x26;
  local_df[0] = s_SetPlayerNameString_03a73abc[0];
  local_df[1] = s_SetPlayerNameString_03a73abc[1];
  local_df[2] = s_SetPlayerNameString_03a73abc[2];
  local_df[3] = s_SetPlayerNameString_03a73abc[3];
  local_df[4] = s_SetPlayerNameString_03a73abc[4];
  local_df[5] = s_SetPlayerNameString_03a73abc[5];
  local_df[6] = s_SetPlayerNameString_03a73abc[6];
  local_b8 = 0xffffffff;
  local_b0 = 0x12;
  local_a7 = 0x74;
  cStack_d8 = s_SetPlayerNameString_03a73abc[7];
  acStack_d7[0] = s_SetPlayerNameString_03a73abc[8];
  acStack_d7[1] = s_SetPlayerNameString_03a73abc[9];
  acStack_d7[2] = s_SetPlayerNameString_03a73abc[10];
  acStack_d7[3] = s_SetPlayerNameString_03a73abc[0xb];
  acStack_d7[4] = s_SetPlayerNameString_03a73abc[0xc];
  acStack_d7[5] = s_SetPlayerNameString_03a73abc[0xd];
  acStack_d7[6] = s_SetPlayerNameString_03a73abc[0xe];
  local_d0 = 0x676e6972;
  local_c8 = &LAB_012b4254;
  puStack_c0 = &LAB_012b429c;
  local_af[0] = s_GetResult_038aecd8[0];
  local_af[1] = s_GetResult_038aecd8[1];
  local_af[2] = s_GetResult_038aecd8[2];
  local_af[3] = s_GetResult_038aecd8[3];
  local_af[4] = s_GetResult_038aecd8[4];
  local_af[5] = s_GetResult_038aecd8[5];
  local_af[6] = s_GetResult_038aecd8[6];
  local_af[7] = s_GetResult_038aecd8[7];
  local_a6 = 0;
  local_a2 = 0;
  local_90 = &LAB_012b432c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_012b42e4;
  do {
    uVar12 = *(ulong *)(psVar26 + 8);
    psVar2 = *(string **)(psVar26 + 0x10);
    if (((byte)*psVar26 & 1) == 0) {
      psVar2 = psVar26 + 1;
      uVar12 = (ulong)((byte)*psVar26 >> 1);
    }
    uVar12 = FUN_008e8ed4(local_80,psVar2,uVar12);
    uVar23 = plVar11[2];
    if (uVar23 != 0) {
      uVar16 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        unaff_x28 = uVar23 - 1 & uVar12;
      }
      else {
        unaff_x28 = uVar12;
        if (uVar23 <= uVar12) {
          uVar4 = 0;
          if (uVar23 != 0) {
            uVar4 = uVar12 / uVar23;
          }
          unaff_x28 = uVar12 - uVar4 * uVar23;
        }
      }
      plVar18 = *(long **)(*plVar15 + unaff_x28 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        psVar2 = psVar26 + 1;
        sVar14 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar2 = *(string **)(psVar26 + 0x10);
          sVar14 = *(size_t *)(psVar26 + 8);
        }
        if (uVar16 < 2) {
          if (sVar14 == 0) {
            do {
              if (plVar18[1] != uVar12 && (plVar18[1] & uVar23 - 1) != unaff_x28) break;
              uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar16 = plVar18[3];
              }
              if (uVar16 == 0) goto LAB_012b2c80;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if (plVar18[1] != uVar12 && (plVar18[1] & uVar23 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar18 + 2);
              uVar16 = (ulong)(bVar3 >> 1);
              sVar1 = uVar16;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar18[3];
              }
              if (sVar1 == sVar14) {
                if ((bVar3 & 1) == 0) {
                  psVar20 = (string *)((long)plVar18 + 0x11);
                  psVar22 = psVar2;
                  while (*psVar20 == *psVar22) {
                    uVar16 = uVar16 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar16 == 0) goto LAB_012b2c80;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar18[4],psVar2,sVar14);
                  if (iVar6 == 0) goto LAB_012b2c80;
                }
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
        else if (sVar14 == 0) {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar12) {
              if (uVar23 <= uVar16) {
                uVar4 = 0;
                if (uVar23 != 0) {
                  uVar4 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar4 * uVar23;
              }
              if (uVar16 != unaff_x28) break;
            }
            uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar16 = plVar18[3];
            }
            if (uVar16 == 0) goto LAB_012b2c80;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar12) {
              if (uVar23 <= uVar16) {
                uVar4 = 0;
                if (uVar23 != 0) {
                  uVar4 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar4 * uVar23;
              }
              if (uVar16 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar18 + 2);
            uVar16 = (ulong)(bVar3 >> 1);
            sVar1 = uVar16;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar18[3];
            }
            if (sVar1 == sVar14) {
              if ((bVar3 & 1) == 0) {
                psVar20 = (string *)((long)plVar18 + 0x11);
                psVar22 = psVar2;
                while (*psVar20 == *psVar22) {
                  uVar16 = uVar16 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar16 == 0) goto LAB_012b2c80;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar18[4],psVar2,sVar14);
                if (iVar6 == 0) goto LAB_012b2c80;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = DAT_043f1798;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar18;
    }
    plVar18 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
    std::string::string((string *)(plVar18 + 2),psVar26);
    lVar19 = *(long *)(psVar26 + 0x18);
    lVar21 = *(long *)(psVar26 + 0x28);
    plVar18[6] = *(long *)(psVar26 + 0x20);
    plVar18[7] = lVar21;
    plVar18[5] = lVar19;
    *plVar18 = 0;
    plVar18[1] = uVar12;
    if ((uVar23 == 0) || (*(float *)(plVar11 + 5) * (float)uVar23 < (float)(plVar11[4] + 1))) {
      uVar23 = (ulong)(uVar23 < 3 || (uVar23 & uVar23 - 1) != 0) | uVar23 << 1;
      uVar16 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar16 <= uVar23) {
        uVar16 = uVar23;
      }
      FUN_008e9ae4(plVar15,uVar16);
      uVar23 = plVar11[2];
      if ((uVar23 & uVar23 - 1) == 0) {
        unaff_x28 = uVar23 - 1 & uVar12;
      }
      else if (uVar12 < uVar23) {
        unaff_x28 = uVar12;
      }
      else {
        uVar16 = 0;
        if (uVar23 != 0) {
          uVar16 = uVar12 / uVar23;
        }
        unaff_x28 = uVar12 - uVar16 * uVar23;
      }
    }
    lVar19 = *plVar15;
    plVar17 = *(long **)(lVar19 + unaff_x28 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar27;
      *plVar27 = (long)plVar18;
      *(long **)(lVar19 + unaff_x28 * 8) = plVar27;
      if (*plVar18 != 0) {
        uVar12 = *(ulong *)(*plVar18 + 8);
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar12 = uVar12 & uVar23 - 1;
        }
        else if (uVar23 <= uVar12) {
          uVar16 = 0;
          if (uVar23 != 0) {
            uVar16 = uVar12 / uVar23;
          }
          uVar12 = uVar12 - uVar16 * uVar23;
        }
        plVar17 = (long *)(*plVar15 + uVar12 * 8);
        goto LAB_012b2c70;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_012b2c70:
      *plVar17 = (long)plVar18;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_012b2c80:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != (string *)local_80);
  lVar21 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar15,lVar21 + lVar19);
    if (lVar13 != 0) {
      FUN_008f2aec(local_80,plVar15,lVar13);
      lVar13 = local_80[0];
      plVar27 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar13 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar13 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar13 + 0x20), lVar28 != 0)) {
          plVar18 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar18 = plVar27;
          }
          uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar28,0,8);
              goto LAB_012b2ea8;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar28,0,8);
        }
LAB_012b2ea8:
        plVar27 = DAT_043f1798;
        plVar18 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar18 = plVar27;
        }
        uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar13,0,8);
            goto LAB_012b2e0c;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,0,8);
      }
    }
LAB_012b2e0c:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar25 = (char *)plVar11[0xc];
  sVar14 = strlen(pcVar25);
  iVar6 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0xd];
  sVar14 = strlen(pcVar25);
  iVar7 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0xf];
  sVar14 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0x11];
  sVar14 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0x13];
  sVar14 = strlen(pcVar25);
  iVar10 = FUN_008f2c60(sVar14,pcVar25);
  lVar21 = local_a0;
  *(bool *)(plVar11 + 0xb) =
       (((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0;
  plVar15 = DAT_043f1798;
  lVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar27 = plVar15;
    }
    uVar12 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar21,0,8);
        plVar15 = DAT_043f1798;
        lVar19 = local_d0;
        goto joined_r0x012b3084;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
    plVar15 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x012b3084:
  lVar21 = local_100;
  local_d0 = lVar19;
  if (((local_e0 & 1) != 0) && (lVar19 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar15;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar15;
      plVar27 = plVar15;
    }
    uVar12 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar19,0,8);
        plVar15 = DAT_043f1798;
        lVar21 = local_100;
        goto joined_r0x012b3534;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
    plVar15 = DAT_043f1798;
    lVar21 = local_100;
  }
joined_r0x012b3534:
  lVar19 = local_130;
  local_100 = lVar21;
  if (((local_110 & 1) != 0) && (lVar21 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar15;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar15;
      plVar27 = plVar15;
    }
    uVar12 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar21,0,8);
        plVar15 = DAT_043f1798;
        lVar19 = local_130;
        goto joined_r0x012b31ec;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
    plVar15 = DAT_043f1798;
    lVar19 = local_130;
  }
joined_r0x012b31ec:
  lVar21 = local_160;
  local_130 = lVar19;
  if (((local_140 & 1) != 0) && (lVar19 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar15;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar15;
      plVar27 = plVar15;
    }
    uVar12 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar19,0,8);
        plVar15 = DAT_043f1798;
        lVar21 = local_160;
        goto joined_r0x012b3574;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
    plVar15 = DAT_043f1798;
    lVar21 = local_160;
  }
joined_r0x012b3574:
  DAT_043f1798 = plVar15;
  local_160 = lVar21;
  if ((((byte)local_170 & 1) != 0) && (lVar21 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar15;
      plVar27 = plVar15;
    }
    uVar12 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar21,0,8);
        goto LAB_012b3350;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
  }
LAB_012b3350:
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar11)(plVar11,uVar24);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar12 = (ulong)&local_188 | 1;
  if ((local_188 & 1) != 0) {
    uVar12 = local_178;
  }
  FUN_001522a0(uVar24,uVar12);
  uVar12 = local_178;
  plVar11 = DAT_043f1798;
  if (((local_188 & 1) != 0) && (local_178 != 0)) {
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar11;
    }
    uVar23 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar15,uVar12,0,8);
        return;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,uVar12,0,8);
  }
  return;
}


