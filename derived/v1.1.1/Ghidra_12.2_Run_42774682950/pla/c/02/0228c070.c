/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0228c070; name: FUN_0228c070
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0228c070(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  ulong uVar24;
  undefined8 uVar25;
  char *pcVar26;
  string *psVar27;
  long *plVar28;
  long lVar29;
  ulong unaff_x28;
  ulong local_158;
  undefined8 local_150;
  char *local_148;
  string local_140;
  undefined4 local_13f;
  undefined7 local_13b;
  undefined4 uStack_134;
  long local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [8];
  undefined2 local_107;
  undefined1 local_105;
  undefined4 local_104;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar12 = DAT_043f1798;
  lVar5 = tpidr_el0;
  plVar16 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar16 = plVar12;
  }
  local_148 = (char *)(**(code **)(*plVar16 + 0x10))(plVar16,0x30,8);
  local_158 = 0x31;
  local_150 = 0x21;
  local_148[0x20] = 't';
  uVar8 = s_FieldRingumaBehindCameraComponen_039c0621._24_8_;
  uVar7 = s_FieldRingumaBehindCameraComponen_039c0621._16_8_;
  uVar6 = s_FieldRingumaBehindCameraComponen_039c0621._8_8_;
  uVar25 = s_FieldRingumaBehindCameraComponen_039c0621._0_8_;
  local_148[0x21] = '\0';
  *(undefined8 *)(local_148 + 0x10) = uVar7;
  *(undefined8 *)(local_148 + 0x18) = uVar8;
  *(undefined8 *)local_148 = uVar25;
  *(undefined8 *)(local_148 + 8) = uVar6;
  plVar12 = DAT_043f1798;
  plVar16 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar16 = plVar12;
  }
  plVar12 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0xf0,8);
  plVar12[2] = 0;
  plVar12[4] = 0;
  plVar16 = plVar12 + 1;
  *plVar16 = 0;
  plVar28 = plVar12 + 3;
  *plVar28 = 0;
  plVar12[6] = (long)FUN_0228d070;
  plVar12[7] = (long)FUN_0228d120;
  *plVar12 = (long)&PTR_FUN_0425b998;
  plVar12[0x10] = 0;
  plVar12[0x11] = (long)"GetYaw";
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[0xc] = (long)&DAT_0392da3c;
  plVar12[0x16] = (long)FUN_0228d2b0;
  plVar12[0x17] = (long)&LAB_0228d590;
  plVar12[0xe] = (long)"IsInterpolation";
  plVar12[0xf] = (long)&LAB_01b4a5e4;
  plVar12[0x18] = (long)&LAB_0228d870;
  plVar12[0x19] = (long)&LAB_0228d880;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  plVar12[0x1d] = 0;
  *(undefined1 *)(plVar12 + 0x1c) = 0;
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x12] = (long)&LAB_0228d054;
  plVar12[0x13] = 0;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  local_120 = &LAB_0228d8cc;
  local_110 = 0x14;
  local_107 = 0x7473;
  local_10f[0] = s_class_cast_038dd4e7[0];
  local_10f[1] = s_class_cast_038dd4e7[1];
  local_10f[2] = s_class_cast_038dd4e7[2];
  local_10f[3] = s_class_cast_038dd4e7[3];
  local_10f[4] = s_class_cast_038dd4e7[4];
  local_10f[5] = s_class_cast_038dd4e7[5];
  local_10f[6] = s_class_cast_038dd4e7[6];
  local_10f[7] = s_class_cast_038dd4e7[7];
  local_13f = 0x63675f5f;
  local_140 = (string)0x8;
  psVar27 = &local_140;
  local_13b = 0;
  uStack_134 = 0;
  local_105 = 0;
  local_104 = 0;
  local_f0 = &LAB_0228d95c;
  local_100 = 0;
  puStack_f8 = &LAB_0228d914;
  local_e0 = 0x1e;
  local_df[0] = s_IsInterpolation_03a73560[0];
  local_df[1] = s_IsInterpolation_03a73560[1];
  local_df[2] = s_IsInterpolation_03a73560[2];
  local_df[3] = s_IsInterpolation_03a73560[3];
  local_df[4] = s_IsInterpolation_03a73560[4];
  local_df[5] = s_IsInterpolation_03a73560[5];
  local_df[6] = s_IsInterpolation_03a73560[6];
  cStack_d8 = s_IsInterpolation_03a73560[7];
  acStack_d7[0] = s_IsInterpolation_03a73560[8];
  acStack_d7[1] = s_IsInterpolation_03a73560[9];
  acStack_d7[2] = s_IsInterpolation_03a73560[10];
  acStack_d7[3] = s_IsInterpolation_03a73560[0xb];
  acStack_d7[4] = s_IsInterpolation_03a73560[0xc];
  acStack_d7[5] = s_IsInterpolation_03a73560[0xd];
  acStack_d7[6] = s_IsInterpolation_03a73560[0xe];
  local_d0 = 0;
  local_c8 = &LAB_0228d9a4;
  puStack_c0 = &LAB_0228d9ec;
  local_b0 = 0xc;
  local_130 = 0;
  local_128 = &LAB_0228d884;
  local_118 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_af = 0x59746547;
  local_ab = 0x7761;
  local_a9 = 0;
  local_88 = 0xffffffff;
  local_98 = &LAB_0228da34;
  puStack_90 = &LAB_0228da7c;
  local_a8 = 0;
  local_a0 = 0;
  do {
    uVar13 = *(ulong *)(psVar27 + 8);
    psVar2 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar2 = psVar27 + 1;
      uVar13 = (ulong)((byte)*psVar27 >> 1);
    }
    uVar13 = FUN_008e8ed4(local_80,psVar2,uVar13);
    uVar24 = plVar12[2];
    if (uVar24 != 0) {
      uVar17 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        unaff_x28 = uVar24 - 1 & uVar13;
      }
      else {
        unaff_x28 = uVar13;
        if (uVar24 <= uVar13) {
          uVar4 = 0;
          if (uVar24 != 0) {
            uVar4 = uVar13 / uVar24;
          }
          unaff_x28 = uVar13 - uVar4 * uVar24;
        }
      }
      plVar19 = *(long **)(*plVar16 + unaff_x28 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar2 = psVar27 + 1;
        sVar15 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar2 = *(string **)(psVar27 + 0x10);
          sVar15 = *(size_t *)(psVar27 + 8);
        }
        if (uVar17 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != unaff_x28) break;
              uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar17 = plVar19[3];
              }
              if (uVar17 == 0) goto LAB_0228c5c0;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != unaff_x28) break;
              bVar3 = *(byte *)(plVar19 + 2);
              uVar17 = (ulong)(bVar3 >> 1);
              sVar1 = uVar17;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar19[3];
              }
              if (sVar1 == sVar15) {
                if ((bVar3 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar2;
                  while (*psVar21 == *psVar23) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar17 == 0) goto LAB_0228c5c0;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar19[4],psVar2,sVar15);
                  if (iVar9 == 0) goto LAB_0228c5c0;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar15 == 0) {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar4 = 0;
                if (uVar24 != 0) {
                  uVar4 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar4 * uVar24;
              }
              if (uVar17 != unaff_x28) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar17 = plVar19[3];
            }
            if (uVar17 == 0) goto LAB_0228c5c0;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar4 = 0;
                if (uVar24 != 0) {
                  uVar4 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar4 * uVar24;
              }
              if (uVar17 != unaff_x28) break;
            }
            bVar3 = *(byte *)(plVar19 + 2);
            uVar17 = (ulong)(bVar3 >> 1);
            sVar1 = uVar17;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar19[3];
            }
            if (sVar1 == sVar15) {
              if ((bVar3 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar2;
                while (*psVar21 == *psVar23) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar17 == 0) goto LAB_0228c5c0;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar19[4],psVar2,sVar15);
                if (iVar9 == 0) goto LAB_0228c5c0;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar27);
    lVar20 = *(long *)(psVar27 + 0x18);
    lVar22 = *(long *)(psVar27 + 0x28);
    plVar19[6] = *(long *)(psVar27 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar24 == 0) || (*(float *)(plVar12 + 5) * (float)uVar24 < (float)(plVar12[4] + 1))) {
      uVar24 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar17 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar17 <= uVar24) {
        uVar17 = uVar24;
      }
      FUN_008e9ae4(plVar16,uVar17);
      uVar24 = plVar12[2];
      if ((uVar24 & uVar24 - 1) == 0) {
        unaff_x28 = uVar24 - 1 & uVar13;
      }
      else if (uVar13 < uVar24) {
        unaff_x28 = uVar13;
      }
      else {
        uVar17 = 0;
        if (uVar24 != 0) {
          uVar17 = uVar13 / uVar24;
        }
        unaff_x28 = uVar13 - uVar17 * uVar24;
      }
    }
    lVar20 = *plVar16;
    plVar18 = *(long **)(lVar20 + unaff_x28 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar28;
      *plVar28 = (long)plVar19;
      *(long **)(lVar20 + unaff_x28 * 8) = plVar28;
      if (*plVar19 != 0) {
        uVar13 = *(ulong *)(*plVar19 + 8);
        if ((uVar24 & uVar24 - 1) == 0) {
          uVar13 = uVar13 & uVar24 - 1;
        }
        else if (uVar24 <= uVar13) {
          uVar17 = 0;
          if (uVar24 != 0) {
            uVar17 = uVar13 / uVar24;
          }
          uVar13 = uVar13 - uVar17 * uVar24;
        }
        plVar18 = (long *)(*plVar16 + uVar13 * 8);
        goto LAB_0228c5b0;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_0228c5b0:
      *plVar18 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_0228c5c0:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != (string *)local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar16,lVar22 + lVar20);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar16,lVar14);
      lVar14 = local_80[0];
      plVar28 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar28;
          }
          uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar29,0,8);
              goto LAB_0228c7ac;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_0228c7ac:
        plVar28 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar28;
        }
        uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar14,0,8);
            goto LAB_0228c764;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_0228c764:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar26 = (char *)plVar12[0xc];
  sVar15 = strlen(pcVar26);
  iVar9 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xe];
  sVar15 = strlen(pcVar26);
  iVar10 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x11];
  sVar15 = strlen(pcVar26);
  iVar11 = FUN_008f2c60(sVar15,pcVar26);
  lVar22 = local_a0;
  *(bool *)(plVar12 + 0xb) = (iVar10 != 0 || iVar9 != 0) || iVar11 != 0;
  plVar16 = DAT_043f1798;
  lVar20 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar22,0,8);
        plVar16 = DAT_043f1798;
        lVar20 = local_d0;
        goto joined_r0x0228c948;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar22,0,8);
    plVar16 = DAT_043f1798;
    lVar20 = local_d0;
  }
joined_r0x0228c948:
  lVar22 = local_100;
  local_d0 = lVar20;
  if (((local_e0 & 1) != 0) && (lVar20 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar16;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        plVar16 = DAT_043f1798;
        lVar22 = local_100;
        goto joined_r0x0228cdac;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
    plVar16 = DAT_043f1798;
    lVar22 = local_100;
  }
joined_r0x0228cdac:
  lVar20 = local_130;
  local_100 = lVar22;
  if (((local_110 & 1) != 0) && (lVar22 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar16;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar22,0,8);
        plVar16 = DAT_043f1798;
        lVar20 = local_130;
        goto joined_r0x0228cab0;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar22,0,8);
    plVar16 = DAT_043f1798;
    lVar20 = local_130;
  }
joined_r0x0228cab0:
  DAT_043f1798 = plVar16;
  local_130 = lVar20;
  if ((((byte)local_140 & 1) != 0) && (lVar20 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar16;
      plVar28 = plVar16;
    }
    uVar13 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        goto LAB_0228cb60;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
  }
LAB_0228cb60:
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pcVar26 = (char *)((ulong)&local_158 | 1);
  if ((local_158 & 1) != 0) {
    pcVar26 = local_148;
  }
  FUN_001522a0(uVar25,pcVar26);
  pcVar26 = local_148;
  plVar12 = DAT_043f1798;
  if (((local_158 & 1) != 0) && (local_148 != (char *)0x0)) {
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar12;
    }
    uVar13 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar16,pcVar26,0,8);
        return;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,pcVar26,0,8);
  }
  return;
}


