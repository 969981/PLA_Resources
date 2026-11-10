/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017260d4; name: FUN_017260d4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017260d4(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  char *pcVar24;
  undefined8 uVar25;
  long lVar26;
  string *psVar27;
  long *plVar28;
  long lVar29;
  void *pvVar30;
  void *pvVar31;
  undefined8 local_1d8;
  size_t local_1d0;
  void *local_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  void *local_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  void *local_198;
  undefined7 local_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined7 local_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  string local_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  void *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  void *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  void *local_100;
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
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar26 = *param_1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  sVar11 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar11 < 0x17) {
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)sVar11 << 1));
    pvVar30 = (void *)((ulong)&local_1d8 | 1);
    if (sVar11 != 0) goto LAB_0172615c;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,8);
    local_1d8 = uVar15 | 1;
    local_1d0 = sVar11;
    local_1c8 = pvVar30;
LAB_0172615c:
    memcpy(pvVar30,param_2,sVar11);
  }
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  plVar1 = DAT_043f1798;
  plVar12 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar12 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x108,8);
  plVar12[4] = 0;
  plVar28 = plVar12 + 1;
  *plVar28 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  plVar12[6] = (long)FUN_01727530;
  plVar12[7] = (long)FUN_017275e0;
  *plVar12 = (long)&PTR_FUN_04224f60;
  plVar12[0xc] = (long)param_3;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  lVar19 = *param_4;
  lVar22 = param_4[1];
  plVar12[0xf] = (long)param_5;
  plVar12[0xd] = lVar19;
  plVar12[0xe] = lVar22;
  lVar19 = *param_6;
  lVar22 = param_6[1];
  plVar12[0x12] = (long)param_7;
  plVar12[0x10] = lVar19;
  plVar12[0x11] = lVar22;
  lVar19 = *param_8;
  lVar22 = param_8[1];
  plVar12[0x20] = 0;
  *(undefined1 *)(plVar12 + 0x1f) = 0;
  plVar12[0x15] = (long)&DAT_038ca815;
  plVar12[0x16] = (long)&DAT_0392da3c;
  plVar12[0x13] = lVar19;
  plVar12[0x14] = lVar22;
  plVar12[0x19] = (long)FUN_01727770;
  plVar12[0x1a] = (long)&LAB_01727a50;
  plVar12[0x17] = 0;
  plVar12[0x18] = 0;
  plVar12[0x1b] = (long)&LAB_01727d30;
  plVar12[0x1c] = (long)&LAB_01727d40;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  sVar11 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_80 = SUB41((int)sVar11 << 1,0);
    pvVar30 = (void *)((ulong)&local_80 | 1);
    if (sVar11 != 0) goto LAB_017262b8;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_80 = (string)((byte)uVar15 | 1);
    uStack_7f = (undefined7)(uVar15 >> 8);
    local_78 = (undefined1)sVar11;
    uStack_77 = (undefined7)(sVar11 >> 8);
    local_70 = pvVar30;
LAB_017262b8:
    memcpy(pvVar30,param_3,sVar11);
  }
  local_160 = local_70;
  uStack_167 = uStack_77;
  uStack_168 = local_78;
  local_16f = uStack_7f;
  local_170 = local_80;
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_01727d44;
  puStack_150 = &LAB_01727d8c;
  sVar11 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_1a8 = (byte)((int)sVar11 << 1);
    pvVar30 = (void *)((ulong)&local_1a8 | 1);
    if (sVar11 != 0) goto LAB_0172635c;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_1a8 = (byte)uVar15 | 1;
    uStack_1a7 = (undefined7)(uVar15 >> 8);
    local_1a0 = (undefined1)sVar11;
    uStack_19f = (undefined7)(sVar11 >> 8);
    local_198 = pvVar30;
LAB_0172635c:
    memcpy(pvVar30,param_5,sVar11);
  }
  local_130 = local_198;
  uStack_137 = uStack_19f;
  uStack_138 = local_1a0;
  local_13f = uStack_1a7;
  local_140 = local_1a8;
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_01727dd4;
  puStack_120 = &LAB_01727e1c;
  sVar11 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_1c0 = 0;
  uStack_1bf = 0;
  local_1b8 = 0;
  uStack_1b7 = 0;
  local_1b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_1c0 = (byte)((int)sVar11 << 1);
    pvVar30 = (void *)((ulong)&local_1c0 | 1);
    if (sVar11 != 0) goto LAB_017263f4;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_1c0 = (byte)uVar15 | 1;
    uStack_1bf = (undefined7)(uVar15 >> 8);
    local_1b8 = (undefined1)sVar11;
    uStack_1b7 = (undefined7)(sVar11 >> 8);
    local_1b0 = pvVar30;
LAB_017263f4:
    memcpy(pvVar30,param_7,sVar11);
  }
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  local_110 = local_1c0;
  local_10f = uStack_1bf;
  uStack_108 = local_1b8;
  uStack_107 = uStack_1b7;
  local_100 = local_1b0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_01727e64;
  puStack_f0 = &LAB_01727eac;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_01727f3c;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_01727ef4;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  psVar27 = &local_170;
  local_88 = 0xffffffff;
  plVar1 = plVar12 + 3;
  local_a0 = 0;
  local_98 = &LAB_01727f84;
  puStack_90 = &LAB_01727fcc;
  do {
    uVar15 = *(ulong *)(psVar27 + 8);
    psVar3 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar3 = psVar27 + 1;
      uVar15 = (ulong)((byte)*psVar27 >> 1);
    }
    pvVar13 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar15);
    pvVar31 = (void *)plVar12[2];
    if (pvVar31 != (void *)0x0) {
      uVar15 = (long)pvVar31 - ((ulong)pvVar31 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        pvVar30 = (void *)((long)pvVar31 - 1U & (ulong)pvVar13);
      }
      else {
        pvVar30 = pvVar13;
        if (pvVar31 <= pvVar13) {
          uVar20 = 0;
          if (pvVar31 != (void *)0x0) {
            uVar20 = (ulong)pvVar13 / (ulong)pvVar31;
          }
          pvVar30 = (void *)((long)pvVar13 - uVar20 * (long)pvVar31);
        }
      }
      plVar18 = *(long **)(*plVar28 + (long)pvVar30 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        psVar3 = psVar27 + 1;
        sVar11 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar3 = *(string **)(psVar27 + 0x10);
          sVar11 = *(size_t *)(psVar27 + 8);
        }
        if (uVar15 < 2) {
          if (sVar11 == 0) {
            do {
              if ((void *)plVar18[1] != pvVar13 &&
                  (void *)((ulong)plVar18[1] & (long)pvVar31 - 1U) != pvVar30) break;
              uVar15 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar15 = plVar18[3];
              }
              if (uVar15 == 0) goto LAB_017266cc;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar18[1] != pvVar13 &&
                  (void *)((ulong)plVar18[1] & (long)pvVar31 - 1U) != pvVar30) break;
              bVar4 = *(byte *)(plVar18 + 2);
              uVar15 = (ulong)(bVar4 >> 1);
              sVar2 = uVar15;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar18[3];
              }
              if (sVar2 == sVar11) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar18 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar21 == *psVar23) {
                    uVar15 = uVar15 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar15 == 0) goto LAB_017266cc;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar18[4],psVar3,sVar11);
                  if (iVar6 == 0) goto LAB_017266cc;
                }
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
        else if (sVar11 == 0) {
          do {
            pvVar16 = (void *)plVar18[1];
            if (pvVar16 != pvVar13) {
              if (pvVar31 <= pvVar16) {
                uVar15 = 0;
                if (pvVar31 != (void *)0x0) {
                  uVar15 = (ulong)pvVar16 / (ulong)pvVar31;
                }
                pvVar16 = (void *)((long)pvVar16 - uVar15 * (long)pvVar31);
              }
              if (pvVar16 != pvVar30) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar15 = plVar18[3];
            }
            if (uVar15 == 0) goto LAB_017266cc;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            pvVar16 = (void *)plVar18[1];
            if (pvVar16 != pvVar13) {
              if (pvVar31 <= pvVar16) {
                uVar15 = 0;
                if (pvVar31 != (void *)0x0) {
                  uVar15 = (ulong)pvVar16 / (ulong)pvVar31;
                }
                pvVar16 = (void *)((long)pvVar16 - uVar15 * (long)pvVar31);
              }
              if (pvVar16 != pvVar30) break;
            }
            bVar4 = *(byte *)(plVar18 + 2);
            uVar15 = (ulong)(bVar4 >> 1);
            sVar2 = uVar15;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar18[3];
            }
            if (sVar2 == sVar11) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar18 + 0x11);
                psVar23 = psVar3;
                while (*psVar21 == *psVar23) {
                  uVar15 = uVar15 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar15 == 0) goto LAB_017266cc;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar18[4],psVar3,sVar11);
                if (iVar6 == 0) goto LAB_017266cc;
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
    std::string::string((string *)(plVar18 + 2),psVar27);
    lVar19 = *(long *)(psVar27 + 0x18);
    lVar22 = *(long *)(psVar27 + 0x28);
    plVar18[6] = *(long *)(psVar27 + 0x20);
    plVar18[7] = lVar22;
    plVar18[5] = lVar19;
    *plVar18 = 0;
    plVar18[1] = (long)pvVar13;
    if ((pvVar31 == (void *)0x0) ||
       (*(float *)(plVar12 + 5) * (float)pvVar31 < (float)(plVar12[4] + 1))) {
      uVar15 = (ulong)(pvVar31 < (void *)0x3 || ((ulong)pvVar31 & (long)pvVar31 - 1U) != 0) |
               (long)pvVar31 << 1;
      uVar20 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar20 <= uVar15) {
        uVar20 = uVar15;
      }
      FUN_008e9ae4(plVar28,uVar20);
      pvVar31 = (void *)plVar12[2];
      if (((ulong)pvVar31 & (long)pvVar31 - 1U) == 0) {
        pvVar30 = (void *)((long)pvVar31 - 1U & (ulong)pvVar13);
      }
      else if (pvVar13 < pvVar31) {
        pvVar30 = pvVar13;
      }
      else {
        uVar15 = 0;
        if (pvVar31 != (void *)0x0) {
          uVar15 = (ulong)pvVar13 / (ulong)pvVar31;
        }
        pvVar30 = (void *)((long)pvVar13 - uVar15 * (long)pvVar31);
      }
    }
    lVar19 = *plVar28;
    plVar17 = *(long **)(lVar19 + (long)pvVar30 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar1;
      *plVar1 = (long)plVar18;
      *(long **)(lVar19 + (long)pvVar30 * 8) = plVar1;
      if (*plVar18 != 0) {
        pvVar13 = *(void **)(*plVar18 + 8);
        if (((ulong)pvVar31 & (long)pvVar31 - 1U) == 0) {
          pvVar13 = (void *)((ulong)pvVar13 & (long)pvVar31 - 1U);
        }
        else if (pvVar31 <= pvVar13) {
          uVar15 = 0;
          if (pvVar31 != (void *)0x0) {
            uVar15 = (ulong)pvVar13 / (ulong)pvVar31;
          }
          pvVar13 = (void *)((long)pvVar13 - uVar15 * (long)pvVar31);
        }
        plVar17 = (long *)(*plVar28 + (long)pvVar13 * 8);
        goto LAB_017266bc;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_017266bc:
      *plVar17 = (long)plVar18;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_017266cc:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != &local_80);
  lVar22 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar28,lVar22 + lVar19);
    if (lVar14 != 0) {
      FUN_008f2aec(&local_80,plVar28,lVar14);
      plVar1 = DAT_043f1798;
      lVar14 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar14 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar18 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar18 = plVar1;
          }
          uVar15 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar29,0,8);
              goto LAB_01726b78;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar29,0,8);
        }
LAB_01726b78:
        plVar1 = DAT_043f1798;
        plVar18 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar18 = plVar1;
        }
        uVar15 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar14,0,8);
            goto LAB_01726adc;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,0,8);
      }
    }
LAB_01726adc:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar24 = (char *)plVar12[0xc];
  sVar11 = strlen(pcVar24);
  iVar6 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0xf];
  sVar11 = strlen(pcVar24);
  iVar7 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0x12];
  sVar11 = strlen(pcVar24);
  iVar8 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0x15];
  sVar11 = strlen(pcVar24);
  iVar9 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0x16];
  sVar11 = strlen(pcVar24);
  iVar10 = FUN_008f2c60(sVar11,pcVar24);
  lVar22 = local_a0;
  *(bool *)(plVar12 + 0xb) =
       (((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  lVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
    }
    uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar22,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_d0;
        goto joined_r0x01726d78;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar22,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x01726d78:
  pvVar30 = local_100;
  local_d0 = lVar19;
  if (((local_e0 & 1) != 0) && (lVar19 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_100;
        goto joined_r0x0172722c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_100;
  }
joined_r0x0172722c:
  pvVar13 = local_130;
  local_100 = pvVar30;
  if (((local_110 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar13 = local_130;
        goto joined_r0x01726ee0;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar13 = local_130;
  }
joined_r0x01726ee0:
  pvVar30 = local_160;
  local_130 = pvVar13;
  if (((local_140 & 1) != 0) && (pvVar13 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar13,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_160;
        goto joined_r0x0172726c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar13,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_160;
  }
joined_r0x0172726c:
  DAT_043f1798 = plVar1;
  local_160 = pvVar30;
  if ((((byte)local_170 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar15 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        goto LAB_01727044;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
  }
LAB_01727044:
  uVar25 = *(undefined8 *)(lVar26 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pvVar30 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar30 = (void *)((long)&local_1d8 + 1);
  }
  FUN_001522a0(uVar25,pvVar30);
  pvVar30 = local_1c8;
  plVar1 = DAT_043f1798;
  if (((local_1d8 & 1) != 0) && (local_1c8 != (void *)0x0)) {
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar1;
    }
    uVar15 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar30,0,8);
        return;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar30,0,8);
  }
  return;
}


