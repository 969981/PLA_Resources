/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02009f40; name: FUN_02009f40
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02009f40(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  long *plVar15;
  ulong uVar16;
  string *psVar17;
  long lVar18;
  long lVar19;
  string *psVar20;
  undefined8 uVar21;
  long lVar22;
  string *psVar23;
  long *plVar24;
  long lVar25;
  void *pvVar26;
  char *pcVar27;
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
  
  lVar22 = *param_1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  sVar8 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar8 < 0x17) {
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)sVar8 << 1));
    pvVar26 = (void *)((ulong)&local_1d8 | 1);
    if (sVar8 != 0) goto LAB_02009fcc;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar9 = plVar1;
    }
    pvVar26 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar12,8);
    local_1d8 = uVar12 | 1;
    local_1d0 = sVar8;
    local_1c8 = pvVar26;
LAB_02009fcc:
    memcpy(pvVar26,param_2,sVar8);
  }
  *(undefined1 *)((long)pvVar26 + sVar8) = 0;
  plVar1 = DAT_043f1798;
  plVar9 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar9 = plVar1;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0xf0,8);
  plVar9[4] = 0;
  plVar24 = plVar9 + 1;
  *plVar24 = 0;
  *(undefined4 *)(plVar9 + 5) = 0x3f800000;
  plVar9[10] = 0;
  plVar9[6] = (long)FUN_0200b330;
  plVar9[7] = (long)FUN_0200b3e0;
  *plVar9 = (long)&PTR_FUN_0425b218;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  plVar9[0xc] = (long)param_3;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[0xd] = *param_4;
  plVar9[0xe] = (long)param_5;
  plVar9[0xf] = *param_6;
  plVar9[0x10] = (long)param_7;
  lVar18 = *param_8;
  plVar9[0x1d] = 0;
  plVar9[0x13] = (long)&DAT_0392da3c;
  plVar9[0x14] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x11] = lVar18;
  plVar9[0x12] = (long)&DAT_038ca815;
  plVar9[0x15] = 0;
  plVar9[0x16] = (long)FUN_0200b570;
  plVar9[0x17] = (long)&LAB_0200b850;
  plVar9[0x18] = (long)&LAB_0200bb30;
  plVar9[0x19] = (long)&LAB_0200bb40;
  *(undefined1 *)(plVar9 + 0x1c) = 1;
  sVar8 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_80 = SUB41((int)sVar8 << 1,0);
    pvVar26 = (void *)((ulong)&local_80 | 1);
    if (sVar8 != 0) goto LAB_0200a124;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar26 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar12,8);
    local_80 = (string)((byte)uVar12 | 1);
    uStack_7f = (undefined7)(uVar12 >> 8);
    local_78 = (undefined1)sVar8;
    uStack_77 = (undefined7)(sVar8 >> 8);
    local_70 = pvVar26;
LAB_0200a124:
    memcpy(pvVar26,param_3,sVar8);
  }
  local_160 = local_70;
  uStack_167 = uStack_77;
  uStack_168 = local_78;
  local_16f = uStack_7f;
  local_170 = local_80;
  *(undefined1 *)((long)pvVar26 + sVar8) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_0200bb44;
  puStack_150 = &LAB_0200bb60;
  sVar8 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1a8 = (byte)((int)sVar8 << 1);
    pvVar26 = (void *)((ulong)&local_1a8 | 1);
    if (sVar8 != 0) goto LAB_0200a1c8;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar26 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar12,8);
    local_1a8 = (byte)uVar12 | 1;
    uStack_1a7 = (undefined7)(uVar12 >> 8);
    local_1a0 = (undefined1)sVar8;
    uStack_19f = (undefined7)(sVar8 >> 8);
    local_198 = pvVar26;
LAB_0200a1c8:
    memcpy(pvVar26,param_5,sVar8);
  }
  local_130 = local_198;
  uStack_137 = uStack_19f;
  uStack_138 = local_1a0;
  local_13f = uStack_1a7;
  local_140 = local_1a8;
  *(undefined1 *)((long)pvVar26 + sVar8) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0200bb7c;
  puStack_120 = &LAB_0200bb98;
  sVar8 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_1c0 = 0;
  uStack_1bf = 0;
  local_1b8 = 0;
  uStack_1b7 = 0;
  local_1b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1c0 = (byte)((int)sVar8 << 1);
    pvVar26 = (void *)((ulong)&local_1c0 | 1);
    if (sVar8 != 0) goto LAB_0200a260;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar26 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar12,8);
    local_1c0 = (byte)uVar12 | 1;
    uStack_1bf = (undefined7)(uVar12 >> 8);
    local_1b8 = (undefined1)sVar8;
    uStack_1b7 = (undefined7)(sVar8 >> 8);
    local_1b0 = pvVar26;
LAB_0200a260:
    memcpy(pvVar26,param_7,sVar8);
  }
  *(undefined1 *)((long)pvVar26 + sVar8) = 0;
  local_110 = local_1c0;
  local_10f = uStack_1bf;
  uStack_108 = local_1b8;
  uStack_107 = uStack_1b7;
  local_100 = local_1b0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0200bbb4;
  puStack_f0 = &LAB_0200bbd0;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_0200bc34;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_0200bbec;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  psVar23 = &local_170;
  local_88 = 0xffffffff;
  plVar1 = plVar9 + 3;
  local_a0 = 0;
  local_98 = &LAB_0200bc7c;
  puStack_90 = &LAB_0200bcc4;
  do {
    uVar12 = *(ulong *)(psVar23 + 8);
    psVar3 = *(string **)(psVar23 + 0x10);
    if (((byte)*psVar23 & 1) == 0) {
      psVar3 = psVar23 + 1;
      uVar12 = (ulong)((byte)*psVar23 >> 1);
    }
    pcVar10 = (char *)FUN_008e8ed4(&local_80,psVar3,uVar12);
    pcVar27 = (char *)plVar9[2];
    if (pcVar27 != (char *)0x0) {
      uVar12 = (long)pcVar27 - ((ulong)pcVar27 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        param_7 = (char *)((ulong)(pcVar27 + -1) & (ulong)pcVar10);
      }
      else {
        param_7 = pcVar10;
        if (pcVar27 <= pcVar10) {
          uVar16 = 0;
          if (pcVar27 != (char *)0x0) {
            uVar16 = (ulong)pcVar10 / (ulong)pcVar27;
          }
          param_7 = pcVar10 + -(uVar16 * (long)pcVar27);
        }
      }
      plVar15 = *(long **)(*plVar24 + (long)param_7 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        psVar3 = psVar23 + 1;
        sVar8 = (ulong)((byte)*psVar23 >> 1);
        if (((byte)*psVar23 & 1) != 0) {
          psVar3 = *(string **)(psVar23 + 0x10);
          sVar8 = *(size_t *)(psVar23 + 8);
        }
        if (uVar12 < 2) {
          if (sVar8 == 0) {
            do {
              if ((char *)plVar15[1] != pcVar10 &&
                  (char *)((ulong)plVar15[1] & (ulong)(pcVar27 + -1)) != param_7) break;
              uVar12 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
              if ((*(byte *)(plVar15 + 2) & 1) != 0) {
                uVar12 = plVar15[3];
              }
              if (uVar12 == 0) goto LAB_0200a4a4;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar15[1] != pcVar10 &&
                  (char *)((ulong)plVar15[1] & (ulong)(pcVar27 + -1)) != param_7) break;
              bVar4 = *(byte *)(plVar15 + 2);
              uVar12 = (ulong)(bVar4 >> 1);
              sVar2 = uVar12;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar15[3];
              }
              if (sVar2 == sVar8) {
                if ((bVar4 & 1) == 0) {
                  psVar17 = (string *)((long)plVar15 + 0x11);
                  psVar20 = psVar3;
                  while (*psVar17 == *psVar20) {
                    uVar12 = uVar12 - 1;
                    psVar17 = psVar17 + 1;
                    psVar20 = psVar20 + 1;
                    if (uVar12 == 0) goto LAB_0200a4a4;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar15[4],psVar3,sVar8);
                  if (iVar7 == 0) goto LAB_0200a4a4;
                }
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
        else if (sVar8 == 0) {
          do {
            pcVar14 = (char *)plVar15[1];
            if (pcVar14 != pcVar10) {
              if (pcVar27 <= pcVar14) {
                uVar12 = 0;
                if (pcVar27 != (char *)0x0) {
                  uVar12 = (ulong)pcVar14 / (ulong)pcVar27;
                }
                pcVar14 = pcVar14 + -(uVar12 * (long)pcVar27);
              }
              if (pcVar14 != param_7) break;
            }
            uVar12 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
            if ((*(byte *)(plVar15 + 2) & 1) != 0) {
              uVar12 = plVar15[3];
            }
            if (uVar12 == 0) goto LAB_0200a4a4;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            pcVar14 = (char *)plVar15[1];
            if (pcVar14 != pcVar10) {
              if (pcVar27 <= pcVar14) {
                uVar12 = 0;
                if (pcVar27 != (char *)0x0) {
                  uVar12 = (ulong)pcVar14 / (ulong)pcVar27;
                }
                pcVar14 = pcVar14 + -(uVar12 * (long)pcVar27);
              }
              if (pcVar14 != param_7) break;
            }
            bVar4 = *(byte *)(plVar15 + 2);
            uVar12 = (ulong)(bVar4 >> 1);
            sVar2 = uVar12;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar15[3];
            }
            if (sVar2 == sVar8) {
              if ((bVar4 & 1) == 0) {
                psVar17 = (string *)((long)plVar15 + 0x11);
                psVar20 = psVar3;
                while (*psVar17 == *psVar20) {
                  uVar12 = uVar12 - 1;
                  psVar17 = psVar17 + 1;
                  psVar20 = psVar20 + 1;
                  if (uVar12 == 0) goto LAB_0200a4a4;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar15[4],psVar3,sVar8);
                if (iVar7 == 0) goto LAB_0200a4a4;
              }
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    plVar15 = DAT_043f1798;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    std::string::string((string *)(plVar15 + 2),psVar23);
    lVar18 = *(long *)(psVar23 + 0x18);
    lVar19 = *(long *)(psVar23 + 0x28);
    plVar15[6] = *(long *)(psVar23 + 0x20);
    plVar15[7] = lVar19;
    plVar15[5] = lVar18;
    *plVar15 = 0;
    plVar15[1] = (long)pcVar10;
    if ((pcVar27 == (char *)0x0) ||
       (*(float *)(plVar9 + 5) * (float)pcVar27 < (float)(plVar9[4] + 1))) {
      uVar12 = (ulong)(pcVar27 < (char *)0x3 || ((ulong)pcVar27 & (ulong)(pcVar27 + -1)) != 0) |
               (long)pcVar27 << 1;
      uVar16 = (ulong)((float)(plVar9[4] + 1) / *(float *)(plVar9 + 5));
      if (uVar16 <= uVar12) {
        uVar16 = uVar12;
      }
      FUN_008e9ae4(plVar24,uVar16);
      pcVar27 = (char *)plVar9[2];
      if (((ulong)pcVar27 & (ulong)(pcVar27 + -1)) == 0) {
        param_7 = (char *)((ulong)(pcVar27 + -1) & (ulong)pcVar10);
      }
      else if (pcVar10 < pcVar27) {
        param_7 = pcVar10;
      }
      else {
        uVar12 = 0;
        if (pcVar27 != (char *)0x0) {
          uVar12 = (ulong)pcVar10 / (ulong)pcVar27;
        }
        param_7 = pcVar10 + -(uVar12 * (long)pcVar27);
      }
    }
    lVar18 = *plVar24;
    plVar13 = *(long **)(lVar18 + (long)param_7 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar15 = *plVar1;
      *plVar1 = (long)plVar15;
      *(long **)(lVar18 + (long)param_7 * 8) = plVar1;
      if (*plVar15 != 0) {
        pcVar10 = *(char **)(*plVar15 + 8);
        if (((ulong)pcVar27 & (ulong)(pcVar27 + -1)) == 0) {
          pcVar10 = (char *)((ulong)pcVar10 & (ulong)(pcVar27 + -1));
        }
        else if (pcVar27 <= pcVar10) {
          uVar12 = 0;
          if (pcVar27 != (char *)0x0) {
            uVar12 = (ulong)pcVar10 / (ulong)pcVar27;
          }
          pcVar10 = pcVar10 + -(uVar12 * (long)pcVar27);
        }
        plVar13 = (long *)(*plVar24 + (long)pcVar10 * 8);
        goto LAB_0200a494;
      }
    }
    else {
      *plVar15 = *plVar13;
LAB_0200a494:
      *plVar13 = (long)plVar15;
    }
    plVar9[4] = plVar9[4] + 1;
LAB_0200a4a4:
    psVar23 = psVar23 + 0x30;
  } while (psVar23 != &local_80);
  lVar19 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar24,lVar19 + lVar18);
    if (lVar11 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar11);
      plVar1 = DAT_043f1798;
      lVar11 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar11 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar25 = *(long *)(lVar11 + 0x20), lVar25 != 0)) {
          plVar15 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar15 = plVar1;
          }
          uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar15,lVar25,0,8);
              goto LAB_0200a9f0;
            }
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar25,0,8);
        }
LAB_0200a9f0:
        plVar1 = DAT_043f1798;
        plVar15 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar15 = plVar1;
        }
        uVar12 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar15,lVar11,0,8);
            goto LAB_0200a954;
          }
        }
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar11,0,8);
      }
    }
LAB_0200a954:
    lVar11 = local_a0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  *(undefined1 *)(plVar9 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    uVar12 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar11,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x0200ab78;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x0200ab78:
  pvVar26 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar12 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pvVar26 = local_100;
        goto joined_r0x0200b02c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pvVar26 = local_100;
  }
joined_r0x0200b02c:
  pvVar6 = local_130;
  local_100 = pvVar26;
  if (((local_110 & 1) != 0) && (pvVar26 != (void *)0x0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar12 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar26,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_130;
        goto joined_r0x0200ace0;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar26,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_130;
  }
joined_r0x0200ace0:
  pvVar26 = local_160;
  local_130 = pvVar6;
  if (((local_140 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar12 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar26 = local_160;
        goto joined_r0x0200b06c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar26 = local_160;
  }
joined_r0x0200b06c:
  DAT_043f1798 = plVar1;
  local_160 = pvVar26;
  if ((((byte)local_170 & 1) != 0) && (pvVar26 != (void *)0x0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar12 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar26,0,8);
        goto LAB_0200ae44;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar26,0,8);
  }
LAB_0200ae44:
  uVar21 = *(undefined8 *)(lVar22 + 0x20);
  FUN_0014fef0(uVar21);
  (**(code **)*plVar9)(plVar9,uVar21);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  pvVar26 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar26 = (void *)((long)&local_1d8 + 1);
  }
  FUN_001522a0(uVar21,pvVar26);
  pvVar26 = local_1c8;
  plVar1 = DAT_043f1798;
  if (((local_1d8 & 1) != 0) && (local_1c8 != (void *)0x0)) {
    plVar9 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar9 = plVar1;
    }
    uVar12 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar9,pvVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,pvVar26,0,8);
  }
  return;
}


