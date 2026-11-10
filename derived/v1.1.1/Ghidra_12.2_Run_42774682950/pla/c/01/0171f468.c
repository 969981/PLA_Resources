/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0171f468; name: FUN_0171f468
 */


void FUN_0171f468(ulong *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

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
  size_t sVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  string *psVar22;
  string *psVar23;
  long lVar24;
  char *pcVar25;
  undefined8 uVar26;
  string *psVar27;
  long *plVar28;
  long lVar29;
  void *pvVar30;
  ulong uVar31;
  ulong uVar32;
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
  
  uVar32 = *param_1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  sVar13 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar6 = tpidr_el0;
  if (sVar13 < 0x17) {
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)sVar13 << 1));
    pvVar30 = (void *)((ulong)&local_1d8 | 1);
    uVar18 = uVar32;
    if (sVar13 != 0) goto LAB_0171f4f4;
  }
  else {
    uVar18 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar18,8);
    local_1d8 = uVar18 | 1;
    local_1d0 = sVar13;
    local_1c8 = pvVar30;
LAB_0171f4f4:
    memcpy(pvVar30,param_2,sVar13);
  }
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  plVar1 = DAT_043f1798;
  plVar14 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  plVar14 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x108,8);
  plVar14[4] = 0;
  plVar28 = plVar14 + 1;
  *plVar28 = 0;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[10] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  plVar14[6] = (long)&LAB_017208a0;
  plVar14[7] = (long)FUN_01720950;
  plVar14[2] = 0;
  plVar14[3] = 0;
  *plVar14 = (long)&PTR_FUN_04224f38;
  plVar14[0xc] = (long)param_3;
  plVar14[8] = 0;
  plVar14[9] = 0;
  lVar20 = *param_4;
  lVar24 = param_4[1];
  plVar14[0xf] = (long)param_5;
  plVar14[0xd] = lVar20;
  plVar14[0xe] = lVar24;
  lVar20 = *param_6;
  lVar24 = param_6[1];
  plVar14[0x12] = (long)param_7;
  plVar14[0x10] = lVar20;
  plVar14[0x11] = lVar24;
  lVar20 = *param_8;
  lVar24 = param_8[1];
  plVar14[0x20] = 0;
  *(undefined1 *)(plVar14 + 0x1f) = 0;
  plVar14[0x15] = (long)&DAT_038ca815;
  plVar14[0x16] = (long)&DAT_0392da3c;
  plVar14[0x13] = lVar20;
  plVar14[0x14] = lVar24;
  plVar14[0x19] = (long)&LAB_017212f0;
  plVar14[0x1a] = (long)&LAB_017215d4;
  plVar14[0x17] = 0;
  plVar14[0x18] = 0;
  plVar14[0x1b] = (long)&LAB_017218c0;
  plVar14[0x1c] = (long)&LAB_017218d0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  sVar13 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_80 = SUB41((int)sVar13 << 1,0);
    pvVar30 = (void *)((ulong)&local_80 | 1);
    if (sVar13 != 0) goto LAB_0171f650;
  }
  else {
    uVar15 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar15,8);
    local_80 = (string)((byte)uVar15 | 1);
    uStack_7f = (undefined7)(uVar15 >> 8);
    local_78 = (undefined1)sVar13;
    uStack_77 = (undefined7)(sVar13 >> 8);
    local_70 = pvVar30;
LAB_0171f650:
    memcpy(pvVar30,param_3,sVar13);
  }
  local_160 = local_70;
  uStack_167 = uStack_77;
  uStack_168 = local_78;
  local_16f = uStack_7f;
  local_170 = local_80;
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_017218d4;
  puStack_150 = &LAB_0172191c;
  sVar13 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_1a8 = (byte)((int)sVar13 << 1);
    pvVar30 = (void *)((ulong)&local_1a8 | 1);
    if (sVar13 != 0) goto LAB_0171f6f4;
  }
  else {
    uVar15 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar15,8);
    local_1a8 = (byte)uVar15 | 1;
    uStack_1a7 = (undefined7)(uVar15 >> 8);
    local_1a0 = (undefined1)sVar13;
    uStack_19f = (undefined7)(sVar13 >> 8);
    local_198 = pvVar30;
LAB_0171f6f4:
    memcpy(pvVar30,param_5,sVar13);
  }
  local_130 = local_198;
  uStack_137 = uStack_19f;
  uStack_138 = local_1a0;
  local_13f = uStack_1a7;
  local_140 = local_1a8;
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_01721964;
  puStack_120 = &LAB_017219ac;
  sVar13 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_1c0 = 0;
  uStack_1bf = 0;
  local_1b8 = 0;
  uStack_1b7 = 0;
  local_1b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_1c0 = (byte)((int)sVar13 << 1);
    pvVar30 = (void *)((ulong)&local_1c0 | 1);
    if (sVar13 != 0) goto LAB_0171f78c;
  }
  else {
    uVar15 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar15,8);
    local_1c0 = (byte)uVar15 | 1;
    uStack_1bf = (undefined7)(uVar15 >> 8);
    local_1b8 = (undefined1)sVar13;
    uStack_1b7 = (undefined7)(sVar13 >> 8);
    local_1b0 = pvVar30;
LAB_0171f78c:
    memcpy(pvVar30,param_7,sVar13);
  }
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_110 = local_1c0;
  local_10f = uStack_1bf;
  uStack_108 = local_1b8;
  uStack_107 = uStack_1b7;
  local_100 = local_1b0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_017219f4;
  puStack_f0 = &LAB_01721a3c;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_01721acc;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_01721a84;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  psVar27 = &local_170;
  local_88 = 0xffffffff;
  local_a0 = 0;
  local_98 = &LAB_01721b14;
  puStack_90 = &LAB_01721b5c;
  plVar1 = plVar14 + 3;
  do {
    uVar15 = *(ulong *)(psVar27 + 8);
    psVar3 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar3 = psVar27 + 1;
      uVar15 = (ulong)((byte)*psVar27 >> 1);
    }
    uVar15 = FUN_008e8ed4(&local_80,psVar3,uVar15);
    uVar31 = plVar14[2];
    if (uVar31 != 0) {
      uVar18 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar19 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar18 = uVar31 - 1 & uVar15;
      }
      else {
        uVar18 = uVar15;
        if (uVar31 <= uVar15) {
          uVar18 = 0;
          if (uVar31 != 0) {
            uVar18 = uVar15 / uVar31;
          }
          uVar18 = uVar15 - uVar18 * uVar31;
        }
      }
      plVar21 = *(long **)(*plVar28 + uVar18 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        psVar3 = psVar27 + 1;
        sVar13 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar3 = *(string **)(psVar27 + 0x10);
          sVar13 = *(size_t *)(psVar27 + 8);
        }
        if (uVar19 < 2) {
          if (sVar13 == 0) {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar31 - 1) != uVar18) break;
              uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
              if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                uVar19 = plVar21[3];
              }
              if (uVar19 == 0) goto LAB_0171f884;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              if (plVar21[1] != uVar15 && (plVar21[1] & uVar31 - 1) != uVar18) break;
              bVar4 = *(byte *)(plVar21 + 2);
              uVar19 = (ulong)(bVar4 >> 1);
              sVar2 = uVar19;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar21[3];
              }
              if (sVar2 == sVar13) {
                if ((bVar4 & 1) == 0) {
                  psVar22 = (string *)((long)plVar21 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar22 == *psVar23) {
                    uVar19 = uVar19 - 1;
                    psVar22 = psVar22 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar19 == 0) goto LAB_0171f884;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar21[4],psVar3,sVar13);
                  if (iVar8 == 0) goto LAB_0171f884;
                }
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
        else if (sVar13 == 0) {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar31 <= uVar19) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar19 / uVar31;
                }
                uVar19 = uVar19 - uVar5 * uVar31;
              }
              if (uVar19 != uVar18) break;
            }
            uVar19 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
            if ((*(byte *)(plVar21 + 2) & 1) != 0) {
              uVar19 = plVar21[3];
            }
            if (uVar19 == 0) goto LAB_0171f884;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar21[1];
            if (uVar19 != uVar15) {
              if (uVar31 <= uVar19) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar19 / uVar31;
                }
                uVar19 = uVar19 - uVar5 * uVar31;
              }
              if (uVar19 != uVar18) break;
            }
            bVar4 = *(byte *)(plVar21 + 2);
            uVar19 = (ulong)(bVar4 >> 1);
            sVar2 = uVar19;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar21[3];
            }
            if (sVar2 == sVar13) {
              if ((bVar4 & 1) == 0) {
                psVar22 = (string *)((long)plVar21 + 0x11);
                psVar23 = psVar3;
                while (*psVar22 == *psVar23) {
                  uVar19 = uVar19 - 1;
                  psVar22 = psVar22 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar19 == 0) goto LAB_0171f884;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar21[4],psVar3,sVar13);
                if (iVar8 == 0) goto LAB_0171f884;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    plVar21 = DAT_043f1798;
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar17 = plVar21;
    }
    plVar21 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
    std::string::string((string *)(plVar21 + 2),psVar27);
    lVar20 = *(long *)(psVar27 + 0x18);
    lVar24 = *(long *)(psVar27 + 0x28);
    plVar21[6] = *(long *)(psVar27 + 0x20);
    plVar21[7] = lVar24;
    plVar21[5] = lVar20;
    *plVar21 = 0;
    plVar21[1] = uVar15;
    if ((uVar31 == 0) || (*(float *)(plVar14 + 5) * (float)uVar31 < (float)(plVar14[4] + 1))) {
      uVar18 = (ulong)(uVar31 < 3 || (uVar31 & uVar31 - 1) != 0) | uVar31 << 1;
      uVar31 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar31 <= uVar18) {
        uVar31 = uVar18;
      }
      FUN_008e9ae4(plVar28,uVar31);
      uVar31 = plVar14[2];
      if ((uVar31 & uVar31 - 1) == 0) {
        uVar18 = uVar31 - 1 & uVar15;
      }
      else if (uVar15 < uVar31) {
        uVar18 = uVar15;
      }
      else {
        uVar18 = 0;
        if (uVar31 != 0) {
          uVar18 = uVar15 / uVar31;
        }
        uVar18 = uVar15 - uVar18 * uVar31;
      }
    }
    lVar20 = *plVar28;
    plVar17 = *(long **)(lVar20 + uVar18 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar21 = *plVar1;
      *plVar1 = (long)plVar21;
      *(long **)(lVar20 + uVar18 * 8) = plVar1;
      if (*plVar21 != 0) {
        uVar15 = *(ulong *)(*plVar21 + 8);
        if ((uVar31 & uVar31 - 1) == 0) {
          uVar15 = uVar15 & uVar31 - 1;
        }
        else if (uVar31 <= uVar15) {
          uVar19 = 0;
          if (uVar31 != 0) {
            uVar19 = uVar15 / uVar31;
          }
          uVar15 = uVar15 - uVar19 * uVar31;
        }
        plVar17 = (long *)(*plVar28 + uVar15 * 8);
        goto LAB_0171f874;
      }
    }
    else {
      *plVar21 = *plVar17;
LAB_0171f874:
      *plVar17 = (long)plVar21;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_0171f884:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != &local_80);
  lVar24 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar16 = FUN_008e8c90(plVar28,lVar24 + lVar20);
    if (lVar16 != 0) {
      FUN_008f2aec(&local_80,plVar28,lVar16);
      plVar1 = DAT_043f1798;
      lVar16 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar16 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar16 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar16 + 0x20), lVar29 != 0)) {
          plVar21 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar21 = plVar1;
          }
          uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar29,0,8);
              goto LAB_0171fd78;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar29,0,8);
        }
LAB_0171fd78:
        plVar1 = DAT_043f1798;
        plVar21 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar21 = plVar1;
        }
        uVar18 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar18 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar16,0,8);
            goto LAB_0171fc7c;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar16,0,8);
      }
    }
LAB_0171fc7c:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar25 = (char *)plVar14[0xc];
  sVar13 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0xf];
  sVar13 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x12];
  sVar13 = strlen(pcVar25);
  iVar10 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x15];
  sVar13 = strlen(pcVar25);
  iVar11 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x16];
  sVar13 = strlen(pcVar25);
  iVar12 = FUN_008f2c60(sVar13,pcVar25);
  lVar20 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       (((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0;
  plVar1 = DAT_043f1798;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar28 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
    }
    uVar18 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        goto LAB_0172000c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
  }
LAB_0172000c:
  lVar20 = local_d0;
  plVar1 = DAT_043f1798;
  if (((local_e0 & 1) != 0) && (local_d0 != 0)) {
    plVar28 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
    }
    uVar18 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        goto LAB_017200cc;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
  }
LAB_017200cc:
  pvVar30 = local_100;
  plVar1 = DAT_043f1798;
  if (((local_110 & 1) != 0) && (local_100 != (void *)0x0)) {
    plVar28 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
    }
    uVar18 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        goto LAB_01720188;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
  }
LAB_01720188:
  pvVar7 = local_130;
  plVar1 = DAT_043f1798;
  pvVar30 = local_160;
  if (((local_140 & 1) != 0) && (local_130 != (void *)0x0)) {
    plVar28 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
    }
    uVar18 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar7,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_160;
        goto joined_r0x01720244;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar7,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_160;
  }
joined_r0x01720244:
  DAT_043f1798 = plVar1;
  local_160 = pvVar30;
  if ((((byte)local_170 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar18 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        goto LAB_017202fc;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
  }
LAB_017202fc:
  uVar26 = *(undefined8 *)(uVar32 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar14)(plVar14,uVar26);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  pvVar30 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar30 = (void *)((long)&local_1d8 + 1);
  }
  FUN_001522a0(uVar26,pvVar30);
  pvVar30 = local_1c8;
  plVar1 = DAT_043f1798;
  if (((local_1d8 & 1) != 0) && (local_1c8 != (void *)0x0)) {
    plVar14 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    uVar32 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar32 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar14,pvVar30,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pvVar30,0,8);
  }
  return;
}


