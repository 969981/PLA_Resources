/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023cf978; name: FUN_023cf978
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_023cf978(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

{
  long *plVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  size_t sVar17;
  size_t sVar18;
  long *plVar19;
  long lVar20;
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
  ulong uVar31;
  undefined8 local_1a8;
  size_t local_1a0;
  void *local_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined1 local_188;
  undefined7 uStack_187;
  void *local_180;
  byte local_178;
  undefined7 uStack_177;
  undefined1 local_170;
  undefined7 uStack_16f;
  void *local_168;
  undefined7 local_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined7 local_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
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
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar26 = *param_1;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = (void *)0x0;
  sVar11 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar11 < 0x17) {
    local_1a8 = CONCAT71(local_1a8._1_7_,(char)((int)sVar11 << 1));
    pvVar30 = (void *)((ulong)&local_1a8 | 1);
    if (sVar11 != 0) goto LAB_023cfa04;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar13,8);
    local_1a8 = uVar13 | 1;
    local_1a0 = sVar11;
    local_198 = pvVar30;
LAB_023cfa04:
    memcpy(pvVar30,param_2,sVar11);
  }
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  plVar1 = DAT_043f1798;
  plVar12 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar12 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x100,8);
  plVar12[4] = 0;
  plVar28 = plVar12 + 1;
  *plVar28 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  plVar12[6] = (long)FUN_023d0c60;
  plVar12[7] = (long)FUN_023d0d10;
  *plVar12 = (long)&PTR_FUN_0425be70;
  plVar12[0xc] = (long)param_3;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  lVar20 = *param_4;
  lVar22 = param_4[1];
  plVar12[0xf] = (long)param_5;
  plVar12[0xd] = lVar20;
  plVar12[0xe] = lVar22;
  lVar20 = *param_6;
  lVar22 = param_6[1];
  plVar12[0x12] = (long)param_7;
  plVar12[0x10] = lVar20;
  plVar12[0x11] = lVar22;
  lVar20 = *param_8;
  lVar22 = param_8[1];
  plVar12[0x1f] = 0;
  plVar12[0x1d] = 0;
  *(undefined1 *)(plVar12 + 0x1e) = 0;
  plVar12[0x13] = lVar20;
  plVar12[0x14] = lVar22;
  plVar12[0x1b] = (long)&LAB_023d1470;
  plVar12[0x1c] = 0;
  plVar12[0x15] = (long)&DAT_0392da3c;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = (long)FUN_023d0ea0;
  plVar12[0x19] = (long)&LAB_023d1180;
  plVar12[0x1a] = (long)&LAB_023d1460;
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
    if (sVar11 != 0) goto LAB_023cfb58;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar13,8);
    local_80 = (string)((byte)uVar13 | 1);
    uStack_7f = (undefined7)(uVar13 >> 8);
    local_78 = (undefined1)sVar11;
    uStack_77 = (undefined7)(sVar11 >> 8);
    local_70 = pvVar30;
LAB_023cfb58:
    memcpy(pvVar30,param_3,sVar11);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_023d1474;
  puStack_120 = &LAB_023d14bc;
  sVar11 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_178 = (byte)((int)sVar11 << 1);
    pvVar30 = (void *)((ulong)&local_178 | 1);
    if (sVar11 != 0) goto LAB_023cfbfc;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar13,8);
    local_178 = (byte)uVar13 | 1;
    uStack_177 = (undefined7)(uVar13 >> 8);
    local_170 = (undefined1)sVar11;
    uStack_16f = (undefined7)(sVar11 >> 8);
    local_168 = pvVar30;
LAB_023cfbfc:
    memcpy(pvVar30,param_5,sVar11);
  }
  local_100 = local_168;
  uStack_107 = uStack_16f;
  uStack_108 = local_170;
  local_10f = uStack_177;
  local_110 = local_178;
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  uStack_159 = 0;
  uStack_158 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_023d1504;
  puStack_f0 = &LAB_023d154c;
  sVar11 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_190 = 0;
  uStack_18f = 0;
  local_188 = 0;
  uStack_187 = 0;
  local_180 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_190 = (byte)((int)sVar11 << 1);
    pvVar30 = (void *)((ulong)&local_190 | 1);
    if (sVar11 != 0) goto LAB_023cfc94;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar13,8);
    local_190 = (byte)uVar13 | 1;
    uStack_18f = (undefined7)(uVar13 >> 8);
    local_188 = (undefined1)sVar11;
    uStack_187 = (undefined7)(sVar11 >> 8);
    local_180 = pvVar30;
LAB_023cfc94:
    memcpy(pvVar30,param_7,sVar11);
  }
  *(undefined1 *)((long)pvVar30 + sVar11) = 0;
  local_e0 = local_190;
  local_df = uStack_18f;
  uStack_d8 = local_188;
  uStack_d7 = uStack_187;
  local_d0 = local_180;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_023d1594;
  puStack_c0 = &LAB_023d15dc;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  psVar27 = &local_140;
  local_88 = 0xffffffff;
  plVar1 = plVar12 + 3;
  local_98 = &LAB_023d1624;
  puStack_90 = &LAB_023d166c;
  uStack_a4 = 0;
  local_a0 = 0;
  do {
    uVar13 = *(ulong *)(psVar27 + 8);
    psVar2 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar2 = psVar27 + 1;
      uVar13 = (ulong)((byte)*psVar27 >> 1);
    }
    uVar13 = FUN_008e8ed4(&local_80,psVar2,uVar13);
    uVar31 = plVar12[2];
    if (uVar31 != 0) {
      uVar15 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        sVar11 = uVar31 - 1 & uVar13;
      }
      else {
        sVar11 = uVar13;
        if (uVar31 <= uVar13) {
          uVar4 = 0;
          if (uVar31 != 0) {
            uVar4 = uVar13 / uVar31;
          }
          sVar11 = uVar13 - uVar4 * uVar31;
        }
      }
      plVar19 = *(long **)(*plVar28 + sVar11 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar2 = psVar27 + 1;
        sVar18 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar2 = *(string **)(psVar27 + 0x10);
          sVar18 = *(size_t *)(psVar27 + 8);
        }
        if (uVar15 < 2) {
          if (sVar18 == 0) {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar31 - 1) != sVar11) break;
              uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar15 = plVar19[3];
              }
              if (uVar15 == 0) goto LAB_023cfe80;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar31 - 1) != sVar11) break;
              bVar3 = *(byte *)(plVar19 + 2);
              uVar15 = (ulong)(bVar3 >> 1);
              sVar17 = uVar15;
              if ((bVar3 & 1) != 0) {
                sVar17 = plVar19[3];
              }
              if (sVar17 == sVar18) {
                if ((bVar3 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar2;
                  while (*psVar21 == *psVar23) {
                    uVar15 = uVar15 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar15 == 0) goto LAB_023cfe80;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar19[4],psVar2,sVar18);
                  if (iVar7 == 0) goto LAB_023cfe80;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar18 == 0) {
          do {
            sVar18 = plVar19[1];
            if (sVar18 != uVar13) {
              if (uVar31 <= sVar18) {
                uVar15 = 0;
                if (uVar31 != 0) {
                  uVar15 = sVar18 / uVar31;
                }
                sVar18 = sVar18 - uVar15 * uVar31;
              }
              if (sVar18 != sVar11) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar15 = plVar19[3];
            }
            if (uVar15 == 0) goto LAB_023cfe80;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            sVar17 = plVar19[1];
            if (sVar17 != uVar13) {
              if (uVar31 <= sVar17) {
                uVar15 = 0;
                if (uVar31 != 0) {
                  uVar15 = sVar17 / uVar31;
                }
                sVar17 = sVar17 - uVar15 * uVar31;
              }
              if (sVar17 != sVar11) break;
            }
            bVar3 = *(byte *)(plVar19 + 2);
            uVar15 = (ulong)(bVar3 >> 1);
            sVar17 = uVar15;
            if ((bVar3 & 1) != 0) {
              sVar17 = plVar19[3];
            }
            if (sVar17 == sVar18) {
              if ((bVar3 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar2;
                while (*psVar21 == *psVar23) {
                  uVar15 = uVar15 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar15 == 0) goto LAB_023cfe80;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar19[4],psVar2,sVar18);
                if (iVar7 == 0) goto LAB_023cfe80;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar27);
    lVar20 = *(long *)(psVar27 + 0x18);
    lVar22 = *(long *)(psVar27 + 0x28);
    plVar19[6] = *(long *)(psVar27 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar31 == 0) || (*(float *)(plVar12 + 5) * (float)uVar31 < (float)(plVar12[4] + 1))) {
      uVar31 = (ulong)(uVar31 < 3 || (uVar31 & uVar31 - 1) != 0) | uVar31 << 1;
      uVar15 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar15 <= uVar31) {
        uVar15 = uVar31;
      }
      FUN_008e9ae4(plVar28,uVar15);
      uVar31 = plVar12[2];
      if ((uVar31 & uVar31 - 1) == 0) {
        sVar11 = uVar31 - 1 & uVar13;
      }
      else if (uVar13 < uVar31) {
        sVar11 = uVar13;
      }
      else {
        uVar15 = 0;
        if (uVar31 != 0) {
          uVar15 = uVar13 / uVar31;
        }
        sVar11 = uVar13 - uVar15 * uVar31;
      }
    }
    lVar20 = *plVar28;
    plVar16 = *(long **)(lVar20 + sVar11 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + sVar11 * 8) = plVar1;
      if (*plVar19 != 0) {
        uVar13 = *(ulong *)(*plVar19 + 8);
        if ((uVar31 & uVar31 - 1) == 0) {
          uVar13 = uVar13 & uVar31 - 1;
        }
        else if (uVar31 <= uVar13) {
          uVar15 = 0;
          if (uVar31 != 0) {
            uVar15 = uVar13 / uVar31;
          }
          uVar13 = uVar13 - uVar15 * uVar31;
        }
        plVar16 = (long *)(*plVar28 + uVar13 * 8);
        goto LAB_023cfe70;
      }
    }
    else {
      *plVar19 = *plVar16;
LAB_023cfe70:
      *plVar16 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_023cfe80:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != &local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar28,lVar22 + lVar20);
    if (lVar14 != 0) {
      FUN_008f2aec(&local_80,plVar28,lVar14);
      plVar1 = DAT_043f1798;
      lVar14 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar14 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
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
              goto LAB_023d0390;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_023d0390:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
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
            goto LAB_023d0348;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_023d0348:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar24 = (char *)plVar12[0xc];
  sVar11 = strlen(pcVar24);
  iVar7 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0xf];
  sVar11 = strlen(pcVar24);
  iVar8 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0x12];
  sVar11 = strlen(pcVar24);
  iVar9 = FUN_008f2c60(sVar11,pcVar24);
  pcVar24 = (char *)plVar12[0x15];
  sVar11 = strlen(pcVar24);
  iVar10 = FUN_008f2c60(sVar11,pcVar24);
  lVar20 = local_a0;
  *(bool *)(plVar12 + 0xb) = ((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  pvVar30 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
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
        plVar1 = DAT_043f1798;
        pvVar30 = local_d0;
        goto joined_r0x023d0548;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_d0;
  }
joined_r0x023d0548:
  pvVar6 = local_100;
  local_d0 = pvVar30;
  if (((local_e0 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
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
        FUN_02bcc824(plVar28,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_100;
        goto joined_r0x023d09a4;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_100;
  }
joined_r0x023d09a4:
  pvVar30 = local_130;
  local_100 = pvVar6;
  if (((local_110 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
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
        FUN_02bcc824(plVar28,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_130;
        goto joined_r0x023d06b0;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_130;
  }
joined_r0x023d06b0:
  DAT_043f1798 = plVar1;
  local_130 = pvVar30;
  if ((((byte)local_140 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
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
        FUN_02bcc824(plVar28,pvVar30,0,8);
        goto LAB_023d0760;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
  }
LAB_023d0760:
  uVar25 = *(undefined8 *)(lVar26 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pvVar30 = local_198;
  if ((local_1a8 & 1) == 0) {
    pvVar30 = (void *)((long)&local_1a8 + 1);
  }
  FUN_001522a0(uVar25,pvVar30);
  pvVar30 = local_198;
  plVar1 = DAT_043f1798;
  if (((local_1a8 & 1) != 0) && (local_198 != (void *)0x0)) {
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar1;
    }
    uVar13 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar13 & 1) != 0) {
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


