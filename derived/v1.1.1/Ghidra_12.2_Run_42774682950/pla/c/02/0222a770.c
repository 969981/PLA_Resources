/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0222a770; name: FUN_0222a770
 */


void FUN_0222a770(long *param_1,char *param_2)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  string *psVar16;
  long lVar17;
  string *psVar18;
  char *__s;
  undefined8 uVar19;
  long lVar20;
  void *pvVar21;
  string *psVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 local_f8;
  size_t local_f0;
  void *local_e8;
  string local_e0;
  char local_df [8];
  undefined2 local_d7;
  undefined1 local_d5;
  undefined4 local_d4;
  long local_d0;
  undefined1 *local_c8;
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
  long local_80 [2];
  char local_70;
  
  lVar20 = *param_1;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_f8 = 0;
  sVar7 = strlen(param_2);
  plVar8 = DAT_043f1798;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar7 < 0x17) {
    local_f8 = CONCAT71(local_f8._1_7_,(char)((int)sVar7 << 1));
    pvVar21 = (void *)((ulong)&local_f8 | 1);
    if (sVar7 != 0) goto LAB_0222a7e0;
  }
  else {
    uVar24 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar8;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar24,8);
    local_f8 = uVar24 | 1;
    local_f0 = sVar7;
    local_e8 = pvVar21;
LAB_0222a7e0:
    memcpy(pvVar21,param_2,sVar7);
  }
  *(undefined1 *)((long)pvVar21 + sVar7) = 0;
  plVar8 = DAT_043f1798;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar8;
  }
  uVar24 = 8;
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xb8,8);
  plVar8[2] = 0;
  plVar8[4] = 0;
  plVar14 = plVar8 + 1;
  *plVar14 = 0;
  plVar23 = plVar8 + 3;
  *plVar23 = 0;
  plVar8[6] = (long)FUN_0222b460;
  plVar8[7] = (long)FUN_0222b510;
  *plVar8 = (long)&PTR_FUN_0425b808;
  plVar8[0xc] = (long)&DAT_0392da3c;
  plVar8[0xd] = 0;
  plVar8[0x10] = (long)&LAB_0222b980;
  plVar8[0x11] = (long)&LAB_0222bc60;
  psVar22 = &local_e0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[0x12] = (long)&LAB_0222bc70;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0x16] = 0;
  *(undefined1 *)(plVar8 + 0x15) = 0;
  plVar8[0xe] = 0;
  plVar8[0xf] = (long)FUN_0222b6a0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  local_e0 = (string)0x14;
  local_d7 = 0x7473;
  local_df[0] = s_class_cast_038dd4e7[0];
  local_df[1] = s_class_cast_038dd4e7[1];
  local_df[2] = s_class_cast_038dd4e7[2];
  local_df[3] = s_class_cast_038dd4e7[3];
  local_df[4] = s_class_cast_038dd4e7[4];
  local_df[5] = s_class_cast_038dd4e7[5];
  local_df[6] = s_class_cast_038dd4e7[6];
  local_df[7] = s_class_cast_038dd4e7[7];
  local_c0 = &LAB_0222bcbc;
  local_af = 0x63675f5f;
  local_d5 = 0;
  local_d4 = 0;
  local_b0 = 8;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_c8 = &LAB_0222bc74;
  local_b8 = 0xffffffff;
  local_88 = 0xffffffff;
  local_98 = &LAB_0222bd04;
  puStack_90 = &LAB_0222bd4c;
  do {
    uVar9 = *(ulong *)(psVar22 + 8);
    psVar2 = *(string **)(psVar22 + 0x10);
    if (((byte)*psVar22 & 1) == 0) {
      psVar2 = psVar22 + 1;
      uVar9 = (ulong)((byte)*psVar22 >> 1);
    }
    uVar9 = FUN_008e8ed4(local_80,psVar2,uVar9);
    uVar26 = plVar8[2];
    if (uVar26 != 0) {
      uVar24 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
      uVar13 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar24 = uVar26 - 1 & uVar9;
      }
      else {
        uVar24 = uVar9;
        if (uVar26 <= uVar9) {
          uVar24 = 0;
          if (uVar26 != 0) {
            uVar24 = uVar9 / uVar26;
          }
          uVar24 = uVar9 - uVar24 * uVar26;
        }
      }
      plVar10 = *(long **)(*plVar14 + uVar24 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        psVar2 = psVar22 + 1;
        sVar7 = (ulong)((byte)*psVar22 >> 1);
        if (((byte)*psVar22 & 1) != 0) {
          psVar2 = *(string **)(psVar22 + 0x10);
          sVar7 = *(size_t *)(psVar22 + 8);
        }
        if (uVar13 < 2) {
          if (sVar7 == 0) {
            do {
              if (plVar10[1] != uVar9 && (plVar10[1] & uVar26 - 1) != uVar24) break;
              uVar13 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
              if ((*(byte *)(plVar10 + 2) & 1) != 0) {
                uVar13 = plVar10[3];
              }
              if (uVar13 == 0) goto LAB_0222ab6c;
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
          else {
            do {
              if (plVar10[1] != uVar9 && (plVar10[1] & uVar26 - 1) != uVar24) break;
              bVar3 = *(byte *)(plVar10 + 2);
              uVar13 = (ulong)(bVar3 >> 1);
              sVar1 = uVar13;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar10[3];
              }
              if (sVar1 == sVar7) {
                if ((bVar3 & 1) == 0) {
                  psVar16 = (string *)((long)plVar10 + 0x11);
                  psVar18 = psVar2;
                  while (*psVar16 == *psVar18) {
                    uVar13 = uVar13 - 1;
                    psVar16 = psVar16 + 1;
                    psVar18 = psVar18 + 1;
                    if (uVar13 == 0) goto LAB_0222ab6c;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar10[4],psVar2,sVar7);
                  if (iVar6 == 0) goto LAB_0222ab6c;
                }
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
        else if (sVar7 == 0) {
          do {
            uVar13 = plVar10[1];
            if (uVar13 != uVar9) {
              if (uVar26 <= uVar13) {
                uVar4 = 0;
                if (uVar26 != 0) {
                  uVar4 = uVar13 / uVar26;
                }
                uVar13 = uVar13 - uVar4 * uVar26;
              }
              if (uVar13 != uVar24) break;
            }
            uVar13 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
            if ((*(byte *)(plVar10 + 2) & 1) != 0) {
              uVar13 = plVar10[3];
            }
            if (uVar13 == 0) goto LAB_0222ab6c;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar10[1];
            if (uVar13 != uVar9) {
              if (uVar26 <= uVar13) {
                uVar4 = 0;
                if (uVar26 != 0) {
                  uVar4 = uVar13 / uVar26;
                }
                uVar13 = uVar13 - uVar4 * uVar26;
              }
              if (uVar13 != uVar24) break;
            }
            bVar3 = *(byte *)(plVar10 + 2);
            uVar13 = (ulong)(bVar3 >> 1);
            sVar1 = uVar13;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar10[3];
            }
            if (sVar1 == sVar7) {
              if ((bVar3 & 1) == 0) {
                psVar16 = (string *)((long)plVar10 + 0x11);
                psVar18 = psVar2;
                while (*psVar16 == *psVar18) {
                  uVar13 = uVar13 - 1;
                  psVar16 = psVar16 + 1;
                  psVar18 = psVar18 + 1;
                  if (uVar13 == 0) goto LAB_0222ab6c;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar10[4],psVar2,sVar7);
                if (iVar6 == 0) goto LAB_0222ab6c;
              }
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    plVar10 = DAT_043f1798;
    plVar12 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar12 = plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,8);
    std::string::string((string *)(plVar10 + 2),psVar22);
    lVar15 = *(long *)(psVar22 + 0x18);
    lVar17 = *(long *)(psVar22 + 0x28);
    plVar10[6] = *(long *)(psVar22 + 0x20);
    plVar10[7] = lVar17;
    plVar10[5] = lVar15;
    *plVar10 = 0;
    plVar10[1] = uVar9;
    if ((uVar26 == 0) || (*(float *)(plVar8 + 5) * (float)uVar26 < (float)(plVar8[4] + 1))) {
      uVar24 = (ulong)(uVar26 < 3 || (uVar26 & uVar26 - 1) != 0) | uVar26 << 1;
      uVar26 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar26 <= uVar24) {
        uVar26 = uVar24;
      }
      FUN_008e9ae4(plVar14,uVar26);
      uVar26 = plVar8[2];
      if ((uVar26 & uVar26 - 1) == 0) {
        uVar24 = uVar26 - 1 & uVar9;
      }
      else if (uVar9 < uVar26) {
        uVar24 = uVar9;
      }
      else {
        uVar24 = 0;
        if (uVar26 != 0) {
          uVar24 = uVar9 / uVar26;
        }
        uVar24 = uVar9 - uVar24 * uVar26;
      }
    }
    lVar15 = *plVar14;
    plVar12 = *(long **)(lVar15 + uVar24 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar10 = *plVar23;
      *plVar23 = (long)plVar10;
      *(long **)(lVar15 + uVar24 * 8) = plVar23;
      if (*plVar10 != 0) {
        uVar9 = *(ulong *)(*plVar10 + 8);
        if ((uVar26 & uVar26 - 1) == 0) {
          uVar9 = uVar9 & uVar26 - 1;
        }
        else if (uVar26 <= uVar9) {
          uVar13 = 0;
          if (uVar26 != 0) {
            uVar13 = uVar9 / uVar26;
          }
          uVar9 = uVar9 - uVar13 * uVar26;
        }
        plVar12 = (long *)(*plVar14 + uVar9 * 8);
        goto LAB_0222ab5c;
      }
    }
    else {
      *plVar10 = *plVar12;
LAB_0222ab5c:
      *plVar12 = (long)plVar10;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_0222ab6c:
    psVar22 = psVar22 + 0x30;
  } while (psVar22 != (string *)local_80);
  lVar17 = FUN_008cca50();
  lVar15 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar14,lVar17 + lVar15);
    if (lVar11 != 0) {
      FUN_008f2aec(local_80,plVar14,lVar11);
      lVar11 = local_80[0];
      plVar23 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar11 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar25 = *(long *)(lVar11 + 0x20), lVar25 != 0)) {
          plVar10 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar10 = plVar23;
          }
          uVar24 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar24 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar25,0,8);
              goto LAB_0222aeb0;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar25,0,8);
        }
LAB_0222aeb0:
        plVar23 = DAT_043f1798;
        plVar10 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar10 = plVar23;
        }
        uVar24 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar24 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar11,0,8);
            goto LAB_0222ae14;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,0,8);
      }
    }
LAB_0222ae14:
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x300);
  __s = (char *)plVar8[0xc];
  sVar7 = strlen(__s);
  iVar6 = FUN_008f2c60(sVar7,__s);
  lVar17 = local_a0;
  *(bool *)(plVar8 + 0xb) = iVar6 != 0;
  plVar14 = DAT_043f1798;
  lVar15 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar23 = plVar14;
    }
    uVar24 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar17,0,8);
        plVar14 = DAT_043f1798;
        lVar15 = local_d0;
        goto joined_r0x0222b020;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,0,8);
    plVar14 = DAT_043f1798;
    lVar15 = local_d0;
  }
joined_r0x0222b020:
  DAT_043f1798 = plVar14;
  local_d0 = lVar15;
  if ((((byte)local_e0 & 1) != 0) && (lVar15 != 0)) {
    plVar23 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar23 = plVar14;
    }
    uVar24 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar15,0,8);
        goto LAB_0222b0d0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar15,0,8);
  }
LAB_0222b0d0:
  uVar19 = *(undefined8 *)(lVar20 + 0x20);
  FUN_0014fef0(uVar19);
  (**(code **)*plVar8)(plVar8,uVar19);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  pvVar21 = local_e8;
  if ((local_f8 & 1) == 0) {
    pvVar21 = (void *)((long)&local_f8 + 1);
  }
  FUN_001522a0(uVar19,pvVar21);
  pvVar21 = local_e8;
  plVar8 = DAT_043f1798;
  if (((local_f8 & 1) != 0) && (local_e8 != (void *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar8;
    }
    uVar24 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pvVar21,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pvVar21,0,8);
  }
  return;
}


