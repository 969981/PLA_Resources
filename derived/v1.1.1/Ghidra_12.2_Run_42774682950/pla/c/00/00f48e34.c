/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f48e34; name: FUN_00f48e34
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f48e34(ulong *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6)

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
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  char *pcVar24;
  undefined8 uVar25;
  string *psVar26;
  long *plVar27;
  void *pvVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
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
  
  uVar30 = *param_1;
  local_180 = 0;
  local_178 = 0;
  local_170 = (void *)0x0;
  sVar12 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar6 = tpidr_el0;
  if (sVar12 < 0x17) {
    local_180 = CONCAT71(local_180._1_7_,(char)((int)sVar12 << 1));
    pvVar28 = (void *)((ulong)&local_180 | 1);
    if (sVar12 != 0) goto LAB_00f48eac;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar16,8);
    local_180 = uVar16 | 1;
    local_178 = sVar12;
    local_170 = pvVar28;
LAB_00f48eac:
    memcpy(pvVar28,param_2,sVar12);
  }
  *(undefined1 *)((long)pvVar28 + sVar12) = 0;
  plVar1 = DAT_043f1798;
  plVar13 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar13 = plVar1;
  }
  plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xf0,8);
  plVar13[4] = 0;
  plVar27 = plVar13 + 1;
  *plVar27 = 0;
  *(undefined4 *)(plVar13 + 5) = 0x3f800000;
  plVar13[10] = 0;
  plVar13[6] = (long)FUN_00f4a010;
  plVar13[7] = (long)FUN_00f4a0c0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  *(undefined1 *)(plVar13 + 0xb) = 0;
  *plVar13 = (long)&PTR_FUN_041eebb0;
  plVar13[0xc] = (long)param_3;
  plVar13[8] = 0;
  plVar13[9] = 0;
  lVar20 = *param_4;
  lVar22 = param_4[1];
  plVar13[0xf] = (long)param_5;
  plVar13[0xd] = lVar20;
  plVar13[0xe] = lVar22;
  lVar20 = *param_6;
  lVar22 = param_6[1];
  plVar13[0x1d] = 0;
  *(undefined1 *)(plVar13 + 0x1c) = 0;
  plVar13[0x10] = lVar20;
  plVar13[0x11] = lVar22;
  plVar13[0x12] = (long)&DAT_038ca815;
  plVar13[0x13] = (long)&DAT_0392da3c;
  plVar13[0x16] = (long)FUN_00f4a250;
  plVar13[0x17] = (long)&LAB_00f4a530;
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x18] = (long)&LAB_00f4a810;
  plVar13[0x19] = (long)&LAB_00f4a820;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = 0;
  sVar12 = strlen(param_3);
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
    pvVar28 = (void *)((ulong)&local_80 | 1);
    if (sVar12 != 0) goto LAB_00f48ff4;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_80 = (string)((byte)uVar16 | 1);
    uStack_7f = (undefined7)(uVar16 >> 8);
    local_78 = (undefined1)sVar12;
    uStack_77 = (undefined7)(sVar12 >> 8);
    local_70 = pvVar28;
LAB_00f48ff4:
    memcpy(pvVar28,param_3,sVar12);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar28 + sVar12) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_00f4a824;
  puStack_120 = &LAB_00f4a86c;
  sVar12 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_168 = 0;
  uStack_167 = 0;
  local_160 = 0;
  uStack_15f = 0;
  local_158 = (void *)0x0;
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar12 < 0x17) {
    local_168 = (byte)((int)sVar12 << 1);
    pvVar28 = (void *)((ulong)&local_168 | 1);
    if (sVar12 != 0) goto LAB_00f49098;
  }
  else {
    uVar16 = sVar12 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar28 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_168 = (byte)uVar16 | 1;
    uStack_167 = (undefined7)(uVar16 >> 8);
    local_160 = (undefined1)sVar12;
    uStack_15f = (undefined7)(sVar12 >> 8);
    local_158 = pvVar28;
LAB_00f49098:
    memcpy(pvVar28,param_5,sVar12);
  }
  psVar26 = &local_140;
  *(undefined1 *)((long)pvVar28 + sVar12) = 0;
  local_110 = local_168;
  local_10f = uStack_167;
  local_e8 = 0xffffffff;
  uStack_108 = local_160;
  uStack_107 = uStack_15f;
  local_100 = local_158;
  local_f8 = &LAB_00f4a8b4;
  puStack_f0 = &LAB_00f4a8fc;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_00f4a98c;
  local_d4 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_00f4a944;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  plVar1 = plVar13 + 3;
  local_88 = 0xffffffff;
  local_a0 = 0;
  local_98 = &LAB_00f4a9d4;
  puStack_90 = &LAB_00f4aa1c;
  uVar16 = uVar30;
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
      uVar16 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar17 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar16 = uVar31 - 1 & uVar14;
      }
      else {
        uVar16 = uVar14;
        if (uVar31 <= uVar14) {
          uVar16 = 0;
          if (uVar31 != 0) {
            uVar16 = uVar14 / uVar31;
          }
          uVar16 = uVar14 - uVar16 * uVar31;
        }
      }
      plVar19 = *(long **)(*plVar27 + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar3 = psVar26 + 1;
        sVar12 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar3 = *(string **)(psVar26 + 0x10);
          sVar12 = *(size_t *)(psVar26 + 8);
        }
        if (uVar17 < 2) {
          if (sVar12 == 0) {
            do {
              if (plVar19[1] != uVar14 && (plVar19[1] & uVar31 - 1) != uVar16) break;
              uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar17 = plVar19[3];
              }
              if (uVar17 == 0) goto LAB_00f493a4;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar14 && (plVar19[1] & uVar31 - 1) != uVar16) break;
              bVar4 = *(byte *)(plVar19 + 2);
              uVar17 = (ulong)(bVar4 >> 1);
              sVar2 = uVar17;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar19[3];
              }
              if (sVar2 == sVar12) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar21 == *psVar23) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar17 == 0) goto LAB_00f493a4;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar19[4],psVar3,sVar12);
                  if (iVar8 == 0) goto LAB_00f493a4;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar12 == 0) {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar14) {
              if (uVar31 <= uVar17) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar17 / uVar31;
                }
                uVar17 = uVar17 - uVar5 * uVar31;
              }
              if (uVar17 != uVar16) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar17 = plVar19[3];
            }
            if (uVar17 == 0) goto LAB_00f493a4;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar14) {
              if (uVar31 <= uVar17) {
                uVar5 = 0;
                if (uVar31 != 0) {
                  uVar5 = uVar17 / uVar31;
                }
                uVar17 = uVar17 - uVar5 * uVar31;
              }
              if (uVar17 != uVar16) break;
            }
            bVar4 = *(byte *)(plVar19 + 2);
            uVar17 = (ulong)(bVar4 >> 1);
            sVar2 = uVar17;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar19[3];
            }
            if (sVar2 == sVar12) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar3;
                while (*psVar21 == *psVar23) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar17 == 0) goto LAB_00f493a4;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar19[4],psVar3,sVar12);
                if (iVar8 == 0) goto LAB_00f493a4;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar26);
    lVar20 = *(long *)(psVar26 + 0x18);
    lVar22 = *(long *)(psVar26 + 0x28);
    plVar19[6] = *(long *)(psVar26 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar14;
    if ((uVar31 == 0) || (*(float *)(plVar13 + 5) * (float)uVar31 < (float)(plVar13[4] + 1))) {
      uVar16 = (ulong)(uVar31 < 3 || (uVar31 & uVar31 - 1) != 0) | uVar31 << 1;
      uVar31 = (ulong)((float)(plVar13[4] + 1) / *(float *)(plVar13 + 5));
      if (uVar31 <= uVar16) {
        uVar31 = uVar16;
      }
      FUN_008e9ae4(plVar27,uVar31);
      uVar31 = plVar13[2];
      if ((uVar31 & uVar31 - 1) == 0) {
        uVar16 = uVar31 - 1 & uVar14;
      }
      else if (uVar14 < uVar31) {
        uVar16 = uVar14;
      }
      else {
        uVar16 = 0;
        if (uVar31 != 0) {
          uVar16 = uVar14 / uVar31;
        }
        uVar16 = uVar14 - uVar16 * uVar31;
      }
    }
    lVar20 = *plVar27;
    plVar18 = *(long **)(lVar20 + uVar16 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + uVar16 * 8) = plVar1;
      if (*plVar19 != 0) {
        uVar14 = *(ulong *)(*plVar19 + 8);
        if ((uVar31 & uVar31 - 1) == 0) {
          uVar14 = uVar14 & uVar31 - 1;
        }
        else if (uVar31 <= uVar14) {
          uVar17 = 0;
          if (uVar31 != 0) {
            uVar17 = uVar14 / uVar31;
          }
          uVar14 = uVar14 - uVar17 * uVar31;
        }
        plVar18 = (long *)(*plVar27 + uVar14 * 8);
        goto LAB_00f49394;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_00f49394:
      *plVar18 = (long)plVar19;
    }
    plVar13[4] = plVar13[4] + 1;
LAB_00f493a4:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != &local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar27,lVar22 + lVar20);
    if (lVar15 != 0) {
      FUN_008f2aec(&local_80,plVar27,lVar15);
      plVar1 = DAT_043f1798;
      lVar15 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar15 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar15 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar29,0,8);
              goto LAB_00f497b0;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_00f497b0:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar15,0,8);
            goto LAB_00f49714;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar15,0,8);
      }
    }
LAB_00f49714:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar24 = (char *)plVar13[0xc];
  sVar12 = strlen(pcVar24);
  iVar8 = FUN_008f2c60(sVar12,pcVar24);
  pcVar24 = (char *)plVar13[0xf];
  sVar12 = strlen(pcVar24);
  iVar9 = FUN_008f2c60(sVar12,pcVar24);
  pcVar24 = (char *)plVar13[0x12];
  sVar12 = strlen(pcVar24);
  iVar10 = FUN_008f2c60(sVar12,pcVar24);
  pcVar24 = (char *)plVar13[0x13];
  sVar12 = strlen(pcVar24);
  iVar11 = FUN_008f2c60(sVar12,pcVar24);
  lVar22 = local_a0;
  *(bool *)(plVar13 + 0xb) = ((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0;
  plVar1 = DAT_043f1798;
  lVar20 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar27 = plVar1;
    }
    uVar16 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar22,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_d0;
        goto joined_r0x00f49970;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar22,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_d0;
  }
joined_r0x00f49970:
  pvVar28 = local_100;
  local_d0 = lVar20;
  if (((local_e0 & 1) != 0) && (lVar20 != 0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar16 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,lVar20,0,8);
        plVar1 = DAT_043f1798;
        pvVar28 = local_100;
        goto joined_r0x00f49d5c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,lVar20,0,8);
    plVar1 = DAT_043f1798;
    pvVar28 = local_100;
  }
joined_r0x00f49d5c:
  pvVar7 = local_130;
  local_100 = pvVar28;
  if (((local_110 & 1) != 0) && (pvVar28 != (void *)0x0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar16 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar28,0,8);
        plVar1 = DAT_043f1798;
        pvVar7 = local_130;
        goto joined_r0x00f49ad8;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar28,0,8);
    plVar1 = DAT_043f1798;
    pvVar7 = local_130;
  }
joined_r0x00f49ad8:
  DAT_043f1798 = plVar1;
  local_130 = pvVar7;
  if ((((byte)local_140 & 1) != 0) && (pvVar7 != (void *)0x0)) {
    plVar27 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar27 = plVar1;
    }
    uVar16 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar27,pvVar7,0,8);
        goto LAB_00f49b88;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,pvVar7,0,8);
  }
LAB_00f49b88:
  uVar25 = *(undefined8 *)(uVar30 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar13)(plVar13,uVar25);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  pvVar28 = local_170;
  if ((local_180 & 1) == 0) {
    pvVar28 = (void *)((long)&local_180 + 1);
  }
  FUN_001522a0(uVar25,pvVar28);
  pvVar28 = local_170;
  plVar1 = DAT_043f1798;
  if (((local_180 & 1) != 0) && (local_170 != (void *)0x0)) {
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
        FUN_02bcc824(plVar13,pvVar28,0,8);
        return;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar28,0,8);
  }
  return;
}


