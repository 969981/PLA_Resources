/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02078c60; name: FUN_02078c60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02078c60(long param_1)

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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  size_t sVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  string *psVar19;
  long lVar20;
  string *psVar21;
  ulong uVar22;
  undefined8 uVar23;
  char *pcVar24;
  string *psVar25;
  long *plVar26;
  long lVar27;
  ulong unaff_x28;
  byte local_188;
  undefined7 uStack_187;
  char cStack_180;
  char acStack_17f [5];
  undefined2 uStack_17a;
  char local_178;
  char acStack_177 [5];
  undefined1 uStack_172;
  undefined1 uStack_171;
  string local_170;
  undefined4 local_16f;
  undefined7 local_16b;
  undefined4 uStack_164;
  long local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  byte local_140;
  char local_13f [8];
  undefined2 local_137;
  undefined1 local_135;
  undefined4 local_134;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
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
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  char acStack_af [7];
  char local_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar10 = DAT_043f1798;
  psVar25 = &local_170;
  local_188 = 0x2a;
  uStack_187 = s_FieldBgPartsComponent_03934396._0_7_;
  cStack_180 = s_FieldBgPartsComponent_03934396[7];
  uStack_171 = 0;
  acStack_17f = (char  [5])s_FieldBgPartsComponent_03934396._8_5_;
  uStack_17a = s_FieldBgPartsComponent_03934396._13_2_;
  local_178 = s_FieldBgPartsComponent_03934396[0xf];
  acStack_177 = (char  [5])s_FieldBgPartsComponent_03934396._16_5_;
  uStack_172 = 0;
  lVar5 = tpidr_el0;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar10;
  }
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x108,8);
  plVar10[2] = 0;
  plVar14 = plVar10 + 1;
  *plVar14 = 0;
  plVar26 = plVar10 + 3;
  *plVar26 = 0;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[6] = (long)FUN_02079d70;
  plVar10[7] = (long)FUN_02079e20;
  *plVar10 = (long)&PTR_FUN_0425b358;
  plVar10[4] = 0;
  plVar10[0xe] = (long)"SetIntParameter";
  plVar10[0xf] = (long)&LAB_01a241d0;
  plVar10[0x12] = (long)&LAB_01a2433c;
  plVar10[0x13] = 0;
  plVar10[0x14] = (long)"SetTriggerParameter";
  plVar10[0x15] = (long)&LAB_01a244a8;
  plVar10[0x18] = 0;
  plVar10[0x19] = (long)FUN_02079fb0;
  plVar10[0xc] = (long)&DAT_0392da3c;
  plVar10[0x1a] = (long)&LAB_0207a290;
  plVar10[0x1b] = (long)&LAB_0207a570;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  plVar10[0x20] = 0;
  plVar10[0x1e] = 0;
  *(undefined1 *)(plVar10 + 0x1f) = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = (long)"SetBoolParameter";
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  plVar10[0x1c] = (long)&LAB_0207a580;
  plVar10[0x1d] = 0;
  local_150 = &LAB_0207a5cc;
  local_140 = 0x14;
  local_137 = 0x7473;
  local_13f[0] = s_class_cast_038dd4e7[0];
  local_13f[1] = s_class_cast_038dd4e7[1];
  local_13f[2] = s_class_cast_038dd4e7[2];
  local_13f[3] = s_class_cast_038dd4e7[3];
  local_13f[4] = s_class_cast_038dd4e7[4];
  local_13f[5] = s_class_cast_038dd4e7[5];
  local_13f[6] = s_class_cast_038dd4e7[6];
  local_13f[7] = s_class_cast_038dd4e7[7];
  local_16f = 0x63675f5f;
  local_170 = (string)0x8;
  local_16b = 0;
  uStack_164 = 0;
  local_135 = 0;
  local_134 = 0;
  local_120 = &LAB_0207a65c;
  local_130 = 0;
  puStack_128 = &LAB_0207a614;
  local_110 = 0x1e;
  local_10f[0] = s_SetIntParameter_03a73a94[0];
  local_10f[1] = s_SetIntParameter_03a73a94[1];
  local_10f[2] = s_SetIntParameter_03a73a94[2];
  local_10f[3] = s_SetIntParameter_03a73a94[3];
  local_10f[4] = s_SetIntParameter_03a73a94[4];
  local_10f[5] = s_SetIntParameter_03a73a94[5];
  local_10f[6] = s_SetIntParameter_03a73a94[6];
  cStack_108 = s_SetIntParameter_03a73a94[7];
  acStack_107[0] = s_SetIntParameter_03a73a94[8];
  acStack_107[1] = s_SetIntParameter_03a73a94[9];
  acStack_107[2] = s_SetIntParameter_03a73a94[10];
  acStack_107[3] = s_SetIntParameter_03a73a94[0xb];
  acStack_107[4] = s_SetIntParameter_03a73a94[0xc];
  acStack_107[5] = s_SetIntParameter_03a73a94[0xd];
  acStack_107[6] = s_SetIntParameter_03a73a94[0xe];
  local_100 = 0;
  local_f8 = &LAB_0207a6a4;
  puStack_f0 = &LAB_0207a6ec;
  local_e0 = 0x20;
  local_160 = 0;
  local_158 = &LAB_0207a584;
  local_148 = 0xffffffff;
  local_118 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_df[0] = s_SetBoolParameter_03a738c0[0];
  local_df[1] = s_SetBoolParameter_03a738c0[1];
  local_df[2] = s_SetBoolParameter_03a738c0[2];
  local_df[3] = s_SetBoolParameter_03a738c0[3];
  local_df[4] = s_SetBoolParameter_03a738c0[4];
  local_df[5] = s_SetBoolParameter_03a738c0[5];
  local_df[6] = s_SetBoolParameter_03a738c0[6];
  local_b8 = 0xffffffff;
  cStack_d8 = s_SetBoolParameter_03a738c0[7];
  acStack_d7[0] = s_SetBoolParameter_03a738c0[8];
  acStack_d7[1] = s_SetBoolParameter_03a738c0[9];
  acStack_d7[2] = s_SetBoolParameter_03a738c0[10];
  acStack_d7[3] = s_SetBoolParameter_03a738c0[0xb];
  acStack_d7[4] = s_SetBoolParameter_03a738c0[0xc];
  acStack_d7[5] = s_SetBoolParameter_03a738c0[0xd];
  acStack_d7[6] = s_SetBoolParameter_03a738c0[0xe];
  local_d0 = 0x72;
  local_b0 = 0x26;
  acStack_a7[0] = s_SetTriggerParameter_038f5e40[8];
  acStack_a7[1] = s_SetTriggerParameter_038f5e40[9];
  acStack_a7[2] = s_SetTriggerParameter_038f5e40[10];
  acStack_a7[3] = s_SetTriggerParameter_038f5e40[0xb];
  acStack_a7[4] = s_SetTriggerParameter_038f5e40[0xc];
  acStack_a7[5] = s_SetTriggerParameter_038f5e40[0xd];
  acStack_a7[6] = s_SetTriggerParameter_038f5e40[0xe];
  local_c8 = &LAB_0207a734;
  puStack_c0 = &LAB_0207a77c;
  acStack_af[0] = s_SetTriggerParameter_038f5e40[0];
  acStack_af[1] = s_SetTriggerParameter_038f5e40[1];
  acStack_af[2] = s_SetTriggerParameter_038f5e40[2];
  acStack_af[3] = s_SetTriggerParameter_038f5e40[3];
  acStack_af[4] = s_SetTriggerParameter_038f5e40[4];
  acStack_af[5] = s_SetTriggerParameter_038f5e40[5];
  acStack_af[6] = s_SetTriggerParameter_038f5e40[6];
  local_a8 = s_SetTriggerParameter_038f5e40[7];
  local_90 = &LAB_0207a80c;
  local_88 = 0xffffffff;
  local_a0 = 0x72657465;
  puStack_98 = &LAB_0207a7c4;
  do {
    uVar11 = *(ulong *)(psVar25 + 8);
    psVar2 = *(string **)(psVar25 + 0x10);
    if (((byte)*psVar25 & 1) == 0) {
      psVar2 = psVar25 + 1;
      uVar11 = (ulong)((byte)*psVar25 >> 1);
    }
    uVar11 = FUN_008e8ed4(local_80,psVar2,uVar11);
    uVar22 = plVar10[2];
    if (uVar22 != 0) {
      uVar15 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        unaff_x28 = uVar22 - 1 & uVar11;
      }
      else {
        unaff_x28 = uVar11;
        if (uVar22 <= uVar11) {
          uVar4 = 0;
          if (uVar22 != 0) {
            uVar4 = uVar11 / uVar22;
          }
          unaff_x28 = uVar11 - uVar4 * uVar22;
        }
      }
      plVar17 = *(long **)(*plVar14 + unaff_x28 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar2 = psVar25 + 1;
        sVar13 = (ulong)((byte)*psVar25 >> 1);
        if (((byte)*psVar25 & 1) != 0) {
          psVar2 = *(string **)(psVar25 + 0x10);
          sVar13 = *(size_t *)(psVar25 + 8);
        }
        if (uVar15 < 2) {
          if (sVar13 == 0) {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar22 - 1) != unaff_x28) break;
              uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar15 = plVar17[3];
              }
              if (uVar15 == 0) goto LAB_020791c4;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar22 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar17 + 2);
              uVar15 = (ulong)(bVar3 >> 1);
              sVar1 = uVar15;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar17[3];
              }
              if (sVar1 == sVar13) {
                if ((bVar3 & 1) == 0) {
                  psVar19 = (string *)((long)plVar17 + 0x11);
                  psVar21 = psVar2;
                  while (*psVar19 == *psVar21) {
                    uVar15 = uVar15 - 1;
                    psVar19 = psVar19 + 1;
                    psVar21 = psVar21 + 1;
                    if (uVar15 == 0) goto LAB_020791c4;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar17[4],psVar2,sVar13);
                  if (iVar6 == 0) goto LAB_020791c4;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar13 == 0) {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar11) {
              if (uVar22 <= uVar15) {
                uVar4 = 0;
                if (uVar22 != 0) {
                  uVar4 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar4 * uVar22;
              }
              if (uVar15 != unaff_x28) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar15 = plVar17[3];
            }
            if (uVar15 == 0) goto LAB_020791c4;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar11) {
              if (uVar22 <= uVar15) {
                uVar4 = 0;
                if (uVar22 != 0) {
                  uVar4 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar4 * uVar22;
              }
              if (uVar15 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar17 + 2);
            uVar15 = (ulong)(bVar3 >> 1);
            sVar1 = uVar15;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar17[3];
            }
            if (sVar1 == sVar13) {
              if ((bVar3 & 1) == 0) {
                psVar19 = (string *)((long)plVar17 + 0x11);
                psVar21 = psVar2;
                while (*psVar19 == *psVar21) {
                  uVar15 = uVar15 - 1;
                  psVar19 = psVar19 + 1;
                  psVar21 = psVar21 + 1;
                  if (uVar15 == 0) goto LAB_020791c4;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar17[4],psVar2,sVar13);
                if (iVar6 == 0) goto LAB_020791c4;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar25);
    lVar18 = *(long *)(psVar25 + 0x18);
    lVar20 = *(long *)(psVar25 + 0x28);
    plVar17[6] = *(long *)(psVar25 + 0x20);
    plVar17[7] = lVar20;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = uVar11;
    if ((uVar22 == 0) || (*(float *)(plVar10 + 5) * (float)uVar22 < (float)(plVar10[4] + 1))) {
      uVar22 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
      uVar15 = (ulong)((float)(plVar10[4] + 1) / *(float *)(plVar10 + 5));
      if (uVar15 <= uVar22) {
        uVar15 = uVar22;
      }
      FUN_008e9ae4(plVar14,uVar15);
      uVar22 = plVar10[2];
      if ((uVar22 & uVar22 - 1) == 0) {
        unaff_x28 = uVar22 - 1 & uVar11;
      }
      else if (uVar11 < uVar22) {
        unaff_x28 = uVar11;
      }
      else {
        uVar15 = 0;
        if (uVar22 != 0) {
          uVar15 = uVar11 / uVar22;
        }
        unaff_x28 = uVar11 - uVar15 * uVar22;
      }
    }
    lVar18 = *plVar14;
    plVar16 = *(long **)(lVar18 + unaff_x28 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar17 = *plVar26;
      *plVar26 = (long)plVar17;
      *(long **)(lVar18 + unaff_x28 * 8) = plVar26;
      if (*plVar17 != 0) {
        uVar11 = *(ulong *)(*plVar17 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar11 = uVar11 & uVar22 - 1;
        }
        else if (uVar22 <= uVar11) {
          uVar15 = 0;
          if (uVar22 != 0) {
            uVar15 = uVar11 / uVar22;
          }
          uVar11 = uVar11 - uVar15 * uVar22;
        }
        plVar16 = (long *)(*plVar14 + uVar11 * 8);
        goto LAB_020791b4;
      }
    }
    else {
      *plVar17 = *plVar16;
LAB_020791b4:
      *plVar16 = (long)plVar17;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_020791c4:
    psVar25 = psVar25 + 0x30;
  } while (psVar25 != (string *)local_80);
  lVar20 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar14,lVar20 + lVar18);
    if (lVar12 != 0) {
      FUN_008f2aec(local_80,plVar14,lVar12);
      lVar12 = local_80[0];
      plVar26 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar12 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar27 = *(long *)(lVar12 + 0x20), lVar27 != 0)) {
          plVar17 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar17 = plVar26;
          }
          uVar11 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar27,0,8);
              goto LAB_02079398;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar27,0,8);
        }
LAB_02079398:
        plVar26 = DAT_043f1798;
        plVar17 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar17 = plVar26;
        }
        uVar11 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar12,0,8);
            goto LAB_02079350;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
      }
    }
LAB_02079350:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar24 = (char *)plVar10[0xc];
  sVar13 = strlen(pcVar24);
  iVar6 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0xe];
  sVar13 = strlen(pcVar24);
  iVar7 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0x11];
  sVar13 = strlen(pcVar24);
  iVar8 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0x14];
  sVar13 = strlen(pcVar24);
  iVar9 = FUN_008f2c60(sVar13,pcVar24);
  lVar20 = local_a0;
  *(bool *)(plVar10 + 0xb) = ((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0;
  plVar14 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar20,0,8);
        plVar14 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x02079540;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
    plVar14 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x02079540:
  lVar20 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar18,0,8);
        plVar14 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x02079a4c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
    plVar14 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x02079a4c:
  lVar18 = local_130;
  local_100 = lVar20;
  if (((local_110 & 1) != 0) && (lVar20 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar20,0,8);
        plVar14 = DAT_043f1798;
        lVar18 = local_130;
        goto joined_r0x020796a8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
    plVar14 = DAT_043f1798;
    lVar18 = local_130;
  }
joined_r0x020796a8:
  lVar20 = local_160;
  local_130 = lVar18;
  if (((local_140 & 1) != 0) && (lVar18 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar18,0,8);
        plVar14 = DAT_043f1798;
        lVar20 = local_160;
        goto joined_r0x02079a8c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
    plVar14 = DAT_043f1798;
    lVar20 = local_160;
  }
joined_r0x02079a8c:
  DAT_043f1798 = plVar14;
  local_160 = lVar20;
  if ((((byte)local_170 & 1) != 0) && (lVar20 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar20,0,8);
        goto LAB_0207980c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
  }
LAB_0207980c:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar10)(plVar10,uVar23);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar11 = (ulong)&local_188 | 1;
  if ((local_188 & 1) != 0) {
    uVar11 = CONCAT17(uStack_171,CONCAT16(uStack_172,CONCAT51(acStack_177,local_178)));
  }
  FUN_001522a0(uVar23,uVar11);
  plVar10 = DAT_043f1798;
  if (((local_188 & 1) != 0) &&
     (lVar18 = CONCAT17(uStack_171,CONCAT16(uStack_172,CONCAT51(acStack_177,local_178))),
     lVar18 != 0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar10;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,0,8);
  }
  return;
}


