/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023578a0; name: FUN_023578a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_023578a0(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  undefined8 uVar24;
  long lVar25;
  string *psVar26;
  long *plVar27;
  long lVar28;
  void *pvVar29;
  char *pcVar30;
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
  
  lVar25 = *param_1;
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
    pvVar29 = (void *)((ulong)&local_1a8 | 1);
    if (sVar11 != 0) goto LAB_0235792c;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,8);
    local_1a8 = uVar15 | 1;
    local_1a0 = sVar11;
    local_198 = pvVar29;
LAB_0235792c:
    memcpy(pvVar29,param_2,sVar11);
  }
  *(undefined1 *)((long)pvVar29 + sVar11) = 0;
  plVar1 = DAT_043f1798;
  plVar12 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar12 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x100,8);
  plVar12[4] = 0;
  plVar27 = plVar12 + 1;
  *plVar27 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  plVar12[6] = (long)FUN_02358b70;
  plVar12[7] = (long)FUN_02358c20;
  *plVar12 = (long)&PTR_FUN_0425bce0;
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
  plVar12[0x1f] = 0;
  plVar12[0x1d] = 0;
  *(undefined1 *)(plVar12 + 0x1e) = 0;
  plVar12[0x13] = lVar19;
  plVar12[0x14] = lVar22;
  plVar12[0x1b] = (long)&LAB_02359380;
  plVar12[0x1c] = 0;
  plVar12[0x15] = (long)&DAT_0392da3c;
  plVar12[0x16] = 0;
  plVar12[0x17] = 0;
  plVar12[0x18] = (long)FUN_02358db0;
  plVar12[0x19] = (long)&LAB_02359090;
  plVar12[0x1a] = (long)&LAB_02359370;
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
    if (sVar11 != 0) goto LAB_02357a80;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_80 = (string)((byte)uVar15 | 1);
    uStack_7f = (undefined7)(uVar15 >> 8);
    local_78 = (undefined1)sVar11;
    uStack_77 = (undefined7)(sVar11 >> 8);
    local_70 = pvVar29;
LAB_02357a80:
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
  local_128 = &LAB_02359384;
  puStack_120 = &LAB_023593cc;
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
    pvVar29 = (void *)((ulong)&local_178 | 1);
    if (sVar11 != 0) goto LAB_02357b24;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_178 = (byte)uVar15 | 1;
    uStack_177 = (undefined7)(uVar15 >> 8);
    local_170 = (undefined1)sVar11;
    uStack_16f = (undefined7)(sVar11 >> 8);
    local_168 = pvVar29;
LAB_02357b24:
    memcpy(pvVar29,param_5,sVar11);
  }
  local_100 = local_168;
  uStack_107 = uStack_16f;
  uStack_108 = local_170;
  local_10f = uStack_177;
  local_110 = local_178;
  *(undefined1 *)((long)pvVar29 + sVar11) = 0;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  uStack_159 = 0;
  uStack_158 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02359414;
  puStack_f0 = &LAB_0235945c;
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
    pvVar29 = (void *)((ulong)&local_190 | 1);
    if (sVar11 != 0) goto LAB_02357bbc;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    pvVar29 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar15,8);
    local_190 = (byte)uVar15 | 1;
    uStack_18f = (undefined7)(uVar15 >> 8);
    local_188 = (undefined1)sVar11;
    uStack_187 = (undefined7)(sVar11 >> 8);
    local_180 = pvVar29;
LAB_02357bbc:
    memcpy(pvVar29,param_7,sVar11);
  }
  *(undefined1 *)((long)pvVar29 + sVar11) = 0;
  local_e0 = local_190;
  local_df = uStack_18f;
  uStack_d8 = local_188;
  uStack_d7 = uStack_187;
  local_d0 = local_180;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_023594a4;
  puStack_c0 = &LAB_023594ec;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  psVar26 = &local_140;
  local_88 = 0xffffffff;
  plVar1 = plVar12 + 3;
  local_98 = &LAB_02359534;
  puStack_90 = &LAB_0235957c;
  uStack_a4 = 0;
  local_a0 = 0;
  do {
    uVar15 = *(ulong *)(psVar26 + 8);
    psVar3 = *(string **)(psVar26 + 0x10);
    if (((byte)*psVar26 & 1) == 0) {
      psVar3 = psVar26 + 1;
      uVar15 = (ulong)((byte)*psVar26 >> 1);
    }
    pcVar13 = (char *)FUN_008e8ed4(&local_80,psVar3,uVar15);
    pcVar30 = (char *)plVar12[2];
    if (pcVar30 != (char *)0x0) {
      uVar15 = (long)pcVar30 - ((ulong)pcVar30 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        param_7 = (char *)((ulong)(pcVar30 + -1) & (ulong)pcVar13);
      }
      else {
        param_7 = pcVar13;
        if (pcVar30 <= pcVar13) {
          uVar20 = 0;
          if (pcVar30 != (char *)0x0) {
            uVar20 = (ulong)pcVar13 / (ulong)pcVar30;
          }
          param_7 = pcVar13 + -(uVar20 * (long)pcVar30);
        }
      }
      plVar18 = *(long **)(*plVar27 + (long)param_7 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        psVar3 = psVar26 + 1;
        sVar11 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar3 = *(string **)(psVar26 + 0x10);
          sVar11 = *(size_t *)(psVar26 + 8);
        }
        if (uVar15 < 2) {
          if (sVar11 == 0) {
            do {
              if ((char *)plVar18[1] != pcVar13 &&
                  (char *)((ulong)plVar18[1] & (ulong)(pcVar30 + -1)) != param_7) break;
              uVar15 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar15 = plVar18[3];
              }
              if (uVar15 == 0) goto LAB_02357ee0;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if ((char *)plVar18[1] != pcVar13 &&
                  (char *)((ulong)plVar18[1] & (ulong)(pcVar30 + -1)) != param_7) break;
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
                    if (uVar15 == 0) goto LAB_02357ee0;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar18[4],psVar3,sVar11);
                  if (iVar7 == 0) goto LAB_02357ee0;
                }
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
        else if (sVar11 == 0) {
          do {
            pcVar16 = (char *)plVar18[1];
            if (pcVar16 != pcVar13) {
              if (pcVar30 <= pcVar16) {
                uVar15 = 0;
                if (pcVar30 != (char *)0x0) {
                  uVar15 = (ulong)pcVar16 / (ulong)pcVar30;
                }
                pcVar16 = pcVar16 + -(uVar15 * (long)pcVar30);
              }
              if (pcVar16 != param_7) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar15 = plVar18[3];
            }
            if (uVar15 == 0) goto LAB_02357ee0;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            pcVar16 = (char *)plVar18[1];
            if (pcVar16 != pcVar13) {
              if (pcVar30 <= pcVar16) {
                uVar15 = 0;
                if (pcVar30 != (char *)0x0) {
                  uVar15 = (ulong)pcVar16 / (ulong)pcVar30;
                }
                pcVar16 = pcVar16 + -(uVar15 * (long)pcVar30);
              }
              if (pcVar16 != param_7) break;
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
                  if (uVar15 == 0) goto LAB_02357ee0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar18[4],psVar3,sVar11);
                if (iVar7 == 0) goto LAB_02357ee0;
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
    std::string::string((string *)(plVar18 + 2),psVar26);
    lVar19 = *(long *)(psVar26 + 0x18);
    lVar22 = *(long *)(psVar26 + 0x28);
    plVar18[6] = *(long *)(psVar26 + 0x20);
    plVar18[7] = lVar22;
    plVar18[5] = lVar19;
    *plVar18 = 0;
    plVar18[1] = (long)pcVar13;
    if ((pcVar30 == (char *)0x0) ||
       (*(float *)(plVar12 + 5) * (float)pcVar30 < (float)(plVar12[4] + 1))) {
      uVar15 = (ulong)(pcVar30 < (char *)0x3 || ((ulong)pcVar30 & (ulong)(pcVar30 + -1)) != 0) |
               (long)pcVar30 << 1;
      uVar20 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar20 <= uVar15) {
        uVar20 = uVar15;
      }
      FUN_008e9ae4(plVar27,uVar20);
      pcVar30 = (char *)plVar12[2];
      if (((ulong)pcVar30 & (ulong)(pcVar30 + -1)) == 0) {
        param_7 = (char *)((ulong)(pcVar30 + -1) & (ulong)pcVar13);
      }
      else if (pcVar13 < pcVar30) {
        param_7 = pcVar13;
      }
      else {
        uVar15 = 0;
        if (pcVar30 != (char *)0x0) {
          uVar15 = (ulong)pcVar13 / (ulong)pcVar30;
        }
        param_7 = pcVar13 + -(uVar15 * (long)pcVar30);
      }
    }
    lVar19 = *plVar27;
    plVar17 = *(long **)(lVar19 + (long)param_7 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar1;
      *plVar1 = (long)plVar18;
      *(long **)(lVar19 + (long)param_7 * 8) = plVar1;
      if (*plVar18 != 0) {
        pcVar13 = *(char **)(*plVar18 + 8);
        if (((ulong)pcVar30 & (ulong)(pcVar30 + -1)) == 0) {
          pcVar13 = (char *)((ulong)pcVar13 & (ulong)(pcVar30 + -1));
        }
        else if (pcVar30 <= pcVar13) {
          uVar15 = 0;
          if (pcVar30 != (char *)0x0) {
            uVar15 = (ulong)pcVar13 / (ulong)pcVar30;
          }
          pcVar13 = pcVar13 + -(uVar15 * (long)pcVar30);
        }
        plVar17 = (long *)(*plVar27 + (long)pcVar13 * 8);
        goto LAB_02357ed0;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_02357ed0:
      *plVar17 = (long)plVar18;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_02357ee0:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != &local_80);
  lVar22 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar27,lVar22 + lVar19);
    if (lVar14 != 0) {
      FUN_008f2aec(&local_80,plVar27,lVar14);
      plVar1 = DAT_043f1798;
      lVar14 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar14 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar14 + 0x20), lVar28 != 0)) {
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
              FUN_02bcc824(plVar18,lVar28,0,8);
              goto LAB_023582b4;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar28,0,8);
        }
LAB_023582b4:
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
            goto LAB_0235826c;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,0,8);
      }
    }
LAB_0235826c:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar13 = (char *)plVar12[0xc];
  sVar11 = strlen(pcVar13);
  iVar7 = FUN_008f2c60(sVar11,pcVar13);
  pcVar13 = (char *)plVar12[0xf];
  sVar11 = strlen(pcVar13);
  iVar8 = FUN_008f2c60(sVar11,pcVar13);
  pcVar13 = (char *)plVar12[0x12];
  sVar11 = strlen(pcVar13);
  iVar9 = FUN_008f2c60(sVar11,pcVar13);
  pcVar13 = (char *)plVar12[0x15];
  sVar11 = strlen(pcVar13);
  iVar10 = FUN_008f2c60(sVar11,pcVar13);
  lVar19 = local_a0;
  *(bool *)(plVar12 + 0xb) = ((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  pvVar29 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar15 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar19,0,8);
        plVar1 = DAT_043f1798;
        pvVar29 = local_d0;
        goto joined_r0x0235846c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,0,8);
    plVar1 = DAT_043f1798;
    pvVar29 = local_d0;
  }
joined_r0x0235846c:
  pvVar6 = local_100;
  local_d0 = pvVar29;
  if (((local_e0 & 1) != 0) && (pvVar29 != (void *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar15 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar29,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_100;
        goto joined_r0x023588c8;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar29,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_100;
  }
joined_r0x023588c8:
  pvVar29 = local_130;
  local_100 = pvVar6;
  if (((local_110 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar15 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar6,0,8);
        plVar1 = DAT_043f1798;
        pvVar29 = local_130;
        goto joined_r0x023585d4;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar6,0,8);
    plVar1 = DAT_043f1798;
    pvVar29 = local_130;
  }
joined_r0x023585d4:
  DAT_043f1798 = plVar1;
  local_130 = pvVar29;
  if ((((byte)local_140 & 1) != 0) && (pvVar29 != (void *)0x0)) {
    plVar27 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar15 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar29,0,8);
        goto LAB_02358684;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar29,0,8);
  }
LAB_02358684:
  uVar24 = *(undefined8 *)(lVar25 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar12)(plVar12,uVar24);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pvVar29 = local_198;
  if ((local_1a8 & 1) == 0) {
    pvVar29 = (void *)((long)&local_1a8 + 1);
  }
  FUN_001522a0(uVar24,pvVar29);
  pvVar29 = local_198;
  plVar1 = DAT_043f1798;
  if (((local_1a8 & 1) != 0) && (local_198 != (void *)0x0)) {
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
        FUN_02bcc824(plVar12,pvVar29,0,8);
        return;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar29,0,8);
  }
  return;
}


