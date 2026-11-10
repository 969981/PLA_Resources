/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e47a54; name: FUN_00e47a54
 */


void FUN_00e47a54(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
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
  size_t sVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  size_t sVar16;
  size_t sVar17;
  long lVar18;
  long *plVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  char *pcVar23;
  undefined8 uVar24;
  string *psVar25;
  long *plVar26;
  void *pvVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  undefined8 local_150;
  size_t local_148;
  void *local_140;
  byte local_138;
  undefined7 uStack_137;
  undefined1 local_130;
  undefined7 uStack_12f;
  void *local_128;
  undefined7 local_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  string local_110;
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
  
  lVar29 = *param_1;
  local_150 = 0;
  local_148 = 0;
  local_140 = (void *)0x0;
  sVar10 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar10 < 0x17) {
    local_150 = CONCAT71(local_150._1_7_,(char)((int)sVar10 << 1));
    pvVar27 = (void *)((ulong)&local_150 | 1);
    if (sVar10 != 0) goto LAB_00e47acc;
  }
  else {
    uVar12 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar11 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar11 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar12,8);
    local_150 = uVar12 | 1;
    local_148 = sVar10;
    local_140 = pvVar27;
LAB_00e47acc:
    memcpy(pvVar27,param_2,sVar10);
  }
  *(undefined1 *)((long)pvVar27 + sVar10) = 0;
  plVar1 = DAT_043f1798;
  plVar11 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar11 = plVar1;
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xd8,8);
  plVar11[4] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar26 = plVar11 + 1;
  *plVar26 = 0;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[6] = (long)FUN_00e48a80;
  plVar11[7] = (long)FUN_00e48b30;
  plVar11[10] = 0;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  *plVar11 = (long)&PTR_FUN_041ee878;
  plVar11[0xc] = (long)param_3;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[0xd] = *param_4;
  plVar11[0xe] = (long)param_5;
  lVar18 = *param_6;
  plVar11[0x1a] = 0;
  *(undefined1 *)(plVar11 + 0x19) = 0;
  plVar11[0x17] = 0;
  plVar11[0x18] = 0;
  plVar11[0xf] = lVar18;
  plVar11[0x10] = (long)&DAT_0392da3c;
  plVar11[0x13] = (long)FUN_00e48d04;
  plVar11[0x14] = (long)&LAB_00e48fe4;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x15] = (long)&LAB_00e492c0;
  plVar11[0x16] = (long)&LAB_00e492d0;
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
    pvVar27 = (void *)((ulong)&local_80 | 1);
    if (sVar10 != 0) goto LAB_00e47c04;
  }
  else {
    uVar12 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar12,8);
    local_80 = (string)((byte)uVar12 | 1);
    uStack_7f = (undefined7)(uVar12 >> 8);
    local_78 = (undefined1)sVar10;
    uStack_77 = (undefined7)(sVar10 >> 8);
    local_70 = pvVar27;
LAB_00e47c04:
    memcpy(pvVar27,param_3,sVar10);
  }
  local_100 = local_70;
  uStack_107 = uStack_77;
  uStack_108 = local_78;
  local_10f = uStack_7f;
  local_110 = local_80;
  *(undefined1 *)((long)pvVar27 + sVar10) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_120 = 0;
  uStack_119 = 0;
  uStack_118 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_00e492d4;
  puStack_f0 = &LAB_00e4931c;
  sVar10 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_138 = 0;
  uStack_137 = 0;
  local_130 = 0;
  uStack_12f = 0;
  local_128 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_138 = (byte)((int)sVar10 << 1);
    pvVar27 = (void *)((ulong)&local_138 | 1);
    if (sVar10 != 0) goto LAB_00e47ca8;
  }
  else {
    uVar12 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar27 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar12,8);
    local_138 = (byte)uVar12 | 1;
    uStack_137 = (undefined7)(uVar12 >> 8);
    local_130 = (undefined1)sVar10;
    uStack_12f = (undefined7)(sVar10 >> 8);
    local_128 = pvVar27;
LAB_00e47ca8:
    memcpy(pvVar27,param_5,sVar10);
  }
  psVar25 = &local_110;
  *(undefined1 *)((long)pvVar27 + sVar10) = 0;
  local_e0 = local_138;
  local_df = uStack_137;
  local_b8 = 0xffffffff;
  uStack_d8 = local_130;
  uStack_d7 = uStack_12f;
  local_d0 = local_128;
  local_c8 = &LAB_00e49364;
  puStack_c0 = &LAB_00e493ac;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  local_88 = 0xffffffff;
  plVar1 = plVar11 + 3;
  uStack_a4 = 0;
  local_a0 = 0;
  local_98 = &LAB_00e493f4;
  puStack_90 = &LAB_00e4943c;
  do {
    uVar12 = *(ulong *)(psVar25 + 8);
    psVar2 = *(string **)(psVar25 + 0x10);
    if (((byte)*psVar25 & 1) == 0) {
      psVar2 = psVar25 + 1;
      uVar12 = (ulong)((byte)*psVar25 >> 1);
    }
    uVar12 = FUN_008e8ed4(&local_80,psVar2,uVar12);
    uVar30 = plVar11[2];
    if (uVar30 != 0) {
      uVar14 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        sVar10 = uVar30 - 1 & uVar12;
      }
      else {
        sVar10 = uVar12;
        if (uVar30 <= uVar12) {
          uVar4 = 0;
          if (uVar30 != 0) {
            uVar4 = uVar12 / uVar30;
          }
          sVar10 = uVar12 - uVar4 * uVar30;
        }
      }
      plVar19 = *(long **)(*plVar26 + sVar10 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar2 = psVar25 + 1;
        sVar17 = (ulong)((byte)*psVar25 >> 1);
        if (((byte)*psVar25 & 1) != 0) {
          psVar2 = *(string **)(psVar25 + 0x10);
          sVar17 = *(size_t *)(psVar25 + 8);
        }
        if (uVar14 < 2) {
          if (sVar17 == 0) {
            do {
              if (plVar19[1] != uVar12 && (plVar19[1] & uVar30 - 1) != sVar10) break;
              uVar14 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar14 = plVar19[3];
              }
              if (uVar14 == 0) goto LAB_00e47ee8;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar12 && (plVar19[1] & uVar30 - 1) != sVar10) break;
              bVar3 = *(byte *)(plVar19 + 2);
              uVar14 = (ulong)(bVar3 >> 1);
              sVar16 = uVar14;
              if ((bVar3 & 1) != 0) {
                sVar16 = plVar19[3];
              }
              if (sVar16 == sVar17) {
                if ((bVar3 & 1) == 0) {
                  psVar20 = (string *)((long)plVar19 + 0x11);
                  psVar22 = psVar2;
                  while (*psVar20 == *psVar22) {
                    uVar14 = uVar14 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar14 == 0) goto LAB_00e47ee8;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar19[4],psVar2,sVar17);
                  if (iVar7 == 0) goto LAB_00e47ee8;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar17 == 0) {
          do {
            sVar17 = plVar19[1];
            if (sVar17 != uVar12) {
              if (uVar30 <= sVar17) {
                uVar14 = 0;
                if (uVar30 != 0) {
                  uVar14 = sVar17 / uVar30;
                }
                sVar17 = sVar17 - uVar14 * uVar30;
              }
              if (sVar17 != sVar10) break;
            }
            uVar14 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar14 = plVar19[3];
            }
            if (uVar14 == 0) goto LAB_00e47ee8;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            sVar16 = plVar19[1];
            if (sVar16 != uVar12) {
              if (uVar30 <= sVar16) {
                uVar14 = 0;
                if (uVar30 != 0) {
                  uVar14 = sVar16 / uVar30;
                }
                sVar16 = sVar16 - uVar14 * uVar30;
              }
              if (sVar16 != sVar10) break;
            }
            bVar3 = *(byte *)(plVar19 + 2);
            uVar14 = (ulong)(bVar3 >> 1);
            sVar16 = uVar14;
            if ((bVar3 & 1) != 0) {
              sVar16 = plVar19[3];
            }
            if (sVar16 == sVar17) {
              if ((bVar3 & 1) == 0) {
                psVar20 = (string *)((long)plVar19 + 0x11);
                psVar22 = psVar2;
                while (*psVar20 == *psVar22) {
                  uVar14 = uVar14 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar14 == 0) goto LAB_00e47ee8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar19[4],psVar2,sVar17);
                if (iVar7 == 0) goto LAB_00e47ee8;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar25);
    lVar18 = *(long *)(psVar25 + 0x18);
    lVar21 = *(long *)(psVar25 + 0x28);
    plVar19[6] = *(long *)(psVar25 + 0x20);
    plVar19[7] = lVar21;
    plVar19[5] = lVar18;
    *plVar19 = 0;
    plVar19[1] = uVar12;
    if ((uVar30 == 0) || (*(float *)(plVar11 + 5) * (float)uVar30 < (float)(plVar11[4] + 1))) {
      uVar30 = (ulong)(uVar30 < 3 || (uVar30 & uVar30 - 1) != 0) | uVar30 << 1;
      uVar14 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar14 <= uVar30) {
        uVar14 = uVar30;
      }
      FUN_008e9ae4(plVar26,uVar14);
      uVar30 = plVar11[2];
      if ((uVar30 & uVar30 - 1) == 0) {
        sVar10 = uVar30 - 1 & uVar12;
      }
      else if (uVar12 < uVar30) {
        sVar10 = uVar12;
      }
      else {
        uVar14 = 0;
        if (uVar30 != 0) {
          uVar14 = uVar12 / uVar30;
        }
        sVar10 = uVar12 - uVar14 * uVar30;
      }
    }
    lVar18 = *plVar26;
    plVar15 = *(long **)(lVar18 + sVar10 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar18 + sVar10 * 8) = plVar1;
      if (*plVar19 != 0) {
        uVar12 = *(ulong *)(*plVar19 + 8);
        if ((uVar30 & uVar30 - 1) == 0) {
          uVar12 = uVar12 & uVar30 - 1;
        }
        else if (uVar30 <= uVar12) {
          uVar14 = 0;
          if (uVar30 != 0) {
            uVar14 = uVar12 / uVar30;
          }
          uVar12 = uVar12 - uVar14 * uVar30;
        }
        plVar15 = (long *)(*plVar26 + uVar12 * 8);
        goto LAB_00e47ed8;
      }
    }
    else {
      *plVar19 = *plVar15;
LAB_00e47ed8:
      *plVar15 = (long)plVar19;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_00e47ee8:
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
           (lVar28 = *(long *)(lVar13 + 0x20), lVar28 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar28,0,8);
              goto LAB_00e48328;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar28,0,8);
        }
LAB_00e48328:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar12 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar13,0,8);
            goto LAB_00e482e0;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,0,8);
      }
    }
LAB_00e482e0:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar23 = (char *)plVar11[0xc];
  sVar10 = strlen(pcVar23);
  iVar7 = FUN_008f2c60(sVar10,pcVar23);
  pcVar23 = (char *)plVar11[0xe];
  sVar10 = strlen(pcVar23);
  iVar8 = FUN_008f2c60(sVar10,pcVar23);
  pcVar23 = (char *)plVar11[0x10];
  sVar10 = strlen(pcVar23);
  iVar9 = FUN_008f2c60(sVar10,pcVar23);
  lVar18 = local_a0;
  *(bool *)(plVar11 + 0xb) = (iVar8 != 0 || iVar7 != 0) || iVar9 != 0;
  plVar1 = DAT_043f1798;
  pvVar27 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar1;
    }
    uVar12 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pvVar27 = local_d0;
        goto joined_r0x00e484bc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pvVar27 = local_d0;
  }
joined_r0x00e484bc:
  pvVar6 = local_100;
  local_d0 = pvVar27;
  if (((local_e0 & 1) != 0) && (pvVar27 != (void *)0x0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar12 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,pvVar27,0,8);
        plVar1 = DAT_043f1798;
        pvVar6 = local_100;
        goto joined_r0x00e48858;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pvVar27,0,8);
    plVar1 = DAT_043f1798;
    pvVar6 = local_100;
  }
joined_r0x00e48858:
  DAT_043f1798 = plVar1;
  local_100 = pvVar6;
  if ((((byte)local_110 & 1) != 0) && (pvVar6 != (void *)0x0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar26 = plVar1;
    }
    uVar12 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,pvVar6,0,8);
        goto LAB_00e48620;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,pvVar6,0,8);
  }
LAB_00e48620:
  uVar24 = *(undefined8 *)(lVar29 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar11)(plVar11,uVar24);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  pvVar27 = local_140;
  if ((local_150 & 1) == 0) {
    pvVar27 = (void *)((long)&local_150 + 1);
  }
  FUN_001522a0(uVar24,pvVar27);
  pvVar27 = local_140;
  plVar1 = DAT_043f1798;
  if (((local_150 & 1) != 0) && (local_140 != (void *)0x0)) {
    plVar11 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar11 = plVar1;
    }
    uVar12 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar11,pvVar27,0,8);
        return;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar27,0,8);
  }
  return;
}


