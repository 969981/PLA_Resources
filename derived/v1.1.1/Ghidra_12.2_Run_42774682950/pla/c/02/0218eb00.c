/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0218eb00; name: FUN_0218eb00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0218eb00(long param_1)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  size_t sVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
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
  char cStack_150;
  undefined7 uStack_14f;
  char local_148;
  undefined2 uStack_147;
  undefined5 uStack_145;
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
  uStack_145 = 0;
  local_158 = 0x22;
  uStack_14f = s_FieldNpcComponent_039c0484._8_7_;
  local_148 = s_FieldNpcComponent_039c0484[0xf];
  uStack_157 = s_FieldNpcComponent_039c0484._0_7_;
  cStack_150 = s_FieldNpcComponent_039c0484[7];
  uStack_147 = 0x74;
  lVar5 = tpidr_el0;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xf0,8);
  plVar11[4] = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar27 = plVar11 + 1;
  *plVar27 = 0;
  plVar11[6] = (long)FUN_0218fb50;
  plVar11[7] = (long)FUN_0218fc00;
  *plVar11 = (long)&PTR_FUN_0425b678;
  plVar11[0xc] = (long)&DAT_0392da3c;
  plVar11[0xe] = (long)"__haxe_export_GetNpcAnimationController";
  plVar11[0xf] = (long)&LAB_01ad7ccc;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[0x12] = (long)&LAB_01ad875c;
  plVar11[0x13] = 0;
  plVar11[10] = 0;
  plVar11[0x18] = (long)&LAB_02190350;
  plVar11[0x19] = (long)&LAB_02190360;
  plVar11[8] = 0;
  plVar11[9] = 0;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  plVar11[0x1d] = 0;
  *(undefined1 *)(plVar11 + 0x1c) = 0;
  plVar11[0x10] = 0;
  plVar11[0x11] = (long)"__haxe_export_GetNpcController";
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = (long)FUN_0218fd90;
  plVar11[0x17] = (long)&LAB_02190070;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar1 = DAT_043f1798;
  local_13f = 0x63675f5f;
  local_140 = (string)0x8;
  local_120 = &LAB_021903ac;
  local_13b = 0;
  uStack_134 = 0;
  local_118 = 0xffffffff;
  local_105 = 0;
  local_104 = 0;
  local_f0 = &LAB_0219043c;
  local_e8 = 0xffffffff;
  local_130 = 0;
  local_128 = &LAB_02190364;
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
  puStack_f8 = &LAB_021903f4;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  pbVar30 = &local_158;
  local_d0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x30,8);
  uVar26 = s___haxe_export_GetNpcAnimationCon_0399c75f._8_8_;
  *(undefined8 *)local_d0 = s___haxe_export_GetNpcAnimationCon_0399c75f._0_8_;
  *(undefined8 *)(local_d0 + 8) = uVar26;
  uVar26 = CONCAT17(s___haxe_export_GetNpcAnimationCon_0399c75f[0x1f],
                    s___haxe_export_GetNpcAnimationCon_0399c75f._24_7_);
  *(undefined8 *)(local_d0 + 0x10) = s___haxe_export_GetNpcAnimationCon_0399c75f._16_8_;
  *(undefined8 *)(local_d0 + 0x18) = uVar26;
  *(ulong *)(local_d0 + 0x1f) =
       CONCAT71(s___haxe_export_GetNpcAnimationCon_0399c75f._32_7_,
                s___haxe_export_GetNpcAnimationCon_0399c75f[0x1f]);
  local_d0[0x27] = '\0';
  plVar1 = DAT_043f1798;
  local_e0 = 0x31;
  local_d8 = 0x27;
  local_d9 = 0;
  local_db = 0;
  local_df = 0;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_02190484;
  puStack_c0 = &LAB_021904cc;
  plVar19 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar19 = plVar1;
  }
  uVar18 = (ulong)pbVar30 | 1;
  local_a0 = (char *)(**(code **)(*plVar19 + 0x10))(plVar19,0x20,8);
  local_a0[0x1e] = '\0';
  uVar6 = s___haxe_export_GetNpcController_0393467a._8_8_;
  *(undefined8 *)local_a0 = s___haxe_export_GetNpcController_0393467a._0_8_;
  *(ulong *)(local_a0 + 0x16) =
       CONCAT62(s___haxe_export_GetNpcController_0393467a._24_6_,
                s___haxe_export_GetNpcController_0393467a._22_2_);
  uVar26 = CONCAT26(s___haxe_export_GetNpcController_0393467a._22_2_,
                    s___haxe_export_GetNpcController_0393467a._16_6_);
  *(undefined8 *)(local_a0 + 8) = uVar6;
  *(undefined8 *)(local_a0 + 0x10) = uVar26;
  local_b0 = 0x21;
  local_ab = 0;
  local_af = 0;
  local_a8 = 0x1e;
  psVar29 = &local_140;
  local_98 = &LAB_02190514;
  puStack_90 = &LAB_0219055c;
  plVar1 = plVar11 + 3;
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
          uVar21 = 0;
          if (pbVar25 != (byte *)0x0) {
            uVar21 = (ulong)pbVar12 / (ulong)pbVar25;
          }
          pbVar30 = pbVar12 + -(uVar21 * (long)pbVar25);
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
              if (uVar15 == 0) goto LAB_0218f044;
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
                    if (uVar15 == 0) goto LAB_0218f044;
                  }
                }
                else {
                  iVar8 = memcmp((void *)plVar19[4],psVar3,sVar14);
                  if (iVar8 == 0) goto LAB_0218f044;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar14 == 0) {
          do {
            pbVar16 = (byte *)plVar19[1];
            if (pbVar16 != pbVar12) {
              if (pbVar25 <= pbVar16) {
                uVar15 = 0;
                if (pbVar25 != (byte *)0x0) {
                  uVar15 = (ulong)pbVar16 / (ulong)pbVar25;
                }
                pbVar16 = pbVar16 + -(uVar15 * (long)pbVar25);
              }
              if (pbVar16 != pbVar30) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar15 = plVar19[3];
            }
            if (uVar15 == 0) goto LAB_0218f044;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            pbVar16 = (byte *)plVar19[1];
            if (pbVar16 != pbVar12) {
              if (pbVar25 <= pbVar16) {
                uVar15 = 0;
                if (pbVar25 != (byte *)0x0) {
                  uVar15 = (ulong)pbVar16 / (ulong)pbVar25;
                }
                pbVar16 = pbVar16 + -(uVar15 * (long)pbVar25);
              }
              if (pbVar16 != pbVar30) break;
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
                  if (uVar15 == 0) goto LAB_0218f044;
                }
              }
              else {
                iVar8 = memcmp((void *)plVar19[4],psVar3,sVar14);
                if (iVar8 == 0) goto LAB_0218f044;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar17 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar17 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar29);
    lVar20 = *(long *)(psVar29 + 0x18);
    lVar23 = *(long *)(psVar29 + 0x28);
    plVar19[6] = *(long *)(psVar29 + 0x20);
    plVar19[7] = lVar23;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = (long)pbVar12;
    if ((pbVar25 == (byte *)0x0) ||
       (*(float *)(plVar11 + 5) * (float)pbVar25 < (float)(plVar11[4] + 1))) {
      uVar15 = (ulong)(pbVar25 < (byte *)0x3 || ((ulong)pbVar25 & (ulong)(pbVar25 + -1)) != 0) |
               (long)pbVar25 << 1;
      uVar21 = (ulong)((float)(plVar11[4] + 1) / *(float *)(plVar11 + 5));
      if (uVar21 <= uVar15) {
        uVar21 = uVar15;
      }
      FUN_008e9ae4(plVar27,uVar21);
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
    lVar20 = *plVar27;
    plVar17 = *(long **)(lVar20 + (long)pbVar30 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + (long)pbVar30 * 8) = plVar1;
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
        plVar17 = (long *)(*plVar27 + (long)pbVar12 * 8);
        goto LAB_0218f034;
      }
    }
    else {
      *plVar19 = *plVar17;
LAB_0218f034:
      *plVar17 = (long)plVar19;
    }
    plVar11[4] = plVar11[4] + 1;
LAB_0218f044:
    psVar29 = psVar29 + 0x30;
  } while (psVar29 != (string *)local_80);
  lVar23 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar27,lVar23 + lVar20);
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
              goto LAB_0218f2bc;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar31,0,8);
        }
LAB_0218f2bc:
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
            goto LAB_0218f274;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,0,8);
      }
    }
LAB_0218f274:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar28 = (char *)plVar11[0xc];
  sVar14 = strlen(pcVar28);
  iVar8 = FUN_008f2c60(sVar14,pcVar28);
  pcVar28 = (char *)plVar11[0xe];
  sVar14 = strlen(pcVar28);
  iVar9 = FUN_008f2c60(sVar14,pcVar28);
  pcVar28 = (char *)plVar11[0x11];
  sVar14 = strlen(pcVar28);
  iVar10 = FUN_008f2c60(sVar14,pcVar28);
  pcVar7 = local_a0;
  *(bool *)(plVar11 + 0xb) = (iVar9 != 0 || iVar8 != 0) || iVar10 != 0;
  plVar1 = DAT_043f1798;
  pcVar28 = local_d0;
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
        FUN_02bcc824(plVar19,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        pcVar28 = local_d0;
        goto joined_r0x0218f44c;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    pcVar28 = local_d0;
  }
joined_r0x0218f44c:
  lVar20 = local_100;
  local_d0 = pcVar28;
  if (((local_e0 & 1) != 0) && (pcVar28 != (char *)0x0)) {
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
        FUN_02bcc824(plVar19,pcVar28,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_100;
        goto joined_r0x0218f894;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pcVar28,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_100;
  }
joined_r0x0218f894:
  lVar23 = local_130;
  local_100 = lVar20;
  if (((local_110 & 1) != 0) && (lVar20 != 0)) {
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
        FUN_02bcc824(plVar19,lVar20,0,8);
        plVar1 = DAT_043f1798;
        lVar23 = local_130;
        goto joined_r0x0218f5b4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
    plVar1 = DAT_043f1798;
    lVar23 = local_130;
  }
joined_r0x0218f5b4:
  DAT_043f1798 = plVar1;
  local_130 = lVar23;
  if ((((byte)local_140 & 1) != 0) && (lVar23 != 0)) {
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
        FUN_02bcc824(plVar19,lVar23,0,8);
        goto LAB_0218f664;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar23,0,8);
  }
LAB_0218f664:
  uVar26 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar11)(plVar11,uVar26);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  if ((local_158 & 1) != 0) {
    uVar18 = CONCAT53(uStack_145,CONCAT21(uStack_147,local_148));
  }
  FUN_001522a0(uVar26,uVar18);
  plVar1 = DAT_043f1798;
  if (((local_158 & 1) != 0) &&
     (lVar20 = CONCAT53(uStack_145,CONCAT21(uStack_147,local_148)), lVar20 != 0)) {
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar18 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar18 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar20,0,8);
        return;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,0,8);
  }
  return;
}


