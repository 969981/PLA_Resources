/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e3ee30; name: FUN_00e3ee30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e3ee30(long param_1)

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
  long *plVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  char *pcVar26;
  string *psVar27;
  long *plVar28;
  long lVar29;
  ulong unaff_x28;
  byte local_1b8;
  undefined4 local_1b7;
  undefined2 local_1b3;
  undefined1 local_1b1;
  undefined8 local_1b0;
  ulong local_1a8;
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
  undefined8 local_13f;
  undefined4 uStack_137;
  undefined3 uStack_133;
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
  char acStack_df [6];
  char local_d9 [2];
  char acStack_d7 [6];
  undefined1 local_d1;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char acStack_af [6];
  char local_a9 [2];
  char acStack_a7 [6];
  undefined1 local_a1;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar12 = DAT_043f1798;
  local_1b8 = 0xc;
  local_1b7 = 0x65696c43;
  psVar27 = &local_1a0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b3 = 0x746e;
  local_1b1 = 0;
  lVar5 = tpidr_el0;
  plVar16 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar16 = plVar12;
  }
  plVar12 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x108,8);
  plVar12[2] = 0;
  plVar16 = plVar12 + 3;
  *plVar16 = 0;
  plVar12[4] = 0;
  plVar28 = plVar12 + 1;
  *plVar28 = 0;
  plVar12[6] = (long)FUN_00e400e0;
  plVar12[7] = (long)FUN_00e40190;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  *plVar12 = (long)&PTR_FUN_041ee850;
  plVar12[0xc] = (long)&DAT_038ca815;
  plVar12[0xd] = (long)&DAT_0392da3c;
  plVar12[0xf] = (long)"SetValue";
  plVar12[0x10] = (long)FUN_00db0abc;
  plVar12[0x11] = (long)"AddValue";
  plVar12[0x12] = (long)FUN_00db0d34;
  plVar12[0x13] = (long)"SetDoubleValue";
  plVar12[0x14] = (long)FUN_00db1124;
  plVar12[0x15] = (long)"SetStringValue";
  plVar12[0x16] = (long)FUN_00db14d4;
  plVar12[0x19] = (long)FUN_00e40364;
  plVar12[0x1a] = (long)&LAB_00e40644;
  plVar12[0x1b] = (long)&LAB_00e40920;
  plVar12[0x1c] = (long)&LAB_00e40930;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  *(undefined1 *)(plVar12 + 0xe) = 0;
  plVar12[0x20] = 0;
  *(undefined1 *)(plVar12 + 0x1f) = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  local_1a0 = (string)0x6;
  local_19f = 0x656e;
  local_180 = &LAB_00e4097c;
  local_19d = 0x77;
  local_16f = 0x63675f5f;
  local_150 = &LAB_00e40a0c;
  local_19c = 0;
  local_194 = 0;
  local_170 = 8;
  local_16b = 0;
  uStack_164 = 0;
  local_13f = 0x65756c6156746553;
  uStack_133 = 0;
  local_190 = 0;
  local_188 = &LAB_00e40934;
  local_178 = 0xffffffff;
  local_148 = 0xffffffff;
  local_160 = 0;
  puStack_158 = &LAB_00e409c4;
  local_140 = 0x10;
  uStack_137 = 0;
  local_110 = 0x10;
  local_120 = &LAB_00e40a9c;
  local_118 = 0xffffffff;
  local_130 = 0;
  puStack_128 = &LAB_00e40a54;
  local_10f = 0x65756c6156646441;
  local_f0 = &LAB_00e40b2c;
  local_107 = 0;
  uStack_103 = 0;
  local_e8 = 0xffffffff;
  local_100 = 0;
  puStack_f8 = &LAB_00e40ae4;
  local_e0 = 0x1c;
  acStack_d7[0] = s_SetDoubleValue_03a738e8[8];
  acStack_d7[1] = s_SetDoubleValue_03a738e8[9];
  acStack_d7[2] = s_SetDoubleValue_03a738e8[10];
  acStack_d7[3] = s_SetDoubleValue_03a738e8[0xb];
  acStack_d7[4] = s_SetDoubleValue_03a738e8[0xc];
  acStack_d7[5] = s_SetDoubleValue_03a738e8[0xd];
  acStack_df[0] = s_SetDoubleValue_03a738e8[0];
  acStack_df[1] = s_SetDoubleValue_03a738e8[1];
  acStack_df[2] = s_SetDoubleValue_03a738e8[2];
  acStack_df[3] = s_SetDoubleValue_03a738e8[3];
  acStack_df[4] = s_SetDoubleValue_03a738e8[4];
  acStack_df[5] = s_SetDoubleValue_03a738e8[5];
  local_d9[0] = s_SetDoubleValue_03a738e8[6];
  local_d9[1] = s_SetDoubleValue_03a738e8[7];
  local_d1 = 0;
  local_c0 = &LAB_00e40bbc;
  local_b8 = 0xffffffff;
  local_b0 = 0x1c;
  local_d0 = 0;
  puStack_c8 = &LAB_00e40b74;
  acStack_a7[0] = s_SetStringValue_03a735e4[8];
  acStack_a7[1] = s_SetStringValue_03a735e4[9];
  acStack_a7[2] = s_SetStringValue_03a735e4[10];
  acStack_a7[3] = s_SetStringValue_03a735e4[0xb];
  acStack_a7[4] = s_SetStringValue_03a735e4[0xc];
  acStack_a7[5] = s_SetStringValue_03a735e4[0xd];
  acStack_af[0] = s_SetStringValue_03a735e4[0];
  acStack_af[1] = s_SetStringValue_03a735e4[1];
  acStack_af[2] = s_SetStringValue_03a735e4[2];
  acStack_af[3] = s_SetStringValue_03a735e4[3];
  acStack_af[4] = s_SetStringValue_03a735e4[4];
  acStack_af[5] = s_SetStringValue_03a735e4[5];
  local_a9[0] = s_SetStringValue_03a735e4[6];
  local_a9[1] = s_SetStringValue_03a735e4[7];
  local_a1 = 0;
  local_90 = &LAB_00e40c4c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00e40c04;
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
      plVar19 = *(long **)(*plVar28 + unaff_x28 * 8);
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
              if (uVar17 == 0) goto LAB_00e3f428;
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
                  psVar20 = (string *)((long)plVar19 + 0x11);
                  psVar22 = psVar2;
                  while (*psVar20 == *psVar22) {
                    uVar17 = uVar17 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar17 == 0) goto LAB_00e3f428;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar19[4],psVar2,sVar15);
                  if (iVar6 == 0) goto LAB_00e3f428;
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
            if (uVar17 == 0) goto LAB_00e3f428;
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
                psVar20 = (string *)((long)plVar19 + 0x11);
                psVar22 = psVar2;
                while (*psVar20 == *psVar22) {
                  uVar17 = uVar17 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar17 == 0) goto LAB_00e3f428;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar19[4],psVar2,sVar15);
                if (iVar6 == 0) goto LAB_00e3f428;
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
    lVar21 = *(long *)(psVar27 + 0x18);
    lVar23 = *(long *)(psVar27 + 0x28);
    plVar19[6] = *(long *)(psVar27 + 0x20);
    plVar19[7] = lVar23;
    plVar19[5] = lVar21;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar24 == 0) || (*(float *)(plVar12 + 5) * (float)uVar24 < (float)(plVar12[4] + 1))) {
      uVar24 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar17 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar17 <= uVar24) {
        uVar17 = uVar24;
      }
      FUN_008e9ae4(plVar28,uVar17);
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
    lVar21 = *plVar28;
    plVar18 = *(long **)(lVar21 + unaff_x28 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar16;
      *plVar16 = (long)plVar19;
      *(long **)(lVar21 + unaff_x28 * 8) = plVar16;
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
        plVar18 = (long *)(*plVar28 + uVar13 * 8);
        goto LAB_00e3f418;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_00e3f418:
      *plVar18 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_00e3f428:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != (string *)local_80);
  lVar23 = FUN_008cca50();
  lVar21 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar28,lVar23 + lVar21);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar28,lVar14);
      lVar14 = local_80[0];
      plVar16 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar16;
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
              goto LAB_00e3f5b4;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_00e3f5b4:
        plVar16 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar16;
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
            goto LAB_00e3f56c;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_00e3f56c:
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x300);
  pcVar26 = (char *)plVar12[0xc];
  sVar15 = strlen(pcVar26);
  iVar6 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xd];
  sVar15 = strlen(pcVar26);
  iVar7 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xf];
  sVar15 = strlen(pcVar26);
  iVar8 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x11];
  sVar15 = strlen(pcVar26);
  iVar9 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x13];
  sVar15 = strlen(pcVar26);
  iVar10 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x15];
  sVar15 = strlen(pcVar26);
  iVar11 = FUN_008f2c60(sVar15,pcVar26);
  lVar23 = local_a0;
  *(bool *)(plVar12 + 0xb) =
       ((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0;
  plVar16 = DAT_043f1798;
  lVar21 = local_d0;
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
        FUN_02bcc824(plVar28,lVar23,0,8);
        plVar16 = DAT_043f1798;
        lVar21 = local_d0;
        goto joined_r0x00e3f78c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar23,0,8);
    plVar16 = DAT_043f1798;
    lVar21 = local_d0;
  }
joined_r0x00e3f78c:
  lVar23 = local_100;
  local_d0 = lVar21;
  if (((local_e0 & 1) != 0) && (lVar21 != 0)) {
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
        FUN_02bcc824(plVar28,lVar21,0,8);
        plVar16 = DAT_043f1798;
        lVar23 = local_100;
        goto joined_r0x00e3fd4c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar21,0,8);
    plVar16 = DAT_043f1798;
    lVar23 = local_100;
  }
joined_r0x00e3fd4c:
  lVar21 = local_130;
  local_100 = lVar23;
  if (((local_110 & 1) != 0) && (lVar23 != 0)) {
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
        FUN_02bcc824(plVar28,lVar23,0,8);
        plVar16 = DAT_043f1798;
        lVar21 = local_130;
        goto joined_r0x00e3f8f4;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar23,0,8);
    plVar16 = DAT_043f1798;
    lVar21 = local_130;
  }
joined_r0x00e3f8f4:
  lVar23 = local_160;
  local_130 = lVar21;
  if (((local_140 & 1) != 0) && (lVar21 != 0)) {
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
        FUN_02bcc824(plVar28,lVar21,0,8);
        plVar16 = DAT_043f1798;
        lVar23 = local_160;
        goto joined_r0x00e3fd8c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar21,0,8);
    plVar16 = DAT_043f1798;
    lVar23 = local_160;
  }
joined_r0x00e3fd8c:
  lVar21 = local_190;
  local_160 = lVar23;
  if (((local_170 & 1) != 0) && (lVar23 != 0)) {
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
        FUN_02bcc824(plVar28,lVar23,0,8);
        plVar16 = DAT_043f1798;
        lVar21 = local_190;
        goto joined_r0x00e3fa5c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar23,0,8);
    plVar16 = DAT_043f1798;
    lVar21 = local_190;
  }
joined_r0x00e3fa5c:
  DAT_043f1798 = plVar16;
  local_190 = lVar21;
  if ((((byte)local_1a0 & 1) != 0) && (lVar21 != 0)) {
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
        FUN_02bcc824(plVar28,lVar21,0,8);
        goto LAB_00e3fb0c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar21,0,8);
  }
LAB_00e3fb0c:
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  uVar13 = (ulong)&local_1b8 | 1;
  if ((local_1b8 & 1) != 0) {
    uVar13 = local_1a8;
  }
  FUN_001522a0(uVar25,uVar13);
  uVar13 = local_1a8;
  plVar12 = DAT_043f1798;
  if (((local_1b8 & 1) != 0) && (local_1a8 != 0)) {
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar12;
    }
    uVar24 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar16,uVar13,0,8);
        return;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,uVar13,0,8);
  }
  return;
}


