/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02254670; name: FUN_02254670
 */


void FUN_02254670(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  size_t sVar16;
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
  ulong unaff_x25;
  long lVar29;
  ulong local_128;
  undefined8 uStack_120;
  char *local_118;
  string local_110;
  undefined4 local_10f;
  undefined7 local_10b;
  undefined4 uStack_104;
  long local_100;
  undefined1 *local_f8;
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
  lVar6 = tpidr_el0;
  plVar19 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_118 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  uVar8 = s_FieldPokemonProxyObject_03963396._0_8_;
  local_128 = 0x21;
  uStack_120 = 0x17;
  uVar7 = CONCAT71(s_FieldPokemonProxyObject_03963396._16_7_,s_FieldPokemonProxyObject_03963396[0xf]
                  );
  uVar25 = CONCAT17(s_FieldPokemonProxyObject_03963396[0xf],s_FieldPokemonProxyObject_03963396._8_7_
                   );
  local_118[0x17] = '\0';
  *(undefined8 *)local_118 = uVar8;
  *(undefined8 *)(local_118 + 8) = uVar25;
  *(undefined8 *)(local_118 + 0xf) = uVar7;
  plVar1 = DAT_043f1798;
  plVar19 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  plVar13 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xf0,8);
  plVar13[4] = 0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  plVar26 = plVar13 + 1;
  *plVar26 = 0;
  plVar13[6] = (long)FUN_02255590;
  plVar13[7] = (long)FUN_02255640;
  *(undefined4 *)(plVar13 + 5) = 0x3f800000;
  *plVar13 = (long)&PTR_FUN_0425b8a8;
  plVar13[0xc] = (long)&DAT_0392da3c;
  plVar13[10] = 0;
  plVar13[0xe] = (long)"__haxe_export_GetPokemonComponent";
  plVar13[0xf] = (long)&LAB_01b48234;
  plVar13[0x12] = (long)&LAB_01b4829c;
  plVar13[0x13] = 0;
  plVar13[0x18] = (long)&LAB_02255dd0;
  plVar13[0x19] = (long)&LAB_02255de0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  *(undefined1 *)(plVar13 + 0xb) = 0;
  *(undefined1 *)(plVar13 + 0xd) = 0;
  plVar13[0x1d] = 0;
  *(undefined1 *)(plVar13 + 0x1c) = 0;
  plVar13[0x10] = 0;
  plVar13[0x11] = (long)"__haxe_export_GetBuddyPokemonComponent";
  plVar13[0x14] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = (long)FUN_02255814;
  plVar13[0x17] = (long)&LAB_02255af4;
  plVar13[0x1a] = 0;
  plVar13[0x1b] = 0;
  plVar1 = DAT_043f1798;
  local_10f = 0x63675f5f;
  local_110 = (string)0x8;
  local_10b = 0;
  uStack_104 = 0;
  local_f0 = &LAB_02255e2c;
  local_e8 = 0xffffffff;
  local_100 = 0;
  local_f8 = &LAB_02255de4;
  plVar19 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_d0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x30,8);
  local_d0[0x20] = 't';
  uVar25 = s___haxe_export_GetPokemonComponen_03900dbd._8_8_;
  *(undefined8 *)local_d0 = s___haxe_export_GetPokemonComponen_03900dbd._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar25;
  uVar7 = s___haxe_export_GetPokemonComponen_03900dbd._24_8_;
  uVar25 = s___haxe_export_GetPokemonComponen_03900dbd._16_8_;
  local_d0[0x21] = '\0';
  *(undefined8 *)(local_d0 + 0x10) = uVar25;
  *(undefined8 *)(local_d0 + 0x18) = uVar7;
  plVar1 = DAT_043f1798;
  local_e0 = 0x31;
  local_d8 = 0x21;
  local_d9 = 0;
  local_db = 0;
  local_df = 0;
  local_c8 = &LAB_02255e74;
  puStack_c0 = &LAB_02255ebc;
  local_b8 = 0xffffffff;
  plVar19 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  local_a0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x30,8);
  uVar25 = s___haxe_export_GetBuddyPokemonCom_03914f8d._8_8_;
  *(undefined8 *)local_a0 = s___haxe_export_GetBuddyPokemonCom_03914f8d._0_8_;
  *(undefined8 *)(local_a0 + 8) = uVar25;
  uVar25 = CONCAT26(s___haxe_export_GetBuddyPokemonCom_03914f8d._30_2_,
                    s___haxe_export_GetBuddyPokemonCom_03914f8d._24_6_);
  *(undefined8 *)(local_a0 + 0x10) = s___haxe_export_GetBuddyPokemonCom_03914f8d._16_8_;
  *(undefined8 *)(local_a0 + 0x18) = uVar25;
  *(ulong *)(local_a0 + 0x1e) =
       CONCAT62(s___haxe_export_GetBuddyPokemonCom_03914f8d._32_6_,
                s___haxe_export_GetBuddyPokemonCom_03914f8d._30_2_);
  local_a0[0x26] = '\0';
  local_b0 = 0x31;
  psVar28 = &local_110;
  local_a8 = 0x26;
  local_a9 = 0;
  local_98 = &LAB_02255f04;
  puStack_90 = &LAB_02255f4c;
  plVar1 = plVar13 + 3;
  local_ab = 0;
  local_af = 0;
  local_88 = 0xffffffff;
  do {
    uVar14 = *(ulong *)(psVar28 + 8);
    psVar3 = *(string **)(psVar28 + 0x10);
    if (((byte)*psVar28 & 1) == 0) {
      psVar3 = psVar28 + 1;
      uVar14 = (ulong)((byte)*psVar28 >> 1);
    }
    uVar14 = FUN_008e8ed4(local_80,psVar3,uVar14);
    uVar24 = plVar13[2];
    if (uVar24 != 0) {
      uVar17 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        unaff_x25 = uVar24 - 1 & uVar14;
      }
      else {
        unaff_x25 = uVar14;
        if (uVar24 <= uVar14) {
          uVar5 = 0;
          if (uVar24 != 0) {
            uVar5 = uVar14 / uVar24;
          }
          unaff_x25 = uVar14 - uVar5 * uVar24;
        }
      }
      plVar19 = *(long **)(*plVar26 + unaff_x25 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar3 = psVar28 + 1;
        sVar16 = (ulong)((byte)*psVar28 >> 1);
        if (((byte)*psVar28 & 1) != 0) {
          psVar3 = *(string **)(psVar28 + 0x10);
          sVar16 = *(size_t *)(psVar28 + 8);
        }
        if (uVar17 < 2) {
          if (sVar16 == 0) {
            do {
              if (plVar19[1] != uVar14 && (plVar19[1] & uVar24 - 1) != unaff_x25) break;
              uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar17 = plVar19[3];
              }
              if (uVar17 == 0) goto LAB_02254b1c;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if (plVar19[1] != uVar14 && (plVar19[1] & uVar24 - 1) != unaff_x25) break;
              bVar4 = *(byte *)(plVar19 + 2);
              uVar17 = (ulong)(bVar4 >> 1);
              sVar2 = uVar17;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar19[3];
              }
              if (sVar2 == sVar16) {
                if ((bVar4 & 1) == 0) {
                  psVar21 = (string *)((long)plVar19 + 0x11);
                  psVar23 = psVar3;
                  while (*psVar21 == *psVar23) {
                    uVar17 = uVar17 - 1;
                    psVar21 = psVar21 + 1;
                    psVar23 = psVar23 + 1;
                    if (uVar17 == 0) goto LAB_02254b1c;
                  }
                }
                else {
                  iVar10 = memcmp((void *)plVar19[4],psVar3,sVar16);
                  if (iVar10 == 0) goto LAB_02254b1c;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar16 == 0) {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar14) {
              if (uVar24 <= uVar17) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar5 * uVar24;
              }
              if (uVar17 != unaff_x25) break;
            }
            uVar17 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar17 = plVar19[3];
            }
            if (uVar17 == 0) goto LAB_02254b1c;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 != uVar14) {
              if (uVar24 <= uVar17) {
                uVar5 = 0;
                if (uVar24 != 0) {
                  uVar5 = uVar17 / uVar24;
                }
                uVar17 = uVar17 - uVar5 * uVar24;
              }
              if (uVar17 != unaff_x25) break;
            }
            bVar4 = *(byte *)(plVar19 + 2);
            uVar17 = (ulong)(bVar4 >> 1);
            sVar2 = uVar17;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar19[3];
            }
            if (sVar2 == sVar16) {
              if ((bVar4 & 1) == 0) {
                psVar21 = (string *)((long)plVar19 + 0x11);
                psVar23 = psVar3;
                while (*psVar21 == *psVar23) {
                  uVar17 = uVar17 - 1;
                  psVar21 = psVar21 + 1;
                  psVar23 = psVar23 + 1;
                  if (uVar17 == 0) goto LAB_02254b1c;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar19[4],psVar3,sVar16);
                if (iVar10 == 0) goto LAB_02254b1c;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
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
    plVar19[1] = uVar14;
    if ((uVar24 == 0) || (*(float *)(plVar13 + 5) * (float)uVar24 < (float)(plVar13[4] + 1))) {
      uVar24 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
      uVar17 = (ulong)((float)(plVar13[4] + 1) / *(float *)(plVar13 + 5));
      if (uVar17 <= uVar24) {
        uVar17 = uVar24;
      }
      FUN_008e9ae4(plVar26,uVar17);
      uVar24 = plVar13[2];
      if ((uVar24 & uVar24 - 1) == 0) {
        unaff_x25 = uVar24 - 1 & uVar14;
      }
      else if (uVar14 < uVar24) {
        unaff_x25 = uVar14;
      }
      else {
        uVar17 = 0;
        if (uVar24 != 0) {
          uVar17 = uVar14 / uVar24;
        }
        unaff_x25 = uVar14 - uVar17 * uVar24;
      }
    }
    lVar20 = *plVar26;
    plVar18 = *(long **)(lVar20 + unaff_x25 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + unaff_x25 * 8) = plVar1;
      if (*plVar19 != 0) {
        uVar14 = *(ulong *)(*plVar19 + 8);
        if ((uVar24 & uVar24 - 1) == 0) {
          uVar14 = uVar14 & uVar24 - 1;
        }
        else if (uVar24 <= uVar14) {
          uVar17 = 0;
          if (uVar24 != 0) {
            uVar17 = uVar14 / uVar24;
          }
          uVar14 = uVar14 - uVar17 * uVar24;
        }
        plVar18 = (long *)(*plVar26 + uVar14 * 8);
        goto LAB_02254b0c;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_02254b0c:
      *plVar18 = (long)plVar19;
    }
    plVar13[4] = plVar13[4] + 1;
LAB_02254b1c:
    psVar28 = psVar28 + 0x30;
  } while (psVar28 != (string *)local_80);
  lVar22 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar26,lVar22 + lVar20);
    if (lVar15 != 0) {
      FUN_008f2aec(local_80,plVar26,lVar15);
      lVar15 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar15 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar29 = *(long *)(lVar15 + 0x20), lVar29 != 0)) {
          plVar19 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar14 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar29,0,8);
              goto LAB_02254e20;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar29,0,8);
        }
LAB_02254e20:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar15,0,8);
            goto LAB_02254dd8;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar15,0,8);
      }
    }
LAB_02254dd8:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar27 = (char *)plVar13[0xc];
  sVar16 = strlen(pcVar27);
  iVar10 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0xe];
  sVar16 = strlen(pcVar27);
  iVar11 = FUN_008f2c60(sVar16,pcVar27);
  pcVar27 = (char *)plVar13[0x11];
  sVar16 = strlen(pcVar27);
  iVar12 = FUN_008f2c60(sVar16,pcVar27);
  pcVar9 = local_a0;
  *(bool *)(plVar13 + 0xb) = (iVar11 != 0 || iVar10 != 0) || iVar12 != 0;
  plVar1 = DAT_043f1798;
  pcVar27 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != (char *)0x0)) {
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar9,0,8);
        plVar1 = DAT_043f1798;
        pcVar27 = local_d0;
        goto joined_r0x02254fb0;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar9,0,8);
    plVar1 = DAT_043f1798;
    pcVar27 = local_d0;
  }
joined_r0x02254fb0:
  lVar20 = local_100;
  local_d0 = pcVar27;
  if (((local_e0 & 1) != 0) && (pcVar27 != (char *)0x0)) {
    plVar19 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar27,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x02255348;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar27,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x02255348:
  DAT_043f1798 = plVar1;
  local_100 = lVar20;
  if ((((byte)local_110 & 1) != 0) && (lVar20 != 0)) {
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar20,0,8);
        goto LAB_02255114;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
  }
LAB_02255114:
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar25);
  (**(code **)*plVar13)(plVar13,uVar25);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  pcVar27 = (char *)((ulong)&local_128 | 1);
  if ((local_128 & 1) != 0) {
    pcVar27 = local_118;
  }
  FUN_001522a0(uVar25,pcVar27);
  pcVar27 = local_118;
  plVar1 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (char *)0x0)) {
    plVar19 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar19,pcVar27,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar27,0,8);
  }
  return;
}


