/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022ad82c; name: FUN_022ad82c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_022ad82c(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  char *pcVar23;
  undefined8 uVar24;
  long lVar25;
  string *psVar26;
  long *plVar27;
  long lVar28;
  void *pvVar29;
  ulong uVar30;
  ulong uVar31;
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
  char local_16f [8];
  undefined2 local_167;
  undefined1 local_165;
  undefined4 local_164;
  long local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  string local_140;
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
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  void *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined7 local_ab;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar25 = *param_1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  sVar12 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar6 = tpidr_el0;
  if (sVar12 < 0x17) {
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)sVar12 << 1));
    pvVar29 = (void *)((ulong)&local_1d8 | 1);
    if (sVar12 != 0) goto LAB_022ad8b0;
  }
  else {
    uVar30 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar30,8);
    local_1d8 = uVar30 | 1;
    local_1d0 = sVar12;
    local_1c8 = pvVar29;
LAB_022ad8b0:
    memcpy(pvVar29,param_2,sVar12);
  }
  *(undefined1 *)((long)pvVar29 + sVar12) = 0;
  plVar1 = DAT_043f1798;
  plVar13 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar13 = plVar1;
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x100,8);
  plVar13[4] = 0;
  plVar27 = plVar13 + 1;
  *plVar27 = 0;
  *(undefined4 *)(plVar13 + 5) = 0x3f800000;
  plVar13[10] = 0;
  plVar13[6] = (long)FUN_022aec70;
  plVar13[7] = (long)FUN_022aed20;
  plVar13[2] = 0;
  plVar13[3] = 0;
  *(undefined1 *)(plVar13 + 0xb) = 0;
  *plVar13 = (long)&PTR_FUN_0425ba38;
  plVar13[0xc] = (long)param_5;
  plVar13[8] = 0;
  plVar13[9] = 0;
  lVar19 = *param_6;
  lVar21 = param_6[1];
  plVar13[0xf] = (long)param_7;
  plVar13[0xd] = lVar19;
  plVar13[0xe] = lVar21;
  lVar19 = *param_8;
  lVar21 = param_8[1];
  plVar13[0x12] = (long)param_9;
  plVar13[0x10] = lVar19;
  plVar13[0x11] = lVar21;
  lVar19 = *param_10;
  lVar21 = param_10[1];
  uVar30 = 0xffffffff;
  plVar13[0x1f] = 0;
  plVar13[0x1d] = 0;
  *(undefined1 *)(plVar13 + 0x1e) = 0;
  plVar13[0x15] = (long)&DAT_0392da3c;
  plVar13[0x16] = 0;
  plVar13[0x13] = lVar19;
  plVar13[0x14] = lVar21;
  plVar13[0x17] = 0;
  plVar13[0x18] = (long)FUN_022aeef4;
  plVar13[0x19] = (long)&LAB_022af1d4;
  plVar13[0x1a] = (long)&LAB_022af4b0;
  plVar13[0x1b] = (long)&LAB_022af4c0;
  plVar13[0x1c] = 0;
  local_170 = (string)0x14;
  local_167 = 0x7473;
  local_16f[0] = s_class_cast_038dd4e7[0];
  local_16f[1] = s_class_cast_038dd4e7[1];
  local_16f[2] = s_class_cast_038dd4e7[2];
  local_16f[3] = s_class_cast_038dd4e7[3];
  local_16f[4] = s_class_cast_038dd4e7[4];
  local_16f[5] = s_class_cast_038dd4e7[5];
  local_16f[6] = s_class_cast_038dd4e7[6];
  local_16f[7] = s_class_cast_038dd4e7[7];
  local_165 = 0;
  local_164 = 0;
  local_150 = &LAB_022af50c;
  local_148 = 0xffffffff;
  local_160 = 0;
  local_158 = &LAB_022af4c4;
  sVar12 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_80 = SUB41((int)sVar12 << 1,0);
    pvVar29 = (void *)((ulong)&local_80 | 1);
    if (sVar12 != 0) goto LAB_022ada4c;
  }
  else {
    uVar14 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
    local_80 = (string)((byte)uVar14 | 1);
    uStack_7f = (undefined7)(uVar14 >> 8);
    local_78 = (undefined1)sVar12;
    uStack_77 = (undefined7)(sVar12 >> 8);
    local_70 = pvVar29;
LAB_022ada4c:
    memcpy(pvVar29,param_5,sVar12);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar29 + sVar12) = 0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_022af554;
  puStack_120 = &LAB_022af59c;
  sVar12 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_1a8 = (byte)((int)sVar12 << 1);
    pvVar29 = (void *)((ulong)&local_1a8 | 1);
    if (sVar12 != 0) goto LAB_022adae4;
  }
  else {
    uVar14 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
    local_1a8 = (byte)uVar14 | 1;
    uStack_1a7 = (undefined7)(uVar14 >> 8);
    local_1a0 = (undefined1)sVar12;
    uStack_19f = (undefined7)(sVar12 >> 8);
    local_198 = pvVar29;
LAB_022adae4:
    memcpy(pvVar29,param_7,sVar12);
  }
  local_100 = local_198;
  uStack_107 = uStack_19f;
  uStack_108 = local_1a0;
  local_10f = uStack_1a7;
  local_110 = local_1a8;
  *(undefined1 *)((long)pvVar29 + sVar12) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_022af5e4;
  puStack_f0 = &LAB_022af62c;
  sVar12 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_1c0 = 0;
  uStack_1bf = 0;
  local_1b8 = 0;
  uStack_1b7 = 0;
  local_1b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_1c0 = (byte)((int)sVar12 << 1);
    pvVar29 = (void *)((ulong)&local_1c0 | 1);
    if (sVar12 != 0) goto LAB_022adb7c;
  }
  else {
    uVar14 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,8);
    local_1c0 = (byte)uVar14 | 1;
    uStack_1bf = (undefined7)(uVar14 >> 8);
    local_1b8 = (undefined1)sVar12;
    uStack_1b7 = (undefined7)(sVar12 >> 8);
    local_1b0 = pvVar29;
LAB_022adb7c:
    memcpy(pvVar29,param_9,sVar12);
  }
  *(undefined1 *)((long)pvVar29 + sVar12) = 0;
  local_e0 = local_1c0;
  psVar26 = &local_170;
  local_df = uStack_1bf;
  local_c8 = &LAB_022af674;
  puStack_c0 = &LAB_022af6bc;
  local_b0 = 8;
  uStack_d8 = local_1b8;
  uStack_d7 = uStack_1b7;
  local_d0 = local_1b0;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  local_90 = &LAB_022af74c;
  plVar1 = plVar13 + 3;
  local_a0 = 0;
  puStack_98 = &LAB_022af704;
  uStack_a4 = 0;
  local_88 = 0xffffffff;
  do {
    uVar14 = *(ulong *)(psVar26 + 8);
    psVar3 = *(string **)(psVar26 + 0x10);
    if (((byte)*psVar26 & 1) == 0) {
      psVar3 = psVar26 + 1;
      uVar14 = (ulong)((byte)*psVar26 >> 1);
    }
    uVar14 = FUN_008e8ed4(&local_80,psVar3,uVar14);
    uVar31 = plVar13[2];
    if (uVar31 != 0) {
      uVar30 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
      uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
      uVar16 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar30 = uVar31 - 1 & uVar14;
      }
      else {
        uVar30 = uVar14;
        if (uVar31 <= uVar14) {
          uVar30 = 0;
          if (uVar31 != 0) {
            uVar30 = uVar14 / uVar31;
          }
          uVar30 = uVar14 - uVar30 * uVar31;
        }
      }
      plVar18 = *(long **)(*plVar27 + uVar30 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        psVar3 = psVar26 + 1;
        sVar12 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar3 = *(string **)(psVar26 + 0x10);
          sVar12 = *(size_t *)(psVar26 + 8);
        }
        if (uVar16 < 2) {
          if (sVar12 == 0) {
            do {
              if (plVar18[1] != uVar14 && (plVar18[1] & uVar31 - 1) != uVar30) break;
              uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar16 = plVar18[3];
              }
              if (uVar16 == 0) goto LAB_022add84;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if (plVar18[1] != uVar14 && (plVar18[1] & uVar31 - 1) != uVar30) break;
              bVar4 = *(byte *)(plVar18 + 2);
              uVar16 = (ulong)(bVar4 >> 1);
              sVar2 = uVar16;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar18[3];
              }
              if (sVar2 == sVar12) {
                if ((bVar4 & 1) == 0) {
                  psVar20 = (string *)((long)plVar18 + 0x11);
                  psVar22 = psVar3;
                  while (*psVar20 == *psVar22) {
                    uVar16 = uVar16 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar16 == 0) goto LAB_022add84;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar18[4],psVar3,sVar12);
                  if (iVar8 == 0) goto LAB_022add84;
                }
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
        else if (sVar12 == 0) {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar14) {
              if (uVar31 <= uVar16) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar16 / uVar31;
                }
                uVar16 = uVar16 - uVar5 * uVar31;
              }
              if (uVar16 != uVar30) break;
            }
            uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar16 = plVar18[3];
            }
            if (uVar16 == 0) goto LAB_022add84;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar14) {
              if (uVar31 <= uVar16) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar16 / uVar31;
                }
                uVar16 = uVar16 - uVar5 * uVar31;
              }
              if (uVar16 != uVar30) break;
            }
            bVar4 = *(byte *)(plVar18 + 2);
            uVar16 = (ulong)(bVar4 >> 1);
            sVar2 = uVar16;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar18[3];
            }
            if (sVar2 == sVar12) {
              if ((bVar4 & 1) == 0) {
                psVar20 = (string *)((long)plVar18 + 0x11);
                psVar22 = psVar3;
                while (*psVar20 == *psVar22) {
                  uVar16 = uVar16 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar16 == 0) goto LAB_022add84;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar18[4],psVar3,sVar12);
                if (iVar8 == 0) goto LAB_022add84;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = DAT_043f1798;
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
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
    plVar18[1] = uVar14;
    if ((uVar31 == 0) || (*(float *)(plVar13 + 5) * (float)uVar31 < (float)(plVar13[4] + 1))) {
      uVar30 = (ulong)(uVar31 < 3 || (uVar31 & uVar31 - 1) != 0) | uVar31 << 1;
      uVar31 = (ulong)((float)(plVar13[4] + 1) / *(float *)(plVar13 + 5));
      if (uVar31 <= uVar30) {
        uVar31 = uVar30;
      }
      FUN_008e9ae4(plVar27,uVar31);
      uVar31 = plVar13[2];
      if ((uVar31 & uVar31 - 1) == 0) {
        uVar30 = uVar31 - 1 & uVar14;
      }
      else if (uVar14 < uVar31) {
        uVar30 = uVar14;
      }
      else {
        uVar30 = 0;
        if (uVar31 != 0) {
          uVar30 = uVar14 / uVar31;
        }
        uVar30 = uVar14 - uVar30 * uVar31;
      }
    }
    lVar19 = *plVar27;
    plVar17 = *(long **)(lVar19 + uVar30 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar1;
      *plVar1 = (long)plVar18;
      *(long **)(lVar19 + uVar30 * 8) = plVar1;
      if (*plVar18 != 0) {
        uVar14 = *(ulong *)(*plVar18 + 8);
        if ((uVar31 & uVar31 - 1) == 0) {
          uVar14 = uVar14 & uVar31 - 1;
        }
        else if (uVar31 <= uVar14) {
          uVar16 = 0;
          if (uVar31 != 0) {
            uVar16 = uVar14 / uVar31;
          }
          uVar14 = uVar14 - uVar16 * uVar31;
        }
        plVar17 = (long *)(*plVar27 + uVar14 * 8);
        goto LAB_022add74;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_022add74:
      *plVar17 = (long)plVar18;
    }
    plVar13[4] = plVar13[4] + 1;
LAB_022add84:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != &local_80);
  lVar21 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar27,lVar21 + lVar19);
    if (lVar15 != 0) {
      FUN_008f2aec(&local_80,plVar27,lVar15);
      plVar1 = DAT_043f1798;
      lVar15 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar15 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar15 + 0x20), lVar28 != 0)) {
          plVar18 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar18 = plVar1;
          }
          uVar30 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar30 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar28,0,8);
              goto LAB_022ae278;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar28,0,8);
        }
LAB_022ae278:
        plVar1 = DAT_043f1798;
        plVar18 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar18 = plVar1;
        }
        uVar30 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar30 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar15,0,8);
            goto LAB_022ae230;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,0,8);
      }
    }
LAB_022ae230:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar23 = (char *)plVar13[0xc];
  sVar12 = strlen(pcVar23);
  iVar8 = FUN_008f2c60(sVar12,pcVar23);
  pcVar23 = (char *)plVar13[0xf];
  sVar12 = strlen(pcVar23);
  iVar9 = FUN_008f2c60(sVar12,pcVar23);
  pcVar23 = (char *)plVar13[0x12];
  sVar12 = strlen(pcVar23);
  iVar10 = FUN_008f2c60(sVar12,pcVar23);
  pcVar23 = (char *)plVar13[0x15];
  sVar12 = strlen(pcVar23);
  iVar11 = FUN_008f2c60(sVar12,pcVar23);
  lVar19 = local_a0;
  *(bool *)(plVar13 + 0xb) = ((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0;
  plVar1 = DAT_043f1798;
  pvVar29 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar30 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pvVar29 = local_d0;
        goto joined_r0x022ae434;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pvVar29 = local_d0;
  }
joined_r0x022ae434:
  pvVar7 = local_100;
  local_d0 = pvVar29;
  if (((local_e0 & 1) != 0) && (pvVar29 != (void *)0x0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar30 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar29,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_100;
        goto joined_r0x022ae940;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar29,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_100;
  }
joined_r0x022ae940:
  pvVar29 = local_130;
  local_100 = pvVar7;
  if (((local_110 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar30 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar29 = local_130;
        goto joined_r0x022ae59c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar29 = local_130;
  }
joined_r0x022ae59c:
  lVar19 = local_160;
  local_130 = pvVar29;
  if ((((byte)local_140 & 1) != 0) && (pvVar29 != (void *)0x0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar30 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar29,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_160;
        goto joined_r0x022ae980;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar29,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_160;
  }
joined_r0x022ae980:
  DAT_043f1798 = plVar1;
  local_160 = lVar19;
  if ((((byte)local_170 & 1) != 0) && (lVar19 != 0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar30 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar19,0,8);
        goto LAB_022ae700;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
  }
LAB_022ae700:
  uVar24 = *(undefined8 *)(lVar25 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar13)(plVar13,uVar24);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  pvVar29 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar29 = (void *)((long)&local_1d8 + 1);
  }
  FUN_001522a0(uVar24,pvVar29);
  pvVar29 = local_1c8;
  plVar1 = DAT_043f1798;
  if (((local_1d8 & 1) != 0) && (local_1c8 != (void *)0x0)) {
    plVar13 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    uVar30 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar29,0,8);
        return;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar29,0,8);
  }
  return;
}


