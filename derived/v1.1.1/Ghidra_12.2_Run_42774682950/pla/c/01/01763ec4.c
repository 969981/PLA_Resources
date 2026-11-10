/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01763ec4; name: FUN_01763ec4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01763ec4(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  string *psVar16;
  long lVar17;
  long lVar18;
  string *psVar19;
  undefined8 uVar20;
  long lVar21;
  string *psVar22;
  long *plVar23;
  long lVar24;
  void *pvVar25;
  void *pvVar26;
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
  
  lVar21 = *param_1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  sVar7 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar7 < 0x17) {
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)sVar7 << 1));
    pvVar25 = (void *)((ulong)&local_1d8 | 1);
    if (sVar7 != 0) goto LAB_01763f50;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar11,8);
    local_1d8 = uVar11 | 1;
    local_1d0 = sVar7;
    local_1c8 = pvVar25;
LAB_01763f50:
    memcpy(pvVar25,param_2,sVar7);
  }
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  plVar1 = DAT_043f1798;
  plVar8 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar8 = plVar1;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xf0,8);
  plVar8[4] = 0;
  plVar23 = plVar8 + 1;
  *plVar23 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[10] = 0;
  plVar8[6] = (long)FUN_017652b0;
  plVar8[7] = (long)FUN_01765360;
  *plVar8 = (long)&PTR_FUN_04225148;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0xc] = (long)param_3;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[0xd] = *param_4;
  plVar8[0xe] = (long)param_5;
  plVar8[0xf] = *param_6;
  plVar8[0x10] = (long)param_7;
  lVar17 = *param_8;
  plVar8[0x1d] = 0;
  plVar8[0x13] = (long)&DAT_0392da3c;
  plVar8[0x14] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x11] = lVar17;
  plVar8[0x12] = (long)&DAT_038ca815;
  plVar8[0x15] = 0;
  plVar8[0x16] = (long)FUN_017654f0;
  plVar8[0x17] = (long)&LAB_017657d0;
  plVar8[0x18] = (long)&LAB_01765ab0;
  plVar8[0x19] = (long)&LAB_01765ac0;
  *(undefined1 *)(plVar8 + 0x1c) = 1;
  sVar7 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_80 = SUB41((int)sVar7 << 1,0);
    pvVar25 = (void *)((ulong)&local_80 | 1);
    if (sVar7 != 0) goto LAB_017640a8;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_80 = (string)((byte)uVar11 | 1);
    uStack_7f = (undefined7)(uVar11 >> 8);
    local_78 = (undefined1)sVar7;
    uStack_77 = (undefined7)(sVar7 >> 8);
    local_70 = pvVar25;
LAB_017640a8:
    memcpy(pvVar25,param_3,sVar7);
  }
  local_160 = local_70;
  uStack_167 = uStack_77;
  uStack_168 = local_78;
  local_16f = uStack_7f;
  local_170 = local_80;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_01765ac4;
  puStack_150 = &LAB_01765ae0;
  sVar7 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_1a8 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_1a8 | 1);
    if (sVar7 != 0) goto LAB_0176414c;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_1a8 = (byte)uVar11 | 1;
    uStack_1a7 = (undefined7)(uVar11 >> 8);
    local_1a0 = (undefined1)sVar7;
    uStack_19f = (undefined7)(sVar7 >> 8);
    local_198 = pvVar25;
LAB_0176414c:
    memcpy(pvVar25,param_5,sVar7);
  }
  local_130 = local_198;
  uStack_137 = uStack_19f;
  uStack_138 = local_1a0;
  local_13f = uStack_1a7;
  local_140 = local_1a8;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_01765afc;
  puStack_120 = &LAB_01765b18;
  sVar7 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_1c0 = 0;
  uStack_1bf = 0;
  local_1b8 = 0;
  uStack_1b7 = 0;
  local_1b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_1c0 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_1c0 | 1);
    if (sVar7 != 0) goto LAB_017641e4;
  }
  else {
    uVar11 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar11,8);
    local_1c0 = (byte)uVar11 | 1;
    uStack_1bf = (undefined7)(uVar11 >> 8);
    local_1b8 = (undefined1)sVar7;
    uStack_1b7 = (undefined7)(sVar7 >> 8);
    local_1b0 = pvVar25;
LAB_017641e4:
    memcpy(pvVar25,param_7,sVar7);
  }
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_110 = local_1c0;
  local_10f = uStack_1bf;
  uStack_108 = local_1b8;
  uStack_107 = uStack_1b7;
  local_100 = local_1b0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_01765b34;
  puStack_f0 = &LAB_01765b50;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_01765bb4;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_01765b6c;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  psVar22 = &local_170;
  local_88 = 0xffffffff;
  plVar1 = plVar8 + 3;
  local_a0 = 0;
  local_98 = &LAB_01765bfc;
  puStack_90 = &LAB_01765c44;
  do {
    uVar11 = *(ulong *)(psVar22 + 8);
    psVar3 = *(string **)(psVar22 + 0x10);
    if (((byte)*psVar22 & 1) == 0) {
      psVar3 = psVar22 + 1;
      uVar11 = (ulong)((byte)*psVar22 >> 1);
    }
    pvVar9 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar11);
    pvVar26 = (void *)plVar8[2];
    if (pvVar26 != (void *)0x0) {
      uVar11 = (long)pvVar26 - ((ulong)pvVar26 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        pvVar25 = (void *)((long)pvVar26 - 1U & (ulong)pvVar9);
      }
      else {
        pvVar25 = pvVar9;
        if (pvVar26 <= pvVar9) {
          uVar15 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar15 = (ulong)pvVar9 / (ulong)pvVar26;
          }
          pvVar25 = (void *)((long)pvVar9 - uVar15 * (long)pvVar26);
        }
      }
      plVar14 = *(long **)(*plVar23 + (long)pvVar25 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        psVar3 = psVar22 + 1;
        sVar7 = (ulong)((byte)*psVar22 >> 1);
        if (((byte)*psVar22 & 1) != 0) {
          psVar3 = *(string **)(psVar22 + 0x10);
          sVar7 = *(size_t *)(psVar22 + 8);
        }
        if (uVar11 < 2) {
          if (sVar7 == 0) {
            do {
              if ((void *)plVar14[1] != pvVar9 &&
                  (void *)((ulong)plVar14[1] & (long)pvVar26 - 1U) != pvVar25) break;
              uVar11 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
              if ((*(byte *)(plVar14 + 2) & 1) != 0) {
                uVar11 = plVar14[3];
              }
              if (uVar11 == 0) goto LAB_0176455c;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar14[1] != pvVar9 &&
                  (void *)((ulong)plVar14[1] & (long)pvVar26 - 1U) != pvVar25) break;
              bVar4 = *(byte *)(plVar14 + 2);
              uVar11 = (ulong)(bVar4 >> 1);
              sVar2 = uVar11;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar14[3];
              }
              if (sVar2 == sVar7) {
                if ((bVar4 & 1) == 0) {
                  psVar16 = (string *)((long)plVar14 + 0x11);
                  psVar19 = psVar3;
                  while (*psVar16 == *psVar19) {
                    uVar11 = uVar11 - 1;
                    psVar16 = psVar16 + 1;
                    psVar19 = psVar19 + 1;
                    if (uVar11 == 0) goto LAB_0176455c;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar14[4],psVar3,sVar7);
                  if (iVar6 == 0) goto LAB_0176455c;
                }
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
        else if (sVar7 == 0) {
          do {
            pvVar12 = (void *)plVar14[1];
            if (pvVar12 != pvVar9) {
              if (pvVar26 <= pvVar12) {
                uVar11 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar11 = (ulong)pvVar12 / (ulong)pvVar26;
                }
                pvVar12 = (void *)((long)pvVar12 - uVar11 * (long)pvVar26);
              }
              if (pvVar12 != pvVar25) break;
            }
            uVar11 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
            if ((*(byte *)(plVar14 + 2) & 1) != 0) {
              uVar11 = plVar14[3];
            }
            if (uVar11 == 0) goto LAB_0176455c;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            pvVar12 = (void *)plVar14[1];
            if (pvVar12 != pvVar9) {
              if (pvVar26 <= pvVar12) {
                uVar11 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar11 = (ulong)pvVar12 / (ulong)pvVar26;
                }
                pvVar12 = (void *)((long)pvVar12 - uVar11 * (long)pvVar26);
              }
              if (pvVar12 != pvVar25) break;
            }
            bVar4 = *(byte *)(plVar14 + 2);
            uVar11 = (ulong)(bVar4 >> 1);
            sVar2 = uVar11;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar14[3];
            }
            if (sVar2 == sVar7) {
              if ((bVar4 & 1) == 0) {
                psVar16 = (string *)((long)plVar14 + 0x11);
                psVar19 = psVar3;
                while (*psVar16 == *psVar19) {
                  uVar11 = uVar11 - 1;
                  psVar16 = psVar16 + 1;
                  psVar19 = psVar19 + 1;
                  if (uVar11 == 0) goto LAB_0176455c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar14[4],psVar3,sVar7);
                if (iVar6 == 0) goto LAB_0176455c;
              }
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    plVar14 = DAT_043f1798;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar14;
    }
    plVar14 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    std::string::string((string *)(plVar14 + 2),psVar22);
    lVar17 = *(long *)(psVar22 + 0x18);
    lVar18 = *(long *)(psVar22 + 0x28);
    plVar14[6] = *(long *)(psVar22 + 0x20);
    plVar14[7] = lVar18;
    plVar14[5] = lVar17;
    *plVar14 = 0;
    plVar14[1] = (long)pvVar9;
    if ((pvVar26 == (void *)0x0) ||
       (*(float *)(plVar8 + 5) * (float)pvVar26 < (float)(plVar8[4] + 1))) {
      uVar11 = (ulong)(pvVar26 < (void *)0x3 || ((ulong)pvVar26 & (long)pvVar26 - 1U) != 0) |
               (long)pvVar26 << 1;
      uVar15 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar15 <= uVar11) {
        uVar15 = uVar11;
      }
      FUN_008e9ae4(plVar23,uVar15);
      pvVar26 = (void *)plVar8[2];
      if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
        pvVar25 = (void *)((long)pvVar26 - 1U & (ulong)pvVar9);
      }
      else if (pvVar9 < pvVar26) {
        pvVar25 = pvVar9;
      }
      else {
        uVar11 = 0;
        if (pvVar26 != (void *)0x0) {
          uVar11 = (ulong)pvVar9 / (ulong)pvVar26;
        }
        pvVar25 = (void *)((long)pvVar9 - uVar11 * (long)pvVar26);
      }
    }
    lVar17 = *plVar23;
    plVar13 = *(long **)(lVar17 + (long)pvVar25 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar14 = *plVar1;
      *plVar1 = (long)plVar14;
      *(long **)(lVar17 + (long)pvVar25 * 8) = plVar1;
      if (*plVar14 != 0) {
        pvVar9 = *(void **)(*plVar14 + 8);
        if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
          pvVar9 = (void *)((ulong)pvVar9 & (long)pvVar26 - 1U);
        }
        else if (pvVar26 <= pvVar9) {
          uVar11 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar11 = (ulong)pvVar9 / (ulong)pvVar26;
          }
          pvVar9 = (void *)((long)pvVar9 - uVar11 * (long)pvVar26);
        }
        plVar13 = (long *)(*plVar23 + (long)pvVar9 * 8);
        goto LAB_0176454c;
      }
    }
    else {
      *plVar14 = *plVar13;
LAB_0176454c:
      *plVar13 = (long)plVar14;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_0176455c:
    psVar22 = psVar22 + 0x30;
  } while (psVar22 != &local_80);
  lVar18 = FUN_008cca50();
  lVar17 = 0;
  do {
    lVar10 = FUN_008e8c90(plVar23,lVar18 + lVar17);
    if (lVar10 != 0) {
      FUN_008f2aec(&local_80,plVar23,lVar10);
      plVar1 = DAT_043f1798;
      lVar10 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar10 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) &&
           (lVar24 = *(long *)(lVar10 + 0x20), lVar24 != 0)) {
          plVar14 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar14 = plVar1;
          }
          uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar24,0,8);
              goto LAB_01764970;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar24,0,8);
        }
LAB_01764970:
        plVar1 = DAT_043f1798;
        plVar14 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar14 = plVar1;
        }
        uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar10,0,8);
            goto LAB_017648d4;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar10,0,8);
      }
    }
LAB_017648d4:
    lVar10 = local_a0;
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0x300);
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar17 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar23 = plVar1;
    }
    uVar11 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar10,0,8);
        plVar1 = DAT_043f1798;
        lVar17 = local_d0;
        goto joined_r0x01764af8;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar10,0,8);
    plVar1 = DAT_043f1798;
    lVar17 = local_d0;
  }
joined_r0x01764af8:
  pvVar25 = local_100;
  local_d0 = lVar17;
  if (((local_e0 & 1) != 0) && (lVar17 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar11 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar17,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_100;
        goto joined_r0x01764fac;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_100;
  }
joined_r0x01764fac:
  pvVar9 = local_130;
  local_100 = pvVar25;
  if (((local_110 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar11 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar9 = local_130;
        goto joined_r0x01764c60;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar9 = local_130;
  }
joined_r0x01764c60:
  pvVar25 = local_160;
  local_130 = pvVar9;
  if (((local_140 & 1) != 0) && (pvVar9 != (void *)0x0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar11 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,pvVar9,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_160;
        goto joined_r0x01764fec;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pvVar9,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_160;
  }
joined_r0x01764fec:
  DAT_043f1798 = plVar1;
  local_160 = pvVar25;
  if ((((byte)local_170 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar11 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,pvVar25,0,8);
        goto LAB_01764dc4;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pvVar25,0,8);
  }
LAB_01764dc4:
  uVar20 = *(undefined8 *)(lVar21 + 0x20);
  FUN_0014fef0(uVar20);
  (**(code **)*plVar8)(plVar8,uVar20);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  pvVar25 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar25 = (void *)((long)&local_1d8 + 1);
  }
  FUN_001522a0(uVar20,pvVar25);
  pvVar25 = local_1c8;
  plVar1 = DAT_043f1798;
  if (((local_1d8 & 1) != 0) && (local_1c8 != (void *)0x0)) {
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    uVar11 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar8,pvVar25,0,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,pvVar25,0,8);
  }
  return;
}


