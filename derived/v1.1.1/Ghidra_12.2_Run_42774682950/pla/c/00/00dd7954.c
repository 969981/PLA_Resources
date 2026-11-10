/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dd7954; name: FUN_00dd7954
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00dd7954(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6)

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
  string *psVar26;
  long *plVar27;
  ulong uVar28;
  void *pvVar29;
  long lVar30;
  long lVar31;
  undefined8 local_180;
  size_t local_178;
  void *local_170;
  byte local_168;
  undefined7 uStack_167;
  undefined1 local_160;
  undefined7 uStack_15f;
  void *local_158;
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
  
  lVar31 = *param_1;
  local_180 = 0;
  local_178 = 0;
  local_170 = (void *)0x0;
  sVar11 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar11 < 0x17) {
    local_180 = CONCAT71(local_180._1_7_,(char)((int)sVar11 << 1));
    pvVar29 = (void *)((ulong)&local_180 | 1);
    if (sVar11 != 0) goto LAB_00dd79d0;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar13,8);
    local_180 = uVar13 | 1;
    local_178 = sVar11;
    local_170 = pvVar29;
LAB_00dd79d0:
    memcpy(pvVar29,param_2,sVar11);
  }
  *(undefined1 *)((long)pvVar29 + sVar11) = 0;
  plVar1 = DAT_043f1798;
  plVar12 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar12 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xf0,8);
  plVar12[4] = 0;
  plVar27 = plVar12 + 1;
  *plVar27 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  plVar12[6] = (long)FUN_00dd8b00;
  plVar12[7] = (long)FUN_00dd8bb0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  *plVar12 = (long)&PTR_FUN_041ee5a8;
  plVar12[0xc] = (long)param_3;
  plVar12[8] = 0;
  plVar12[9] = 0;
  lVar20 = *param_4;
  lVar22 = param_4[1];
  plVar12[0xf] = (long)param_5;
  plVar12[0xd] = lVar20;
  plVar12[0xe] = lVar22;
  lVar20 = *param_6;
  lVar22 = param_6[1];
  plVar12[0x1d] = 0;
  *(undefined1 *)(plVar12 + 0x1c) = 0;
  plVar12[0x10] = lVar20;
  plVar12[0x11] = lVar22;
  plVar12[0x12] = (long)&DAT_038ca815;
  plVar12[0x13] = (long)&DAT_0392da3c;
  plVar12[0x16] = (long)FUN_00dd8d40;
  plVar12[0x17] = (long)&LAB_00dd9020;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x18] = (long)&LAB_00dd9300;
  plVar12[0x19] = (long)&LAB_00dd9310;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
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
    pvVar29 = (void *)((ulong)&local_80 | 1);
    if (sVar11 != 0) goto LAB_00dd7b18;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar13,8);
    local_80 = (string)((byte)uVar13 | 1);
    uStack_7f = (undefined7)(uVar13 >> 8);
    local_78 = (undefined1)sVar11;
    uStack_77 = (undefined7)(sVar11 >> 8);
    local_70 = pvVar29;
LAB_00dd7b18:
    memcpy(pvVar29,param_3,sVar11);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar29 + sVar11) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_00dd9314;
  puStack_120 = &LAB_00dd935c;
  sVar11 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_168 = 0;
  uStack_167 = 0;
  local_160 = 0;
  uStack_15f = 0;
  local_158 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_168 = (byte)((int)sVar11 << 1);
    pvVar29 = (void *)((ulong)&local_168 | 1);
    if (sVar11 != 0) goto LAB_00dd7bbc;
  }
  else {
    uVar13 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar13,8);
    local_168 = (byte)uVar13 | 1;
    uStack_167 = (undefined7)(uVar13 >> 8);
    local_160 = (undefined1)sVar11;
    uStack_15f = (undefined7)(sVar11 >> 8);
    local_158 = pvVar29;
LAB_00dd7bbc:
    memcpy(pvVar29,param_5,sVar11);
  }
  *(undefined1 *)((long)pvVar29 + sVar11) = 0;
  local_110 = local_168;
  local_10f = uStack_167;
  local_e8 = 0xffffffff;
  uStack_108 = local_160;
  uStack_107 = uStack_15f;
  local_100 = local_158;
  local_f8 = &LAB_00dd93a4;
  puStack_f0 = &LAB_00dd93ec;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_00dd947c;
  psVar26 = &local_140;
  local_d0 = 0;
  puStack_c8 = &LAB_00dd9434;
  local_b0 = 8;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  plVar1 = plVar12 + 3;
  local_88 = 0xffffffff;
  local_a0 = 0;
  local_98 = &LAB_00dd94c4;
  puStack_90 = &LAB_00dd950c;
  do {
    uVar13 = *(ulong *)(psVar26 + 8);
    psVar2 = *(string **)(psVar26 + 0x10);
    if (((byte)*psVar26 & 1) == 0) {
      psVar2 = psVar26 + 1;
      uVar13 = (ulong)((byte)*psVar26 >> 1);
    }
    uVar13 = FUN_008e8ed4(&local_80,psVar2,uVar13);
    uVar28 = plVar12[2];
    if (uVar28 != 0) {
      uVar15 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        sVar11 = uVar28 - 1 & uVar13;
      }
      else {
        sVar11 = uVar13;
        if (uVar28 <= uVar13) {
          uVar4 = 0;
          if (uVar28 != 0) {
            uVar4 = uVar13 / uVar28;
          }
          sVar11 = uVar13 - uVar4 * uVar28;
        }
      }
      plVar19 = *(long **)(*plVar27 + sVar11 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar2 = psVar26 + 1;
        sVar18 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar2 = *(string **)(psVar26 + 0x10);
          sVar18 = *(size_t *)(psVar26 + 8);
        }
        if (uVar15 < 2) {
          if (sVar18 == 0) {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar28 - 1) != sVar11) break;
              uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar15 = plVar19[3];
              }
              if (uVar15 == 0) goto LAB_00dd7de0;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar28 - 1) != sVar11) break;
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
                    if (uVar15 == 0) goto LAB_00dd7de0;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar19[4],psVar2,sVar18);
                  if (iVar7 == 0) goto LAB_00dd7de0;
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
              if (uVar28 <= sVar18) {
                uVar15 = 0;
                if (uVar28 != 0) {
                  uVar15 = sVar18 / uVar28;
                }
                sVar18 = sVar18 - uVar15 * uVar28;
              }
              if (sVar18 != sVar11) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar15 = plVar19[3];
            }
            if (uVar15 == 0) goto LAB_00dd7de0;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            sVar17 = plVar19[1];
            if (sVar17 != uVar13) {
              if (uVar28 <= sVar17) {
                uVar15 = 0;
                if (uVar28 != 0) {
                  uVar15 = sVar17 / uVar28;
                }
                sVar17 = sVar17 - uVar15 * uVar28;
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
                  if (uVar15 == 0) goto LAB_00dd7de0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar19[4],psVar2,sVar18);
                if (iVar7 == 0) goto LAB_00dd7de0;
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
    std::string::string((string *)(plVar19 + 2),psVar26);
    lVar20 = *(long *)(psVar26 + 0x18);
    lVar22 = *(long *)(psVar26 + 0x28);
    plVar19[6] = *(long *)(psVar26 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar28 == 0) || (*(float *)(plVar12 + 5) * (float)uVar28 < (float)(plVar12[4] + 1))) {
      uVar28 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
      uVar15 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar15 <= uVar28) {
        uVar15 = uVar28;
      }
      FUN_008e9ae4(plVar27,uVar15);
      uVar28 = plVar12[2];
      if ((uVar28 & uVar28 - 1) == 0) {
        sVar11 = uVar28 - 1 & uVar13;
      }
      else if (uVar13 < uVar28) {
        sVar11 = uVar13;
      }
      else {
        uVar15 = 0;
        if (uVar28 != 0) {
          uVar15 = uVar13 / uVar28;
        }
        sVar11 = uVar13 - uVar15 * uVar28;
      }
    }
    lVar20 = *plVar27;
    plVar16 = *(long **)(lVar20 + sVar11 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + sVar11 * 8) = plVar1;
      if (*plVar19 != 0) {
        uVar13 = *(ulong *)(*plVar19 + 8);
        if ((uVar28 & uVar28 - 1) == 0) {
          uVar13 = uVar13 & uVar28 - 1;
        }
        else if (uVar28 <= uVar13) {
          uVar15 = 0;
          if (uVar28 != 0) {
            uVar15 = uVar13 / uVar28;
          }
          uVar13 = uVar13 - uVar15 * uVar28;
        }
        plVar16 = (long *)(*plVar27 + uVar13 * 8);
        goto LAB_00dd7dd0;
      }
    }
    else {
      *plVar19 = *plVar16;
LAB_00dd7dd0:
      *plVar16 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_00dd7de0:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != &local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar27,lVar22 + lVar20);
    if (lVar14 != 0) {
      FUN_008f2aec(&local_80,plVar27,lVar14);
      plVar1 = DAT_043f1798;
      lVar14 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar14 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar30 = *(long *)(lVar14 + 0x20), lVar30 != 0)) {
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
              FUN_02bcc824(plVar19,lVar30,0,8);
              goto LAB_00dd82b4;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar30,0,8);
        }
LAB_00dd82b4:
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
            goto LAB_00dd8218;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_00dd8218:
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
  pcVar24 = (char *)plVar12[0x13];
  sVar11 = strlen(pcVar24);
  iVar10 = FUN_008f2c60(sVar11,pcVar24);
  lVar22 = local_a0;
  *(bool *)(plVar12 + 0xb) = ((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  lVar20 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar13 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar22,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_d0;
        goto joined_r0x00dd8474;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar22,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_d0;
  }
joined_r0x00dd8474:
  pvVar29 = local_100;
  local_d0 = lVar20;
  if (((local_e0 & 1) != 0) && (lVar20 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar13 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar20,0,8);
        plVar1 = DAT_043f1798;
        pvVar29 = local_100;
        goto joined_r0x00dd8854;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar20,0,8);
    plVar1 = DAT_043f1798;
    pvVar29 = local_100;
  }
joined_r0x00dd8854:
  pvVar6 = local_130;
  local_100 = pvVar29;
  if (((local_110 & 1) != 0) && (pvVar29 != (void *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar13 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar29,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_130;
        goto joined_r0x00dd85dc;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar29,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_130;
  }
joined_r0x00dd85dc:
  DAT_043f1798 = plVar1;
  local_130 = pvVar6;
  if ((((byte)local_140 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar13 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar6,0,8);
        goto LAB_00dd868c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar6,0,8);
  }
LAB_00dd868c:
  uVar25 = *(undefined8 *)(lVar31 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pvVar29 = local_170;
  if ((local_180 & 1) == 0) {
    pvVar29 = (void *)((long)&local_180 + 1);
  }
  FUN_001522a0(uVar25,pvVar29);
  pvVar29 = local_170;
  plVar1 = DAT_043f1798;
  if (((local_180 & 1) != 0) && (local_170 != (void *)0x0)) {
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
        FUN_02bcc824(plVar12,pvVar29,0,8);
        return;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar29,0,8);
  }
  return;
}


