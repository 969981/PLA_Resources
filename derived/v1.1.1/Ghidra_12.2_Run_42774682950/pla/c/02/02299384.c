/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02299384; name: FUN_02299384
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02299384(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
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
  int iVar12;
  int iVar13;
  size_t sVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  char *pcVar25;
  undefined8 uVar26;
  long lVar27;
  string *psVar28;
  long *plVar29;
  long lVar30;
  ulong uVar31;
  void *pvVar32;
  ulong uVar33;
  undefined8 local_230;
  size_t local_228;
  void *local_220;
  byte local_218;
  undefined7 uStack_217;
  undefined1 local_210;
  undefined7 uStack_20f;
  void *local_208;
  byte local_200;
  undefined7 uStack_1ff;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined7 local_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  void *local_1c8;
  undefined7 local_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined7 local_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  string local_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  void *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
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
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar27 = *param_1;
  local_230 = 0;
  local_228 = 0;
  local_220 = (void *)0x0;
  sVar14 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar6 = tpidr_el0;
  if (sVar14 < 0x17) {
    local_230 = CONCAT71(local_230._1_7_,(char)((int)sVar14 << 1));
    pvVar32 = (void *)((ulong)&local_230 | 1);
    if (sVar14 != 0) goto LAB_02299414;
  }
  else {
    uVar31 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar31,8);
    local_230 = uVar31 | 1;
    local_228 = sVar14;
    local_220 = pvVar32;
LAB_02299414:
    memcpy(pvVar32,param_2,sVar14);
  }
  *(undefined1 *)((long)pvVar32 + sVar14) = 0;
  plVar1 = DAT_043f1798;
  plVar15 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar15 = plVar1;
  }
  plVar15 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x120,8);
  plVar15[4] = 0;
  plVar29 = plVar15 + 1;
  *plVar29 = 0;
  *(undefined4 *)(plVar15 + 5) = 0x3f800000;
  plVar15[10] = 0;
  *(undefined1 *)(plVar15 + 0xb) = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  *plVar15 = (long)&PTR_FUN_0425b9e8;
  plVar15[0xc] = (long)param_3;
  plVar15[6] = (long)FUN_0229aa90;
  plVar15[7] = (long)FUN_0229ab40;
  plVar15[8] = 0;
  plVar15[9] = 0;
  lVar22 = param_4[1];
  plVar15[0xd] = *param_4;
  plVar15[0xe] = lVar22;
  plVar15[0xf] = (long)param_5;
  lVar22 = param_6[1];
  plVar15[0x10] = *param_6;
  plVar15[0x11] = lVar22;
  plVar15[0x12] = (long)param_7;
  lVar22 = param_8[1];
  plVar15[0x13] = *param_8;
  plVar15[0x14] = lVar22;
  plVar15[0x15] = (long)param_9;
  lVar22 = *param_10;
  lVar24 = param_10[1];
  plVar15[0x23] = 0;
  *(undefined1 *)(plVar15 + 0x22) = 0;
  plVar15[0x18] = (long)&DAT_038ca815;
  plVar15[0x19] = (long)&DAT_0392da3c;
  plVar15[0x16] = lVar22;
  plVar15[0x17] = lVar24;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x20] = 0;
  plVar15[0x21] = 0;
  plVar15[0x1c] = (long)FUN_0229acd0;
  plVar15[0x1d] = (long)&LAB_0229afb0;
  plVar15[0x1e] = (long)&LAB_0229b290;
  plVar15[0x1f] = (long)&LAB_0229b2a0;
  sVar14 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_80 = SUB41((int)sVar14 << 1,0);
    pvVar32 = (void *)((ulong)&local_80 | 1);
    if (sVar14 != 0) goto LAB_02299580;
  }
  else {
    uVar31 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar31,8);
    local_80 = (string)((byte)uVar31 | 1);
    uStack_7f = (undefined7)(uVar31 >> 8);
    local_78 = (undefined1)sVar14;
    uStack_77 = (undefined7)(sVar14 >> 8);
    local_70 = pvVar32;
LAB_02299580:
    memcpy(pvVar32,param_3,sVar14);
  }
  local_190 = local_70;
  uStack_197 = uStack_77;
  uStack_198 = local_78;
  local_19f = uStack_7f;
  local_1a0 = local_80;
  *(undefined1 *)((long)pvVar32 + sVar14) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_1b0 = 0;
  uStack_1a9 = 0;
  uStack_1a8 = 0;
  uVar31 = 0xffffffff;
  local_178 = 0xffffffff;
  local_188 = &LAB_0229b2a4;
  puStack_180 = &LAB_0229b2ec;
  sVar14 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_1d8 = 0;
  uStack_1d7 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_1d8 = (byte)((int)sVar14 << 1);
    pvVar32 = (void *)((ulong)&local_1d8 | 1);
    if (sVar14 != 0) goto LAB_02299620;
  }
  else {
    uVar16 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar16,8);
    local_1d8 = (byte)uVar16 | 1;
    uStack_1d7 = (undefined7)(uVar16 >> 8);
    local_1d0 = (undefined1)sVar14;
    uStack_1cf = (undefined7)(sVar14 >> 8);
    local_1c8 = pvVar32;
LAB_02299620:
    memcpy(pvVar32,param_5,sVar14);
  }
  local_160 = local_1c8;
  uStack_167 = uStack_1cf;
  uStack_168 = local_1d0;
  local_16f = uStack_1d7;
  local_170 = local_1d8;
  *(undefined1 *)((long)pvVar32 + sVar14) = 0;
  local_1d8 = 0;
  uStack_1d7 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  uStack_1b9 = 0;
  uStack_1b8 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_0229b334;
  puStack_150 = &LAB_0229b37c;
  sVar14 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_200 = (byte)((int)sVar14 << 1);
    pvVar32 = (void *)((ulong)&local_200 | 1);
    if (sVar14 != 0) goto LAB_022996b8;
  }
  else {
    uVar16 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar16,8);
    local_200 = (byte)uVar16 | 1;
    uStack_1ff = (undefined7)(uVar16 >> 8);
    local_1f8 = (undefined1)sVar14;
    uStack_1f7 = (undefined7)(sVar14 >> 8);
    local_1f0 = pvVar32;
LAB_022996b8:
    memcpy(pvVar32,param_7,sVar14);
  }
  local_130 = local_1f0;
  uStack_137 = uStack_1f7;
  uStack_138 = local_1f8;
  local_13f = uStack_1ff;
  local_140 = local_200;
  *(undefined1 *)((long)pvVar32 + sVar14) = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = (void *)0x0;
  local_1e8 = 0;
  uStack_1e1 = 0;
  uStack_1e0 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0229b3c4;
  puStack_120 = &LAB_0229b40c;
  sVar14 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_218 = 0;
  uStack_217 = 0;
  local_210 = 0;
  uStack_20f = 0;
  local_208 = (void *)0x0;
  if (0xffffffffffffffef < sVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    local_218 = (byte)((int)sVar14 << 1);
    pvVar32 = (void *)((ulong)&local_218 | 1);
    if (sVar14 != 0) goto LAB_02299754;
  }
  else {
    uVar16 = sVar14 + 0x10 & 0xfffffffffffffff0;
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar16,8);
    local_218 = (byte)uVar16 | 1;
    uStack_217 = (undefined7)(uVar16 >> 8);
    local_210 = (undefined1)sVar14;
    uStack_20f = (undefined7)(sVar14 >> 8);
    local_208 = pvVar32;
LAB_02299754:
    memcpy(pvVar32,param_9,sVar14);
  }
  *(undefined1 *)((long)pvVar32 + sVar14) = 0;
  local_110 = local_218;
  local_10f = uStack_217;
  uStack_108 = local_210;
  uStack_107 = uStack_20f;
  local_100 = local_208;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0229b454;
  puStack_f0 = &LAB_0229b49c;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_0229b52c;
  local_d4 = 0;
  psVar28 = &local_1a0;
  plVar1 = plVar15 + 3;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_0229b4e4;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0229b5bc;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0229b574;
  do {
    uVar16 = *(ulong *)(psVar28 + 8);
    psVar3 = *(string **)(psVar28 + 0x10);
    if (((byte)*psVar28 & 1) == 0) {
      psVar3 = psVar28 + 1;
      uVar16 = (ulong)((byte)*psVar28 >> 1);
    }
    uVar16 = FUN_008e8ed4(&local_80,psVar3,uVar16);
    uVar33 = plVar15[2];
    if (uVar33 != 0) {
      uVar31 = uVar33 - (uVar33 >> 1 & 0x5555555555555555);
      uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
      uVar18 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar31 = uVar33 - 1 & uVar16;
      }
      else {
        uVar31 = uVar16;
        if (uVar33 <= uVar16) {
          uVar31 = 0;
          if (uVar33 != 0) {
            uVar31 = uVar16 / uVar33;
          }
          uVar31 = uVar16 - uVar31 * uVar33;
        }
      }
      plVar20 = *(long **)(*plVar29 + uVar31 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        psVar3 = psVar28 + 1;
        sVar14 = (ulong)((byte)*psVar28 >> 1);
        if (((byte)*psVar28 & 1) != 0) {
          psVar3 = *(string **)(psVar28 + 0x10);
          sVar14 = *(size_t *)(psVar28 + 8);
        }
        if (uVar18 < 2) {
          if (sVar14 == 0) {
            do {
              if (plVar20[1] != uVar16 && (plVar20[1] & uVar33 - 1) != uVar31) break;
              uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
              if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                uVar18 = plVar20[3];
              }
              if (uVar18 == 0) goto LAB_02299b10;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              if (plVar20[1] != uVar16 && (plVar20[1] & uVar33 - 1) != uVar31) break;
              bVar4 = *(byte *)(plVar20 + 2);
              uVar18 = (ulong)(bVar4 >> 1);
              sVar2 = uVar18;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar20[3];
              }
              if (sVar2 == sVar14) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar20 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar21 == *psVar23) {
                    uVar18 = uVar18 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar18 == 0) goto LAB_02299b10;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar20[4],psVar3,sVar14);
                  if (iVar8 == 0) goto LAB_02299b10;
                }
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
        else if (sVar14 == 0) {
          do {
            uVar18 = plVar20[1];
            if (uVar18 != uVar16) {
              if (uVar33 <= uVar18) {
                uVar5 = 0;
                if (uVar33 != 0) {
                  uVar5 = uVar18 / uVar33;
                }
                uVar18 = uVar18 - uVar5 * uVar33;
              }
              if (uVar18 != uVar31) break;
            }
            uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
            if ((*(byte *)(plVar20 + 2) & 1) != 0) {
              uVar18 = plVar20[3];
            }
            if (uVar18 == 0) goto LAB_02299b10;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar20[1];
            if (uVar18 != uVar16) {
              if (uVar33 <= uVar18) {
                uVar5 = 0;
                if (uVar33 != 0) {
                  uVar5 = uVar18 / uVar33;
                }
                uVar18 = uVar18 - uVar5 * uVar33;
              }
              if (uVar18 != uVar31) break;
            }
            bVar4 = *(byte *)(plVar20 + 2);
            uVar18 = (ulong)(bVar4 >> 1);
            sVar2 = uVar18;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar20[3];
            }
            if (sVar2 == sVar14) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar20 + 0x11);
                psVar23 = psVar3;
                while (*psVar21 == *psVar23) {
                  uVar18 = uVar18 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar18 == 0) goto LAB_02299b10;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar20[4],psVar3,sVar14);
                if (iVar8 == 0) goto LAB_02299b10;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    plVar20 = DAT_043f1798;
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar20;
    }
    plVar20 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
    std::string::string((string *)(plVar20 + 2),psVar28);
    lVar22 = *(long *)(psVar28 + 0x18);
    lVar24 = *(long *)(psVar28 + 0x28);
    plVar20[6] = *(long *)(psVar28 + 0x20);
    plVar20[7] = lVar24;
    plVar20[5] = lVar22;
    *plVar20 = 0;
    plVar20[1] = uVar16;
    if ((uVar33 == 0) || (*(float *)(plVar15 + 5) * (float)uVar33 < (float)(plVar15[4] + 1))) {
      uVar31 = (ulong)(uVar33 < 3 || (uVar33 & uVar33 - 1) != 0) | uVar33 << 1;
      uVar33 = (ulong)((float)(plVar15[4] + 1) / *(float *)(plVar15 + 5));
      if (uVar33 <= uVar31) {
        uVar33 = uVar31;
      }
      FUN_008e9ae4(plVar29,uVar33);
      uVar33 = plVar15[2];
      if ((uVar33 & uVar33 - 1) == 0) {
        uVar31 = uVar33 - 1 & uVar16;
      }
      else if (uVar16 < uVar33) {
        uVar31 = uVar16;
      }
      else {
        uVar31 = 0;
        if (uVar33 != 0) {
          uVar31 = uVar16 / uVar33;
        }
        uVar31 = uVar16 - uVar31 * uVar33;
      }
    }
    lVar22 = *plVar29;
    plVar19 = *(long **)(lVar22 + uVar31 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar20 = *plVar1;
      *plVar1 = (long)plVar20;
      *(long **)(lVar22 + uVar31 * 8) = plVar1;
      if (*plVar20 != 0) {
        uVar16 = *(ulong *)(*plVar20 + 8);
        if ((uVar33 & uVar33 - 1) == 0) {
          uVar16 = uVar16 & uVar33 - 1;
        }
        else if (uVar33 <= uVar16) {
          uVar18 = 0;
          if (uVar33 != 0) {
            uVar18 = uVar16 / uVar33;
          }
          uVar16 = uVar16 - uVar18 * uVar33;
        }
        plVar19 = (long *)(*plVar29 + uVar16 * 8);
        goto LAB_02299b00;
      }
    }
    else {
      *plVar20 = *plVar19;
LAB_02299b00:
      *plVar19 = (long)plVar20;
    }
    plVar15[4] = plVar15[4] + 1;
LAB_02299b10:
    psVar28 = psVar28 + 0x30;
  } while (psVar28 != &local_80);
  lVar24 = FUN_008cca50();
  lVar22 = 0;
  do {
    lVar17 = FUN_008e8c90(plVar29,lVar24 + lVar22);
    if (lVar17 != 0) {
      FUN_008f2aec(&local_80,plVar29,lVar17);
      plVar1 = DAT_043f1798;
      lVar17 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar17 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar17 + 0x10) & 1) != 0)) &&
           (lVar30 = *(long *)(lVar17 + 0x20), lVar30 != 0)) {
          plVar20 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar20 = plVar1;
          }
          uVar31 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar31 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar30,0,8);
              goto LAB_02299f08;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar30,0,8);
        }
LAB_02299f08:
        plVar1 = DAT_043f1798;
        plVar20 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar20 = plVar1;
        }
        uVar31 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar31 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar17,0,8);
            goto LAB_02299ec0;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar17,0,8);
      }
    }
LAB_02299ec0:
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0x300);
  pcVar25 = (char *)plVar15[0xc];
  sVar14 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar15[0xf];
  sVar14 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar15[0x12];
  sVar14 = strlen(pcVar25);
  iVar10 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar15[0x15];
  sVar14 = strlen(pcVar25);
  iVar11 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar15[0x18];
  sVar14 = strlen(pcVar25);
  iVar12 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar15[0x19];
  sVar14 = strlen(pcVar25);
  iVar13 = FUN_008f2c60(sVar14,pcVar25);
  lVar24 = local_a0;
  *(bool *)(plVar15 + 0xb) =
       ((((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0;
  plVar1 = DAT_043f1798;
  lVar22 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar29 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar29 = plVar1;
    }
    uVar31 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar22 = local_d0;
        goto joined_r0x0229a0f0;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar22 = local_d0;
  }
joined_r0x0229a0f0:
  pvVar32 = local_100;
  local_d0 = lVar22;
  if (((local_e0 & 1) != 0) && (lVar22 != 0)) {
    plVar29 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar31 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar29,lVar22,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_100;
        goto joined_r0x0229a6b4;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,lVar22,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_100;
  }
joined_r0x0229a6b4:
  pvVar7 = local_130;
  local_100 = pvVar32;
  if (((local_110 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar29 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar31 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar32,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_130;
        goto joined_r0x0229a258;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar32,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_130;
  }
joined_r0x0229a258:
  pvVar32 = local_160;
  local_130 = pvVar7;
  if (((local_140 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar29 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar31 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_160;
        goto joined_r0x0229a6f4;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_160;
  }
joined_r0x0229a6f4:
  pvVar7 = local_190;
  local_160 = pvVar32;
  if (((local_170 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar29 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar31 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar32,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_190;
        goto joined_r0x0229a3c0;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar32,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_190;
  }
joined_r0x0229a3c0:
  DAT_043f1798 = plVar1;
  local_190 = pvVar7;
  if ((((byte)local_1a0 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar29 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar29 = plVar1;
    }
    uVar31 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar29,pvVar7,0,8);
        goto LAB_0229a470;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,pvVar7,0,8);
  }
LAB_0229a470:
  uVar26 = *(undefined8 *)(lVar27 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar15)(plVar15,uVar26);
  (**(code **)(*plVar15 + 0x10))(plVar15);
  pvVar32 = local_220;
  if ((local_230 & 1) == 0) {
    pvVar32 = (void *)((long)&local_230 + 1);
  }
  FUN_001522a0(uVar26,pvVar32);
  pvVar32 = local_220;
  plVar1 = DAT_043f1798;
  if (((local_230 & 1) != 0) && (local_220 != (void *)0x0)) {
    plVar15 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    uVar31 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar31 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar15,pvVar32,0,8);
        return;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,pvVar32,0,8);
  }
  return;
}


