/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02513060; name: FUN_02513060
 */


void FUN_02513060(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  string *psVar17;
  long lVar18;
  string *psVar19;
  ulong uVar20;
  undefined8 uVar21;
  char *pcVar22;
  string *psVar23;
  long *plVar24;
  ulong unaff_x23;
  long lVar25;
  byte local_f8;
  undefined7 uStack_f7;
  char cStack_f0;
  undefined7 uStack_ef;
  char local_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  string local_e0;
  undefined4 local_df;
  undefined7 local_db;
  undefined4 uStack_d4;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  char local_af [7];
  char cStack_a8;
  char acStack_a7 [7];
  long local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar8 = DAT_043f1798;
  local_f8 = 0x24;
  uStack_e4 = 0;
  uStack_e7 = 0x7265;
  uStack_f7 = s_RootMotionAdjuster_03981e6f._0_7_;
  cStack_f0 = s_RootMotionAdjuster_03981e6f[7];
  uStack_ef = s_RootMotionAdjuster_03981e6f._8_7_;
  local_e8 = s_RootMotionAdjuster_03981e6f[0xf];
  uStack_e5 = 0;
  lVar5 = tpidr_el0;
  plVar13 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar13 = plVar8;
  }
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
  plVar8[2] = 0;
  plVar13 = plVar8 + 1;
  *plVar13 = 0;
  plVar24 = plVar8 + 3;
  *plVar24 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[6] = (long)FUN_02513cf0;
  plVar8[7] = (long)FUN_02513da0;
  *plVar8 = (long)&PTR_FUN_0425c450;
  plVar8[0xc] = (long)&DAT_0392da3c;
  plVar8[0xe] = (long)"SetAlwaysAdjust";
  plVar8[0xf] = (long)&LAB_02513cc8;
  plVar8[0x12] = 0;
  plVar8[0x13] = (long)FUN_02513f30;
  plVar8[0x14] = (long)&LAB_02514210;
  plVar8[0x15] = (long)&LAB_025144f0;
  plVar8[4] = 0;
  psVar23 = &local_e0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  plVar8[0x1a] = 0;
  plVar8[0x18] = 0;
  *(undefined1 *)(plVar8 + 0x19) = 0;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0x16] = (long)&LAB_02514500;
  plVar8[0x17] = 0;
  local_c0 = &LAB_0251454c;
  local_b0 = 0x1e;
  local_df = 0x63675f5f;
  local_af[0] = s_SetAlwaysAdjust_038947b1[0];
  local_af[1] = s_SetAlwaysAdjust_038947b1[1];
  local_af[2] = s_SetAlwaysAdjust_038947b1[2];
  local_af[3] = s_SetAlwaysAdjust_038947b1[3];
  local_af[4] = s_SetAlwaysAdjust_038947b1[4];
  local_af[5] = s_SetAlwaysAdjust_038947b1[5];
  local_af[6] = s_SetAlwaysAdjust_038947b1[6];
  local_e0 = (string)0x8;
  local_db = 0;
  uStack_d4 = 0;
  cStack_a8 = s_SetAlwaysAdjust_038947b1[7];
  acStack_a7[0] = s_SetAlwaysAdjust_038947b1[8];
  acStack_a7[1] = s_SetAlwaysAdjust_038947b1[9];
  acStack_a7[2] = s_SetAlwaysAdjust_038947b1[10];
  acStack_a7[3] = s_SetAlwaysAdjust_038947b1[0xb];
  acStack_a7[4] = s_SetAlwaysAdjust_038947b1[0xc];
  acStack_a7[5] = s_SetAlwaysAdjust_038947b1[0xd];
  acStack_a7[6] = s_SetAlwaysAdjust_038947b1[0xe];
  local_a0 = 0;
  local_d0 = 0;
  local_c8 = &LAB_02514504;
  local_b8 = 0xffffffff;
  local_88 = 0xffffffff;
  local_98 = &LAB_02514594;
  puStack_90 = &LAB_025145dc;
  do {
    uVar9 = *(ulong *)(psVar23 + 8);
    psVar2 = *(string **)(psVar23 + 0x10);
    if (((byte)*psVar23 & 1) == 0) {
      psVar2 = psVar23 + 1;
      uVar9 = (ulong)((byte)*psVar23 >> 1);
    }
    uVar9 = FUN_008e8ed4(local_80,psVar2,uVar9);
    uVar20 = plVar8[2];
    if (uVar20 != 0) {
      uVar15 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        unaff_x23 = uVar20 - 1 & uVar9;
      }
      else {
        unaff_x23 = uVar9;
        if (uVar20 <= uVar9) {
          uVar4 = 0;
          if (uVar20 != 0) {
            uVar4 = uVar9 / uVar20;
          }
          unaff_x23 = uVar9 - uVar4 * uVar20;
        }
      }
      plVar10 = *(long **)(*plVar13 + unaff_x23 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        psVar2 = psVar23 + 1;
        sVar12 = (ulong)((byte)*psVar23 >> 1);
        if (((byte)*psVar23 & 1) != 0) {
          psVar2 = *(string **)(psVar23 + 0x10);
          sVar12 = *(size_t *)(psVar23 + 8);
        }
        if (uVar15 < 2) {
          if (sVar12 == 0) {
            do {
              if (plVar10[1] != uVar9 && (plVar10[1] & uVar20 - 1) != unaff_x23) break;
              uVar15 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
              if ((*(byte *)(plVar10 + 2) & 1) != 0) {
                uVar15 = plVar10[3];
              }
              if (uVar15 == 0) goto LAB_02513444;
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
          else {
            do {
              if (plVar10[1] != uVar9 && (plVar10[1] & uVar20 - 1) != unaff_x23) break;
              bVar3 = *(byte *)(plVar10 + 2);
              uVar15 = (ulong)(bVar3 >> 1);
              sVar1 = uVar15;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar10[3];
              }
              if (sVar1 == sVar12) {
                if ((bVar3 & 1) == 0) {
                  psVar17 = (string *)((long)plVar10 + 0x11);
                  psVar19 = psVar2;
                  while (*psVar17 == *psVar19) {
                    uVar15 = uVar15 - 1;
                    psVar17 = psVar17 + 1;
                    psVar19 = psVar19 + 1;
                    if (uVar15 == 0) goto LAB_02513444;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar10[4],psVar2,sVar12);
                  if (iVar6 == 0) goto LAB_02513444;
                }
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
        else if (sVar12 == 0) {
          do {
            uVar15 = plVar10[1];
            if (uVar15 != uVar9) {
              if (uVar20 <= uVar15) {
                uVar4 = 0;
                if (uVar20 != 0) {
                  uVar4 = uVar15 / uVar20;
                }
                uVar15 = uVar15 - uVar4 * uVar20;
              }
              if (uVar15 != unaff_x23) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
            if ((*(byte *)(plVar10 + 2) & 1) != 0) {
              uVar15 = plVar10[3];
            }
            if (uVar15 == 0) goto LAB_02513444;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar10[1];
            if (uVar15 != uVar9) {
              if (uVar20 <= uVar15) {
                uVar4 = 0;
                if (uVar20 != 0) {
                  uVar4 = uVar15 / uVar20;
                }
                uVar15 = uVar15 - uVar4 * uVar20;
              }
              if (uVar15 != unaff_x23) break;
            }
            bVar3 = *(byte *)(plVar10 + 2);
            uVar15 = (ulong)(bVar3 >> 1);
            sVar1 = uVar15;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar10[3];
            }
            if (sVar1 == sVar12) {
              if ((bVar3 & 1) == 0) {
                psVar17 = (string *)((long)plVar10 + 0x11);
                psVar19 = psVar2;
                while (*psVar17 == *psVar19) {
                  uVar15 = uVar15 - 1;
                  psVar17 = psVar17 + 1;
                  psVar19 = psVar19 + 1;
                  if (uVar15 == 0) goto LAB_02513444;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar10[4],psVar2,sVar12);
                if (iVar6 == 0) goto LAB_02513444;
              }
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    plVar10 = DAT_043f1798;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar10;
    }
    plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x40,8);
    std::string::string((string *)(plVar10 + 2),psVar23);
    lVar16 = *(long *)(psVar23 + 0x18);
    lVar18 = *(long *)(psVar23 + 0x28);
    plVar10[6] = *(long *)(psVar23 + 0x20);
    plVar10[7] = lVar18;
    plVar10[5] = lVar16;
    *plVar10 = 0;
    plVar10[1] = uVar9;
    if ((uVar20 == 0) || (*(float *)(plVar8 + 5) * (float)uVar20 < (float)(plVar8[4] + 1))) {
      uVar20 = (ulong)(uVar20 < 3 || (uVar20 & uVar20 - 1) != 0) | uVar20 << 1;
      uVar15 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar15 <= uVar20) {
        uVar15 = uVar20;
      }
      FUN_008e9ae4(plVar13,uVar15);
      uVar20 = plVar8[2];
      if ((uVar20 & uVar20 - 1) == 0) {
        unaff_x23 = uVar20 - 1 & uVar9;
      }
      else if (uVar9 < uVar20) {
        unaff_x23 = uVar9;
      }
      else {
        uVar15 = 0;
        if (uVar20 != 0) {
          uVar15 = uVar9 / uVar20;
        }
        unaff_x23 = uVar9 - uVar15 * uVar20;
      }
    }
    lVar16 = *plVar13;
    plVar14 = *(long **)(lVar16 + unaff_x23 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar10 = *plVar24;
      *plVar24 = (long)plVar10;
      *(long **)(lVar16 + unaff_x23 * 8) = plVar24;
      if (*plVar10 != 0) {
        uVar9 = *(ulong *)(*plVar10 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar9 = uVar9 & uVar20 - 1;
        }
        else if (uVar20 <= uVar9) {
          uVar15 = 0;
          if (uVar20 != 0) {
            uVar15 = uVar9 / uVar20;
          }
          uVar9 = uVar9 - uVar15 * uVar20;
        }
        plVar14 = (long *)(*plVar13 + uVar9 * 8);
        goto LAB_02513434;
      }
    }
    else {
      *plVar10 = *plVar14;
LAB_02513434:
      *plVar14 = (long)plVar10;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_02513444:
    psVar23 = psVar23 + 0x30;
  } while (psVar23 != (string *)local_80);
  lVar18 = FUN_008cca50();
  lVar16 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar13,lVar18 + lVar16);
    if (lVar11 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar11);
      lVar11 = local_80[0];
      plVar24 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar11 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar25 = *(long *)(lVar11 + 0x20), lVar25 != 0)) {
          plVar10 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar10 = plVar24;
          }
          uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar25,0,8);
              goto LAB_02513710;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar25,0,8);
        }
LAB_02513710:
        plVar24 = DAT_043f1798;
        plVar10 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar10 = plVar24;
        }
        uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar11,0,8);
            goto LAB_02513674;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,0,8);
      }
    }
LAB_02513674:
    lVar16 = lVar16 + 0x18;
  } while (lVar16 != 0x300);
  pcVar22 = (char *)plVar8[0xc];
  sVar12 = strlen(pcVar22);
  iVar6 = FUN_008f2c60(sVar12,pcVar22);
  pcVar22 = (char *)plVar8[0xe];
  sVar12 = strlen(pcVar22);
  iVar7 = FUN_008f2c60(sVar12,pcVar22);
  lVar18 = local_a0;
  *(bool *)(plVar8 + 0xb) = iVar7 != 0 || iVar6 != 0;
  plVar13 = DAT_043f1798;
  lVar16 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar24 = plVar13;
    }
    uVar9 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar18,0,8);
        plVar13 = DAT_043f1798;
        lVar16 = local_d0;
        goto joined_r0x0251389c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar18,0,8);
    plVar13 = DAT_043f1798;
    lVar16 = local_d0;
  }
joined_r0x0251389c:
  DAT_043f1798 = plVar13;
  local_d0 = lVar16;
  if ((((byte)local_e0 & 1) != 0) && (lVar16 != 0)) {
    plVar24 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar13;
      plVar24 = plVar13;
    }
    uVar9 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar16,0,8);
        goto LAB_0251394c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,0,8);
  }
LAB_0251394c:
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar21);
  (**(code **)*plVar8)(plVar8,uVar21);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar9 = (ulong)&local_f8 | 1;
  if ((local_f8 & 1) != 0) {
    uVar9 = CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,local_e8)));
  }
  FUN_001522a0(uVar21,uVar9);
  plVar8 = DAT_043f1798;
  if (((local_f8 & 1) != 0) &&
     (lVar16 = CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,local_e8))), lVar16 != 0)) {
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar8;
    }
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar16,0,8);
        return;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar16,0,8);
  }
  return;
}


