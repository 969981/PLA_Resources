/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0170edb0; name: FUN_0170edb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0170edb0(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  size_t sVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  string *psVar19;
  long lVar20;
  string *psVar21;
  ulong uVar22;
  undefined8 uVar23;
  char *pcVar24;
  string *psVar25;
  long *plVar26;
  ulong unaff_x26;
  long lVar27;
  byte local_158;
  undefined7 uStack_157;
  char cStack_150;
  undefined7 uStack_14f;
  char local_148;
  undefined2 uStack_147;
  undefined1 uStack_145;
  undefined4 uStack_144;
  string local_140;
  char local_13f [7];
  char cStack_138;
  char acStack_137 [7];
  long local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
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
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar10 = DAT_043f1798;
  uStack_144 = 0;
  uStack_147 = 0x7265;
  psVar25 = &local_140;
  local_158 = 0x24;
  uStack_157 = s_EventPresetManager_038d5c50._0_7_;
  cStack_150 = s_EventPresetManager_038d5c50[7];
  uStack_14f = s_EventPresetManager_038d5c50._8_7_;
  local_148 = s_EventPresetManager_038d5c50[0xf];
  uStack_145 = 0;
  lVar5 = tpidr_el0;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar10;
  }
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xd0,8);
  plVar10[2] = 0;
  plVar14 = plVar10 + 3;
  *plVar14 = 0;
  plVar26 = plVar10 + 1;
  *plVar26 = 0;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[6] = (long)FUN_0170fd30;
  plVar10[7] = (long)FUN_0170fde0;
  *plVar10 = (long)&PTR_FUN_04224f10;
  plVar10[0xe] = (long)&DAT_038ca815;
  plVar10[0xf] = (long)&DAT_0392da3c;
  plVar10[4] = 0;
  plVar10[10] = 0;
  plVar10[0x12] = (long)FUN_0170ff70;
  plVar10[0x13] = (long)&LAB_01710250;
  plVar10[8] = 0;
  plVar10[9] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  plVar10[0x19] = 0;
  *(undefined1 *)(plVar10 + 0x18) = 0;
  plVar10[0xc] = (long)"GetPresetCamera";
  plVar10[0xd] = (long)"GetPresetTransform";
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  plVar10[0x14] = (long)&LAB_01710530;
  plVar10[0x15] = (long)&LAB_01710540;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0;
  local_140 = (string)0x1e;
  local_13f[0] = s_GetPresetCamera_03a737c0[0];
  local_13f[1] = s_GetPresetCamera_03a737c0[1];
  local_13f[2] = s_GetPresetCamera_03a737c0[2];
  local_13f[3] = s_GetPresetCamera_03a737c0[3];
  local_13f[4] = s_GetPresetCamera_03a737c0[4];
  local_13f[5] = s_GetPresetCamera_03a737c0[5];
  local_13f[6] = s_GetPresetCamera_03a737c0[6];
  local_110 = 0x24;
  local_dc = 0;
  local_d4 = 0;
  local_b0 = 8;
  cStack_138 = s_GetPresetCamera_03a737c0[7];
  acStack_137[0] = s_GetPresetCamera_03a737c0[8];
  acStack_137[1] = s_GetPresetCamera_03a737c0[9];
  acStack_137[2] = s_GetPresetCamera_03a737c0[10];
  acStack_137[3] = s_GetPresetCamera_03a737c0[0xb];
  acStack_137[4] = s_GetPresetCamera_03a737c0[0xc];
  acStack_137[5] = s_GetPresetCamera_03a737c0[0xd];
  acStack_137[6] = s_GetPresetCamera_03a737c0[0xe];
  local_130 = 0;
  local_128 = &LAB_01710544;
  puStack_120 = &LAB_0171058c;
  local_10f[0] = s_GetPresetTransform_03929ad9[0];
  local_10f[1] = s_GetPresetTransform_03929ad9[1];
  local_10f[2] = s_GetPresetTransform_03929ad9[2];
  local_10f[3] = s_GetPresetTransform_03929ad9[3];
  local_10f[4] = s_GetPresetTransform_03929ad9[4];
  local_10f[5] = s_GetPresetTransform_03929ad9[5];
  local_10f[6] = s_GetPresetTransform_03929ad9[6];
  cStack_108 = s_GetPresetTransform_03929ad9[7];
  acStack_107[0] = s_GetPresetTransform_03929ad9[8];
  acStack_107[1] = s_GetPresetTransform_03929ad9[9];
  acStack_107[2] = s_GetPresetTransform_03929ad9[10];
  acStack_107[3] = s_GetPresetTransform_03929ad9[0xb];
  acStack_107[4] = s_GetPresetTransform_03929ad9[0xc];
  acStack_107[5] = s_GetPresetTransform_03929ad9[0xd];
  acStack_107[6] = s_GetPresetTransform_03929ad9[0xe];
  local_100 = 0x6d726f;
  local_118 = 0xffffffff;
  local_e8 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_f8 = &LAB_017105d4;
  puStack_f0 = &LAB_0171061c;
  local_e0 = 6;
  local_dd = 0x77;
  local_df = 0x656e;
  local_c0 = &LAB_017106ac;
  local_d0 = 0;
  puStack_c8 = &LAB_01710664;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0171073c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_017106f4;
  do {
    uVar11 = *(ulong *)(psVar25 + 8);
    psVar2 = *(string **)(psVar25 + 0x10);
    if (((byte)*psVar25 & 1) == 0) {
      psVar2 = psVar25 + 1;
      uVar11 = (ulong)((byte)*psVar25 >> 1);
    }
    uVar11 = FUN_008e8ed4(local_80,psVar2,uVar11);
    uVar22 = plVar10[2];
    if (uVar22 != 0) {
      uVar15 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        unaff_x26 = uVar22 - 1 & uVar11;
      }
      else {
        unaff_x26 = uVar11;
        if (uVar22 <= uVar11) {
          uVar4 = 0;
          if (uVar22 != 0) {
            uVar4 = uVar11 / uVar22;
          }
          unaff_x26 = uVar11 - uVar4 * uVar22;
        }
      }
      plVar17 = *(long **)(*plVar26 + unaff_x26 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar2 = psVar25 + 1;
        sVar13 = (ulong)((byte)*psVar25 >> 1);
        if (((byte)*psVar25 & 1) != 0) {
          psVar2 = *(string **)(psVar25 + 0x10);
          sVar13 = *(size_t *)(psVar25 + 8);
        }
        if (uVar15 < 2) {
          if (sVar13 == 0) {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar22 - 1) != unaff_x26) break;
              uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar15 = plVar17[3];
              }
              if (uVar15 == 0) goto LAB_0170f1a4;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if (plVar17[1] != uVar11 && (plVar17[1] & uVar22 - 1) != unaff_x26) break;
              bVar3 = *(byte *)(plVar17 + 2);
              uVar15 = (ulong)(bVar3 >> 1);
              sVar1 = uVar15;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar17[3];
              }
              if (sVar1 == sVar13) {
                if ((bVar3 & 1) == 0) {
                  psVar19 = (string *)((long)plVar17 + 0x11);
                  psVar21 = psVar2;
                  while (*psVar19 == *psVar21) {
                    uVar15 = uVar15 - 1;
                    psVar19 = psVar19 + 1;
                    psVar21 = psVar21 + 1;
                    if (uVar15 == 0) goto LAB_0170f1a4;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar17[4],psVar2,sVar13);
                  if (iVar6 == 0) goto LAB_0170f1a4;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar13 == 0) {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar11) {
              if (uVar22 <= uVar15) {
                uVar4 = 0;
                if (uVar22 != 0) {
                  uVar4 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar4 * uVar22;
              }
              if (uVar15 != unaff_x26) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar15 = plVar17[3];
            }
            if (uVar15 == 0) goto LAB_0170f1a4;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar11) {
              if (uVar22 <= uVar15) {
                uVar4 = 0;
                if (uVar22 != 0) {
                  uVar4 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar4 * uVar22;
              }
              if (uVar15 != unaff_x26) break;
            }
            bVar3 = *(byte *)(plVar17 + 2);
            uVar15 = (ulong)(bVar3 >> 1);
            sVar1 = uVar15;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar17[3];
            }
            if (sVar1 == sVar13) {
              if ((bVar3 & 1) == 0) {
                psVar19 = (string *)((long)plVar17 + 0x11);
                psVar21 = psVar2;
                while (*psVar19 == *psVar21) {
                  uVar15 = uVar15 - 1;
                  psVar19 = psVar19 + 1;
                  psVar21 = psVar21 + 1;
                  if (uVar15 == 0) goto LAB_0170f1a4;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar17[4],psVar2,sVar13);
                if (iVar6 == 0) goto LAB_0170f1a4;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar25);
    lVar18 = *(long *)(psVar25 + 0x18);
    lVar20 = *(long *)(psVar25 + 0x28);
    plVar17[6] = *(long *)(psVar25 + 0x20);
    plVar17[7] = lVar20;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = uVar11;
    if ((uVar22 == 0) || (*(float *)(plVar10 + 5) * (float)uVar22 < (float)(plVar10[4] + 1))) {
      uVar22 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
      uVar15 = (ulong)((float)(plVar10[4] + 1) / *(float *)(plVar10 + 5));
      if (uVar15 <= uVar22) {
        uVar15 = uVar22;
      }
      FUN_008e9ae4(plVar26,uVar15);
      uVar22 = plVar10[2];
      if ((uVar22 & uVar22 - 1) == 0) {
        unaff_x26 = uVar22 - 1 & uVar11;
      }
      else if (uVar11 < uVar22) {
        unaff_x26 = uVar11;
      }
      else {
        uVar15 = 0;
        if (uVar22 != 0) {
          uVar15 = uVar11 / uVar22;
        }
        unaff_x26 = uVar11 - uVar15 * uVar22;
      }
    }
    lVar18 = *plVar26;
    plVar16 = *(long **)(lVar18 + unaff_x26 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar17 = *plVar14;
      *plVar14 = (long)plVar17;
      *(long **)(lVar18 + unaff_x26 * 8) = plVar14;
      if (*plVar17 != 0) {
        uVar11 = *(ulong *)(*plVar17 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar11 = uVar11 & uVar22 - 1;
        }
        else if (uVar22 <= uVar11) {
          uVar15 = 0;
          if (uVar22 != 0) {
            uVar15 = uVar11 / uVar22;
          }
          uVar11 = uVar11 - uVar15 * uVar22;
        }
        plVar16 = (long *)(*plVar26 + uVar11 * 8);
        goto LAB_0170f194;
      }
    }
    else {
      *plVar17 = *plVar16;
LAB_0170f194:
      *plVar16 = (long)plVar17;
    }
    plVar10[4] = plVar10[4] + 1;
LAB_0170f1a4:
    psVar25 = psVar25 + 0x30;
  } while (psVar25 != (string *)local_80);
  lVar20 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar26,lVar20 + lVar18);
    if (lVar12 != 0) {
      FUN_008f2aec(local_80,plVar26,lVar12);
      lVar12 = local_80[0];
      plVar14 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar12 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar27 = *(long *)(lVar12 + 0x20), lVar27 != 0)) {
          plVar17 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar17 = plVar14;
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
              FUN_02bcc824(plVar17,lVar27,0,8);
              goto LAB_0170f4d0;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar27,0,8);
        }
LAB_0170f4d0:
        plVar14 = DAT_043f1798;
        plVar17 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar17 = plVar14;
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
            goto LAB_0170f434;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar12,0,8);
      }
    }
LAB_0170f434:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar24 = (char *)plVar10[0xc];
  sVar13 = strlen(pcVar24);
  iVar6 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0xd];
  sVar13 = strlen(pcVar24);
  iVar7 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0xe];
  sVar13 = strlen(pcVar24);
  iVar8 = FUN_008f2c60(sVar13,pcVar24);
  pcVar24 = (char *)plVar10[0xf];
  sVar13 = strlen(pcVar24);
  iVar9 = FUN_008f2c60(sVar13,pcVar24);
  lVar20 = local_a0;
  *(bool *)(plVar10 + 0xb) = ((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0;
  plVar14 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar20,0,8);
        plVar14 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x0170f68c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
    plVar14 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x0170f68c:
  lVar20 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar18,0,8);
        plVar14 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x0170fa80;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
    plVar14 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x0170fa80:
  lVar18 = local_130;
  local_100 = lVar20;
  if (((local_110 & 1) != 0) && (lVar20 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar14;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar20,0,8);
        plVar14 = DAT_043f1798;
        lVar18 = local_130;
        goto joined_r0x0170f7f4;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar20,0,8);
    plVar14 = DAT_043f1798;
    lVar18 = local_130;
  }
joined_r0x0170f7f4:
  DAT_043f1798 = plVar14;
  local_130 = lVar18;
  if ((((byte)local_140 & 1) != 0) && (lVar18 != 0)) {
    plVar26 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar14;
      plVar26 = plVar14;
    }
    uVar11 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar26,lVar18,0,8);
        goto LAB_0170f8a4;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar18,0,8);
  }
LAB_0170f8a4:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar10)(plVar10,uVar23);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar11 = (ulong)&local_158 | 1;
  if ((local_158 & 1) != 0) {
    uVar11 = CONCAT44(uStack_144,CONCAT13(uStack_145,CONCAT21(uStack_147,local_148)));
  }
  FUN_001522a0(uVar23,uVar11);
  plVar10 = DAT_043f1798;
  if (((local_158 & 1) != 0) &&
     (lVar18 = CONCAT44(uStack_144,CONCAT13(uStack_145,CONCAT21(uStack_147,local_148))), lVar18 != 0
     )) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar10;
    }
    uVar11 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar11 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar18,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,0,8);
  }
  return;
}


