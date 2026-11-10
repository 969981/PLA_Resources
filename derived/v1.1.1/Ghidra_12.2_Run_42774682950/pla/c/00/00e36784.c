/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e36784; name: FUN_00e36784
 */


void FUN_00e36784(long *param_1,char *param_2,char *param_3,long *param_4)

{
  long *plVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  size_t sVar15;
  size_t sVar16;
  long *plVar17;
  long lVar18;
  string *psVar19;
  long lVar20;
  string *psVar21;
  char *pcVar22;
  undefined8 uVar23;
  string *psVar24;
  long *plVar25;
  void *pvVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 local_128;
  size_t local_120;
  void *local_118;
  string local_110;
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
  
  lVar27 = *param_1;
  local_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  sVar9 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar9 < 0x17) {
    local_128 = CONCAT71(local_128._1_7_,(char)((int)sVar9 << 1));
    pvVar26 = (void *)((ulong)&local_128 | 1);
    if (sVar9 != 0) goto LAB_00e367f0;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    pvVar26 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar11,8);
    local_128 = uVar11 | 1;
    local_120 = sVar9;
    local_118 = pvVar26;
LAB_00e367f0:
    memcpy(pvVar26,param_2,sVar9);
  }
  *(undefined1 *)((long)pvVar26 + sVar9) = 0;
  plVar1 = DAT_043f1798;
  plVar10 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar10 = plVar1;
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0xd8,8);
  plVar10[4] = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar25 = plVar10 + 1;
  *plVar25 = 0;
  plVar10[6] = (long)FUN_00e376b0;
  plVar10[7] = (long)FUN_00e37760;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  *plVar10 = (long)&PTR_FUN_041ee828;
  plVar10[0xc] = (long)param_3;
  lVar18 = *param_4;
  lVar20 = param_4[1];
  plVar10[0x1a] = 0;
  *(undefined1 *)(plVar10 + 0x19) = 0;
  plVar10[0xd] = lVar18;
  plVar10[0xe] = lVar20;
  plVar10[0xf] = (long)&DAT_038ca815;
  plVar10[0x10] = (long)&DAT_0392da3c;
  plVar10[0x13] = (long)FUN_00e378f0;
  plVar10[0x14] = (long)&LAB_00e37bd0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x15] = (long)&LAB_00e37eb0;
  plVar10[0x16] = (long)&LAB_00e37ec0;
  plVar10[0x17] = 0;
  plVar10[0x18] = 0;
  sVar9 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_80 = SUB41((int)sVar9 << 1,0);
    pvVar26 = (void *)((ulong)&local_80 | 1);
    if (sVar9 != 0) goto LAB_00e36928;
  }
  else {
    uVar11 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    pvVar26 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar11,8);
    local_80 = (string)((byte)uVar11 | 1);
    uStack_7f = (undefined7)(uVar11 >> 8);
    local_78 = (undefined1)sVar9;
    uStack_77 = (undefined7)(sVar9 >> 8);
    local_70 = pvVar26;
LAB_00e36928:
    memcpy(pvVar26,param_3,sVar9);
  }
  psVar24 = &local_110;
  plVar1 = plVar10 + 3;
  *(undefined1 *)((long)pvVar26 + sVar9) = 0;
  local_10f = uStack_7f;
  local_110 = local_80;
  uStack_108 = local_78;
  uStack_107 = uStack_77;
  local_100 = local_70;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_00e37f54;
  local_f8 = &LAB_00e37ec4;
  puStack_f0 = &LAB_00e37f0c;
  local_e8 = 0xffffffff;
  local_c0 = &LAB_00e37f9c;
  local_b8 = 0xffffffff;
  local_88 = 0xffffffff;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_d4 = 0;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_98 = &LAB_00e37fe4;
  puStack_90 = &LAB_00e3802c;
  do {
    uVar11 = *(ulong *)(psVar24 + 8);
    psVar2 = *(string **)(psVar24 + 0x10);
    if (((byte)*psVar24 & 1) == 0) {
      psVar2 = psVar24 + 1;
      uVar11 = (ulong)((byte)*psVar24 >> 1);
    }
    uVar11 = FUN_008e8ed4(&local_80,psVar2,uVar11);
    uVar29 = plVar10[2];
    if (uVar29 != 0) {
      uVar13 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        sVar9 = uVar29 - 1 & uVar11;
      }
      else {
        sVar9 = uVar11;
        if (uVar29 <= uVar11) {
          uVar4 = 0;
          if (uVar29 != 0) {
            uVar4 = uVar11 / uVar29;
          }
          sVar9 = uVar11 - uVar4 * uVar29;
        }
      }
      plVar17 = *(long **)(*plVar25 + sVar9 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar2 = psVar24 + 1;
        sVar16 = (ulong)((byte)*psVar24 >> 1);
        if (((byte)*psVar24 & 1) != 0) {
          psVar2 = *(string **)(psVar24 + 0x10);
          sVar16 = *(size_t *)(psVar24 + 8);
        }
        if (uVar13 < 2) {
          if (sVar16 == 0) {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar29 - 1) != sVar9) break;
              uVar13 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar13 = plVar17[3];
              }
              if (uVar13 == 0) goto LAB_00e36bb0;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar29 - 1) != sVar9) break;
              bVar3 = *(byte *)(plVar17 + 2);
              uVar13 = (ulong)(bVar3 >> 1);
              sVar15 = uVar13;
              if ((bVar3 & 1) != 0) {
                sVar15 = plVar17[3];
              }
              if (sVar15 == sVar16) {
                if ((bVar3 & 1) == 0) {
                  psVar19 = (string *)((long)plVar17 + 0x11);
                  psVar21 = psVar2;
                  while (*psVar19 == *psVar21) {
                    uVar13 = uVar13 - 1;
                    psVar19 = psVar19 + 1;
                    psVar21 = psVar21 + 1;
                    if (uVar13 == 0) goto LAB_00e36bb0;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar17[4],psVar2,sVar16);
                  if (iVar6 == 0) goto LAB_00e36bb0;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar16 == 0) {
          do {
            sVar16 = plVar17[1];
            if (sVar16 != uVar11) {
              if (uVar29 <= sVar16) {
                uVar13 = 0;
                if (uVar29 != 0) {
                  uVar13 = sVar16 / uVar29;
                }
                sVar16 = sVar16 - uVar13 * uVar29;
              }
              if (sVar16 != sVar9) break;
            }
            uVar13 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar13 = plVar17[3];
            }
            if (uVar13 == 0) goto LAB_00e36bb0;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            sVar15 = plVar17[1];
            if (sVar15 != uVar11) {
              if (uVar29 <= sVar15) {
                uVar13 = 0;
                if (uVar29 != 0) {
                  uVar13 = sVar15 / uVar29;
                }
                sVar15 = sVar15 - uVar13 * uVar29;
              }
              if (sVar15 != sVar9) break;
            }
            bVar3 = *(byte *)(plVar17 + 2);
            uVar13 = (ulong)(bVar3 >> 1);
            sVar15 = uVar13;
            if ((bVar3 & 1) != 0) {
              sVar15 = plVar17[3];
            }
            if (sVar15 == sVar16) {
              if ((bVar3 & 1) == 0) {
                psVar19 = (string *)((long)plVar17 + 0x11);
                psVar21 = psVar2;
                while (*psVar19 == *psVar21) {
                  uVar13 = uVar13 - 1;
                  psVar19 = psVar19 + 1;
                  psVar21 = psVar21 + 1;
                  if (uVar13 == 0) goto LAB_00e36bb0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar17[4],psVar2,sVar16);
                if (iVar6 == 0) goto LAB_00e36bb0;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar24);
    lVar18 = *(long *)(psVar24 + 0x18);
    lVar20 = *(long *)(psVar24 + 0x28);
    plVar17[6] = *(long *)(psVar24 + 0x20);
    plVar17[7] = lVar20;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = uVar11;
    if ((uVar29 == 0) || (*(float *)(plVar10 + 5) * (float)uVar29 < (float)(plVar10[4] + 1))) {
      uVar29 = (ulong)(uVar29 < 3 || (uVar29 & uVar29 - 1) != 0) | uVar29 << 1;
      uVar13 = (ulong)((float)(plVar10[4] + 1) / *(float *)(plVar10 + 5));
      if (uVar13 <= uVar29) {
        uVar13 = uVar29;
      }
      FUN_008e9ae4(plVar25,uVar13);
      uVar29 = plVar10[2];
      if ((uVar29 & uVar29 - 1) == 0) {
        sVar9 = uVar29 - 1 & uVar11;
      }
      else if (uVar11 < uVar29) {
        sVar9 = uVar11;
      }
      else {
        uVar13 = 0;
        if (uVar29 != 0) {
          uVar13 = uVar11 / uVar29;
        }
        sVar9 = uVar11 - uVar13 * uVar29;
      }
    }
    lVar18 = *plVar25;
    plVar14 = *(long **)(lVar18 + sVar9 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar17 = *plVar1;
      *plVar1 = (long)plVar17;
      *(long **)(lVar18 + sVar9 * 8) = plVar1;
      if (*plVar17 != 0) {
        uVar11 = *(ulong *)(*plVar17 + 8);
        if ((uVar29 & uVar29 - 1) == 0) {
          uVar11 = uVar11 & uVar29 - 1;
        }
        else if (uVar29 <= uVar11) {
          uVar13 = 0;
          if (uVar29 != 0) {
            uVar13 = uVar11 / uVar29;
          }
          uVar11 = uVar11 - uVar13 * uVar29;
        }
        plVar14 = (long *)(*plVar25 + uVar11 * 8);
        goto LAB_00e36ba0;
      }
    }
    else {
      *plVar17 = *plVar14;
LAB_00e36ba0:
      *plVar14 = (long)plVar17;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_00e36bb0:
    psVar24 = psVar24 + 0x30;
  } while (psVar24 != &local_80);
  lVar20 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar25,lVar20 + lVar18);
    if (lVar12 != 0) {
      FUN_008f2aec(&local_80,plVar25,lVar12);
      plVar1 = DAT_043f1798;
      lVar12 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar12 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar12 + 0x20), lVar28 != 0)) {
          plVar17 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar17 = plVar1;
          }
          uVar11 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar11 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar28,0,8);
              goto LAB_00e36fb4;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar28,0,8);
        }
LAB_00e36fb4:
        plVar1 = DAT_043f1798;
        plVar17 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar17 = plVar1;
        }
        uVar11 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar12,0,8);
            goto LAB_00e36f18;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
      }
    }
LAB_00e36f18:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar22 = (char *)plVar10[0xc];
  sVar9 = strlen(pcVar22);
  iVar6 = FUN_008f2c60(sVar9,pcVar22);
  pcVar22 = (char *)plVar10[0xf];
  sVar9 = strlen(pcVar22);
  iVar7 = FUN_008f2c60(sVar9,pcVar22);
  pcVar22 = (char *)plVar10[0x10];
  sVar9 = strlen(pcVar22);
  iVar8 = FUN_008f2c60(sVar9,pcVar22);
  lVar20 = local_a0;
  *(bool *)(plVar10 + 0xb) = (iVar7 != 0 || iVar6 != 0) || iVar8 != 0;
  plVar1 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    uVar11 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar20,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x00e3715c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar20,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x00e3715c:
  pvVar26 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar25 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar11 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pvVar26 = local_100;
        goto joined_r0x00e37484;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pvVar26 = local_100;
  }
joined_r0x00e37484:
  DAT_043f1798 = plVar1;
  local_100 = pvVar26;
  if ((((byte)local_110 & 1) != 0) && (pvVar26 != (void *)0x0)) {
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar25 = plVar1;
    }
    uVar11 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar26,0,8);
        goto LAB_00e372c0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar26,0,8);
  }
LAB_00e372c0:
  uVar23 = *(undefined8 *)(lVar27 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar10)(plVar10,uVar23);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  pvVar26 = local_118;
  if ((local_128 & 1) == 0) {
    pvVar26 = (void *)((long)&local_128 + 1);
  }
  FUN_001522a0(uVar23,pvVar26);
  pvVar26 = local_118;
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (void *)0x0)) {
    plVar10 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar10 = plVar1;
    }
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar10,pvVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pvVar26,0,8);
  }
  return;
}


