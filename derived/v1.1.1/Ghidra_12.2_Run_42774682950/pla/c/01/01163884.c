/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01163884; name: FUN_01163884
 */


void FUN_01163884(long *param_1,char *param_2,char *param_3,long *param_4)

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
  long *plVar11;
  long lVar12;
  long *plVar13;
  size_t sVar14;
  size_t sVar15;
  long lVar16;
  ulong uVar17;
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
  undefined8 local_f8;
  size_t local_f0;
  void *local_e8;
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
  
  lVar26 = *param_1;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  sVar8 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar8 < 0x17) {
    local_f8 = CONCAT71(local_f8._1_7_,(char)((int)sVar8 << 1));
    pvVar25 = (void *)((ulong)&local_f8 | 1);
    if (sVar8 != 0) goto LAB_011638f0;
  }
  else {
    uVar10 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar9 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar10,8);
    local_f8 = uVar10 | 1;
    local_f0 = sVar8;
    local_e8 = pvVar25;
LAB_011638f0:
    memcpy(pvVar25,param_2,sVar8);
  }
  *(undefined1 *)((long)pvVar25 + sVar8) = 0;
  plVar1 = DAT_043f1798;
  plVar9 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar9 = plVar1;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,200,8);
  plVar9[4] = 0;
  plVar24 = plVar9 + 1;
  *plVar24 = 0;
  *(undefined4 *)(plVar9 + 5) = 0x3f800000;
  plVar9[10] = 0;
  plVar9[6] = (long)FUN_01164630;
  plVar9[7] = (long)FUN_011646e0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  *plVar9 = (long)&PTR_FUN_041f38a8;
  plVar9[0xc] = (long)param_3;
  plVar9[8] = 0;
  plVar9[9] = 0;
  lVar16 = *param_4;
  plVar9[0x18] = 0;
  *(undefined1 *)(plVar9 + 0x17) = 0;
  plVar9[0xd] = lVar16;
  plVar9[0xe] = (long)&DAT_0392da3c;
  plVar9[0x11] = (long)FUN_011648b4;
  plVar9[0x12] = (long)&LAB_01164b94;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  plVar9[0x13] = (long)&LAB_01164e70;
  plVar9[0x14] = (long)&LAB_01164e80;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
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
    pvVar25 = (void *)((ulong)&local_80 | 1);
    if (sVar8 != 0) goto LAB_01163a1c;
  }
  else {
    uVar10 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar11 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar11 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar10,8);
    local_80 = (string)((byte)uVar10 | 1);
    uStack_7f = (undefined7)(uVar10 >> 8);
    local_78 = (undefined1)sVar8;
    uStack_77 = (undefined7)(sVar8 >> 8);
    local_70 = pvVar25;
LAB_01163a1c:
    memcpy(pvVar25,param_3,sVar8);
  }
  psVar23 = &local_e0;
  plVar1 = plVar9 + 3;
  *(undefined1 *)((long)pvVar25 + sVar8) = 0;
  local_df = uStack_7f;
  local_e0 = local_80;
  local_c8 = &LAB_01164e84;
  puStack_c0 = &LAB_01164ecc;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_88 = 0xffffffff;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_d8 = local_78;
  uStack_d7 = uStack_77;
  local_d0 = local_70;
  local_98 = &LAB_01164f14;
  puStack_90 = &LAB_01164f5c;
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
      uVar17 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
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
      plVar11 = *(long **)(*plVar24 + sVar8 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        psVar2 = psVar23 + 1;
        sVar15 = (ulong)((byte)*psVar23 >> 1);
        if (((byte)*psVar23 & 1) != 0) {
          psVar2 = *(string **)(psVar23 + 0x10);
          sVar15 = *(size_t *)(psVar23 + 8);
        }
        if (uVar17 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar11[1] != uVar10 && (plVar11[1] & uVar28 - 1) != sVar8) break;
              uVar17 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
              if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                uVar17 = plVar11[3];
              }
              if (uVar17 == 0) goto LAB_01163cbc;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              if (plVar11[1] != uVar10 && (plVar11[1] & uVar28 - 1) != sVar8) break;
              bVar3 = *(byte *)(plVar11 + 2);
              uVar17 = (ulong)(bVar3 >> 1);
              sVar14 = uVar17;
              if ((bVar3 & 1) != 0) {
                sVar14 = plVar11[3];
              }
              if (sVar14 == sVar15) {
                if ((bVar3 & 1) == 0) {
                  psVar18 = (string *)((long)plVar11 + 0x11);
                  psVar20 = psVar2;
                  while (*psVar18 == *psVar20) {
                    uVar17 = uVar17 - 1;
                    psVar18 = psVar18 + 1;
                    psVar20 = psVar20 + 1;
                    if (uVar17 == 0) goto LAB_01163cbc;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar11[4],psVar2,sVar15);
                  if (iVar6 == 0) goto LAB_01163cbc;
                }
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
        else if (sVar15 == 0) {
          do {
            sVar15 = plVar11[1];
            if (sVar15 != uVar10) {
              if (uVar28 <= sVar15) {
                uVar17 = 0;
                if (uVar28 != 0) {
                  uVar17 = sVar15 / uVar28;
                }
                sVar15 = sVar15 - uVar17 * uVar28;
              }
              if (sVar15 != sVar8) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
            if ((*(byte *)(plVar11 + 2) & 1) != 0) {
              uVar17 = plVar11[3];
            }
            if (uVar17 == 0) goto LAB_01163cbc;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            sVar14 = plVar11[1];
            if (sVar14 != uVar10) {
              if (uVar28 <= sVar14) {
                uVar17 = 0;
                if (uVar28 != 0) {
                  uVar17 = sVar14 / uVar28;
                }
                sVar14 = sVar14 - uVar17 * uVar28;
              }
              if (sVar14 != sVar8) break;
            }
            bVar3 = *(byte *)(plVar11 + 2);
            uVar17 = (ulong)(bVar3 >> 1);
            sVar14 = uVar17;
            if ((bVar3 & 1) != 0) {
              sVar14 = plVar11[3];
            }
            if (sVar14 == sVar15) {
              if ((bVar3 & 1) == 0) {
                psVar18 = (string *)((long)plVar11 + 0x11);
                psVar20 = psVar2;
                while (*psVar18 == *psVar20) {
                  uVar17 = uVar17 - 1;
                  psVar18 = psVar18 + 1;
                  psVar20 = psVar20 + 1;
                  if (uVar17 == 0) goto LAB_01163cbc;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar11[4],psVar2,sVar15);
                if (iVar6 == 0) goto LAB_01163cbc;
              }
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
    plVar11 = DAT_043f1798;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar11;
    }
    plVar11 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    std::string::string((string *)(plVar11 + 2),psVar23);
    lVar16 = *(long *)(psVar23 + 0x18);
    lVar19 = *(long *)(psVar23 + 0x28);
    plVar11[6] = *(long *)(psVar23 + 0x20);
    plVar11[7] = lVar19;
    plVar11[5] = lVar16;
    *plVar11 = 0;
    plVar11[1] = uVar10;
    if ((uVar28 == 0) || (*(float *)(plVar9 + 5) * (float)uVar28 < (float)(plVar9[4] + 1))) {
      uVar28 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
      uVar17 = (ulong)((float)(plVar9[4] + 1) / *(float *)(plVar9 + 5));
      if (uVar17 <= uVar28) {
        uVar17 = uVar28;
      }
      FUN_008e9ae4(plVar24,uVar17);
      uVar28 = plVar9[2];
      if ((uVar28 & uVar28 - 1) == 0) {
        sVar8 = uVar28 - 1 & uVar10;
      }
      else if (uVar10 < uVar28) {
        sVar8 = uVar10;
      }
      else {
        uVar17 = 0;
        if (uVar28 != 0) {
          uVar17 = uVar10 / uVar28;
        }
        sVar8 = uVar10 - uVar17 * uVar28;
      }
    }
    lVar16 = *plVar24;
    plVar13 = *(long **)(lVar16 + sVar8 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar11 = *plVar1;
      *plVar1 = (long)plVar11;
      *(long **)(lVar16 + sVar8 * 8) = plVar1;
      if (*plVar11 != 0) {
        uVar10 = *(ulong *)(*plVar11 + 8);
        if ((uVar28 & uVar28 - 1) == 0) {
          uVar10 = uVar10 & uVar28 - 1;
        }
        else if (uVar28 <= uVar10) {
          uVar17 = 0;
          if (uVar28 != 0) {
            uVar17 = uVar10 / uVar28;
          }
          uVar10 = uVar10 - uVar17 * uVar28;
        }
        plVar13 = (long *)(*plVar24 + uVar10 * 8);
        goto LAB_01163cac;
      }
    }
    else {
      *plVar11 = *plVar13;
LAB_01163cac:
      *plVar13 = (long)plVar11;
    }
    plVar9[4] = plVar9[4] + 1;
LAB_01163cbc:
    psVar23 = psVar23 + 0x30;
  } while (psVar23 != &local_80);
  lVar19 = FUN_008cca50();
  lVar16 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar24,lVar19 + lVar16);
    if (lVar12 != 0) {
      FUN_008f2aec(&local_80,plVar24,lVar12);
      plVar1 = DAT_043f1798;
      lVar12 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar12 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar27 = *(long *)(lVar12 + 0x20), lVar27 != 0)) {
          plVar11 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar11 = plVar1;
          }
          uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar11,lVar27,0,8);
              goto LAB_0116406c;
            }
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar27,0,8);
        }
LAB_0116406c:
        plVar1 = DAT_043f1798;
        plVar11 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar11 = plVar1;
        }
        uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar11,lVar12,0,8);
            goto LAB_01163fd0;
          }
        }
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,0,8);
      }
    }
LAB_01163fd0:
    lVar16 = lVar16 + 0x18;
  } while (lVar16 != 0x300);
  pcVar21 = (char *)plVar9[0xc];
  sVar8 = strlen(pcVar21);
  iVar6 = FUN_008f2c60(sVar8,pcVar21);
  pcVar21 = (char *)plVar9[0xe];
  sVar8 = strlen(pcVar21);
  iVar7 = FUN_008f2c60(sVar8,pcVar21);
  lVar16 = local_a0;
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
        FUN_02bcc824(plVar24,lVar16,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_d0;
        goto joined_r0x011641fc;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_d0;
  }
joined_r0x011641fc:
  DAT_043f1798 = plVar1;
  local_d0 = pvVar25;
  if ((((byte)local_e0 & 1) != 0) && (pvVar25 != (void *)0x0)) {
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
        FUN_02bcc824(plVar24,pvVar25,0,8);
        goto LAB_011642ac;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,pvVar25,0,8);
  }
LAB_011642ac:
  uVar22 = *(undefined8 *)(lVar26 + 0x20);
  FUN_0014fef0(uVar22);
  (**(code **)*plVar9)(plVar9,uVar22);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  pvVar25 = local_e8;
  if ((local_f8 & 1) == 0) {
    pvVar25 = (void *)((long)&local_f8 + 1);
  }
  FUN_001522a0(uVar22,pvVar25);
  pvVar25 = local_e8;
  plVar1 = DAT_043f1798;
  if (((local_f8 & 1) != 0) && (local_e8 != (void *)0x0)) {
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


