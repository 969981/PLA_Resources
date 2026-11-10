/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02158e70; name: FUN_02158e70
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02158e70(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  ulong uVar24;
  undefined8 uVar25;
  char *pcVar26;
  string *psVar27;
  long *plVar28;
  long lVar29;
  ulong unaff_x28;
  byte local_1b8;
  undefined7 uStack_1b7;
  char cStack_1b0;
  undefined7 uStack_1af;
  char local_1a8;
  undefined2 uStack_1a7;
  undefined1 uStack_1a5;
  undefined4 uStack_1a4;
  string local_1a0;
  undefined2 local_19f;
  undefined1 local_19d;
  undefined8 local_19c;
  undefined4 local_194;
  long local_190;
  undefined1 *local_188;
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
  char local_13f [8];
  undefined2 local_137;
  undefined1 local_135;
  undefined4 local_134;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined8 local_10f;
  undefined4 local_107;
  undefined3 uStack_103;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char acStack_df [7];
  char local_d8;
  char acStack_d7 [7];
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  
  plVar12 = DAT_043f1798;
  uStack_1a4 = 0;
  uStack_1a7 = 0x746e;
  psVar27 = &local_1a0;
  local_1b8 = 0x24;
  uStack_1b7 = s_FieldItemComponent_03914cee._0_7_;
  cStack_1b0 = s_FieldItemComponent_03914cee[7];
  uStack_1af = s_FieldItemComponent_03914cee._8_7_;
  local_1a8 = s_FieldItemComponent_03914cee[0xf];
  uStack_1a5 = 0;
  lVar5 = tpidr_el0;
  plVar16 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar16 = plVar12;
  }
  plVar12 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x110,8);
  plVar12[2] = 0;
  plVar16 = plVar12 + 1;
  *plVar16 = 0;
  plVar28 = plVar12 + 3;
  *plVar28 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[6] = (long)FUN_0215a120;
  plVar12[7] = (long)FUN_0215a1d0;
  *plVar12 = (long)&PTR_FUN_0425b5b0;
  plVar12[4] = 0;
  plVar12[0xc] = (long)&DAT_038ca815;
  plVar12[0xd] = (long)&DAT_0392da3c;
  plVar12[0xf] = (long)"OnPicked";
  plVar12[0x10] = (long)FUN_01abe3d0;
  plVar12[0x13] = (long)FUN_01abefac;
  plVar12[0x14] = 0;
  plVar12[0x15] = (long)"ClearPickReservation";
  plVar12[0x16] = (long)FUN_01abf1d4;
  plVar12[0x19] = 0;
  plVar12[0x1a] = (long)FUN_0215a360;
  plVar12[0x1b] = (long)&LAB_0215a640;
  plVar12[0x1c] = (long)&LAB_0215a920;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  *(undefined1 *)(plVar12 + 0xe) = 0;
  plVar12[0x21] = 0;
  plVar12[0x1f] = 0;
  *(undefined1 *)(plVar12 + 0x20) = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = (long)"TryPickReservation";
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  plVar12[0x1d] = (long)&LAB_0215a930;
  plVar12[0x1e] = 0;
  local_1a0 = (string)0x6;
  local_180 = &LAB_0215a97c;
  local_19f = 0x656e;
  local_16f = 0x63675f5f;
  local_19d = 0x77;
  local_19c = 0;
  local_194 = 0;
  local_170 = 8;
  local_16b = 0;
  uStack_164 = 0;
  local_150 = &LAB_0215aa0c;
  local_160 = 0;
  puStack_158 = &LAB_0215a9c4;
  local_140 = 0x14;
  local_190 = 0;
  local_188 = &LAB_0215a934;
  local_178 = 0xffffffff;
  local_148 = 0xffffffff;
  local_137 = 0x7473;
  local_13f[0] = s_class_cast_038dd4e7[0];
  local_13f[1] = s_class_cast_038dd4e7[1];
  local_13f[2] = s_class_cast_038dd4e7[2];
  local_13f[3] = s_class_cast_038dd4e7[3];
  local_13f[4] = s_class_cast_038dd4e7[4];
  local_13f[5] = s_class_cast_038dd4e7[5];
  local_13f[6] = s_class_cast_038dd4e7[6];
  local_13f[7] = s_class_cast_038dd4e7[7];
  local_135 = 0;
  local_134 = 0;
  local_120 = &LAB_0215aa9c;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_0215aa54;
  local_110 = 0x10;
  local_10f = 0x64656b6369506e4f;
  local_107 = 0;
  uStack_103 = 0;
  local_f0 = &LAB_0215ab2c;
  local_e8 = 0xffffffff;
  local_e0 = 0x24;
  local_100 = 0;
  puStack_f8 = &LAB_0215aae4;
  acStack_d7[0] = s_TryPickReservation_03a73744[8];
  acStack_d7[1] = s_TryPickReservation_03a73744[9];
  acStack_d7[2] = s_TryPickReservation_03a73744[10];
  acStack_d7[3] = s_TryPickReservation_03a73744[0xb];
  acStack_d7[4] = s_TryPickReservation_03a73744[0xc];
  acStack_d7[5] = s_TryPickReservation_03a73744[0xd];
  acStack_d7[6] = s_TryPickReservation_03a73744[0xe];
  acStack_df[0] = s_TryPickReservation_03a73744[0];
  acStack_df[1] = s_TryPickReservation_03a73744[1];
  acStack_df[2] = s_TryPickReservation_03a73744[2];
  acStack_df[3] = s_TryPickReservation_03a73744[3];
  acStack_df[4] = s_TryPickReservation_03a73744[4];
  acStack_df[5] = s_TryPickReservation_03a73744[5];
  acStack_df[6] = s_TryPickReservation_03a73744[6];
  local_d8 = s_TryPickReservation_03a73744[7];
  local_c0 = &LAB_0215abbc;
  local_b8 = 0xffffffff;
  local_d0 = &DAT_006e6f69;
  puStack_c8 = &LAB_0215ab74;
  local_b0 = 0x28;
  acStack_a7[0] = s_ClearPickReservation_03980484[8];
  acStack_a7[1] = s_ClearPickReservation_03980484[9];
  acStack_a7[2] = s_ClearPickReservation_03980484[10];
  acStack_a7[3] = s_ClearPickReservation_03980484[0xb];
  acStack_a7[4] = s_ClearPickReservation_03980484[0xc];
  acStack_a7[5] = s_ClearPickReservation_03980484[0xd];
  acStack_a7[6] = s_ClearPickReservation_03980484[0xe];
  acStack_af[0] = s_ClearPickReservation_03980484[0];
  acStack_af[1] = s_ClearPickReservation_03980484[1];
  acStack_af[2] = s_ClearPickReservation_03980484[2];
  acStack_af[3] = s_ClearPickReservation_03980484[3];
  acStack_af[4] = s_ClearPickReservation_03980484[4];
  acStack_af[5] = s_ClearPickReservation_03980484[5];
  acStack_af[6] = s_ClearPickReservation_03980484[6];
  local_a8 = s_ClearPickReservation_03980484[7];
  local_90 = &LAB_0215ac4c;
  local_88 = 0xffffffff;
  local_a0 = 0x6e6f697461;
  puStack_98 = &LAB_0215ac04;
  do {
    uVar13 = *(ulong *)(psVar27 + 8);
    psVar2 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar2 = psVar27 + 1;
      uVar13 = (ulong)((byte)*psVar27 >> 1);
    }
    uVar13 = FUN_008e8ed4(local_80,psVar2,uVar13);
    uVar24 = plVar12[2];
    if (uVar24 != 0) {
      uVar17 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        unaff_x28 = uVar24 - 1 & uVar13;
      }
      else {
        unaff_x28 = uVar13;
        if (uVar24 <= uVar13) {
          uVar4 = 0;
          if (uVar24 != 0) {
            uVar4 = uVar13 / uVar24;
          }
          unaff_x28 = uVar13 - uVar4 * uVar24;
        }
      }
      plVar19 = *(long **)(*plVar16 + unaff_x28 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar2 = psVar27 + 1;
        sVar15 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar2 = *(string **)(psVar27 + 0x10);
          sVar15 = *(size_t *)(psVar27 + 8);
        }
        if (uVar17 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != unaff_x28) break;
              uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar17 = plVar19[3];
              }
              if (uVar17 == 0) goto LAB_021593cc;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar19 + 2);
              uVar17 = (ulong)(bVar3 >> 1);
              sVar1 = uVar17;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar19[3];
              }
              if (sVar1 == sVar15) {
                if ((bVar3 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar2;
                  while (*psVar21 == *psVar23) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar17 == 0) goto LAB_021593cc;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar19[4],psVar2,sVar15);
                  if (iVar7 == 0) goto LAB_021593cc;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar15 == 0) {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar4 = 0;
                if (uVar24 != 0) {
                  uVar4 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar4 * uVar24;
              }
              if (uVar17 != unaff_x28) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar17 = plVar19[3];
            }
            if (uVar17 == 0) goto LAB_021593cc;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar4 = 0;
                if (uVar24 != 0) {
                  uVar4 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar4 * uVar24;
              }
              if (uVar17 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar19 + 2);
            uVar17 = (ulong)(bVar3 >> 1);
            sVar1 = uVar17;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar19[3];
            }
            if (sVar1 == sVar15) {
              if ((bVar3 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar2;
                while (*psVar21 == *psVar23) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar17 == 0) goto LAB_021593cc;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar19[4],psVar2,sVar15);
                if (iVar7 == 0) goto LAB_021593cc;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar27);
    lVar20 = *(long *)(psVar27 + 0x18);
    lVar22 = *(long *)(psVar27 + 0x28);
    plVar19[6] = *(long *)(psVar27 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar24 == 0) || (*(float *)(plVar12 + 5) * (float)uVar24 < (float)(plVar12[4] + 1))) {
      uVar24 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar17 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar17 <= uVar24) {
        uVar17 = uVar24;
      }
      FUN_008e9ae4(plVar16,uVar17);
      uVar24 = plVar12[2];
      if ((uVar24 & uVar24 - 1) == 0) {
        unaff_x28 = uVar24 - 1 & uVar13;
      }
      else if (uVar13 < uVar24) {
        unaff_x28 = uVar13;
      }
      else {
        uVar17 = 0;
        if (uVar24 != 0) {
          uVar17 = uVar13 / uVar24;
        }
        unaff_x28 = uVar13 - uVar17 * uVar24;
      }
    }
    lVar20 = *plVar16;
    plVar18 = *(long **)(lVar20 + unaff_x28 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar28;
      *plVar28 = (long)plVar19;
      *(long **)(lVar20 + unaff_x28 * 8) = plVar28;
      if (*plVar19 != 0) {
        uVar13 = *(ulong *)(*plVar19 + 8);
        if ((uVar24 & uVar24 - 1) == 0) {
          uVar13 = uVar13 & uVar24 - 1;
        }
        else if (uVar24 <= uVar13) {
          uVar17 = 0;
          if (uVar24 != 0) {
            uVar17 = uVar13 / uVar24;
          }
          uVar13 = uVar13 - uVar17 * uVar24;
        }
        plVar18 = (long *)(*plVar16 + uVar13 * 8);
        goto LAB_021593bc;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_021593bc:
      *plVar18 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_021593cc:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != (string *)local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar16,lVar22 + lVar20);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar16,lVar14);
      lVar14 = local_80[0];
      plVar28 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar28;
          }
          uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar29,0,8);
              goto LAB_02159604;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_02159604:
        plVar28 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar28;
        }
        uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar14,0,8);
            goto LAB_021595bc;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_021595bc:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar26 = (char *)plVar12[0xc];
  sVar15 = strlen(pcVar26);
  iVar7 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xd];
  sVar15 = strlen(pcVar26);
  iVar8 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xf];
  sVar15 = strlen(pcVar26);
  iVar9 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x12];
  sVar15 = strlen(pcVar26);
  iVar10 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x15];
  sVar15 = strlen(pcVar26);
  iVar11 = FUN_008f2c60(sVar15,pcVar26);
  lVar20 = local_a0;
  *(bool *)(plVar12 + 0xb) =
       (((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0;
  plVar16 = DAT_043f1798;
  puVar6 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        plVar16 = DAT_043f1798;
        puVar6 = local_d0;
        goto joined_r0x021597c4;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
    plVar16 = DAT_043f1798;
    puVar6 = local_d0;
  }
joined_r0x021597c4:
  lVar20 = local_100;
  local_d0 = puVar6;
  if (((local_e0 & 1) != 0) && (puVar6 != (undefined *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar16;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,puVar6,0,8);
        plVar16 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x02159d84;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,puVar6,0,8);
    plVar16 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x02159d84:
  lVar22 = local_130;
  local_100 = lVar20;
  if (((local_110 & 1) != 0) && (lVar20 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar16;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        plVar16 = DAT_043f1798;
        lVar22 = local_130;
        goto joined_r0x0215992c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
    plVar16 = DAT_043f1798;
    lVar22 = local_130;
  }
joined_r0x0215992c:
  lVar20 = local_160;
  local_130 = lVar22;
  if (((local_140 & 1) != 0) && (lVar22 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar16;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar22,0,8);
        plVar16 = DAT_043f1798;
        lVar20 = local_160;
        goto joined_r0x02159dc4;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar22,0,8);
    plVar16 = DAT_043f1798;
    lVar20 = local_160;
  }
joined_r0x02159dc4:
  lVar22 = local_190;
  local_160 = lVar20;
  if (((local_170 & 1) != 0) && (lVar20 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar16;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        plVar16 = DAT_043f1798;
        lVar22 = local_190;
        goto joined_r0x02159a94;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
    plVar16 = DAT_043f1798;
    lVar22 = local_190;
  }
joined_r0x02159a94:
  DAT_043f1798 = plVar16;
  local_190 = lVar22;
  if ((((byte)local_1a0 & 1) != 0) && (lVar22 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar22,0,8);
        goto LAB_02159b44;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar22,0,8);
  }
LAB_02159b44:
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  uVar13 = (ulong)&local_1b8 | 1;
  if ((local_1b8 & 1) != 0) {
    uVar13 = CONCAT44(uStack_1a4,CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8)));
  }
  FUN_001522a0(uVar25,uVar13);
  plVar12 = DAT_043f1798;
  if (((local_1b8 & 1) != 0) &&
     (lVar20 = CONCAT44(uStack_1a4,CONCAT13(uStack_1a5,CONCAT21(uStack_1a7,local_1a8))), lVar20 != 0
     )) {
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar12;
    }
    uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar20,0,8);
        return;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar20,0,8);
  }
  return;
}


