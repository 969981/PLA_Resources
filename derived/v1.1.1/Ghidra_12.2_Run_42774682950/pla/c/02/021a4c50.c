/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021a4c50; name: FUN_021a4c50
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_021a4c50(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  char *pcVar27;
  string *psVar28;
  long lVar29;
  ulong local_158;
  undefined8 uStack_150;
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
  uVar6 = tpidr_el0;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_148 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  uVar7 = s_FieldNpcPokemonComponent_0396d870._8_8_;
  uVar25 = s_FieldNpcPokemonComponent_0396d870._0_8_;
  local_158 = 0x21;
  uStack_150 = 0x18;
  *(undefined8 *)(local_148 + 0x10) = s_FieldNpcPokemonComponent_0396d870._16_8_;
  *(undefined8 *)local_148 = uVar25;
  *(undefined8 *)(local_148 + 8) = uVar7;
  local_148[0x18] = '\0';
  plVar1 = DAT_043f1798;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  plVar12 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xf0,8);
  plVar12[4] = 0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar26 = plVar12 + 1;
  *plVar26 = 0;
  plVar12[6] = (long)FUN_021a5cf0;
  plVar12[7] = (long)FUN_021a5da0;
  *plVar12 = (long)&PTR_FUN_0425b6c8;
  plVar12[0xc] = (long)&DAT_0392da3c;
  plVar12[0xe] = (long)"__haxe_export_GetNpcPokemonAnimationController";
  plVar12[0xf] = (long)&LAB_01adc49c;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[0x12] = (long)&LAB_01adc6f4;
  plVar12[0x13] = 0;
  plVar12[10] = 0;
  plVar12[0x18] = (long)&LAB_021a64f0;
  plVar12[0x19] = (long)&LAB_021a6500;
  plVar12[8] = 0;
  plVar12[9] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  *(undefined1 *)(plVar12 + 0xd) = 0;
  plVar12[0x1d] = 0;
  *(undefined1 *)(plVar12 + 0x1c) = 0;
  plVar12[0x10] = 0;
  plVar12[0x11] = (long)"__haxe_export_GetSimpleParam";
  plVar12[0x14] = 0;
  plVar12[0x15] = 0;
  plVar12[0x16] = (long)FUN_021a5f30;
  plVar12[0x17] = (long)&LAB_021a6210;
  plVar12[0x1a] = 0;
  plVar12[0x1b] = 0;
  plVar1 = DAT_043f1798;
  local_13f = 0x63675f5f;
  local_140 = (string)0x8;
  local_120 = &LAB_021a654c;
  local_13b = 0;
  uStack_134 = 0;
  local_118 = 0xffffffff;
  local_105 = 0;
  local_104 = 0;
  local_f0 = &LAB_021a65dc;
  local_e8 = 0xffffffff;
  local_130 = 0;
  local_128 = &LAB_021a6504;
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
  local_100 = 0;
  puStack_f8 = &LAB_021a6594;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_d0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x30,8);
  uVar25 = s___haxe_export_GetNpcPokemonAnima_03946457._8_8_;
  *(undefined8 *)local_d0 = s___haxe_export_GetNpcPokemonAnima_03946457._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar25;
  uVar7 = s___haxe_export_GetNpcPokemonAnima_03946457._24_8_;
  *(undefined8 *)(local_d0 + 0x10) = s___haxe_export_GetNpcPokemonAnima_03946457._16_8_;
  uVar25 = CONCAT26(s___haxe_export_GetNpcPokemonAnima_03946457._38_2_,
                    s___haxe_export_GetNpcPokemonAnima_03946457._32_6_);
  *(undefined8 *)(local_d0 + 0x18) = uVar7;
  *(undefined8 *)(local_d0 + 0x20) = uVar25;
  *(ulong *)(local_d0 + 0x26) =
       CONCAT62(s___haxe_export_GetNpcPokemonAnima_03946457._40_6_,
                s___haxe_export_GetNpcPokemonAnima_03946457._38_2_);
  local_d0[0x2e] = '\0';
  plVar1 = DAT_043f1798;
  local_e0 = 0x31;
  local_d9 = 0;
  local_d8 = 0x2e;
  local_db = 0;
  local_df = 0;
  local_c8 = &LAB_021a6624;
  puStack_c0 = &LAB_021a666c;
  local_b8 = 0xffffffff;
  plVar19 = *(long **)(uVar6 + 0x20);
  if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
    *(long **)(uVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_a0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  local_a0[0x18] = 'a';
  local_a0[0x19] = 'r';
  local_a0[0x1a] = 'a';
  local_a0[0x1b] = 'm';
  local_a0[0x1c] = '\0';
  uVar25 = s___haxe_export_GetSimpleParam_03958b30._8_8_;
  *(undefined8 *)local_a0 = s___haxe_export_GetSimpleParam_03958b30._0_8_;
  uVar7 = s___haxe_export_GetSimpleParam_03958b30._16_8_;
  psVar28 = &local_140;
  *(undefined8 *)(local_a0 + 8) = uVar25;
  *(undefined8 *)(local_a0 + 0x10) = uVar7;
  local_b0 = 0x21;
  local_ab = 0;
  local_af = 0;
  local_a8 = 0x1c;
  local_98 = &LAB_021a66b4;
  puStack_90 = &LAB_021a66fc;
  plVar1 = plVar12 + 3;
  local_a9 = 0;
  local_88 = 0xffffffff;
  uVar16 = uVar6;
  do {
    uVar13 = *(ulong *)(psVar28 + 8);
    psVar3 = *(string **)(psVar28 + 0x10);
    if (((byte)*psVar28 & 1) == 0) {
      psVar3 = psVar28 + 1;
      uVar13 = (ulong)((byte)*psVar28 >> 1);
    }
    uVar13 = FUN_008e8ed4(local_80,psVar3,uVar13);
    uVar24 = plVar12[2];
    if (uVar24 != 0) {
      uVar16 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar17 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar16 = uVar24 - 1 & uVar13;
      }
      else {
        uVar16 = uVar13;
        if (uVar24 <= uVar13) {
          uVar16 = 0;
          if (uVar24 != 0) {
            uVar16 = uVar13 / uVar24;
          }
          uVar16 = uVar13 - uVar16 * uVar24;
        }
      }
      plVar19 = *(long **)(*plVar26 + uVar16 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar3 = psVar28 + 1;
        sVar15 = (ulong)((byte)*psVar28 >> 1);
        if (((byte)*psVar28 & 1) != 0) {
          psVar3 = *(string **)(psVar28 + 0x10);
          sVar15 = *(size_t *)(psVar28 + 8);
        }
        if (uVar17 < 2) {
          if (sVar15 == 0) {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != uVar16) break;
              uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar17 = plVar19[3];
              }
              if (uVar17 == 0) goto LAB_021a5268;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar13 && (plVar19[1] & uVar24 - 1) != uVar16) break;
              bVar4 = *(byte *)(plVar19 + 2);
              uVar17 = (ulong)(bVar4 >> 1);
              sVar2 = uVar17;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar19[3];
              }
              if (sVar2 == sVar15) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar21 == *psVar23) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar17 == 0) goto LAB_021a5268;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar19[4],psVar3,sVar15);
                  if (iVar9 == 0) goto LAB_021a5268;
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
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar5 * uVar24;
              }
              if (uVar17 != uVar16) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar17 = plVar19[3];
            }
            if (uVar17 == 0) goto LAB_021a5268;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar13) {
              if (uVar24 <= uVar17) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar5 * uVar24;
              }
              if (uVar17 != uVar16) break;
            }
            bVar4 = *(byte *)(plVar19 + 2);
            uVar17 = (ulong)(bVar4 >> 1);
            sVar2 = uVar17;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar19[3];
            }
            if (sVar2 == sVar15) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar3;
                while (*psVar21 == *psVar23) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar17 == 0) goto LAB_021a5268;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar19[4],psVar3,sVar15);
                if (iVar9 == 0) goto LAB_021a5268;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar18 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar28);
    lVar20 = *(long *)(psVar28 + 0x18);
    lVar22 = *(long *)(psVar28 + 0x28);
    plVar19[6] = *(long *)(psVar28 + 0x20);
    plVar19[7] = lVar22;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = uVar13;
    if ((uVar24 == 0) || (*(float *)(plVar12 + 5) * (float)uVar24 < (float)(plVar12[4] + 1))) {
      uVar16 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar24 = (ulong)((float)(plVar12[4] + 1) / *(float *)(plVar12 + 5));
      if (uVar24 <= uVar16) {
        uVar24 = uVar16;
      }
      FUN_008e9ae4(plVar26,uVar24);
      uVar24 = plVar12[2];
      if ((uVar24 & uVar24 - 1) == 0) {
        uVar16 = uVar24 - 1 & uVar13;
      }
      else if (uVar13 < uVar24) {
        uVar16 = uVar13;
      }
      else {
        uVar16 = 0;
        if (uVar24 != 0) {
          uVar16 = uVar13 / uVar24;
        }
        uVar16 = uVar13 - uVar16 * uVar24;
      }
    }
    lVar20 = *plVar26;
    plVar18 = *(long **)(lVar20 + uVar16 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + uVar16 * 8) = plVar1;
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
        plVar18 = (long *)(*plVar26 + uVar13 * 8);
        goto LAB_021a5258;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_021a5258:
      *plVar18 = (long)plVar19;
    }
    plVar12[4] = plVar12[4] + 1;
LAB_021a5268:
    psVar28 = psVar28 + 0x30;
  } while (psVar28 != (string *)local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar26,lVar22 + lVar20);
    if (lVar14 != 0) {
      FUN_008f2aec(local_80,plVar26,lVar14);
      lVar14 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar14 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar14 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(uVar6 + 0x20);
          if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
            *(long **)(uVar6 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(uVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(uVar6 + 0x38d488) = 1;
              *(undefined8 *)(uVar6 + 0x38d478) = 0;
              *(undefined8 *)(uVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(uVar6 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar29,0,8);
              goto LAB_021a5458;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_021a5458:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(uVar6 + 0x20);
        if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
          *(long **)(uVar6 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(uVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(uVar6 + 0x38d488) = 1;
            *(undefined8 *)(uVar6 + 0x38d478) = 0;
            *(undefined8 *)(uVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(uVar6 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar14,0,8);
            goto LAB_021a5410;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
      }
    }
LAB_021a5410:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar27 = (char *)plVar12[0xc];
  sVar15 = strlen(pcVar27);
  iVar9 = FUN_008f2c60(sVar15,pcVar27);
  pcVar27 = (char *)plVar12[0xe];
  sVar15 = strlen(pcVar27);
  iVar10 = FUN_008f2c60(sVar15,pcVar27);
  pcVar27 = (char *)plVar12[0x11];
  sVar15 = strlen(pcVar27);
  iVar11 = FUN_008f2c60(sVar15,pcVar27);
  pcVar8 = local_a0;
  *(bool *)(plVar12 + 0xb) = (iVar10 != 0 || iVar9 != 0) || iVar11 != 0;
  plVar1 = DAT_043f1798;
  pcVar27 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar8,0,8);
        plVar1 = DAT_043f1798;
        pcVar27 = local_d0;
        goto joined_r0x021a55e8;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar8,0,8);
    plVar1 = DAT_043f1798;
    pcVar27 = local_d0;
  }
joined_r0x021a55e8:
  lVar20 = local_100;
  local_d0 = pcVar27;
  if (((local_e0 & 1) != 0) && (pcVar27 != (char *)0x0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x021a5a44;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x021a5a44:
  lVar22 = local_130;
  local_100 = lVar20;
  if (((local_110 & 1) != 0) && (lVar20 != 0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar20,0,8);
        plVar1 = DAT_043f1798;
        lVar22 = local_130;
        goto joined_r0x021a5750;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
    plVar1 = DAT_043f1798;
    lVar22 = local_130;
  }
joined_r0x021a5750:
  DAT_043f1798 = plVar1;
  local_130 = lVar22;
  if ((((byte)local_140 & 1) != 0) && (lVar22 != 0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar22,0,8);
        goto LAB_021a5800;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,0,8);
  }
LAB_021a5800:
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar12)(plVar12,uVar25);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pcVar27 = (char *)((ulong)&local_158 | 1);
  if ((local_158 & 1) != 0) {
    pcVar27 = local_148;
  }
  FUN_001522a0(uVar25,pcVar27);
  pcVar27 = local_148;
  plVar1 = DAT_043f1798;
  if (((local_158 & 1) != 0) && (local_148 != (char *)0x0)) {
    plVar19 = *(long **)(uVar6 + 0x20);
    if (*(long **)(uVar6 + 0x20) == (long *)0x0) {
      *(long **)(uVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(uVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(uVar6 + 0x38d488) = 1;
        *(undefined8 *)(uVar6 + 0x38d478) = 0;
        *(undefined8 *)(uVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,uVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(uVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar27,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar27,0,8);
  }
  return;
}


