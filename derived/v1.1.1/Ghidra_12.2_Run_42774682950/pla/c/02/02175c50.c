/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02175c50; name: FUN_02175c50
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02175c50(long param_1)

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
  ulong unaff_x25;
  long lVar28;
  byte local_188;
  undefined7 uStack_187;
  char cStack_180;
  undefined7 uStack_17f;
  char local_178;
  undefined2 uStack_177;
  undefined1 uStack_175;
  undefined4 uStack_174;
  string local_170;
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [8];
  undefined2 local_107;
  undefined1 local_105;
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
  
  plVar11 = DAT_043f1798;
  psVar26 = &local_170;
  local_188 = 0x24;
  uStack_174 = 0;
  uStack_177 = 0x776f;
  uStack_187 = s_FieldMessageWindow_038d6627._0_7_;
  cStack_180 = s_FieldMessageWindow_038d6627[7];
  uStack_17f = s_FieldMessageWindow_038d6627._8_7_;
  local_178 = s_FieldMessageWindow_038d6627[0xf];
  uStack_175 = 0;
  lVar5 = tpidr_el0;
  plVar15 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar15 = plVar11;
  }
  plVar11 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xf8,8);
  plVar11[2] = 0;
  plVar11[4] = 0;
  plVar15 = plVar11 + 1;
  *plVar15 = 0;
  plVar27 = plVar11 + 3;
  *plVar27 = 0;
  plVar11[6] = (long)FUN_02176d80;
  plVar11[7] = (long)FUN_02176e30;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  *plVar11 = (long)&PTR_FUN_0425b628;
  plVar11[10] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = (long)FUN_02176fc0;
  plVar11[0xc] = (long)"GetFieldObjectID";
  plVar11[0xd] = (long)FUN_02585120;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  plVar11[0x10] = (long)&LAB_02585148;
  plVar11[0x11] = 0;
  plVar11[0x18] = (long)&LAB_021772a0;
  plVar11[0x19] = (long)&LAB_02177580;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1c] = 0;
  *(undefined1 *)(plVar11 + 0x1d) = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = (long)"IsLipSyncPossible";
  plVar11[0x12] = (long)"SetCloseSE";
  plVar11[0x13] = (long)"SetSendSE";
  plVar11[0x14] = (long)&DAT_0392da3c;
  plVar11[0x15] = 0;
  plVar11[0x1a] = (long)&LAB_02177590;
  plVar11[0x1b] = 0;
  local_170 = (string)0x20;
  local_16f[0] = s_GetFieldObjectID_039943f5[0];
  local_16f[1] = s_GetFieldObjectID_039943f5[1];
  local_16f[2] = s_GetFieldObjectID_039943f5[2];
  local_16f[3] = s_GetFieldObjectID_039943f5[3];
  local_16f[4] = s_GetFieldObjectID_039943f5[4];
  local_16f[5] = s_GetFieldObjectID_039943f5[5];
  local_16f[6] = s_GetFieldObjectID_039943f5[6];
  cStack_168 = s_GetFieldObjectID_039943f5[7];
  acStack_167[0] = s_GetFieldObjectID_039943f5[8];
  acStack_167[1] = s_GetFieldObjectID_039943f5[9];
  acStack_167[2] = s_GetFieldObjectID_039943f5[10];
  acStack_167[3] = s_GetFieldObjectID_039943f5[0xb];
  acStack_167[4] = s_GetFieldObjectID_039943f5[0xc];
  acStack_167[5] = s_GetFieldObjectID_039943f5[0xd];
  acStack_167[6] = s_GetFieldObjectID_039943f5[0xe];
  local_160 = 0x44;
  local_158 = &LAB_02177594;
  local_140 = 0x22;
  local_13f[0] = s_IsLipSyncPossible_03a73afc[0];
  local_13f[1] = s_IsLipSyncPossible_03a73afc[1];
  local_13f[2] = s_IsLipSyncPossible_03a73afc[2];
  local_13f[3] = s_IsLipSyncPossible_03a73afc[3];
  local_13f[4] = s_IsLipSyncPossible_03a73afc[4];
  local_13f[5] = s_IsLipSyncPossible_03a73afc[5];
  local_13f[6] = s_IsLipSyncPossible_03a73afc[6];
  cStack_138 = s_IsLipSyncPossible_03a73afc[7];
  acStack_137[0] = s_IsLipSyncPossible_03a73afc[8];
  acStack_137[1] = s_IsLipSyncPossible_03a73afc[9];
  acStack_137[2] = s_IsLipSyncPossible_03a73afc[10];
  acStack_137[3] = s_IsLipSyncPossible_03a73afc[0xb];
  acStack_137[4] = s_IsLipSyncPossible_03a73afc[0xc];
  acStack_137[5] = s_IsLipSyncPossible_03a73afc[0xd];
  acStack_137[6] = s_IsLipSyncPossible_03a73afc[0xe];
  local_150 = &LAB_021775dc;
  local_148 = 0xffffffff;
  local_118 = 0xffffffff;
  local_130 = 0x656c;
  puStack_128 = &LAB_02177624;
  local_120 = &LAB_0217766c;
  local_110 = 0x14;
  local_107 = 0x4553;
  local_10f[0] = s_SetCloseSE_03a73824[0];
  local_10f[1] = s_SetCloseSE_03a73824[1];
  local_10f[2] = s_SetCloseSE_03a73824[2];
  local_10f[3] = s_SetCloseSE_03a73824[3];
  local_10f[4] = s_SetCloseSE_03a73824[4];
  local_10f[5] = s_SetCloseSE_03a73824[5];
  local_10f[6] = s_SetCloseSE_03a73824[6];
  local_10f[7] = s_SetCloseSE_03a73824[7];
  local_105 = 0;
  local_104 = 0;
  local_f0 = &LAB_021776fc;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_021776b4;
  local_e0 = 0x12;
  local_df[0] = s_SetSendSE_03893f3f[0];
  local_df[1] = s_SetSendSE_03893f3f[1];
  local_df[2] = s_SetSendSE_03893f3f[2];
  local_df[3] = s_SetSendSE_03893f3f[3];
  local_df[4] = s_SetSendSE_03893f3f[4];
  local_df[5] = s_SetSendSE_03893f3f[5];
  local_df[6] = s_SetSendSE_03893f3f[6];
  local_df[7] = s_SetSendSE_03893f3f[7];
  local_d7 = 0x45;
  local_d6 = 0;
  local_d2 = 0;
  local_c0 = &LAB_0217778c;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_d0 = 0;
  puStack_c8 = &LAB_02177744;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0217781c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_021777d4;
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
        unaff_x25 = uVar23 - 1 & uVar12;
      }
      else {
        unaff_x25 = uVar12;
        if (uVar23 <= uVar12) {
          uVar4 = 0;
          if (uVar23 != 0) {
            uVar4 = uVar12 / uVar23;
          }
          unaff_x25 = uVar12 - uVar4 * uVar23;
        }
      }
      plVar18 = *(long **)(*plVar15 + unaff_x25 * 8);
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
              if (plVar18[1] != uVar12 && (plVar18[1] & uVar23 - 1) != unaff_x25) break;
              uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar16 = plVar18[3];
              }
              if (uVar16 == 0) goto LAB_02176078;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if (plVar18[1] != uVar12 && (plVar18[1] & uVar23 - 1) != unaff_x25) break;
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
                    if (uVar16 == 0) goto LAB_02176078;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar18[4],psVar2,sVar14);
                  if (iVar6 == 0) goto LAB_02176078;
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
              if (uVar16 != unaff_x25) break;
            }
            uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar16 = plVar18[3];
            }
            if (uVar16 == 0) goto LAB_02176078;
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
              if (uVar16 != unaff_x25) break;
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
                  if (uVar16 == 0) goto LAB_02176078;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar18[4],psVar2,sVar14);
                if (iVar6 == 0) goto LAB_02176078;
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
        unaff_x25 = uVar23 - 1 & uVar12;
      }
      else if (uVar12 < uVar23) {
        unaff_x25 = uVar12;
      }
      else {
        uVar16 = 0;
        if (uVar23 != 0) {
          uVar16 = uVar12 / uVar23;
        }
        unaff_x25 = uVar12 - uVar16 * uVar23;
      }
    }
    lVar19 = *plVar15;
    plVar17 = *(long **)(lVar19 + unaff_x25 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar27;
      *plVar27 = (long)plVar18;
      *(long **)(lVar19 + unaff_x25 * 8) = plVar27;
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
        goto LAB_02176068;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_02176068:
      *plVar17 = (long)plVar18;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_02176078:
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
              goto LAB_0217638c;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar28,0,8);
        }
LAB_0217638c:
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
            goto LAB_02176344;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,0,8);
      }
    }
LAB_02176344:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar25 = (char *)plVar11[0xc];
  sVar14 = strlen(pcVar25);
  iVar6 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0xf];
  sVar14 = strlen(pcVar25);
  iVar7 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0x12];
  sVar14 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0x13];
  sVar14 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0x14];
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
        goto joined_r0x0217654c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
    plVar15 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x0217654c:
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
        goto joined_r0x02176a58;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
    plVar15 = DAT_043f1798;
    lVar21 = local_100;
  }
joined_r0x02176a58:
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
        goto joined_r0x021766b4;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
    plVar15 = DAT_043f1798;
    lVar19 = local_130;
  }
joined_r0x021766b4:
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
        goto joined_r0x02176a98;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
    plVar15 = DAT_043f1798;
    lVar21 = local_160;
  }
joined_r0x02176a98:
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
        goto LAB_02176818;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
  }
LAB_02176818:
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar11)(plVar11,uVar24);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar12 = (ulong)&local_188 | 1;
  if ((local_188 & 1) != 0) {
    uVar12 = CONCAT44(uStack_174,CONCAT13(uStack_175,CONCAT21(uStack_177,local_178)));
  }
  FUN_001522a0(uVar24,uVar12);
  plVar11 = DAT_043f1798;
  if (((local_188 & 1) != 0) &&
     (lVar19 = CONCAT44(uStack_174,CONCAT13(uStack_175,CONCAT21(uStack_177,local_178))), lVar19 != 0
     )) {
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar11;
    }
    uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar19,0,8);
        return;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar19,0,8);
  }
  return;
}


