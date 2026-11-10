/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017b1500; name: FUN_017b1500
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017b1500(long param_1)

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
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  ulong uVar23;
  undefined8 uVar24;
  long *plVar25;
  char *pcVar26;
  string *psVar27;
  ulong uVar28;
  long lVar29;
  byte local_158;
  undefined7 uStack_157;
  char cStack_150;
  undefined4 local_14f;
  undefined1 local_14b;
  undefined2 uStack_14a;
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
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
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
  uStack_14a = 0;
  local_158 = 0x18;
  local_14f = 0x72656761;
  local_148 = 0;
  local_14b = 0;
  uStack_157 = s_BuddyManager_038eb0a6._0_7_;
  cStack_150 = s_BuddyManager_038eb0a6[7];
  lVar6 = tpidr_el0;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  uVar28 = 8;
  plVar12 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0xe8,8);
  plVar12[4] = 0;
  plVar25 = plVar12 + 1;
  *plVar25 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  plVar12[6] = (long)FUN_017b24f0;
  plVar12[7] = (long)FUN_017b25a0;
  *plVar12 = (long)&PTR_FUN_04225428;
  plVar12[0xc] = (long)&DAT_03a735a0;
  plVar12[0xd] = (long)&DAT_0392da3c;
  plVar12[0xf] = (long)"AddExp";
  plVar12[0x10] = (long)&LAB_017e5ac0;
  plVar12[0x15] = (long)FUN_017b2730;
  plVar12[0x16] = (long)&LAB_017b2a10;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  plVar12[0x17] = (long)&LAB_017b2cf0;
  plVar12[0x18] = (long)&LAB_017b2d00;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *(undefined1 *)(plVar12 + 0xe) = 0;
  plVar12[0x1c] = 0;
  *(undefined1 *)(plVar12 + 0x1b) = 0;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[0x11] = 0;
  plVar12[0x12] = (long)"GetBuddyGroupTalkManager";
  plVar12[0x13] = 0;
  plVar12[0x14] = 0;
  plVar12[0x19] = 0;
  plVar12[0x1a] = 0;
  plVar1 = DAT_043f1798;
  local_140 = (string)0x6;
  local_13f = 0x656e;
  local_13d = 0x77;
  local_120 = &LAB_017b2d4c;
  local_f0 = &LAB_017b2ddc;
  local_13c = 0;
  local_134 = 0;
  local_118 = 0xffffffff;
  local_110 = 8;
  local_10b = 0;
  uStack_104 = 0;
  local_e8 = 0xffffffff;
  local_d9 = 0;
  local_b8 = 0xffffffff;
  local_130 = 0;
  local_128 = &LAB_017b2d04;
  local_10f = 0x63675f5f;
  local_100 = 0;
  puStack_f8 = &LAB_017b2d94;
  local_e0 = 0xc;
  local_db = 0x7078;
  local_df = 0x45646441;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = &LAB_017b2e24;
  puStack_c0 = &LAB_017b2e6c;
  plVar18 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar18 = plVar1;
  }
  local_a0 = (char *)(**(code **)(*plVar18 + 0x10))(plVar18,0x20,8);
  local_a0[0x18] = '\0';
  uVar24 = s_GetBuddyGroupTalkManager_03993133._8_8_;
  *(undefined8 *)local_a0 = s_GetBuddyGroupTalkManager_03993133._0_8_;
  uVar7 = s_GetBuddyGroupTalkManager_03993133._16_8_;
  *(undefined8 *)(local_a0 + 8) = uVar24;
  *(undefined8 *)(local_a0 + 0x10) = uVar7;
  local_b0 = 0x21;
  local_ab = 0;
  local_af = 0;
  local_a8 = 0x18;
  psVar27 = &local_140;
  local_a9 = 0;
  plVar1 = plVar12 + 3;
  local_98 = &LAB_017b2eb4;
  puStack_90 = &LAB_017b2efc;
  local_88 = 0xffffffff;
  do {
    uVar13 = *(ulong *)(psVar27 + 8);
    psVar3 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar3 = psVar27 + 1;
      uVar13 = (ulong)((byte)*psVar27 >> 1);
    }
    uVar13 = FUN_008e8ed4(local_80,psVar3,uVar13);
    uVar23 = plVar12[2];
    if (uVar23 != 0) {
      uVar28 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
      uVar16 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar28 = uVar23 - 1 & uVar13;
      }
      else {
        uVar28 = uVar13;
        if (uVar23 <= uVar13) {
          uVar28 = 0;
          if (uVar23 != 0) {
            uVar28 = uVar13 / uVar23;
          }
          uVar28 = uVar13 - uVar28 * uVar23;
        }
      }
      plVar18 = *(long **)(*plVar25 + uVar28 * 8);
      if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
        psVar3 = psVar27 + 1;
        sVar15 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar3 = *(string **)(psVar27 + 0x10);
          sVar15 = *(size_t *)(psVar27 + 8);
        }
        if (uVar16 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar18[1] != uVar13 && (plVar18[1] & uVar23 - 1) != uVar28) break;
              uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
              if ((*(byte *)(plVar18 + 2) & 1) != 0) {
                uVar16 = plVar18[3];
              }
              if (uVar16 == 0) goto LAB_017b1928;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              if (plVar18[1] != uVar13 && (plVar18[1] & uVar23 - 1) != uVar28) break;
              bVar4 = *(byte *)(plVar18 + 2);
              uVar16 = (ulong)(bVar4 >> 1);
              sVar2 = uVar16;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar18[3];
              }
              if (sVar2 == sVar15) {
                if ((bVar4 & 1) == 0) {
                  psVar20 = (string *)((long)plVar18 + 0x11);
                  psVar22 = psVar3;
                  while (*psVar20 == *psVar22) {
                    uVar16 = uVar16 - 1;
                    psVar20 = psVar20 + 1;
                    psVar22 = psVar22 + 1;
                    if (uVar16 == 0) goto LAB_017b1928;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar18[4],psVar3,sVar15);
                  if (iVar8 == 0) goto LAB_017b1928;
                }
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
        else if (sVar15 == 0) {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar13) {
              if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar28) break;
            }
            uVar16 = (ulong)(*(byte *)(plVar18 + 2) >> 1);
            if ((*(byte *)(plVar18 + 2) & 1) != 0) {
              uVar16 = plVar18[3];
            }
            if (uVar16 == 0) goto LAB_017b1928;
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 != uVar13) {
              if (uVar23 <= uVar16) {
                uVar5 = 0;
                if (uVar23 != 0) {
                  uVar5 = uVar16 / uVar23;
                }
                uVar16 = uVar16 - uVar5 * uVar23;
              }
              if (uVar16 != uVar28) break;
            }
            bVar4 = *(byte *)(plVar18 + 2);
            uVar16 = (ulong)(bVar4 >> 1);
            sVar2 = uVar16;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar18[3];
            }
            if (sVar2 == sVar15) {
              if ((bVar4 & 1) == 0) {
                psVar20 = (string *)((long)plVar18 + 0x11);
                psVar22 = psVar3;
                while (*psVar20 == *psVar22) {
                  uVar16 = uVar16 - 1;
                  psVar20 = psVar20 + 1;
                  psVar22 = psVar22 + 1;
                  if (uVar16 == 0) goto LAB_017b1928;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar18[4],psVar3,sVar15);
                if (iVar8 == 0) goto LAB_017b1928;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = DAT_043f1798;
    plVar17 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar17 = plVar18;
    }
    plVar18 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
    std::string::string((string *)(plVar18 + 2),psVar27);
    lVar19 = *(long *)(psVar27 + 0x18);
    lVar21 = *(long *)(psVar27 + 0x28);
    plVar18[6] = *(long *)(psVar27 + 0x20);
    plVar18[7] = lVar21;
    plVar18[5] = lVar19;
    *plVar18 = 0;
    plVar18[1] = uVar13;
    if ((uVar23 == 0) || (*(float *)(plVar12 + 5) * (float)uVar23 < (float)(plVar12[4] + 1))) {
      uVar28 = (ulong)(uVar23 < 3 || (uVar23 & uVar23 - 1) != 0) | uVar23 << 1;
      uVar23 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar23 <= uVar28) {
        uVar23 = uVar28;
      }
      FUN_008e9ae4(plVar25,uVar23);
      uVar23 = plVar12[2];
      if ((uVar23 & uVar23 - 1) == 0) {
        uVar28 = uVar23 - 1 & uVar13;
      }
      else if (uVar13 < uVar23) {
        uVar28 = uVar13;
      }
      else {
        uVar28 = 0;
        if (uVar23 != 0) {
          uVar28 = uVar13 / uVar23;
        }
        uVar28 = uVar13 - uVar28 * uVar23;
      }
    }
    lVar19 = *plVar25;
    plVar17 = *(long **)(lVar19 + uVar28 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar18 = *plVar1;
      *plVar1 = (long)plVar18;
      *(long **)(lVar19 + uVar28 * 8) = plVar1;
      if (*plVar18 != 0) {
        uVar13 = *(ulong *)(*plVar18 + 8);
        if ((uVar23 & uVar23 - 1) == 0) {
          uVar13 = uVar13 & uVar23 - 1;
        }
        else if (uVar23 <= uVar13) {
          uVar16 = 0;
          if (uVar23 != 0) {
            uVar16 = uVar13 / uVar23;
          }
          uVar13 = uVar13 - uVar16 * uVar23;
        }
        plVar17 = (long *)(*plVar25 + uVar13 * 8);
        goto LAB_017b1918;
      }
    }
    else {
      *plVar18 = *plVar17;
LAB_017b1918:
      *plVar17 = (long)plVar18;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_017b1928:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != (string *)local_80);
  lVar21 = FUN_008cca50();
  lVar19 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar25,lVar21 + lVar19);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar25,lVar14);
      lVar14 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar18 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar18 = plVar1;
          }
          uVar28 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar28 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar18,lVar29,0,8);
              goto LAB_017b1ca0;
            }
          }
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar29,0,8);
        }
LAB_017b1ca0:
        plVar1 = DAT_043f1798;
        plVar18 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar18 = plVar1;
        }
        uVar28 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar28 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar14,0,8);
            goto LAB_017b1c04;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar14,0,8);
      }
    }
LAB_017b1c04:
    lVar19 = lVar19 + 0x18;
  } while (lVar19 != 0x300);
  pcVar26 = (char *)plVar12[0xc];
  sVar15 = strlen(pcVar26);
  iVar8 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xd];
  sVar15 = strlen(pcVar26);
  iVar9 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0xf];
  sVar15 = strlen(pcVar26);
  iVar10 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = (char *)plVar12[0x12];
  sVar15 = strlen(pcVar26);
  iVar11 = FUN_008f2c60(sVar15,pcVar26);
  pcVar26 = local_a0;
  *(bool *)(plVar12 + 0xb) = ((iVar9 != 0 || iVar8 != 0) || iVar10 != 0) || iVar11 != 0;
  plVar1 = DAT_043f1798;
  lVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    uVar28 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar28 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar18,pcVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_d0;
        goto joined_r0x017b1e5c;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pcVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_d0;
  }
joined_r0x017b1e5c:
  lVar21 = local_100;
  local_d0 = lVar19;
  if (((local_e0 & 1) != 0) && (lVar19 != 0)) {
    plVar18 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar18 = plVar1;
    }
    uVar28 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar28 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar19,0,8);
        plVar1 = DAT_043f1798;
        lVar21 = local_100;
        goto joined_r0x017b2240;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
    plVar1 = DAT_043f1798;
    lVar21 = local_100;
  }
joined_r0x017b2240:
  lVar19 = local_130;
  local_100 = lVar21;
  if (((local_110 & 1) != 0) && (lVar21 != 0)) {
    plVar18 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar18 = plVar1;
    }
    uVar28 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar28 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar21,0,8);
        plVar1 = DAT_043f1798;
        lVar19 = local_130;
        goto joined_r0x017b1fc4;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar21,0,8);
    plVar1 = DAT_043f1798;
    lVar19 = local_130;
  }
joined_r0x017b1fc4:
  DAT_043f1798 = plVar1;
  local_130 = lVar19;
  if ((((byte)local_140 & 1) != 0) && (lVar19 != 0)) {
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar18 = plVar1;
    }
    uVar28 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar28 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar19,0,8);
        goto LAB_017b2074;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar19,0,8);
  }
LAB_017b2074:
  uVar24 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar24);
  (**(code **)*plVar12)(plVar12,uVar24);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  uVar28 = (ulong)&local_158 | 1;
  if ((local_158 & 1) != 0) {
    uVar28 = local_148;
  }
  FUN_001522a0(uVar24,uVar28);
  uVar28 = local_148;
  plVar1 = DAT_043f1798;
  if (((local_158 & 1) != 0) && (local_148 != 0)) {
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar1;
    }
    uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar18,uVar28,0,8);
        return;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,uVar28,0,8);
  }
  return;
}


