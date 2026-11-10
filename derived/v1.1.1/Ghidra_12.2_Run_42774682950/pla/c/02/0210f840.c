/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0210f840; name: FUN_0210f840
 */


void FUN_0210f840(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  string *psVar22;
  long lVar23;
  string *psVar24;
  ulong uVar25;
  undefined8 uVar26;
  long *plVar27;
  char *pcVar28;
  string *psVar29;
  ulong uVar30;
  long lVar31;
  ulong local_128;
  undefined8 uStack_120;
  char *local_118;
  string local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  undefined8 local_108;
  char *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  char *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
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
  
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  local_118 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x30,8);
  uVar10 = s_CharacterHearingTargetController_038cdc44._24_8_;
  uVar9 = s_CharacterHearingTargetController_038cdc44._16_8_;
  uVar8 = s_CharacterHearingTargetController_038cdc44._8_8_;
  uVar26 = s_CharacterHearingTargetController_038cdc44._0_8_;
  local_128 = 0x31;
  uStack_120 = 0x20;
  local_118[0x20] = '\0';
  *(undefined8 *)(local_118 + 0x10) = uVar9;
  *(undefined8 *)(local_118 + 0x18) = uVar10;
  *(undefined8 *)local_118 = uVar26;
  *(undefined8 *)(local_118 + 8) = uVar8;
  plVar1 = DAT_043f1798;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  plVar14 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0xd8,8);
  plVar14[4] = 0;
  plVar27 = plVar14 + 1;
  *plVar27 = 0;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[10] = 0;
  plVar14[6] = (long)FUN_02110740;
  plVar14[7] = (long)FUN_021107f0;
  *plVar14 = (long)&PTR_FUN_0425b470;
  plVar14[0xc] = (long)"__haxe_export_IsHearingTargetEnable";
  plVar14[0xd] = (long)&LAB_01aad468;
  plVar14[0x10] = (long)&DAT_0392da3c;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = (long)FUN_02110980;
  plVar14[2] = 0;
  plVar14[3] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  plVar14[0x1a] = 0;
  plVar14[0x18] = 0;
  *(undefined1 *)(plVar14 + 0x19) = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[0xe] = 0;
  plVar14[0xf] = (long)"__haxe_export_GetHearingTargetComponent";
  plVar14[0x14] = (long)&LAB_02110c60;
  plVar14[0x15] = (long)&LAB_02110f40;
  plVar14[0x16] = (long)&LAB_02110f50;
  plVar14[0x17] = 0;
  plVar1 = DAT_043f1798;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  uVar30 = 8;
  local_100 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x30,8);
  local_100[0x1f] = 'a';
  uVar26 = s___haxe_export_IsHearingTargetEna_03893eba._8_8_;
  local_100[0x20] = 'b';
  local_100[0x21] = 'l';
  local_100[0x22] = 'e';
  *(undefined8 *)local_100 = s___haxe_export_IsHearingTargetEna_03893eba._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar26;
  uVar8 = s___haxe_export_IsHearingTargetEna_03893eba._24_8_;
  uVar26 = s___haxe_export_IsHearingTargetEna_03893eba._16_8_;
  local_100[0x23] = '\0';
  *(undefined8 *)(local_100 + 0x10) = uVar26;
  *(undefined8 *)(local_100 + 0x18) = uVar8;
  plVar1 = DAT_043f1798;
  local_108 = 0x23;
  local_110 = (string)0x31;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02110f54;
  puStack_f0 = &LAB_02110f9c;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  local_d0 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x30,8);
  uVar26 = s___haxe_export_GetHearingTargetCo_039a58d7._8_8_;
  *(undefined8 *)local_d0 = s___haxe_export_GetHearingTargetCo_039a58d7._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar26;
  uVar26 = CONCAT17(s___haxe_export_GetHearingTargetCo_039a58d7[0x1f],
                    s___haxe_export_GetHearingTargetCo_039a58d7._24_7_);
  plVar1 = plVar14 + 3;
  *(undefined8 *)(local_d0 + 0x10) = s___haxe_export_GetHearingTargetCo_039a58d7._16_8_;
  *(undefined8 *)(local_d0 + 0x18) = uVar26;
  *(ulong *)(local_d0 + 0x1f) =
       CONCAT71(s___haxe_export_GetHearingTargetCo_039a58d7._32_7_,
                s___haxe_export_GetHearingTargetCo_039a58d7[0x1f]);
  local_d0[0x27] = '\0';
  local_e0 = 0x31;
  local_d9 = 0;
  local_c8 = &LAB_02110fe4;
  puStack_c0 = &LAB_0211102c;
  psVar29 = &local_110;
  local_d8 = 0x27;
  local_af = 0x63675f5f;
  local_a0 = 0;
  puStack_98 = &LAB_02111074;
  local_db = 0;
  local_df = 0;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_021110bc;
  local_88 = 0xffffffff;
  do {
    uVar15 = *(ulong *)(psVar29 + 8);
    psVar3 = *(string **)(psVar29 + 0x10);
    if (((byte)*psVar29 & 1) == 0) {
      psVar3 = psVar29 + 1;
      uVar15 = (ulong)((byte)*psVar29 >> 1);
    }
    uVar15 = FUN_008e8ed4(local_80,psVar3,uVar15);
    uVar25 = plVar14[2];
    if (uVar25 != 0) {
      uVar30 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
      uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
      uVar18 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar30 = uVar25 - 1 & uVar15;
      }
      else {
        uVar30 = uVar15;
        if (uVar25 <= uVar15) {
          uVar30 = 0;
          if (uVar25 != 0) {
            uVar30 = uVar15 / uVar25;
          }
          uVar30 = uVar15 - uVar30 * uVar25;
        }
      }
      plVar20 = *(long **)(*plVar27 + uVar30 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        psVar3 = psVar29 + 1;
        sVar17 = (ulong)((byte)*psVar29 >> 1);
        if (((byte)*psVar29 & 1) != 0) {
          psVar3 = *(string **)(psVar29 + 0x10);
          sVar17 = *(size_t *)(psVar29 + 8);
        }
        if (uVar18 < 2) {
          if (sVar17 == 0) {
            do {
              if (plVar20[1] != uVar15 && (plVar20[1] & uVar25 - 1) != uVar30) break;
              uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
              if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                uVar18 = plVar20[3];
              }
              if (uVar18 == 0) goto LAB_0210fd70;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              if (plVar20[1] != uVar15 && (plVar20[1] & uVar25 - 1) != uVar30) break;
              bVar4 = *(byte *)(plVar20 + 2);
              uVar18 = (ulong)(bVar4 >> 1);
              sVar2 = uVar18;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar20[3];
              }
              if (sVar2 == sVar17) {
                if ((bVar4 & 1) == 0) {
                  psVar22 = (string *)((long)plVar20 + 0x11);
                  psVar24 = psVar3;
                  while (*psVar22 == *psVar24) {
                    uVar18 = uVar18 - 1;
                    psVar22 = psVar22 + 1;
                    psVar24 = psVar24 + 1;
                    if (uVar18 == 0) goto LAB_0210fd70;
                  }
                }
                else {
                  iVar11 = memcmp((void *)plVar20[4],psVar3,sVar17);
                  if (iVar11 == 0) goto LAB_0210fd70;
                }
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
        else if (sVar17 == 0) {
          do {
            uVar18 = plVar20[1];
            if (uVar18 != uVar15) {
              if (uVar25 <= uVar18) {
                uVar5 = 0;
                if (uVar25 != 0) {
                  uVar5 = uVar18 / uVar25;
                }
                uVar18 = uVar18 - uVar5 * uVar25;
              }
              if (uVar18 != uVar30) break;
            }
            uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
            if ((*(byte *)(plVar20 + 2) & 1) != 0) {
              uVar18 = plVar20[3];
            }
            if (uVar18 == 0) goto LAB_0210fd70;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar20[1];
            if (uVar18 != uVar15) {
              if (uVar25 <= uVar18) {
                uVar5 = 0;
                if (uVar25 != 0) {
                  uVar5 = uVar18 / uVar25;
                }
                uVar18 = uVar18 - uVar5 * uVar25;
              }
              if (uVar18 != uVar30) break;
            }
            bVar4 = *(byte *)(plVar20 + 2);
            uVar18 = (ulong)(bVar4 >> 1);
            sVar2 = uVar18;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar20[3];
            }
            if (sVar2 == sVar17) {
              if ((bVar4 & 1) == 0) {
                psVar22 = (string *)((long)plVar20 + 0x11);
                psVar24 = psVar3;
                while (*psVar22 == *psVar24) {
                  uVar18 = uVar18 - 1;
                  psVar22 = psVar22 + 1;
                  psVar24 = psVar24 + 1;
                  if (uVar18 == 0) goto LAB_0210fd70;
                }
              }
              else {
                iVar11 = memcmp((void *)plVar20[4],psVar3,sVar17);
                if (iVar11 == 0) goto LAB_0210fd70;
              }
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    plVar20 = DAT_043f1798;
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar20;
    }
    plVar20 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x40,8);
    std::string::string((string *)(plVar20 + 2),psVar29);
    lVar21 = *(long *)(psVar29 + 0x18);
    lVar23 = *(long *)(psVar29 + 0x28);
    plVar20[6] = *(long *)(psVar29 + 0x20);
    plVar20[7] = lVar23;
    plVar20[5] = lVar21;
    *plVar20 = 0;
    plVar20[1] = uVar15;
    if ((uVar25 == 0) || (*(float *)(plVar14 + 5) * (float)uVar25 < (float)(plVar14[4] + 1))) {
      uVar30 = (ulong)(uVar25 < 3 || (uVar25 & uVar25 - 1) != 0) | uVar25 << 1;
      uVar25 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar25 <= uVar30) {
        uVar25 = uVar30;
      }
      FUN_008e9ae4(plVar27,uVar25);
      uVar25 = plVar14[2];
      if ((uVar25 & uVar25 - 1) == 0) {
        uVar30 = uVar25 - 1 & uVar15;
      }
      else if (uVar15 < uVar25) {
        uVar30 = uVar15;
      }
      else {
        uVar30 = 0;
        if (uVar25 != 0) {
          uVar30 = uVar15 / uVar25;
        }
        uVar30 = uVar15 - uVar30 * uVar25;
      }
    }
    lVar21 = *plVar27;
    plVar19 = *(long **)(lVar21 + uVar30 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar20 = *plVar1;
      *plVar1 = (long)plVar20;
      *(long **)(lVar21 + uVar30 * 8) = plVar1;
      if (*plVar20 != 0) {
        uVar15 = *(ulong *)(*plVar20 + 8);
        if ((uVar25 & uVar25 - 1) == 0) {
          uVar15 = uVar15 & uVar25 - 1;
        }
        else if (uVar25 <= uVar15) {
          uVar18 = 0;
          if (uVar25 != 0) {
            uVar18 = uVar15 / uVar25;
          }
          uVar15 = uVar15 - uVar18 * uVar25;
        }
        plVar19 = (long *)(*plVar27 + uVar15 * 8);
        goto LAB_0210fd60;
      }
    }
    else {
      *plVar20 = *plVar19;
LAB_0210fd60:
      *plVar19 = (long)plVar20;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_0210fd70:
    psVar29 = psVar29 + 0x30;
  } while (psVar29 != (string *)local_80);
  lVar23 = FUN_008cca50();
  lVar21 = 0;
  do {
    lVar16 = FUN_008e8c90(plVar27,lVar23 + lVar21);
    if (lVar16 != 0) {
      FUN_008f2aec(local_80,plVar27,lVar16);
      lVar16 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar16 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar16 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar16 + 0x20), lVar31 != 0)) {
          plVar20 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar20 = plVar1;
          }
          uVar30 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar30 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar31,0,8);
              goto LAB_0210ffd8;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar31,0,8);
        }
LAB_0210ffd8:
        plVar1 = DAT_043f1798;
        plVar20 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar20 = plVar1;
        }
        uVar30 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar30 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar16,0,8);
            goto LAB_0210ff90;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar16,0,8);
      }
    }
LAB_0210ff90:
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x300);
  pcVar28 = (char *)plVar14[0xc];
  sVar17 = strlen(pcVar28);
  iVar11 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xf];
  sVar17 = strlen(pcVar28);
  iVar12 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x10];
  sVar17 = strlen(pcVar28);
  iVar13 = FUN_008f2c60(sVar17,pcVar28);
  lVar21 = local_a0;
  *(bool *)(plVar14 + 0xb) = (iVar12 != 0 || iVar11 != 0) || iVar13 != 0;
  plVar1 = DAT_043f1798;
  pcVar28 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    uVar30 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,lVar21,0,8);
        plVar1 = DAT_043f1798;
        pcVar28 = local_d0;
        goto joined_r0x02110168;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar21,0,8);
    plVar1 = DAT_043f1798;
    pcVar28 = local_d0;
  }
joined_r0x02110168:
  pcVar7 = local_100;
  local_d0 = pcVar28;
  if (((local_e0 & 1) != 0) && (pcVar28 != (char *)0x0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar20 = plVar1;
    }
    uVar30 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,pcVar28,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_100;
        goto joined_r0x02110500;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,pcVar28,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_100;
  }
joined_r0x02110500:
  DAT_043f1798 = plVar1;
  local_100 = pcVar7;
  if ((((byte)local_110 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar20 = plVar1;
    }
    uVar30 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,pcVar7,0,8);
        goto LAB_021102cc;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,pcVar7,0,8);
  }
LAB_021102cc:
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar14)(plVar14,uVar26);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  pcVar28 = (char *)((ulong)&local_128 | 1);
  if ((local_128 & 1) != 0) {
    pcVar28 = local_118;
  }
  FUN_001522a0(uVar26,pcVar28);
  pcVar28 = local_118;
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (char *)0x0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    uVar30 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar30 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,pcVar28,0,8);
        return;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,pcVar28,0,8);
  }
  return;
}


