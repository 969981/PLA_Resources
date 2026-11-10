/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012e6dd0; name: FUN_012e6dd0
 */


void FUN_012e6dd0(long *param_1,char *param_2,char *param_3,long *param_4)

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
  long lVar11;
  ulong uVar12;
  long *plVar13;
  void *pvVar14;
  long *plVar15;
  ulong uVar16;
  string *psVar17;
  long lVar18;
  string *psVar19;
  undefined8 uVar20;
  string *psVar21;
  long *plVar22;
  void *pvVar23;
  long lVar24;
  long lVar25;
  void *pvVar26;
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
  
  lVar24 = *param_1;
  local_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  sVar7 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar7 < 0x17) {
    local_128 = CONCAT71(local_128._1_7_,(char)((int)sVar7 << 1));
    pvVar23 = (void *)((ulong)&local_128 | 1);
    if (sVar7 != 0) goto LAB_012e6e3c;
  }
  else {
    uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar12,8);
    local_128 = uVar12 | 1;
    local_120 = sVar7;
    local_118 = pvVar23;
LAB_012e6e3c:
    memcpy(pvVar23,param_2,sVar7);
  }
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  plVar1 = DAT_043f1798;
  plVar8 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar8 = plVar1;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xd0,8);
  plVar8[4] = 0;
  plVar22 = plVar8 + 1;
  *plVar22 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[10] = 0;
  plVar8[6] = (long)FUN_012e7cb0;
  plVar8[7] = (long)FUN_012e7d60;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  *plVar8 = (long)&PTR_FUN_04203300;
  plVar8[0xc] = (long)param_3;
  plVar8[8] = 0;
  plVar8[9] = 0;
  lVar11 = *param_4;
  plVar8[0x19] = 0;
  plVar8[0xd] = lVar11;
  plVar8[0xe] = (long)&DAT_038ca815;
  plVar8[0x11] = 0;
  plVar8[0x12] = (long)FUN_012e7f34;
  plVar8[0x13] = (long)&LAB_012e8214;
  plVar8[0x14] = (long)&LAB_012e84f0;
  plVar8[0x15] = (long)&LAB_012e8500;
  *(undefined1 *)(plVar8 + 0x18) = 1;
  plVar8[0xf] = (long)&DAT_0392da3c;
  plVar8[0x10] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0;
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
    pvVar23 = (void *)((ulong)&local_80 | 1);
    if (sVar7 != 0) goto LAB_012e6f78;
  }
  else {
    uVar12 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar12,8);
    local_80 = (string)((byte)uVar12 | 1);
    uStack_7f = (undefined7)(uVar12 >> 8);
    local_78 = (undefined1)sVar7;
    uStack_77 = (undefined7)(sVar7 >> 8);
    local_70 = pvVar23;
LAB_012e6f78:
    memcpy(pvVar23,param_3,sVar7);
  }
  psVar21 = &local_110;
  plVar1 = plVar8 + 3;
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
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
  puStack_c8 = &LAB_012e853c;
  local_f8 = &LAB_012e8504;
  puStack_f0 = &LAB_012e8520;
  local_e8 = 0xffffffff;
  local_c0 = &LAB_012e8584;
  local_b8 = 0xffffffff;
  local_88 = 0xffffffff;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_d4 = 0;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_98 = &LAB_012e85cc;
  puStack_90 = &LAB_012e8614;
  do {
    uVar12 = *(ulong *)(psVar21 + 8);
    psVar3 = *(string **)(psVar21 + 0x10);
    if (((byte)*psVar21 & 1) == 0) {
      psVar3 = psVar21 + 1;
      uVar12 = (ulong)((byte)*psVar21 >> 1);
    }
    pvVar9 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar12);
    pvVar26 = (void *)plVar8[2];
    if (pvVar26 != (void *)0x0) {
      uVar12 = (long)pvVar26 - ((ulong)pvVar26 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        pvVar23 = (void *)((long)pvVar26 - 1U & (ulong)pvVar9);
      }
      else {
        pvVar23 = pvVar9;
        if (pvVar26 <= pvVar9) {
          uVar16 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar16 = (ulong)pvVar9 / (ulong)pvVar26;
          }
          pvVar23 = (void *)((long)pvVar9 - uVar16 * (long)pvVar26);
        }
      }
      plVar15 = *(long **)(*plVar22 + (long)pvVar23 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        psVar3 = psVar21 + 1;
        sVar7 = (ulong)((byte)*psVar21 >> 1);
        if (((byte)*psVar21 & 1) != 0) {
          psVar3 = *(string **)(psVar21 + 0x10);
          sVar7 = *(size_t *)(psVar21 + 8);
        }
        if (uVar12 < 2) {
          if (sVar7 == 0) {
            do {
              if ((void *)plVar15[1] != pvVar9 &&
                  (void *)((ulong)plVar15[1] & (long)pvVar26 - 1U) != pvVar23) break;
              uVar12 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
              if ((*(byte *)(plVar15 + 2) & 1) != 0) {
                uVar12 = plVar15[3];
              }
              if (uVar12 == 0) goto LAB_012e7200;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar15[1] != pvVar9 &&
                  (void *)((ulong)plVar15[1] & (long)pvVar26 - 1U) != pvVar23) break;
              bVar4 = *(byte *)(plVar15 + 2);
              uVar12 = (ulong)(bVar4 >> 1);
              sVar2 = uVar12;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar15[3];
              }
              if (sVar2 == sVar7) {
                if ((bVar4 & 1) == 0) {
                  psVar17 = (string *)((long)plVar15 + 0x11);
                  psVar19 = psVar3;
                  while (*psVar17 == *psVar19) {
                    uVar12 = uVar12 - 1;
                    psVar17 = psVar17 + 1;
                    psVar19 = psVar19 + 1;
                    if (uVar12 == 0) goto LAB_012e7200;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar15[4],psVar3,sVar7);
                  if (iVar6 == 0) goto LAB_012e7200;
                }
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
        else if (sVar7 == 0) {
          do {
            pvVar14 = (void *)plVar15[1];
            if (pvVar14 != pvVar9) {
              if (pvVar26 <= pvVar14) {
                uVar12 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar12 = (ulong)pvVar14 / (ulong)pvVar26;
                }
                pvVar14 = (void *)((long)pvVar14 - uVar12 * (long)pvVar26);
              }
              if (pvVar14 != pvVar23) break;
            }
            uVar12 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
            if ((*(byte *)(plVar15 + 2) & 1) != 0) {
              uVar12 = plVar15[3];
            }
            if (uVar12 == 0) goto LAB_012e7200;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            pvVar14 = (void *)plVar15[1];
            if (pvVar14 != pvVar9) {
              if (pvVar26 <= pvVar14) {
                uVar12 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar12 = (ulong)pvVar14 / (ulong)pvVar26;
                }
                pvVar14 = (void *)((long)pvVar14 - uVar12 * (long)pvVar26);
              }
              if (pvVar14 != pvVar23) break;
            }
            bVar4 = *(byte *)(plVar15 + 2);
            uVar12 = (ulong)(bVar4 >> 1);
            sVar2 = uVar12;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar15[3];
            }
            if (sVar2 == sVar7) {
              if ((bVar4 & 1) == 0) {
                psVar17 = (string *)((long)plVar15 + 0x11);
                psVar19 = psVar3;
                while (*psVar17 == *psVar19) {
                  uVar12 = uVar12 - 1;
                  psVar17 = psVar17 + 1;
                  psVar19 = psVar19 + 1;
                  if (uVar12 == 0) goto LAB_012e7200;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar15[4],psVar3,sVar7);
                if (iVar6 == 0) goto LAB_012e7200;
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
    std::string::string((string *)(plVar15 + 2),psVar21);
    lVar11 = *(long *)(psVar21 + 0x18);
    lVar18 = *(long *)(psVar21 + 0x28);
    plVar15[6] = *(long *)(psVar21 + 0x20);
    plVar15[7] = lVar18;
    plVar15[5] = lVar11;
    *plVar15 = 0;
    plVar15[1] = (long)pvVar9;
    if ((pvVar26 == (void *)0x0) ||
       (*(float *)(plVar8 + 5) * (float)pvVar26 < (float)(plVar8[4] + 1))) {
      uVar12 = (ulong)(pvVar26 < (void *)0x3 || ((ulong)pvVar26 & (long)pvVar26 - 1U) != 0) |
               (long)pvVar26 << 1;
      uVar16 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar16 <= uVar12) {
        uVar16 = uVar12;
      }
      FUN_008e9ae4(plVar22,uVar16);
      pvVar26 = (void *)plVar8[2];
      if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
        pvVar23 = (void *)((long)pvVar26 - 1U & (ulong)pvVar9);
      }
      else if (pvVar9 < pvVar26) {
        pvVar23 = pvVar9;
      }
      else {
        uVar12 = 0;
        if (pvVar26 != (void *)0x0) {
          uVar12 = (ulong)pvVar9 / (ulong)pvVar26;
        }
        pvVar23 = (void *)((long)pvVar9 - uVar12 * (long)pvVar26);
      }
    }
    lVar11 = *plVar22;
    plVar13 = *(long **)(lVar11 + (long)pvVar23 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar15 = *plVar1;
      *plVar1 = (long)plVar15;
      *(long **)(lVar11 + (long)pvVar23 * 8) = plVar1;
      if (*plVar15 != 0) {
        pvVar9 = *(void **)(*plVar15 + 8);
        if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
          pvVar9 = (void *)((ulong)pvVar9 & (long)pvVar26 - 1U);
        }
        else if (pvVar26 <= pvVar9) {
          uVar12 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar12 = (ulong)pvVar9 / (ulong)pvVar26;
          }
          pvVar9 = (void *)((long)pvVar9 - uVar12 * (long)pvVar26);
        }
        plVar13 = (long *)(*plVar22 + (long)pvVar9 * 8);
        goto LAB_012e71f0;
      }
    }
    else {
      *plVar15 = *plVar13;
LAB_012e71f0:
      *plVar13 = (long)plVar15;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_012e7200:
    psVar21 = psVar21 + 0x30;
  } while (psVar21 != &local_80);
  lVar18 = FUN_008cca50();
  lVar11 = 0;
  do {
    lVar10 = FUN_008e8c90(plVar22,lVar18 + lVar11);
    if (lVar10 != 0) {
      FUN_008f2aec(&local_80,plVar22,lVar10);
      plVar1 = DAT_043f1798;
      lVar10 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar10 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) &&
           (lVar25 = *(long *)(lVar10 + 0x20), lVar25 != 0)) {
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
              goto LAB_012e75fc;
            }
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar25,0,8);
        }
LAB_012e75fc:
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
            FUN_02bcc824(plVar15,lVar10,0,8);
            goto LAB_012e7560;
          }
        }
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,0,8);
      }
    }
LAB_012e7560:
    lVar10 = local_a0;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0x300);
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar11 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar22 = plVar1;
    }
    uVar12 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar10,0,8);
        plVar1 = DAT_043f1798;
        lVar11 = local_d0;
        goto joined_r0x012e7758;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar10,0,8);
    plVar1 = DAT_043f1798;
    lVar11 = local_d0;
  }
joined_r0x012e7758:
  pvVar23 = local_100;
  local_d0 = lVar11;
  if (((local_e0 & 1) != 0) && (lVar11 != 0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar12 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,lVar11,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_100;
        goto joined_r0x012e7a80;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,lVar11,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_100;
  }
joined_r0x012e7a80:
  DAT_043f1798 = plVar1;
  local_100 = pvVar23;
  if ((((byte)local_110 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar22 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar22 = plVar1;
    }
    uVar12 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar22,pvVar23,0,8);
        goto LAB_012e78bc;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,pvVar23,0,8);
  }
LAB_012e78bc:
  uVar20 = *(undefined8 *)(lVar24 + 0x20);
  FUN_0014fef0(uVar20);
  (**(code **)*plVar8)(plVar8,uVar20);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  pvVar23 = local_118;
  if ((local_128 & 1) == 0) {
    pvVar23 = (void *)((long)&local_128 + 1);
  }
  FUN_001522a0(uVar20,pvVar23);
  pvVar23 = local_118;
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (void *)0x0)) {
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    uVar12 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar8,pvVar23,0,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,pvVar23,0,8);
  }
  return;
}


