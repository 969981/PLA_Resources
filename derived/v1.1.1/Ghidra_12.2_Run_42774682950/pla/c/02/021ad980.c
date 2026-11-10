/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021ad980; name: FUN_021ad980
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_021ad980(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
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
  size_t sVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  char *pcVar23;
  undefined8 uVar24;
  string *psVar25;
  long *plVar26;
  long lVar27;
  void *pvVar28;
  void *pvVar29;
  long lVar30;
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
  
  lVar30 = *param_1;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = (void *)0x0;
  sVar10 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar10 < 0x17) {
    local_1a8 = CONCAT71(local_1a8._1_7_,(char)((int)sVar10 << 1));
    pvVar28 = (void *)((ulong)&local_1a8 | 1);
    if (sVar10 != 0) goto LAB_021ada08;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar11 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar11 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar14,8);
    local_1a8 = uVar14 | 1;
    local_1a0 = sVar10;
    local_198 = pvVar28;
LAB_021ada08:
    memcpy(pvVar28,param_2,sVar10);
  }
  *(undefined1 *)((long)pvVar28 + sVar10) = 0;
  plVar1 = DAT_043f1798;
  plVar11 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar11 = plVar1;
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x100,8);
  plVar11[4] = 0;
  plVar26 = plVar11 + 1;
  *plVar26 = 0;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[10] = 0;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  plVar11[6] = (long)FUN_021aec40;
  plVar11[7] = (long)FUN_021aecf0;
  *plVar11 = (long)&PTR_FUN_0425b6f0;
  plVar11[0xc] = (long)param_3;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  lVar18 = *param_4;
  lVar21 = param_4[1];
  plVar11[0xf] = (long)param_5;
  plVar11[0xd] = lVar18;
  plVar11[0xe] = lVar21;
  lVar18 = param_6[1];
  plVar11[0x10] = *param_6;
  plVar11[0x11] = lVar18;
  plVar11[0x12] = (long)param_7;
  lVar18 = *param_8;
  lVar21 = param_8[1];
  plVar11[0x1f] = 0;
  plVar11[0x1d] = 0;
  *(undefined1 *)(plVar11 + 0x1e) = 0;
  plVar11[0x1b] = (long)&LAB_021af450;
  plVar11[0x1c] = 0;
  plVar11[0x13] = lVar18;
  plVar11[0x14] = lVar21;
  plVar11[0x15] = (long)&DAT_0392da3c;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[0x18] = (long)FUN_021aee80;
  plVar11[0x19] = (long)&LAB_021af160;
  plVar11[0x1a] = (long)&LAB_021af440;
  sVar10 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_80 = SUB41((int)sVar10 << 1,0);
    pvVar28 = (void *)((ulong)&local_80 | 1);
    if (sVar10 != 0) goto LAB_021adb5c;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar14,8);
    local_80 = (string)((byte)uVar14 | 1);
    uStack_7f = (undefined7)(uVar14 >> 8);
    local_78 = (undefined1)sVar10;
    uStack_77 = (undefined7)(sVar10 >> 8);
    local_70 = pvVar28;
LAB_021adb5c:
    memcpy(pvVar28,param_3,sVar10);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar28 + sVar10) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_021af454;
  puStack_120 = &LAB_021af49c;
  sVar10 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_178 = (byte)((int)sVar10 << 1);
    pvVar28 = (void *)((ulong)&local_178 | 1);
    if (sVar10 != 0) goto LAB_021adc00;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar14,8);
    local_178 = (byte)uVar14 | 1;
    uStack_177 = (undefined7)(uVar14 >> 8);
    local_170 = (undefined1)sVar10;
    uStack_16f = (undefined7)(sVar10 >> 8);
    local_168 = pvVar28;
LAB_021adc00:
    memcpy(pvVar28,param_5,sVar10);
  }
  local_100 = local_168;
  uStack_107 = uStack_16f;
  uStack_108 = local_170;
  local_10f = uStack_177;
  local_110 = local_178;
  *(undefined1 *)((long)pvVar28 + sVar10) = 0;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  uStack_159 = 0;
  uStack_158 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_021af4e4;
  puStack_f0 = &LAB_021af52c;
  sVar10 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_190 = 0;
  uStack_18f = 0;
  local_188 = 0;
  uStack_187 = 0;
  local_180 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_190 = (byte)((int)sVar10 << 1);
    pvVar28 = (void *)((ulong)&local_190 | 1);
    if (sVar10 != 0) goto LAB_021adc98;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar14,8);
    local_190 = (byte)uVar14 | 1;
    uStack_18f = (undefined7)(uVar14 >> 8);
    local_188 = (undefined1)sVar10;
    uStack_187 = (undefined7)(sVar10 >> 8);
    local_180 = pvVar28;
LAB_021adc98:
    memcpy(pvVar28,param_7,sVar10);
  }
  *(undefined1 *)((long)pvVar28 + sVar10) = 0;
  local_e0 = local_190;
  local_df = uStack_18f;
  uStack_d8 = local_188;
  uStack_d7 = uStack_187;
  local_d0 = local_180;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_021af574;
  puStack_c0 = &LAB_021af5bc;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  psVar25 = &local_140;
  local_88 = 0xffffffff;
  plVar1 = plVar11 + 3;
  local_98 = &LAB_021af604;
  puStack_90 = &LAB_021af64c;
  uStack_a4 = 0;
  local_a0 = 0;
  do {
    uVar14 = *(ulong *)(psVar25 + 8);
    psVar3 = *(string **)(psVar25 + 0x10);
    if (((byte)*psVar25 & 1) == 0) {
      psVar3 = psVar25 + 1;
      uVar14 = (ulong)((byte)*psVar25 >> 1);
    }
    pvVar12 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar14);
    pvVar29 = (void *)plVar11[2];
    if (pvVar29 != (void *)0x0) {
      uVar14 = (long)pvVar29 - ((ulong)pvVar29 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        pvVar28 = (void *)((long)pvVar29 - 1U & (ulong)pvVar12);
      }
      else {
        pvVar28 = pvVar12;
        if (pvVar29 <= pvVar12) {
          uVar19 = 0;
          if (pvVar29 != (void *)0x0) {
            uVar19 = (ulong)pvVar12 / (ulong)pvVar29;
          }
          pvVar28 = (void *)((long)pvVar12 - uVar19 * (long)pvVar29);
        }
      }
      plVar17 = *(long **)(*plVar26 + (long)pvVar28 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar3 = psVar25 + 1;
        sVar10 = (ulong)((byte)*psVar25 >> 1);
        if (((byte)*psVar25 & 1) != 0) {
          psVar3 = *(string **)(psVar25 + 0x10);
          sVar10 = *(size_t *)(psVar25 + 8);
        }
        if (uVar14 < 2) {
          if (sVar10 == 0) {
            do {
              if ((void *)plVar17[1] != pvVar12 &&
                  (void *)((ulong)plVar17[1] & (long)pvVar29 - 1U) != pvVar28) break;
              uVar14 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar14 = plVar17[3];
              }
              if (uVar14 == 0) goto LAB_021adfc0;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar17[1] != pvVar12 &&
                  (void *)((ulong)plVar17[1] & (long)pvVar29 - 1U) != pvVar28) break;
              bVar4 = *(byte *)(plVar17 + 2);
              uVar14 = (ulong)(bVar4 >> 1);
              sVar2 = uVar14;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar17[3];
              }
              if (sVar2 == sVar10) {
                if ((bVar4 & 1) == 0) {
                  psVar20 = (string *)((long)plVar17 + 0x11);
                  psVar22 = psVar3;
                  while (*psVar20 == *psVar22) {
                    uVar14 = uVar14 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar14 == 0) goto LAB_021adfc0;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar17[4],psVar3,sVar10);
                  if (iVar6 == 0) goto LAB_021adfc0;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar10 == 0) {
          do {
            pvVar15 = (void *)plVar17[1];
            if (pvVar15 != pvVar12) {
              if (pvVar29 <= pvVar15) {
                uVar14 = 0;
                if (pvVar29 != (void *)0x0) {
                  uVar14 = (ulong)pvVar15 / (ulong)pvVar29;
                }
                pvVar15 = (void *)((long)pvVar15 - uVar14 * (long)pvVar29);
              }
              if (pvVar15 != pvVar28) break;
            }
            uVar14 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar14 = plVar17[3];
            }
            if (uVar14 == 0) goto LAB_021adfc0;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            pvVar15 = (void *)plVar17[1];
            if (pvVar15 != pvVar12) {
              if (pvVar29 <= pvVar15) {
                uVar14 = 0;
                if (pvVar29 != (void *)0x0) {
                  uVar14 = (ulong)pvVar15 / (ulong)pvVar29;
                }
                pvVar15 = (void *)((long)pvVar15 - uVar14 * (long)pvVar29);
              }
              if (pvVar15 != pvVar28) break;
            }
            bVar4 = *(byte *)(plVar17 + 2);
            uVar14 = (ulong)(bVar4 >> 1);
            sVar2 = uVar14;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar17[3];
            }
            if (sVar2 == sVar10) {
              if ((bVar4 & 1) == 0) {
                psVar20 = (string *)((long)plVar17 + 0x11);
                psVar22 = psVar3;
                while (*psVar20 == *psVar22) {
                  uVar14 = uVar14 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar14 == 0) goto LAB_021adfc0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar17[4],psVar3,sVar10);
                if (iVar6 == 0) goto LAB_021adfc0;
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
    lVar21 = *(long *)(psVar25 + 0x28);
    plVar17[6] = *(long *)(psVar25 + 0x20);
    plVar17[7] = lVar21;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = (long)pvVar12;
    if ((pvVar29 == (void *)0x0) ||
       (*(float *)(plVar11 + 5) * (float)pvVar29 < (float)(plVar11[4] + 1))) {
      uVar14 = (ulong)(pvVar29 < (void *)0x3 || ((ulong)pvVar29 & (long)pvVar29 - 1U) != 0) |
               (long)pvVar29 << 1;
      uVar19 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar19 <= uVar14) {
        uVar19 = uVar14;
      }
      FUN_008e9ae4(plVar26,uVar19);
      pvVar29 = (void *)plVar11[2];
      if (((ulong)pvVar29 & (long)pvVar29 - 1U) == 0) {
        pvVar28 = (void *)((long)pvVar29 - 1U & (ulong)pvVar12);
      }
      else if (pvVar12 < pvVar29) {
        pvVar28 = pvVar12;
      }
      else {
        uVar14 = 0;
        if (pvVar29 != (void *)0x0) {
          uVar14 = (ulong)pvVar12 / (ulong)pvVar29;
        }
        pvVar28 = (void *)((long)pvVar12 - uVar14 * (long)pvVar29);
      }
    }
    lVar18 = *plVar26;
    plVar16 = *(long **)(lVar18 + (long)pvVar28 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar17 = *plVar1;
      *plVar1 = (long)plVar17;
      *(long **)(lVar18 + (long)pvVar28 * 8) = plVar1;
      if (*plVar17 != 0) {
        pvVar12 = *(void **)(*plVar17 + 8);
        if (((ulong)pvVar29 & (long)pvVar29 - 1U) == 0) {
          pvVar12 = (void *)((ulong)pvVar12 & (long)pvVar29 - 1U);
        }
        else if (pvVar29 <= pvVar12) {
          uVar14 = 0;
          if (pvVar29 != (void *)0x0) {
            uVar14 = (ulong)pvVar12 / (ulong)pvVar29;
          }
          pvVar12 = (void *)((long)pvVar12 - uVar14 * (long)pvVar29);
        }
        plVar16 = (long *)(*plVar26 + (long)pvVar12 * 8);
        goto LAB_021adfb0;
      }
    }
    else {
      *plVar17 = *plVar16;
LAB_021adfb0:
      *plVar16 = (long)plVar17;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_021adfc0:
    psVar25 = psVar25 + 0x30;
  } while (psVar25 != &local_80);
  lVar21 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar26,lVar21 + lVar18);
    if (lVar13 != 0) {
      FUN_008f2aec(&local_80,plVar26,lVar13);
      plVar1 = DAT_043f1798;
      lVar13 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar13 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar13 + 0x10) & 1) != 0)) &&
           (lVar27 = *(long *)(lVar13 + 0x20), lVar27 != 0)) {
          plVar17 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar17 = plVar1;
          }
          uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar14 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar27,0,8);
              goto LAB_021ae374;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar27,0,8);
        }
LAB_021ae374:
        plVar1 = DAT_043f1798;
        plVar17 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar17 = plVar1;
        }
        uVar14 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar13,0,8);
            goto LAB_021ae32c;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,0,8);
      }
    }
LAB_021ae32c:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar23 = (char *)plVar11[0xc];
  sVar10 = strlen(pcVar23);
  iVar6 = FUN_008f2c60(sVar10,pcVar23);
  pcVar23 = (char *)plVar11[0xf];
  sVar10 = strlen(pcVar23);
  iVar7 = FUN_008f2c60(sVar10,pcVar23);
  pcVar23 = (char *)plVar11[0x12];
  sVar10 = strlen(pcVar23);
  iVar8 = FUN_008f2c60(sVar10,pcVar23);
  pcVar23 = (char *)plVar11[0x15];
  sVar10 = strlen(pcVar23);
  iVar9 = FUN_008f2c60(sVar10,pcVar23);
  lVar18 = local_a0;
  *(bool *)(plVar11 + 0xb) = ((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0;
  plVar1 = DAT_043f1798;
  pvVar28 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    uVar14 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pvVar28 = local_d0;
        goto joined_r0x021ae52c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pvVar28 = local_d0;
  }
joined_r0x021ae52c:
  pvVar12 = local_100;
  local_d0 = pvVar28;
  if (((local_e0 & 1) != 0) && (pvVar28 != (void *)0x0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar14 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,pvVar28,0,8);
        plVar1 = DAT_043f1798;
        pvVar12 = local_100;
        goto joined_r0x021ae988;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pvVar28,0,8);
    plVar1 = DAT_043f1798;
    pvVar12 = local_100;
  }
joined_r0x021ae988:
  pvVar28 = local_130;
  local_100 = pvVar12;
  if (((local_110 & 1) != 0) && (pvVar12 != (void *)0x0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar14 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,pvVar12,0,8);
        plVar1 = DAT_043f1798;
        pvVar28 = local_130;
        goto joined_r0x021ae694;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pvVar12,0,8);
    plVar1 = DAT_043f1798;
    pvVar28 = local_130;
  }
joined_r0x021ae694:
  DAT_043f1798 = plVar1;
  local_130 = pvVar28;
  if ((((byte)local_140 & 1) != 0) && (pvVar28 != (void *)0x0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar14 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,pvVar28,0,8);
        goto LAB_021ae744;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pvVar28,0,8);
  }
LAB_021ae744:
  uVar24 = *(undefined8 *)(lVar30 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar11)(plVar11,uVar24);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  pvVar28 = local_198;
  if ((local_1a8 & 1) == 0) {
    pvVar28 = (void *)((long)&local_1a8 + 1);
  }
  FUN_001522a0(uVar24,pvVar28);
  pvVar28 = local_198;
  plVar1 = DAT_043f1798;
  if (((local_1a8 & 1) != 0) && (local_198 != (void *)0x0)) {
    plVar11 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar11 = plVar1;
    }
    uVar14 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar11,pvVar28,0,8);
        return;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar28,0,8);
  }
  return;
}


