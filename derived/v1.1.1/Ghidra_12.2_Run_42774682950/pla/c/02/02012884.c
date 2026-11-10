/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02012884; name: FUN_02012884
 */


void FUN_02012884(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                 long *param_6)

{
  long *plVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  size_t sVar14;
  size_t sVar15;
  long *plVar16;
  long lVar17;
  string *psVar18;
  long lVar19;
  string *psVar20;
  char *pcVar21;
  undefined8 uVar22;
  string *psVar23;
  long *plVar24;
  void *pvVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 local_128;
  size_t local_120;
  void *local_118;
  string local_110;
  char local_10f [8];
  undefined2 local_107;
  undefined1 local_105;
  undefined4 local_104;
  long local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  string local_e0;
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
  
  lVar27 = *param_1;
  local_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  sVar8 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar8 < 0x17) {
    local_128 = CONCAT71(local_128._1_7_,(char)((int)sVar8 << 1));
    pvVar25 = (void *)((ulong)&local_128 | 1);
    if (sVar8 != 0) goto LAB_020128f0;
  }
  else {
    uVar10 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar9 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar10,8);
    local_128 = uVar10 | 1;
    local_120 = sVar8;
    local_118 = pvVar25;
LAB_020128f0:
    memcpy(pvVar25,param_2,sVar8);
  }
  *(undefined1 *)((long)pvVar25 + sVar8) = 0;
  plVar1 = DAT_043f1798;
  plVar9 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar9 = plVar1;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0xd0,8);
  plVar9[4] = 0;
  plVar24 = plVar9 + 1;
  *plVar24 = 0;
  *(undefined4 *)(plVar9 + 5) = 0x3f800000;
  plVar9[10] = 0;
  plVar9[6] = (long)FUN_020137c0;
  plVar9[7] = (long)FUN_02013870;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  *plVar9 = (long)&PTR_FUN_0425b240;
  plVar9[0xc] = (long)param_5;
  plVar9[8] = 0;
  plVar9[9] = 0;
  lVar17 = *param_6;
  lVar19 = param_6[1];
  plVar9[0x19] = 0;
  plVar9[0x17] = 0;
  *(undefined1 *)(plVar9 + 0x18) = 0;
  plVar9[0xd] = lVar17;
  plVar9[0xe] = lVar19;
  plVar9[0x11] = 0;
  plVar9[0x12] = (long)FUN_02013a00;
  plVar9[0x13] = (long)&LAB_02013ce0;
  plVar9[0x14] = (long)&LAB_02013fc0;
  plVar9[0x15] = (long)&LAB_02013fd0;
  plVar9[0x16] = 0;
  plVar9[0xf] = (long)&DAT_0392da3c;
  plVar9[0x10] = 0;
  local_110 = (string)0x14;
  local_107 = 0x7473;
  local_10f[0] = s_class_cast_038dd4e7[0];
  local_10f[1] = s_class_cast_038dd4e7[1];
  local_10f[2] = s_class_cast_038dd4e7[2];
  local_10f[3] = s_class_cast_038dd4e7[3];
  local_10f[4] = s_class_cast_038dd4e7[4];
  local_10f[5] = s_class_cast_038dd4e7[5];
  local_10f[6] = s_class_cast_038dd4e7[6];
  local_10f[7] = s_class_cast_038dd4e7[7];
  local_105 = 0;
  local_104 = 0;
  local_f0 = &LAB_0201401c;
  local_e8 = 0xffffffff;
  local_100 = 0;
  local_f8 = &LAB_02013fd4;
  sVar8 = strlen(param_5);
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
    pvVar25 = (void *)((ulong)&local_80 | 1);
    if (sVar8 != 0) goto LAB_02012a6c;
  }
  else {
    uVar10 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar10,8);
    local_80 = (string)((byte)uVar10 | 1);
    uStack_7f = (undefined7)(uVar10 >> 8);
    local_78 = (undefined1)sVar8;
    uStack_77 = (undefined7)(sVar8 >> 8);
    local_70 = pvVar25;
LAB_02012a6c:
    memcpy(pvVar25,param_5,sVar8);
  }
  psVar23 = &local_110;
  plVar1 = plVar9 + 3;
  *(undefined1 *)((long)pvVar25 + sVar8) = 0;
  local_e0 = local_80;
  local_df = uStack_7f;
  local_b8 = 0xffffffff;
  uStack_d8 = local_78;
  uStack_d7 = uStack_77;
  local_d0 = local_70;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_c8 = &LAB_02014064;
  puStack_c0 = &LAB_020140ac;
  local_98 = &LAB_020140f4;
  puStack_90 = &LAB_0201413c;
  local_ab = 0;
  uStack_a4 = 0;
  local_88 = 0xffffffff;
  local_a0 = 0;
  do {
    uVar10 = *(ulong *)(psVar23 + 8);
    psVar2 = *(string **)(psVar23 + 0x10);
    if (((byte)*psVar23 & 1) == 0) {
      psVar2 = psVar23 + 1;
      uVar10 = (ulong)((byte)*psVar23 >> 1);
    }
    uVar10 = FUN_008e8ed4(&local_80,psVar2,uVar10);
    uVar28 = plVar9[2];
    if (uVar28 != 0) {
      uVar12 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        sVar8 = uVar28 - 1 & uVar10;
      }
      else {
        sVar8 = uVar10;
        if (uVar28 <= uVar10) {
          uVar4 = 0;
          if (uVar28 != 0) {
            uVar4 = uVar10 / uVar28;
          }
          sVar8 = uVar10 - uVar4 * uVar28;
        }
      }
      plVar16 = *(long **)(*plVar24 + sVar8 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        psVar2 = psVar23 + 1;
        sVar15 = (ulong)((byte)*psVar23 >> 1);
        if (((byte)*psVar23 & 1) != 0) {
          psVar2 = *(string **)(psVar23 + 0x10);
          sVar15 = *(size_t *)(psVar23 + 8);
        }
        if (uVar12 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar16[1] != uVar10 && (plVar16[1] & uVar28 - 1) != sVar8) break;
              uVar12 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
              if ((*(byte *)(plVar16 + 2) & 1) != 0) {
                uVar12 = plVar16[3];
              }
              if (uVar12 == 0) goto LAB_02012cbc;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              if (plVar16[1] != uVar10 && (plVar16[1] & uVar28 - 1) != sVar8) break;
              bVar3 = *(byte *)(plVar16 + 2);
              uVar12 = (ulong)(bVar3 >> 1);
              sVar14 = uVar12;
              if ((bVar3 & 1) != 0) {
                sVar14 = plVar16[3];
              }
              if (sVar14 == sVar15) {
                if ((bVar3 & 1) == 0) {
                  psVar18 = (string *)((long)plVar16 + 0x11);
                  psVar20 = psVar2;
                  while (*psVar18 == *psVar20) {
                    uVar12 = uVar12 - 1;
                    psVar18 = psVar18 + 1;
                    psVar20 = psVar20 + 1;
                    if (uVar12 == 0) goto LAB_02012cbc;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar16[4],psVar2,sVar15);
                  if (iVar6 == 0) goto LAB_02012cbc;
                }
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
        else if (sVar15 == 0) {
          do {
            sVar15 = plVar16[1];
            if (sVar15 != uVar10) {
              if (uVar28 <= sVar15) {
                uVar12 = 0;
                if (uVar28 != 0) {
                  uVar12 = sVar15 / uVar28;
                }
                sVar15 = sVar15 - uVar12 * uVar28;
              }
              if (sVar15 != sVar8) break;
            }
            uVar12 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
            if ((*(byte *)(plVar16 + 2) & 1) != 0) {
              uVar12 = plVar16[3];
            }
            if (uVar12 == 0) goto LAB_02012cbc;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            sVar14 = plVar16[1];
            if (sVar14 != uVar10) {
              if (uVar28 <= sVar14) {
                uVar12 = 0;
                if (uVar28 != 0) {
                  uVar12 = sVar14 / uVar28;
                }
                sVar14 = sVar14 - uVar12 * uVar28;
              }
              if (sVar14 != sVar8) break;
            }
            bVar3 = *(byte *)(plVar16 + 2);
            uVar12 = (ulong)(bVar3 >> 1);
            sVar14 = uVar12;
            if ((bVar3 & 1) != 0) {
              sVar14 = plVar16[3];
            }
            if (sVar14 == sVar15) {
              if ((bVar3 & 1) == 0) {
                psVar18 = (string *)((long)plVar16 + 0x11);
                psVar20 = psVar2;
                while (*psVar18 == *psVar20) {
                  uVar12 = uVar12 - 1;
                  psVar18 = psVar18 + 1;
                  psVar20 = psVar20 + 1;
                  if (uVar12 == 0) goto LAB_02012cbc;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar16[4],psVar2,sVar15);
                if (iVar6 == 0) goto LAB_02012cbc;
              }
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    plVar16 = DAT_043f1798;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar16;
    }
    plVar16 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    std::string::string((string *)(plVar16 + 2),psVar23);
    lVar17 = *(long *)(psVar23 + 0x18);
    lVar19 = *(long *)(psVar23 + 0x28);
    plVar16[6] = *(long *)(psVar23 + 0x20);
    plVar16[7] = lVar19;
    plVar16[5] = lVar17;
    *plVar16 = 0;
    plVar16[1] = uVar10;
    if ((uVar28 == 0) || (*(float *)(plVar9 + 5) * (float)uVar28 < (float)(plVar9[4] + 1))) {
      uVar28 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
      uVar12 = (ulong)((float)(plVar9[4] + 1) / *(float *)(plVar9 + 5));
      if (uVar12 <= uVar28) {
        uVar12 = uVar28;
      }
      FUN_008e9ae4(plVar24,uVar12);
      uVar28 = plVar9[2];
      if ((uVar28 & uVar28 - 1) == 0) {
        sVar8 = uVar28 - 1 & uVar10;
      }
      else if (uVar10 < uVar28) {
        sVar8 = uVar10;
      }
      else {
        uVar12 = 0;
        if (uVar28 != 0) {
          uVar12 = uVar10 / uVar28;
        }
        sVar8 = uVar10 - uVar12 * uVar28;
      }
    }
    lVar17 = *plVar24;
    plVar13 = *(long **)(lVar17 + sVar8 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar16 = *plVar1;
      *plVar1 = (long)plVar16;
      *(long **)(lVar17 + sVar8 * 8) = plVar1;
      if (*plVar16 != 0) {
        uVar10 = *(ulong *)(*plVar16 + 8);
        if ((uVar28 & uVar28 - 1) == 0) {
          uVar10 = uVar10 & uVar28 - 1;
        }
        else if (uVar28 <= uVar10) {
          uVar12 = 0;
          if (uVar28 != 0) {
            uVar12 = uVar10 / uVar28;
          }
          uVar10 = uVar10 - uVar12 * uVar28;
        }
        plVar13 = (long *)(*plVar24 + uVar10 * 8);
        goto LAB_02012cac;
      }
    }
    else {
      *plVar16 = *plVar13;
LAB_02012cac:
      *plVar13 = (long)plVar16;
    }
    plVar9[4] = plVar9[4] + 1;
LAB_02012cbc:
    psVar23 = psVar23 + 0x30;
  } while (psVar23 != &local_80);
  lVar19 = FUN_008cca50();
  lVar17 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar24,lVar19 + lVar17);
    if (lVar11 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar11);
      plVar1 = DAT_043f1798;
      lVar11 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar11 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar26 = *(long *)(lVar11 + 0x20), lVar26 != 0)) {
          plVar16 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar16 = plVar1;
          }
          uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar16,lVar26,0,8);
              goto LAB_02013068;
            }
          }
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar26,0,8);
        }
LAB_02013068:
        plVar1 = DAT_043f1798;
        plVar16 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar16 = plVar1;
        }
        uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar16,lVar11,0,8);
            goto LAB_02013020;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar11,0,8);
      }
    }
LAB_02013020:
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0x300);
  pcVar21 = (char *)plVar9[0xc];
  sVar8 = strlen(pcVar21);
  iVar6 = FUN_008f2c60(sVar8,pcVar21);
  pcVar21 = (char *)plVar9[0xf];
  sVar8 = strlen(pcVar21);
  iVar7 = FUN_008f2c60(sVar8,pcVar21);
  lVar17 = local_a0;
  *(bool *)(plVar9 + 0xb) = iVar7 != 0 || iVar6 != 0;
  plVar1 = DAT_043f1798;
  pvVar25 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar1;
    }
    uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar17,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_d0;
        goto joined_r0x020131e4;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_d0;
  }
joined_r0x020131e4:
  lVar17 = local_100;
  local_d0 = pvVar25;
  if ((((byte)local_e0 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar17 = local_100;
        goto joined_r0x02013580;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar17 = local_100;
  }
joined_r0x02013580:
  DAT_043f1798 = plVar1;
  local_100 = lVar17;
  if ((((byte)local_110 & 1) != 0) && (lVar17 != 0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar24 = plVar1;
    }
    uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar17,0,8);
        goto LAB_02013348;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar17,0,8);
  }
LAB_02013348:
  uVar22 = *(undefined8 *)(lVar27 + 0x20);
  FUN_0014fef0(uVar22);
  (**(code **)*plVar9)(plVar9,uVar22);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  pvVar25 = local_118;
  if ((local_128 & 1) == 0) {
    pvVar25 = (void *)((long)&local_128 + 1);
  }
  FUN_001522a0(uVar22,pvVar25);
  pvVar25 = local_118;
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (void *)0x0)) {
    plVar9 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar9 = plVar1;
    }
    uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar9,pvVar25,0,8);
        return;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,pvVar25,0,8);
  }
  return;
}


