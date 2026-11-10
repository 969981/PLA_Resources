/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02327d00; name: FUN_02327d00
 */


void FUN_02327d00(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  size_t sVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  string *psVar19;
  long lVar20;
  string *psVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *plVar24;
  char *pcVar25;
  string *psVar26;
  ulong uVar27;
  long lVar28;
  byte local_128;
  undefined7 uStack_127;
  char cStack_120;
  undefined7 uStack_11f;
  char local_118;
  undefined2 uStack_117;
  undefined1 uStack_115;
  undefined4 uStack_114;
  string local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined8 local_10c;
  undefined4 local_104;
  long local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined7 local_db;
  undefined4 uStack_d4;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a8;
  char *local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  local_128 = 0x24;
  uStack_114 = 0;
  uStack_117 = 0x726f;
  uStack_127 = s_PlacementGenerator_03894269._0_7_;
  cStack_120 = s_PlacementGenerator_03894269[7];
  uStack_11f = s_PlacementGenerator_03894269._8_7_;
  local_118 = s_PlacementGenerator_03894269[0xf];
  uStack_115 = 0;
  lVar6 = tpidr_el0;
  plVar17 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0xe0,8);
  plVar11[4] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar24 = plVar11 + 1;
  *plVar24 = 0;
  plVar11[6] = (long)FUN_02328b60;
  plVar11[7] = (long)FUN_02328c10;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  *plVar11 = (long)&PTR_FUN_0425bc18;
  plVar11[0xc] = (long)&DAT_03a735a0;
  plVar11[0xd] = (long)&DAT_0392da3c;
  plVar11[0xf] = (long)"CreateFieldObjectCategory";
  plVar11[0x10] = (long)FUN_01f78120;
  plVar11[0x13] = 0;
  plVar11[0x14] = (long)FUN_02328da0;
  uVar27 = 0xffffffff;
  plVar11[0x15] = (long)&LAB_02329080;
  plVar11[0x16] = (long)&LAB_02329360;
  plVar11[10] = 0;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  plVar11[0x1b] = 0;
  plVar11[0x19] = 0;
  *(undefined1 *)(plVar11 + 0x1a) = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x17] = (long)&LAB_02329370;
  plVar11[0x18] = 0;
  plVar1 = DAT_043f1798;
  local_110 = (string)0x6;
  local_10f = 0x656e;
  local_10d = 0x77;
  local_f0 = &LAB_023293bc;
  local_10c = 0;
  local_104 = 0;
  local_e8 = 0xffffffff;
  local_e0 = 8;
  local_db = 0;
  uStack_d4 = 0;
  local_c0 = &LAB_0232944c;
  local_b8 = 0xffffffff;
  local_100 = 0;
  local_f8 = &LAB_02329374;
  local_df = 0x63675f5f;
  local_d0 = 0;
  puStack_c8 = &LAB_02329404;
  plVar17 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar17 = plVar1;
  }
  local_a0 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  local_a0[0x18] = 'y';
  local_a0[0x19] = '\0';
  uVar23 = s_CreateFieldObjectCategory_0389d883._8_8_;
  *(undefined8 *)local_a0 = s_CreateFieldObjectCategory_0389d883._0_8_;
  uVar7 = s_CreateFieldObjectCategory_0389d883._16_8_;
  *(undefined8 *)(local_a0 + 8) = uVar23;
  *(undefined8 *)(local_a0 + 0x10) = uVar7;
  local_a8 = 0x19;
  psVar26 = &local_110;
  local_98 = &LAB_02329494;
  puStack_90 = &LAB_023294dc;
  plVar1 = plVar11 + 3;
  local_b0 = 0x21;
  local_a9 = 0;
  local_ab = 0;
  local_af = 0;
  local_88 = 0xffffffff;
  do {
    uVar12 = *(ulong *)(psVar26 + 8);
    psVar3 = *(string **)(psVar26 + 0x10);
    if (((byte)*psVar26 & 1) == 0) {
      psVar3 = psVar26 + 1;
      uVar12 = (ulong)((byte)*psVar26 >> 1);
    }
    uVar12 = FUN_008e8ed4(local_80,psVar3,uVar12);
    uVar22 = plVar11[2];
    if (uVar22 != 0) {
      uVar27 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
      uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
      uVar15 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar27 = uVar22 - 1 & uVar12;
      }
      else {
        uVar27 = uVar12;
        if (uVar22 <= uVar12) {
          uVar27 = 0;
          if (uVar22 != 0) {
            uVar27 = uVar12 / uVar22;
          }
          uVar27 = uVar12 - uVar27 * uVar22;
        }
      }
      plVar17 = *(long **)(*plVar24 + uVar27 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        psVar3 = psVar26 + 1;
        sVar14 = (ulong)((byte)*psVar26 >> 1);
        if (((byte)*psVar26 & 1) != 0) {
          psVar3 = *(string **)(psVar26 + 0x10);
          sVar14 = *(size_t *)(psVar26 + 8);
        }
        if (uVar15 < 2) {
          if (sVar14 == 0) {
            do {
              if (plVar17[1] != uVar12 && (plVar17[1] & uVar22 - 1) != uVar27) break;
              uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
              if ((*(byte *)(plVar17 + 2) & 1) != 0) {
                uVar15 = plVar17[3];
              }
              if (uVar15 == 0) goto LAB_0232819c;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              if (plVar17[1] != uVar12 && (plVar17[1] & uVar22 - 1) != uVar27) break;
              bVar4 = *(byte *)(plVar17 + 2);
              uVar15 = (ulong)(bVar4 >> 1);
              sVar2 = uVar15;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar17[3];
              }
              if (sVar2 == sVar14) {
                if ((bVar4 & 1) == 0) {
                  psVar19 = (string *)((long)plVar17 + 0x11);
                  psVar21 = psVar3;
                  while (*psVar19 == *psVar21) {
                    uVar15 = uVar15 - 1;
                    psVar19 = psVar19 + 1;
                    psVar21 = psVar21 + 1;
                    if (uVar15 == 0) goto LAB_0232819c;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar17[4],psVar3,sVar14);
                  if (iVar8 == 0) goto LAB_0232819c;
                }
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
        else if (sVar14 == 0) {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar12) {
              if (uVar22 <= uVar15) {
                uVar5 = 0;
                if (uVar22 != 0) {
                  uVar5 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar5 * uVar22;
              }
              if (uVar15 != uVar27) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            if ((*(byte *)(plVar17 + 2) & 1) != 0) {
              uVar15 = plVar17[3];
            }
            if (uVar15 == 0) goto LAB_0232819c;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 != uVar12) {
              if (uVar22 <= uVar15) {
                uVar5 = 0;
                if (uVar22 != 0) {
                  uVar5 = uVar15 / uVar22;
                }
                uVar15 = uVar15 - uVar5 * uVar22;
              }
              if (uVar15 != uVar27) break;
            }
            bVar4 = *(byte *)(plVar17 + 2);
            uVar15 = (ulong)(bVar4 >> 1);
            sVar2 = uVar15;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar17[3];
            }
            if (sVar2 == sVar14) {
              if ((bVar4 & 1) == 0) {
                psVar19 = (string *)((long)plVar17 + 0x11);
                psVar21 = psVar3;
                while (*psVar19 == *psVar21) {
                  uVar15 = uVar15 - 1;
                  psVar19 = psVar19 + 1;
                  psVar21 = psVar21 + 1;
                  if (uVar15 == 0) goto LAB_0232819c;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar17[4],psVar3,sVar14);
                if (iVar8 == 0) goto LAB_0232819c;
              }
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    plVar17 = DAT_043f1798;
    plVar16 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar16 = plVar17;
    }
    plVar17 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
    std::string::string((string *)(plVar17 + 2),psVar26);
    lVar18 = *(long *)(psVar26 + 0x18);
    lVar20 = *(long *)(psVar26 + 0x28);
    plVar17[6] = *(long *)(psVar26 + 0x20);
    plVar17[7] = lVar20;
    plVar17[5] = lVar18;
    *plVar17 = 0;
    plVar17[1] = uVar12;
    if ((uVar22 == 0) || (*(float *)(plVar11 + 5) * (float)uVar22 < (float)(plVar11[4] + 1))) {
      uVar27 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
      uVar22 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar22 <= uVar27) {
        uVar22 = uVar27;
      }
      FUN_008e9ae4(plVar24,uVar22);
      uVar22 = plVar11[2];
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar27 = uVar22 - 1 & uVar12;
      }
      else if (uVar12 < uVar22) {
        uVar27 = uVar12;
      }
      else {
        uVar27 = 0;
        if (uVar22 != 0) {
          uVar27 = uVar12 / uVar22;
        }
        uVar27 = uVar12 - uVar27 * uVar22;
      }
    }
    lVar18 = *plVar24;
    plVar16 = *(long **)(lVar18 + uVar27 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar17 = *plVar1;
      *plVar1 = (long)plVar17;
      *(long **)(lVar18 + uVar27 * 8) = plVar1;
      if (*plVar17 != 0) {
        uVar12 = *(ulong *)(*plVar17 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar12 = uVar12 & uVar22 - 1;
        }
        else if (uVar22 <= uVar12) {
          uVar15 = 0;
          if (uVar22 != 0) {
            uVar15 = uVar12 / uVar22;
          }
          uVar12 = uVar12 - uVar15 * uVar22;
        }
        plVar16 = (long *)(*plVar24 + uVar12 * 8);
        goto LAB_0232818c;
      }
    }
    else {
      *plVar17 = *plVar16;
LAB_0232818c:
      *plVar16 = (long)plVar17;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_0232819c:
    psVar26 = psVar26 + 0x30;
  } while (psVar26 != (string *)local_80);
  lVar20 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar24,lVar20 + lVar18);
    if (lVar13 != 0) {
      FUN_008f2aec(local_80,plVar24,lVar13);
      lVar13 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar13 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar13 + 0x10) & 1) != 0)) &&
           (lVar28 = *(long *)(lVar13 + 0x20), lVar28 != 0)) {
          plVar17 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar17 = plVar1;
          }
          uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
          if ((uVar27 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar17,lVar28,0,8);
              goto LAB_02328458;
            }
          }
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar28,0,8);
        }
LAB_02328458:
        plVar1 = DAT_043f1798;
        plVar17 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar17 = plVar1;
        }
        uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar27 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar17,lVar13,0,8);
            goto LAB_023283bc;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,0,8);
      }
    }
LAB_023283bc:
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  pcVar25 = (char *)plVar11[0xc];
  sVar14 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0xd];
  sVar14 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = (char *)plVar11[0xf];
  sVar14 = strlen(pcVar25);
  iVar10 = FUN_008f2c60(sVar14,pcVar25);
  pcVar25 = local_a0;
  *(bool *)(plVar11 + 0xb) = (iVar9 != 0 || iVar8 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar17,pcVar25,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x023285fc;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pcVar25,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x023285fc:
  lVar20 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar17 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x0232892c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x0232892c:
  DAT_043f1798 = plVar1;
  local_100 = lVar20;
  if ((((byte)local_110 & 1) != 0) && (lVar20 != 0)) {
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar20,0,8);
        goto LAB_02328760;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar20,0,8);
  }
LAB_02328760:
  uVar23 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar23);
  (**(code **)*plVar11)(plVar11,uVar23);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar27 = (ulong)&local_128 | 1;
  if ((local_128 & 1) != 0) {
    uVar27 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT21(uStack_117,local_118)));
  }
  FUN_001522a0(uVar23,uVar27);
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) &&
     (lVar18 = CONCAT44(uStack_114,CONCAT13(uStack_115,CONCAT21(uStack_117,local_118))), lVar18 != 0
     )) {
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar17 = plVar1;
    }
    uVar27 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar27 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar18,0,8);
        return;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,0,8);
  }
  return;
}


