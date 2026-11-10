/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00def410; name: FUN_00def410
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00def410(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  size_t sVar14;
  ulong uVar15;
  long *plVar16;
  byte *pbVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  string *psVar22;
  long lVar23;
  string *psVar24;
  byte *pbVar25;
  undefined8 uVar26;
  long *plVar27;
  char *pcVar28;
  string *psVar29;
  byte *pbVar30;
  long lVar31;
  byte local_158;
  undefined7 uStack_157;
  undefined4 local_150;
  undefined4 local_14c;
  ulong local_148;
  string local_140;
  undefined2 local_13f;
  undefined1 local_13d;
  undefined8 local_13c;
  undefined4 local_134;
  long local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  byte local_110;
  undefined4 local_10f;
  undefined7 local_10b;
  undefined4 uStack_104;
  long local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  char local_df [7];
  char cStack_d8;
  char acStack_d7 [7];
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
  local_158 = 0x16;
  local_148 = 0;
  uStack_157 = s_GameManager_038f2112._0_7_;
  local_150 = CONCAT31(0x726567,s_GameManager_038f2112[7]);
  local_14c = 0;
  lVar5 = tpidr_el0;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  pbVar30 = &local_158;
  plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xd8,8);
  plVar11[4] = 0;
  plVar27 = plVar11 + 1;
  *plVar27 = 0;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[10] = 0;
  plVar11[6] = (long)FUN_00df03f0;
  plVar11[7] = (long)FUN_00df04a0;
  *plVar11 = (long)&PTR_FUN_041ee5f8;
  plVar11[0xc] = (long)&DAT_03a735a0;
  plVar11[0xd] = (long)&DAT_0392da3c;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  plVar11[0x13] = (long)FUN_00df0630;
  plVar11[0x14] = (long)&LAB_00df0914;
  *(undefined1 *)(plVar11 + 0xe) = 0;
  plVar11[0x15] = (long)&LAB_00df0c00;
  plVar11[0x16] = (long)&LAB_00df0c10;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[0x1a] = 0;
  *(undefined1 *)(plVar11 + 0x19) = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[0xf] = (long)"GetEventScriptManager";
  plVar11[0x10] = (long)"GetEventProgressTimeManager";
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x17] = 0;
  plVar11[0x18] = 0;
  plVar1 = DAT_043f1798;
  local_140 = (string)0x6;
  local_13f = 0x656e;
  local_13d = 0x77;
  local_120 = &LAB_00df0c5c;
  local_f0 = &LAB_00df0cec;
  local_13c = 0;
  local_134 = 0;
  local_118 = 0xffffffff;
  local_110 = 8;
  local_10b = 0;
  uStack_104 = 0;
  local_e8 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_130 = 0;
  local_128 = &LAB_00df0c14;
  local_10f = 0x63675f5f;
  local_100 = 0;
  puStack_f8 = &LAB_00df0ca4;
  local_e0 = 0x2a;
  local_df[0] = s_GetEventScriptManager_03a73880[0];
  local_df[1] = s_GetEventScriptManager_03a73880[1];
  local_df[2] = s_GetEventScriptManager_03a73880[2];
  local_df[3] = s_GetEventScriptManager_03a73880[3];
  local_df[4] = s_GetEventScriptManager_03a73880[4];
  local_df[5] = s_GetEventScriptManager_03a73880[5];
  local_df[6] = s_GetEventScriptManager_03a73880[6];
  cStack_d8 = s_GetEventScriptManager_03a73880[7];
  acStack_d7[0] = s_GetEventScriptManager_03a73880[8];
  acStack_d7[1] = s_GetEventScriptManager_03a73880[9];
  acStack_d7[2] = s_GetEventScriptManager_03a73880[10];
  acStack_d7[3] = s_GetEventScriptManager_03a73880[0xb];
  acStack_d7[4] = s_GetEventScriptManager_03a73880[0xc];
  acStack_d7[5] = s_GetEventScriptManager_03a73880[0xd];
  acStack_d7[6] = s_GetEventScriptManager_03a73880[0xe];
  local_d0 = 0x726567616e61;
  puStack_c8 = &LAB_00df0d34;
  local_c0 = &LAB_00df0d7c;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  uVar18 = (ulong)pbVar30 | 1;
  local_a0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  local_a0[0x17] = 'a';
  local_a0[0x18] = 'g';
  local_a0[0x19] = 'e';
  local_a0[0x1a] = 'r';
  plVar1 = plVar11 + 3;
  local_a0[0x1b] = '\0';
  uVar26 = s_GetEventProgressTimeManager_038d386d._8_8_;
  *(undefined8 *)local_a0 = s_GetEventProgressTimeManager_038d386d._0_8_;
  uVar6 = s_GetEventProgressTimeManager_038d386d._16_8_;
  *(undefined8 *)(local_a0 + 8) = uVar26;
  *(undefined8 *)(local_a0 + 0x10) = uVar6;
  local_b0 = 0x21;
  local_ab = 0;
  local_af = 0;
  local_a8 = 0x1b;
  psVar29 = &local_140;
  local_98 = &LAB_00df0dc4;
  puStack_90 = &LAB_00df0e0c;
  local_a9 = 0;
  local_88 = 0xffffffff;
  do {
    uVar15 = *(ulong *)(psVar29 + 8);
    psVar3 = *(string **)(psVar29 + 0x10);
    if (((byte)*psVar29 & 1) == 0) {
      psVar3 = psVar29 + 1;
      uVar15 = (ulong)((byte)*psVar29 >> 1);
    }
    pbVar12 = (byte *)FUN_008e8ed4(local_80,psVar3,uVar15);
    pbVar25 = (byte *)plVar11[2];
    if (pbVar25 != (byte *)0x0) {
      uVar15 = (long)pbVar25 - ((ulong)pbVar25 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        pbVar30 = (byte *)((ulong)(pbVar25 + -1) & (ulong)pbVar12);
      }
      else {
        pbVar30 = pbVar12;
        if (pbVar25 <= pbVar12) {
          uVar20 = 0;
          if (pbVar25 != (byte *)0x0) {
            uVar20 = (ulong)pbVar12 / (ulong)pbVar25;
          }
          pbVar30 = pbVar12 + -(uVar20 * (long)pbVar25);
        }
      }
      plVar19 = *(long **)(*plVar27 + (long)pbVar30 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar3 = psVar29 + 1;
        sVar14 = (ulong)((byte)*psVar29 >> 1);
        if (((byte)*psVar29 & 1) != 0) {
          psVar3 = *(string **)(psVar29 + 0x10);
          sVar14 = *(size_t *)(psVar29 + 8);
        }
        if (uVar15 < 2) {
          if (sVar14 == 0) {
            do {
              if ((byte *)plVar19[1] != pbVar12 &&
                  (byte *)((ulong)plVar19[1] & (ulong)(pbVar25 + -1)) != pbVar30) break;
              uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar15 = plVar19[3];
              }
              if (uVar15 == 0) goto LAB_00def8f4;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if ((byte *)plVar19[1] != pbVar12 &&
                  (byte *)((ulong)plVar19[1] & (ulong)(pbVar25 + -1)) != pbVar30) break;
              bVar4 = *(byte *)(plVar19 + 2);
              uVar15 = (ulong)(bVar4 >> 1);
              sVar2 = uVar15;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar19[3];
              }
              if (sVar2 == sVar14) {
                if ((bVar4 & 1) == 0) {
                  psVar22 = (string *)((long)plVar19 + 0x11);
                  psVar24 = psVar3;
                  while (*psVar22 == *psVar24) {
                    uVar15 = uVar15 - 1;
                    psVar22 = psVar22 + 1;
                    psVar24 = psVar24 + 1;
                    if (uVar15 == 0) goto LAB_00def8f4;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar19[4],psVar3,sVar14);
                  if (iVar7 == 0) goto LAB_00def8f4;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar14 == 0) {
          do {
            pbVar17 = (byte *)plVar19[1];
            if (pbVar17 != pbVar12) {
              if (pbVar25 <= pbVar17) {
                uVar15 = 0;
                if (pbVar25 != (byte *)0x0) {
                  uVar15 = (ulong)pbVar17 / (ulong)pbVar25;
                }
                pbVar17 = pbVar17 + -(uVar15 * (long)pbVar25);
              }
              if (pbVar17 != pbVar30) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar15 = plVar19[3];
            }
            if (uVar15 == 0) goto LAB_00def8f4;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            pbVar17 = (byte *)plVar19[1];
            if (pbVar17 != pbVar12) {
              if (pbVar25 <= pbVar17) {
                uVar15 = 0;
                if (pbVar25 != (byte *)0x0) {
                  uVar15 = (ulong)pbVar17 / (ulong)pbVar25;
                }
                pbVar17 = pbVar17 + -(uVar15 * (long)pbVar25);
              }
              if (pbVar17 != pbVar30) break;
            }
            bVar4 = *(byte *)(plVar19 + 2);
            uVar15 = (ulong)(bVar4 >> 1);
            sVar2 = uVar15;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar19[3];
            }
            if (sVar2 == sVar14) {
              if ((bVar4 & 1) == 0) {
                psVar22 = (string *)((long)plVar19 + 0x11);
                psVar24 = psVar3;
                while (*psVar22 == *psVar24) {
                  uVar15 = uVar15 - 1;
                  psVar22 = psVar22 + 1;
                  psVar24 = psVar24 + 1;
                  if (uVar15 == 0) goto LAB_00def8f4;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar19[4],psVar3,sVar14);
                if (iVar7 == 0) goto LAB_00def8f4;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar16 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar16 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar29);
    lVar21 = *(long *)(psVar29 + 0x18);
    lVar23 = *(long *)(psVar29 + 0x28);
    plVar19[6] = *(long *)(psVar29 + 0x20);
    plVar19[7] = lVar23;
    plVar19[5] = lVar21;
    *plVar19 = 0;
    plVar19[1] = (long)pbVar12;
    if ((pbVar25 == (byte *)0x0) ||
       (*(float *)(plVar11 + 5) * (float)pbVar25 < (float)(plVar11[4] + 1))) {
      uVar15 = (ulong)(pbVar25 < (byte *)0x3 || ((ulong)pbVar25 & (ulong)(pbVar25 + -1)) != 0) |
               (long)pbVar25 << 1;
      uVar20 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar20 <= uVar15) {
        uVar20 = uVar15;
      }
      FUN_008e9ae4(plVar27,uVar20);
      pbVar25 = (byte *)plVar11[2];
      if (((ulong)pbVar25 & (ulong)(pbVar25 + -1)) == 0) {
        pbVar30 = (byte *)((ulong)(pbVar25 + -1) & (ulong)pbVar12);
      }
      else if (pbVar12 < pbVar25) {
        pbVar30 = pbVar12;
      }
      else {
        uVar15 = 0;
        if (pbVar25 != (byte *)0x0) {
          uVar15 = (ulong)pbVar12 / (ulong)pbVar25;
        }
        pbVar30 = pbVar12 + -(uVar15 * (long)pbVar25);
      }
    }
    lVar21 = *plVar27;
    plVar16 = *(long **)(lVar21 + (long)pbVar30 * 8);
    if (plVar16 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar21 + (long)pbVar30 * 8) = plVar1;
      if (*plVar19 != 0) {
        pbVar12 = *(byte **)(*plVar19 + 8);
        if (((ulong)pbVar25 & (ulong)(pbVar25 + -1)) == 0) {
          pbVar12 = (byte *)((ulong)pbVar12 & (ulong)(pbVar25 + -1));
        }
        else if (pbVar25 <= pbVar12) {
          uVar15 = 0;
          if (pbVar25 != (byte *)0x0) {
            uVar15 = (ulong)pbVar12 / (ulong)pbVar25;
          }
          pbVar12 = pbVar12 + -(uVar15 * (long)pbVar25);
        }
        plVar16 = (long *)(*plVar27 + (long)pbVar12 * 8);
        goto LAB_00def8e4;
      }
    }
    else {
      *plVar19 = *plVar16;
LAB_00def8e4:
      *plVar16 = (long)plVar19;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_00def8f4:
    psVar29 = psVar29 + 0x30;
  } while (psVar29 != (string *)local_80);
  lVar23 = FUN_008cca50();
  lVar21 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar27,lVar23 + lVar21);
    if (lVar13 != 0) {
      FUN_008f2aec(local_80,plVar27,lVar13);
      lVar13 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar13 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar13 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar13 + 0x20), lVar31 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar31,0,8);
              goto LAB_00defba4;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar31,0,8);
        }
LAB_00defba4:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar13,0,8);
            goto LAB_00defb08;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,0,8);
      }
    }
LAB_00defb08:
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x300);
  pcVar28 = (char *)plVar11[0xc];
  sVar14 = strlen(pcVar28);
  iVar7 = FUN_008f2c60(sVar14,pcVar28);
  pcVar28 = (char *)plVar11[0xd];
  sVar14 = strlen(pcVar28);
  iVar8 = FUN_008f2c60(sVar14,pcVar28);
  pcVar28 = (char *)plVar11[0xf];
  sVar14 = strlen(pcVar28);
  iVar9 = FUN_008f2c60(sVar14,pcVar28);
  pcVar28 = (char *)plVar11[0x10];
  sVar14 = strlen(pcVar28);
  iVar10 = FUN_008f2c60(sVar14,pcVar28);
  pcVar28 = local_a0;
  *(bool *)(plVar11 + 0xb) = ((iVar8 != 0 || iVar7 != 0) || iVar9 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  lVar21 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar21 = local_d0;
        goto joined_r0x00defd60;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar21 = local_d0;
  }
joined_r0x00defd60:
  lVar23 = local_100;
  local_d0 = lVar21;
  if (((local_e0 & 1) != 0) && (lVar21 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar21,0,8);
        plVar1 = DAT_043f1798;
        lVar23 = local_100;
        goto joined_r0x00df0144;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar21,0,8);
    plVar1 = DAT_043f1798;
    lVar23 = local_100;
  }
joined_r0x00df0144:
  lVar21 = local_130;
  local_100 = lVar23;
  if (((local_110 & 1) != 0) && (lVar23 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar23,0,8);
        plVar1 = DAT_043f1798;
        lVar21 = local_130;
        goto joined_r0x00defec8;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar23,0,8);
    plVar1 = DAT_043f1798;
    lVar21 = local_130;
  }
joined_r0x00defec8:
  DAT_043f1798 = plVar1;
  local_130 = lVar21;
  if ((((byte)local_140 & 1) != 0) && (lVar21 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar21,0,8);
        goto LAB_00deff78;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar21,0,8);
  }
LAB_00deff78:
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar11)(plVar11,uVar26);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  if ((local_158 & 1) != 0) {
    uVar18 = local_148;
  }
  FUN_001522a0(uVar26,uVar18);
  uVar18 = local_148;
  plVar1 = DAT_043f1798;
  if (((local_158 & 1) != 0) && (local_148 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,uVar18,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,uVar18,0,8);
  }
  return;
}


