/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020479e0; name: FUN_020479e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_020479e0(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  long lVar30;
  ulong unaff_x28;
  byte local_188;
  undefined7 uStack_187;
  char cStack_180;
  undefined4 local_17f;
  undefined1 local_17b;
  undefined2 uStack_17a;
  ulong local_178;
  string local_170;
  char local_16f [7];
  char cStack_168;
  char acStack_167 [7];
  long local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined4 local_13f;
  undefined2 local_13b;
  undefined1 local_139;
  undefined8 local_138;
  char *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
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
  uStack_17a = 0;
  local_188 = 0x18;
  local_17f = 0x706d754a;
  local_178 = 0;
  local_17b = 0;
  uStack_187 = s_EventMapJump_038c3704._0_7_;
  cStack_180 = s_EventMapJump_038c3704[7];
  lVar6 = tpidr_el0;
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
  plVar14[6] = (long)FUN_02048c20;
  plVar14[7] = (long)FUN_02048cd0;
  *plVar14 = (long)&PTR_FUN_0425b2e0;
  plVar14[0x10] = (long)&DAT_0392da3c;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = (long)FUN_02048ea4;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  plVar14[0x1a] = 0;
  plVar14[0x14] = (long)&LAB_02049184;
  plVar14[0x15] = (long)&LAB_02049460;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[0x18] = 0;
  *(undefined1 *)(plVar14 + 0x19) = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[0xc] = (long)"CallMapJumpFromDoorId";
  plVar14[0xd] = (long)"ChangeMapJumpFromDoorId";
  plVar14[0xe] = (long)"__haxe_export_ChangeMapJumpFromAreaPos";
  plVar14[0xf] = (long)"__haxe_export_CallMapJumpFromAreaPos";
  plVar14[0x16] = (long)&LAB_02049470;
  plVar14[0x17] = 0;
  plVar1 = DAT_043f1798;
  local_170 = (string)0x2a;
  local_16f[0] = s_CallMapJumpFromDoorId_039895e4[0];
  local_16f[1] = s_CallMapJumpFromDoorId_039895e4[1];
  local_16f[2] = s_CallMapJumpFromDoorId_039895e4[2];
  local_16f[3] = s_CallMapJumpFromDoorId_039895e4[3];
  local_16f[4] = s_CallMapJumpFromDoorId_039895e4[4];
  local_16f[5] = s_CallMapJumpFromDoorId_039895e4[5];
  local_16f[6] = s_CallMapJumpFromDoorId_039895e4[6];
  cStack_168 = s_CallMapJumpFromDoorId_039895e4[7];
  acStack_167[0] = s_CallMapJumpFromDoorId_039895e4[8];
  acStack_167[1] = s_CallMapJumpFromDoorId_039895e4[9];
  acStack_167[2] = s_CallMapJumpFromDoorId_039895e4[10];
  acStack_167[3] = s_CallMapJumpFromDoorId_039895e4[0xb];
  acStack_167[4] = s_CallMapJumpFromDoorId_039895e4[0xc];
  acStack_167[5] = s_CallMapJumpFromDoorId_039895e4[0xd];
  acStack_167[6] = s_CallMapJumpFromDoorId_039895e4[0xe];
  local_160 = 0x6449726f6f44;
  local_148 = 0xffffffff;
  local_158 = &LAB_02049474;
  puStack_150 = &LAB_020494bc;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  local_130 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x20,8);
  local_130[0x17] = '\0';
  uVar26 = CONCAT17(s_ChangeMapJumpFromDoorId_0399419e[0xf],s_ChangeMapJumpFromDoorId_0399419e._8_7_
                   );
  *(undefined8 *)local_130 = s_ChangeMapJumpFromDoorId_0399419e._0_8_;
  *(undefined8 *)(local_130 + 8) = uVar26;
  *(ulong *)(local_130 + 0xf) =
       CONCAT71(s_ChangeMapJumpFromDoorId_0399419e._16_7_,s_ChangeMapJumpFromDoorId_0399419e[0xf]);
  plVar1 = DAT_043f1798;
  local_140 = 0x21;
  local_138 = 0x17;
  local_139 = 0;
  local_13b = 0;
  local_13f = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_02049504;
  puStack_120 = &LAB_0204954c;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  local_100 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x30,8);
  uVar26 = s___haxe_export_ChangeMapJumpFromA_0389c3e4._8_8_;
  *(undefined8 *)local_100 = s___haxe_export_ChangeMapJumpFromA_0389c3e4._0_8_;
  *(undefined8 *)(local_100 + 8) = uVar26;
  uVar26 = CONCAT26(s___haxe_export_ChangeMapJumpFromA_0389c3e4._30_2_,
                    s___haxe_export_ChangeMapJumpFromA_0389c3e4._24_6_);
  *(undefined8 *)(local_100 + 0x10) = s___haxe_export_ChangeMapJumpFromA_0389c3e4._16_8_;
  *(undefined8 *)(local_100 + 0x18) = uVar26;
  *(ulong *)(local_100 + 0x1e) =
       CONCAT62(s___haxe_export_ChangeMapJumpFromA_0389c3e4._32_6_,
                s___haxe_export_ChangeMapJumpFromA_0389c3e4._30_2_);
  local_100[0x26] = '\0';
  plVar1 = DAT_043f1798;
  local_108 = 0x26;
  local_110 = 0x31;
  local_109 = 0;
  local_10b = 0;
  local_10f = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02049594;
  puStack_f0 = &LAB_020495dc;
  plVar20 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar20 = plVar1;
  }
  local_d0 = (char *)(**(code **)(*plVar20 + 0x10))(plVar20,0x30,8);
  local_d0[0x20] = 'a';
  uVar26 = s___haxe_export_CallMapJumpFromAre_038cda91._8_8_;
  local_d0[0x21] = 'P';
  local_d0[0x22] = 'o';
  local_d0[0x23] = 's';
  *(undefined8 *)local_d0 = s___haxe_export_CallMapJumpFromAre_038cda91._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar26;
  uVar8 = s___haxe_export_CallMapJumpFromAre_038cda91._24_8_;
  uVar26 = s___haxe_export_CallMapJumpFromAre_038cda91._16_8_;
  local_d0[0x24] = '\0';
  *(undefined8 *)(local_d0 + 0x10) = uVar26;
  *(undefined8 *)(local_d0 + 0x18) = uVar8;
  local_e0 = 0x31;
  local_db = 0;
  local_df = 0;
  local_d9 = 0;
  local_d8 = 0x24;
  local_c8 = &LAB_02049624;
  puStack_c0 = &LAB_0204966c;
  psVar29 = &local_170;
  plVar1 = plVar14 + 3;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_020496fc;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_020496b4;
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
      uVar18 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        unaff_x28 = uVar25 - 1 & uVar15;
      }
      else {
        unaff_x28 = uVar15;
        if (uVar25 <= uVar15) {
          uVar5 = 0;
          if (uVar25 != 0) {
            uVar5 = uVar15 / uVar25;
          }
          unaff_x28 = uVar15 - uVar5 * uVar25;
        }
      }
      plVar20 = *(long **)(*plVar27 + unaff_x28 * 8);
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
              if (plVar20[1] != uVar15 && (plVar20[1] & uVar25 - 1) != unaff_x28) break;
              uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
              if ((*(byte *)(plVar20 + 2) & 1) != 0) {
                uVar18 = plVar20[3];
              }
              if (uVar18 == 0) goto LAB_02048054;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              if (plVar20[1] != uVar15 && (plVar20[1] & uVar25 - 1) != unaff_x28) break;
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
                    if (uVar18 == 0) goto LAB_02048054;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar20[4],psVar3,sVar17);
                  if (iVar9 == 0) goto LAB_02048054;
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
              if (uVar18 != unaff_x28) break;
            }
            uVar18 = (ulong)(*(byte *)(plVar20 + 2) >> 1);
            if ((*(byte *)(plVar20 + 2) & 1) != 0) {
              uVar18 = plVar20[3];
            }
            if (uVar18 == 0) goto LAB_02048054;
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
              if (uVar18 != unaff_x28) break;
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
                  if (uVar18 == 0) goto LAB_02048054;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar20[4],psVar3,sVar17);
                if (iVar9 == 0) goto LAB_02048054;
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
      uVar25 = (ulong)(uVar25 < 3 || (uVar25 & uVar25 - 1) != 0) | uVar25 << 1;
      uVar18 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar18 <= uVar25) {
        uVar18 = uVar25;
      }
      FUN_008e9ae4(plVar27,uVar18);
      uVar25 = plVar14[2];
      if ((uVar25 & uVar25 - 1) == 0) {
        unaff_x28 = uVar25 - 1 & uVar15;
      }
      else if (uVar15 < uVar25) {
        unaff_x28 = uVar15;
      }
      else {
        uVar18 = 0;
        if (uVar25 != 0) {
          uVar18 = uVar15 / uVar25;
        }
        unaff_x28 = uVar15 - uVar18 * uVar25;
      }
    }
    lVar21 = *plVar27;
    plVar19 = *(long **)(lVar21 + unaff_x28 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar20 = *plVar1;
      *plVar1 = (long)plVar20;
      *(long **)(lVar21 + unaff_x28 * 8) = plVar1;
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
        goto LAB_02048044;
      }
    }
    else {
      *plVar20 = *plVar19;
LAB_02048044:
      *plVar19 = (long)plVar20;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_02048054:
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
           (lVar30 = *(long *)(lVar16 + 0x20), lVar30 != 0)) {
          plVar20 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar20 = plVar1;
          }
          uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar20,lVar30,0,8);
              goto LAB_0204822c;
            }
          }
          (**(code **)(*plVar20 + 0x18))(plVar20,lVar30,0,8);
        }
LAB_0204822c:
        plVar1 = DAT_043f1798;
        plVar20 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar20 = plVar1;
        }
        uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar20,lVar16,0,8);
            goto LAB_020481e4;
          }
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar16,0,8);
      }
    }
LAB_020481e4:
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x300);
  pcVar28 = (char *)plVar14[0xc];
  sVar17 = strlen(pcVar28);
  iVar9 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xd];
  sVar17 = strlen(pcVar28);
  iVar10 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xe];
  sVar17 = strlen(pcVar28);
  iVar11 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0xf];
  sVar17 = strlen(pcVar28);
  iVar12 = FUN_008f2c60(sVar17,pcVar28);
  pcVar28 = (char *)plVar14[0x10];
  sVar17 = strlen(pcVar28);
  iVar13 = FUN_008f2c60(sVar17,pcVar28);
  lVar21 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       (((iVar10 != 0 || iVar9 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0;
  plVar1 = DAT_043f1798;
  pcVar28 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar15 & 1) != 0) {
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
        goto joined_r0x020483ec;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar21,0,8);
    plVar1 = DAT_043f1798;
    pcVar28 = local_d0;
  }
joined_r0x020483ec:
  pcVar7 = local_100;
  local_d0 = pcVar28;
  if (((local_e0 & 1) != 0) && (pcVar28 != (char *)0x0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar20 = plVar1;
    }
    uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar15 & 1) != 0) {
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
        goto joined_r0x020488f8;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,pcVar28,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_100;
  }
joined_r0x020488f8:
  pcVar28 = local_130;
  local_100 = pcVar7;
  if (((local_110 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar20 = plVar1;
    }
    uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        pcVar28 = local_130;
        goto joined_r0x02048554;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    pcVar28 = local_130;
  }
joined_r0x02048554:
  lVar21 = local_160;
  local_130 = pcVar28;
  if (((local_140 & 1) != 0) && (pcVar28 != (char *)0x0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar20 = plVar1;
    }
    uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,pcVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar21 = local_160;
        goto joined_r0x02048938;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,pcVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar21 = local_160;
  }
joined_r0x02048938:
  DAT_043f1798 = plVar1;
  local_160 = lVar21;
  if ((((byte)local_170 & 1) != 0) && (lVar21 != 0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar20 = plVar1;
    }
    uVar15 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,lVar21,0,8);
        goto LAB_020486b8;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,lVar21,0,8);
  }
LAB_020486b8:
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar14)(plVar14,uVar26);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar15 = (ulong)&local_188 | 1;
  if ((local_188 & 1) != 0) {
    uVar15 = local_178;
  }
  FUN_001522a0(uVar26,uVar15);
  uVar15 = local_178;
  plVar1 = DAT_043f1798;
  if (((local_188 & 1) != 0) && (local_178 != 0)) {
    plVar20 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar20 = plVar1;
    }
    uVar25 = (**(code **)(*plVar20 + 0xc0))(plVar20);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar20,uVar15,0,8);
        return;
      }
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,uVar15,0,8);
  }
  return;
}


