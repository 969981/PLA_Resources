/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01591f10; name: FUN_01591f10
 */


void FUN_01591f10(long param_1)

{
  size_t sVar1;
  string *psVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  string *psVar18;
  long lVar19;
  string *psVar20;
  ulong uVar21;
  undefined8 uVar22;
  char *pcVar23;
  string *psVar24;
  long *plVar25;
  ulong unaff_x25;
  long lVar26;
  byte local_128;
  undefined7 uStack_127;
  char cStack_120;
  undefined2 local_11f;
  undefined5 uStack_11d;
  ulong local_118;
  string local_110;
  char local_10f [7];
  char cStack_108;
  char acStack_107 [7];
  long local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
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
  long local_80 [2];
  char local_70;
  
  plVar9 = DAT_043f1798;
  uStack_11d = 0;
  local_128 = 0x12;
  uStack_127 = s_DemoEvent_039338cd._0_7_;
  cStack_120 = s_DemoEvent_039338cd[7];
  local_118 = 0;
  local_11f = 0x74;
  lVar5 = tpidr_el0;
  plVar13 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar13 = plVar9;
  }
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,200,8);
  plVar9[2] = 0;
  plVar13 = plVar9 + 1;
  *plVar13 = 0;
  plVar25 = plVar9 + 3;
  *plVar25 = 0;
  *(undefined4 *)(plVar9 + 5) = 0x3f800000;
  plVar9[6] = (long)FUN_01592d00;
  plVar9[7] = (long)FUN_01592db0;
  *plVar9 = (long)&PTR_FUN_0421e440;
  plVar9[4] = 0;
  plVar9[0xe] = (long)&DAT_0392da3c;
  plVar9[0xf] = 0;
  plVar9[0xc] = (long)"__haxe_export_CallDemo";
  plVar9[0xd] = (long)&DAT_038ca815;
  plVar9[0x10] = 0;
  plVar9[0x11] = (long)FUN_01592f84;
  psVar24 = &local_110;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  plVar9[0x18] = 0;
  plVar9[0x16] = 0;
  *(undefined1 *)(plVar9 + 0x17) = 0;
  plVar9[0x12] = (long)&LAB_01593264;
  plVar9[0x13] = (long)&LAB_01593540;
  plVar9[0x14] = (long)&LAB_01593550;
  plVar9[0x15] = 0;
  local_110 = (string)0x2c;
  local_10f[0] = s___haxe_export_CallDemo_03a73a44[0];
  local_10f[1] = s___haxe_export_CallDemo_03a73a44[1];
  local_10f[2] = s___haxe_export_CallDemo_03a73a44[2];
  local_10f[3] = s___haxe_export_CallDemo_03a73a44[3];
  local_10f[4] = s___haxe_export_CallDemo_03a73a44[4];
  local_10f[5] = s___haxe_export_CallDemo_03a73a44[5];
  local_10f[6] = s___haxe_export_CallDemo_03a73a44[6];
  cStack_108 = s___haxe_export_CallDemo_03a73a44[7];
  acStack_107[0] = s___haxe_export_CallDemo_03a73a44[8];
  acStack_107[1] = s___haxe_export_CallDemo_03a73a44[9];
  acStack_107[2] = s___haxe_export_CallDemo_03a73a44[10];
  acStack_107[3] = s___haxe_export_CallDemo_03a73a44[0xb];
  acStack_107[4] = s___haxe_export_CallDemo_03a73a44[0xc];
  acStack_107[5] = s___haxe_export_CallDemo_03a73a44[0xd];
  acStack_107[6] = s___haxe_export_CallDemo_03a73a44[0xe];
  local_c0 = &LAB_0159362c;
  local_dc = 0;
  local_d4 = 0;
  local_b0 = 8;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_100 = 0x6f6d65446c6c61;
  local_f8 = &LAB_01593554;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_f0 = &LAB_0159359c;
  local_e8 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_88 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_015935e4;
  local_af = 0x63675f5f;
  local_98 = &LAB_01593674;
  puStack_90 = &LAB_015936bc;
  do {
    uVar10 = *(ulong *)(psVar24 + 8);
    psVar2 = *(string **)(psVar24 + 0x10);
    if (((byte)*psVar24 & 1) == 0) {
      psVar2 = psVar24 + 1;
      uVar10 = (ulong)((byte)*psVar24 >> 1);
    }
    uVar10 = FUN_008e8ed4(local_80,psVar2,uVar10);
    uVar21 = plVar9[2];
    if (uVar21 != 0) {
      uVar14 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        unaff_x25 = uVar21 - 1 & uVar10;
      }
      else {
        unaff_x25 = uVar10;
        if (uVar21 <= uVar10) {
          uVar4 = 0;
          if (uVar21 != 0) {
            uVar4 = uVar10 / uVar21;
          }
          unaff_x25 = uVar10 - uVar4 * uVar21;
        }
      }
      plVar16 = *(long **)(*plVar13 + unaff_x25 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        psVar2 = psVar24 + 1;
        sVar12 = (ulong)((byte)*psVar24 >> 1);
        if (((byte)*psVar24 & 1) != 0) {
          psVar2 = *(string **)(psVar24 + 0x10);
          sVar12 = *(size_t *)(psVar24 + 8);
        }
        if (uVar14 < 2) {
          if (sVar12 == 0) {
            do {
              if (plVar16[1] != uVar10 && (plVar16[1] & uVar21 - 1) != unaff_x25) break;
              uVar14 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
              if ((*(byte *)(plVar16 + 2) & 1) != 0) {
                uVar14 = plVar16[3];
              }
              if (uVar14 == 0) goto LAB_015922e0;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              if (plVar16[1] != uVar10 && (plVar16[1] & uVar21 - 1) != unaff_x25) break;
              bVar3 = *(byte *)(plVar16 + 2);
              uVar14 = (ulong)(bVar3 >> 1);
              sVar1 = uVar14;
              if ((bVar3 & 1) != 0) {
                sVar1 = plVar16[3];
              }
              if (sVar1 == sVar12) {
                if ((bVar3 & 1) == 0) {
                  psVar18 = (string *)((long)plVar16 + 0x11);
                  psVar20 = psVar2;
                  while (*psVar18 == *psVar20) {
                    uVar14 = uVar14 - 1;
                    psVar18 = psVar18 + 1;
                    psVar20 = psVar20 + 1;
                    if (uVar14 == 0) goto LAB_015922e0;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar16[4],psVar2,sVar12);
                  if (iVar6 == 0) goto LAB_015922e0;
                }
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
        else if (sVar12 == 0) {
          do {
            uVar14 = plVar16[1];
            if (uVar14 != uVar10) {
              if (uVar21 <= uVar14) {
                uVar4 = 0;
                if (uVar21 != 0) {
                  uVar4 = uVar14 / uVar21;
                }
                uVar14 = uVar14 - uVar4 * uVar21;
              }
              if (uVar14 != unaff_x25) break;
            }
            uVar14 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
            if ((*(byte *)(plVar16 + 2) & 1) != 0) {
              uVar14 = plVar16[3];
            }
            if (uVar14 == 0) goto LAB_015922e0;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar16[1];
            if (uVar14 != uVar10) {
              if (uVar21 <= uVar14) {
                uVar4 = 0;
                if (uVar21 != 0) {
                  uVar4 = uVar14 / uVar21;
                }
                uVar14 = uVar14 - uVar4 * uVar21;
              }
              if (uVar14 != unaff_x25) break;
            }
            bVar3 = *(byte *)(plVar16 + 2);
            uVar14 = (ulong)(bVar3 >> 1);
            sVar1 = uVar14;
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar16[3];
            }
            if (sVar1 == sVar12) {
              if ((bVar3 & 1) == 0) {
                psVar18 = (string *)((long)plVar16 + 0x11);
                psVar20 = psVar2;
                while (*psVar18 == *psVar20) {
                  uVar14 = uVar14 - 1;
                  psVar18 = psVar18 + 1;
                  psVar20 = psVar20 + 1;
                  if (uVar14 == 0) goto LAB_015922e0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar16[4],psVar2,sVar12);
                if (iVar6 == 0) goto LAB_015922e0;
              }
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    plVar16 = DAT_043f1798;
    plVar15 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar15 = plVar16;
    }
    plVar16 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x40,8);
    std::string::string((string *)(plVar16 + 2),psVar24);
    lVar17 = *(long *)(psVar24 + 0x18);
    lVar19 = *(long *)(psVar24 + 0x28);
    plVar16[6] = *(long *)(psVar24 + 0x20);
    plVar16[7] = lVar19;
    plVar16[5] = lVar17;
    *plVar16 = 0;
    plVar16[1] = uVar10;
    if ((uVar21 == 0) || (*(float *)(plVar9 + 5) * (float)uVar21 < (float)(plVar9[4] + 1))) {
      uVar21 = (ulong)(uVar21 < 3 || (uVar21 & uVar21 - 1) != 0) | uVar21 << 1;
      uVar14 = (ulong)((float)(plVar9[4] + 1) / *(float *)(plVar9 + 5));
      if (uVar14 <= uVar21) {
        uVar14 = uVar21;
      }
      FUN_008e9ae4(plVar13,uVar14);
      uVar21 = plVar9[2];
      if ((uVar21 & uVar21 - 1) == 0) {
        unaff_x25 = uVar21 - 1 & uVar10;
      }
      else if (uVar10 < uVar21) {
        unaff_x25 = uVar10;
      }
      else {
        uVar14 = 0;
        if (uVar21 != 0) {
          uVar14 = uVar10 / uVar21;
        }
        unaff_x25 = uVar10 - uVar14 * uVar21;
      }
    }
    lVar17 = *plVar13;
    plVar15 = *(long **)(lVar17 + unaff_x25 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar16 = *plVar25;
      *plVar25 = (long)plVar16;
      *(long **)(lVar17 + unaff_x25 * 8) = plVar25;
      if (*plVar16 != 0) {
        uVar10 = *(ulong *)(*plVar16 + 8);
        if ((uVar21 & uVar21 - 1) == 0) {
          uVar10 = uVar10 & uVar21 - 1;
        }
        else if (uVar21 <= uVar10) {
          uVar14 = 0;
          if (uVar21 != 0) {
            uVar14 = uVar10 / uVar21;
          }
          uVar10 = uVar10 - uVar14 * uVar21;
        }
        plVar15 = (long *)(*plVar13 + uVar10 * 8);
        goto LAB_015922d0;
      }
    }
    else {
      *plVar16 = *plVar15;
LAB_015922d0:
      *plVar15 = (long)plVar16;
    }
    plVar9[4] = plVar9[4] + 1;
LAB_015922e0:
    psVar24 = psVar24 + 0x30;
  } while (psVar24 != (string *)local_80);
  lVar19 = FUN_008cca50();
  lVar17 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar13,lVar19 + lVar17);
    if (lVar11 != 0) {
      FUN_008f2aec(local_80,plVar13,lVar11);
      lVar11 = local_80[0];
      plVar25 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar11 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar26 = *(long *)(lVar11 + 0x20), lVar26 != 0)) {
          plVar16 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar16 = plVar25;
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
              goto LAB_015925f8;
            }
          }
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar26,0,8);
        }
LAB_015925f8:
        plVar25 = DAT_043f1798;
        plVar16 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar16 = plVar25;
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
            goto LAB_0159255c;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar11,0,8);
      }
    }
LAB_0159255c:
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0x300);
  pcVar23 = (char *)plVar9[0xc];
  sVar12 = strlen(pcVar23);
  iVar6 = FUN_008f2c60(sVar12,pcVar23);
  pcVar23 = (char *)plVar9[0xd];
  sVar12 = strlen(pcVar23);
  iVar7 = FUN_008f2c60(sVar12,pcVar23);
  pcVar23 = (char *)plVar9[0xe];
  sVar12 = strlen(pcVar23);
  iVar8 = FUN_008f2c60(sVar12,pcVar23);
  lVar19 = local_a0;
  *(bool *)(plVar9 + 0xb) = (iVar7 != 0 || iVar6 != 0) || iVar8 != 0;
  plVar13 = DAT_043f1798;
  lVar17 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar25 = plVar13;
    }
    uVar10 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar19,0,8);
        plVar13 = DAT_043f1798;
        lVar17 = local_d0;
        goto joined_r0x0159279c;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
    plVar13 = DAT_043f1798;
    lVar17 = local_d0;
  }
joined_r0x0159279c:
  lVar19 = local_100;
  local_d0 = lVar17;
  if (((local_e0 & 1) != 0) && (lVar17 != 0)) {
    plVar25 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar13;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar13;
      plVar25 = plVar13;
    }
    uVar10 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar17,0,8);
        plVar13 = DAT_043f1798;
        lVar19 = local_100;
        goto joined_r0x01592acc;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar17,0,8);
    plVar13 = DAT_043f1798;
    lVar19 = local_100;
  }
joined_r0x01592acc:
  DAT_043f1798 = plVar13;
  local_100 = lVar19;
  if ((((byte)local_110 & 1) != 0) && (lVar19 != 0)) {
    plVar25 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar13;
      plVar25 = plVar13;
    }
    uVar10 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar25,lVar19,0,8);
        goto LAB_01592900;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
  }
LAB_01592900:
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar22);
  (**(code **)*plVar9)(plVar9,uVar22);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar10 = (ulong)&local_128 | 1;
  if ((local_128 & 1) != 0) {
    uVar10 = local_118;
  }
  FUN_001522a0(uVar22,uVar10);
  uVar10 = local_118;
  plVar9 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != 0)) {
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar9;
    }
    uVar21 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar10,0,8);
        return;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
  }
  return;
}


