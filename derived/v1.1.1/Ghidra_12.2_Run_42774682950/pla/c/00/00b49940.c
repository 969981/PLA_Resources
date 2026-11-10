/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b49940; name: FUN_00b49940
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00b49940(long param_1)

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
  ulong unaff_x25;
  long lVar27;
  byte local_158;
  undefined7 uStack_157;
  undefined4 local_150;
  undefined4 local_14c;
  ulong local_148;
  string local_140;
  undefined2 local_13f;
  undefined1 local_13d;
  undefined8 local_13c;
  undefined4 local_134;
  long local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined7 local_10b;
  undefined4 uStack_104;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [5];
  char acStack_da [3];
  char acStack_d7 [5];
  undefined2 local_d2;
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
  
  plVar10 = DAT_043f1798;
  psVar25 = &local_140;
  local_158 = 0x16;
  local_148 = 0;
  local_14c = 0;
  uStack_157 = s_DressUpUtil_038a35e4._0_7_;
  local_150 = CONCAT31(0x6c6974,s_DressUpUtil_038a35e4[7]);
  lVar5 = tpidr_el0;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar10;
  }
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xe8,8);
  plVar10[2] = 0;
  plVar14 = plVar10 + 1;
  *plVar14 = 0;
  plVar26 = plVar10 + 3;
  *plVar26 = 0;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[6] = (long)FUN_00b4a8d0;
  plVar10[7] = (long)FUN_00b4a980;
  *plVar10 = (long)&PTR_FUN_041d5350;
  plVar10[4] = 0;
  plVar10[0xc] = (long)&DAT_03a735a0;
  plVar10[0xd] = (long)&DAT_0392da3c;
  plVar10[10] = 0;
  plVar10[0xf] = (long)"GetApeendName";
  plVar10[0x10] = (long)&LAB_00b1e660;
  plVar10[0x11] = (long)"IsWearHat";
  plVar10[0x12] = (long)FUN_00b1e670;
  plVar10[0x15] = (long)FUN_00b4ab54;
  plVar10[0x16] = (long)&LAB_00b4ae34;
  plVar10[8] = 0;
  plVar10[9] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  *(undefined1 *)(plVar10 + 0xe) = 0;
  plVar10[0x1c] = 0;
  *(undefined1 *)(plVar10 + 0x1b) = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x17] = (long)&LAB_00b4b110;
  plVar10[0x18] = (long)&LAB_00b4b120;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  local_120 = &LAB_00b4b16c;
  local_10f = 0x63675f5f;
  local_140 = (string)0x6;
  local_13f = 0x656e;
  local_13d = 0x77;
  local_13c = 0;
  local_134 = 0;
  local_110 = 8;
  local_10b = 0;
  uStack_104 = 0;
  local_f0 = &LAB_00b4b1fc;
  local_d2 = 0;
  local_100 = 0;
  puStack_f8 = &LAB_00b4b1b4;
  local_e0 = 0x1a;
  local_df[0] = s_GetApeendName_03a73a34[0];
  local_df[1] = s_GetApeendName_03a73a34[1];
  local_df[2] = s_GetApeendName_03a73a34[2];
  local_df[3] = s_GetApeendName_03a73a34[3];
  local_df[4] = s_GetApeendName_03a73a34[4];
  acStack_da[0] = s_GetApeendName_03a73a34[5];
  acStack_da[1] = s_GetApeendName_03a73a34[6];
  acStack_da[2] = s_GetApeendName_03a73a34[7];
  acStack_d7[0] = s_GetApeendName_03a73a34[8];
  acStack_d7[1] = s_GetApeendName_03a73a34[9];
  acStack_d7[2] = s_GetApeendName_03a73a34[10];
  acStack_d7[3] = s_GetApeendName_03a73a34[0xb];
  acStack_d7[4] = s_GetApeendName_03a73a34[0xc];
  local_c0 = &LAB_00b4b28c;
  local_130 = 0;
  local_128 = &LAB_00b4b124;
  local_118 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_00b4b244;
  local_b0 = 0x12;
  local_af[0] = s_IsWearHat_03955e77[0];
  local_af[1] = s_IsWearHat_03955e77[1];
  local_af[2] = s_IsWearHat_03955e77[2];
  local_af[3] = s_IsWearHat_03955e77[3];
  local_af[4] = s_IsWearHat_03955e77[4];
  local_af[5] = s_IsWearHat_03955e77[5];
  local_af[6] = s_IsWearHat_03955e77[6];
  local_af[7] = s_IsWearHat_03955e77[7];
  local_a7 = 0x74;
  local_a6 = 0;
  local_a2 = 0;
  local_90 = &LAB_00b4b31c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00b4b2d4;
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
        unaff_x25 = uVar22 - 1 & uVar11;
      }
      else {
        unaff_x25 = uVar11;
        if (uVar22 <= uVar11) {
          uVar4 = 0;
          if (uVar22 != 0) {
            uVar4 = uVar11 / uVar22;
          }
          unaff_x25 = uVar11 - uVar4 * uVar22;
        }
      }
      plVar17 = *(long **)(*plVar14 + unaff_x25 * 8);
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
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar22 - 1) != unaff_x25) break;
              uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar15 = plVar17[3];
              }
              if (uVar15 == 0) goto LAB_00b49e70;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar22 - 1) != unaff_x25) break;
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
                    if (uVar15 == 0) goto LAB_00b49e70;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar17[4],psVar2,sVar13);
                  if (iVar6 == 0) goto LAB_00b49e70;
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
              if (uVar15 != unaff_x25) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar15 = plVar17[3];
            }
            if (uVar15 == 0) goto LAB_00b49e70;
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
              if (uVar15 != unaff_x25) break;
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
                  if (uVar15 == 0) goto LAB_00b49e70;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar17[4],psVar2,sVar13);
                if (iVar6 == 0) goto LAB_00b49e70;
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
        unaff_x25 = uVar22 - 1 & uVar11;
      }
      else if (uVar11 < uVar22) {
        unaff_x25 = uVar11;
      }
      else {
        uVar15 = 0;
        if (uVar22 != 0) {
          uVar15 = uVar11 / uVar22;
        }
        unaff_x25 = uVar11 - uVar15 * uVar22;
      }
    }
    lVar18 = *plVar14;
    plVar16 = *(long **)(lVar18 + unaff_x25 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar17 = *plVar26;
      *plVar26 = (long)plVar17;
      *(long **)(lVar18 + unaff_x25 * 8) = plVar26;
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
        goto LAB_00b49e60;
      }
    }
    else {
      *plVar17 = *plVar16;
LAB_00b49e60:
      *plVar16 = (long)plVar17;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_00b49e70:
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
              goto LAB_00b4a084;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar27,0,8);
        }
LAB_00b4a084:
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
            goto LAB_00b49fe8;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
      }
    }
LAB_00b49fe8:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar24 = (char *)plVar10[0xc];
  sVar13 = strlen(pcVar24);
  iVar6 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0xd];
  sVar13 = strlen(pcVar24);
  iVar7 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0xf];
  sVar13 = strlen(pcVar24);
  iVar8 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0x11];
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
        goto joined_r0x00b4a240;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
    plVar14 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x00b4a240:
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
        goto joined_r0x00b4a634;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
    plVar14 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x00b4a634:
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
        goto joined_r0x00b4a3a8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
    plVar14 = DAT_043f1798;
    lVar18 = local_130;
  }
joined_r0x00b4a3a8:
  DAT_043f1798 = plVar14;
  local_130 = lVar18;
  if ((((byte)local_140 & 1) != 0) && (lVar18 != 0)) {
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
        FUN_02bcc824(plVar26,lVar18,0,8);
        goto LAB_00b4a458;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
  }
LAB_00b4a458:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar10)(plVar10,uVar23);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar11 = (ulong)&local_158 | 1;
  if ((local_158 & 1) != 0) {
    uVar11 = local_148;
  }
  FUN_001522a0(uVar23,uVar11);
  uVar11 = local_148;
  plVar10 = DAT_043f1798;
  if (((local_158 & 1) != 0) && (local_148 != 0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar10;
    }
    uVar22 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,uVar11,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,uVar11,0,8);
  }
  return;
}


