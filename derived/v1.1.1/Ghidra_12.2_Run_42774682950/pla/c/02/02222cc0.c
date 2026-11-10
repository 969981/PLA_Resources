/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02222cc0; name: FUN_02222cc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02222cc0(long param_1)

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
  int iVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  size_t sVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  string *psVar25;
  long lVar26;
  string *psVar27;
  ulong uVar28;
  undefined8 uVar29;
  long *plVar30;
  char *pcVar31;
  string *psVar32;
  long lVar33;
  ulong uVar34;
  ulong local_218;
  undefined8 uStack_210;
  char *local_208;
  string local_200;
  undefined2 local_1ff;
  undefined1 local_1fd;
  undefined8 local_1fc;
  undefined4 local_1f4;
  long local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  byte local_1d0;
  undefined4 local_1cf;
  undefined7 local_1cb;
  undefined4 uStack_1c4;
  long local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  undefined8 local_198;
  char *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined8 local_168;
  char *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined8 local_13f;
  undefined4 local_137;
  undefined3 uStack_133;
  long local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
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
  char local_df [8];
  undefined2 local_d7;
  undefined1 local_d5;
  undefined4 local_d4;
  long local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  byte local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  long local_80 [2];
  char local_70;
  
  plVar1 = DAT_043f1798;
  lVar6 = tpidr_el0;
  plVar23 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  local_208 = (char *)(**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
  local_218 = 0x21;
  uStack_210 = 0x1b;
  local_208[0x17] = 'n';
  uVar8 = s_FieldPlayerDressUpComponent_0396e691._16_8_;
  uVar29 = s_FieldPlayerDressUpComponent_0396e691._0_8_;
  local_208[0x18] = 'e';
  local_208[0x19] = 'n';
  local_208[0x1a] = 't';
  *(undefined8 *)(local_208 + 8) = s_FieldPlayerDressUpComponent_0396e691._8_8_;
  *(undefined8 *)(local_208 + 0x10) = uVar8;
  *(undefined8 *)local_208 = uVar29;
  local_208[0x1b] = '\0';
  plVar1 = DAT_043f1798;
  plVar23 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  plVar17 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x158,8);
  plVar17[4] = 0;
  plVar30 = plVar17 + 1;
  *plVar30 = 0;
  *(undefined4 *)(plVar17 + 5) = 0x3f800000;
  plVar17[10] = 0;
  plVar17[6] = (long)FUN_022243f0;
  plVar17[7] = (long)FUN_022244a0;
  *plVar17 = (long)&PTR_FUN_0425b7e0;
  *(undefined1 *)(plVar17 + 0xb) = 0;
  plVar17[0xc] = (long)&DAT_038ca815;
  plVar17[0xd] = (long)&DAT_0392da3c;
  plVar17[0xf] = (long)"__haxe_export_UnloadRequest";
  plVar17[0x10] = (long)FUN_01b2fc0c;
  plVar17[0x13] = (long)&LAB_01b2fd34;
  plVar17[0x14] = 0;
  plVar17[0x15] = (long)"HasParts";
  plVar17[0x16] = (long)&LAB_01b2fe64;
  plVar17[0x19] = (long)&LAB_01b2fee8;
  plVar17[0x1a] = 0;
  plVar17[0x1b] = (long)"IsFinished";
  plVar17[0x1c] = (long)&LAB_01b303e8;
  plVar17[0x1d] = 0;
  plVar17[0x1e] = (long)"GetSex";
  plVar17[0x1f] = (long)&LAB_022243d8;
  plVar17[0x20] = 0;
  *(undefined1 *)(plVar17 + 0xe) = 0;
  plVar17[0x2a] = 0;
  *(undefined1 *)(plVar17 + 0x29) = 0;
  plVar17[0x23] = (long)FUN_02224630;
  plVar17[0x24] = (long)&LAB_02224910;
  plVar17[0x25] = (long)&LAB_02224bf0;
  plVar17[0x26] = (long)&LAB_02224c00;
  plVar17[2] = 0;
  plVar17[3] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[0x11] = 0;
  plVar17[0x12] = (long)"__haxe_export_DressupRequest";
  plVar17[0x17] = 0;
  plVar17[0x18] = (long)"GetLoadPartsName";
  plVar17[0x21] = 0;
  plVar17[0x22] = 0;
  plVar17[0x27] = 0;
  plVar17[0x28] = 0;
  plVar1 = DAT_043f1798;
  local_200 = (string)0x6;
  local_1ff = 0x656e;
  local_1fd = 0x77;
  local_1e0 = &LAB_02224c4c;
  local_1fc = 0;
  local_1f4 = 0;
  local_1d8 = 0xffffffff;
  local_1d0 = 8;
  local_1cb = 0;
  uStack_1c4 = 0;
  local_1b0 = &LAB_02224cdc;
  local_1a8 = 0xffffffff;
  local_1f0 = 0;
  local_1e8 = &LAB_02224c04;
  local_1cf = 0x63675f5f;
  local_1c0 = 0;
  puStack_1b8 = &LAB_02224c94;
  plVar23 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  uVar34 = 0x20;
  local_190 = (char *)(**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
  local_190[0x17] = 'u';
  local_190[0x18] = 'e';
  local_190[0x19] = 's';
  local_190[0x1a] = 't';
  local_190[0x1b] = '\0';
  uVar29 = s___haxe_export_UnloadRequest_038b0302._8_8_;
  *(undefined8 *)local_190 = s___haxe_export_UnloadRequest_038b0302._0_8_;
  uVar8 = s___haxe_export_UnloadRequest_038b0302._16_8_;
  *(undefined8 *)(local_190 + 8) = uVar29;
  *(undefined8 *)(local_190 + 0x10) = uVar8;
  plVar1 = DAT_043f1798;
  local_198 = 0x1b;
  local_1a0 = 0x21;
  local_199 = 0;
  local_19b = 0;
  local_19f = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_02224d24;
  puStack_180 = &LAB_02224d6c;
  plVar23 = *(long **)(lVar6 + 0x20);
  if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
    *(long **)(lVar6 + 0x20) = DAT_043f1798;
    plVar23 = plVar1;
  }
  local_160 = (char *)(**(code **)(*plVar23 + 0x10))(plVar23,0x20,8);
  local_160[0x18] = 'u';
  local_160[0x19] = 'e';
  local_160[0x1a] = 's';
  local_160[0x1b] = 't';
  local_160[0x1c] = '\0';
  uVar29 = s___haxe_export_DressupRequest_03980577._8_8_;
  *(undefined8 *)local_160 = s___haxe_export_DressupRequest_03980577._0_8_;
  uVar8 = s___haxe_export_DressupRequest_03980577._16_8_;
  *(undefined8 *)(local_160 + 8) = uVar29;
  *(undefined8 *)(local_160 + 0x10) = uVar8;
  local_170 = 0x21;
  local_16b = 0;
  local_16f = 0;
  local_168 = 0x1c;
  local_158 = &LAB_02224db4;
  puStack_150 = &LAB_02224dfc;
  local_140 = 0x10;
  local_169 = 0;
  local_148 = 0xffffffff;
  plVar1 = plVar17 + 3;
  local_13f = 0x7374726150736148;
  local_137 = 0;
  uStack_133 = 0;
  local_120 = &LAB_02224e8c;
  local_118 = 0xffffffff;
  local_110 = 0x20;
  local_130 = 0;
  puStack_128 = &LAB_02224e44;
  local_10f[0] = s_GetLoadPartsName_03a7377c[0];
  local_10f[1] = s_GetLoadPartsName_03a7377c[1];
  local_10f[2] = s_GetLoadPartsName_03a7377c[2];
  local_10f[3] = s_GetLoadPartsName_03a7377c[3];
  local_10f[4] = s_GetLoadPartsName_03a7377c[4];
  local_10f[5] = s_GetLoadPartsName_03a7377c[5];
  local_10f[6] = s_GetLoadPartsName_03a7377c[6];
  psVar32 = &local_200;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02224ed4;
  puStack_f0 = &LAB_02224f1c;
  cStack_108 = s_GetLoadPartsName_03a7377c[7];
  acStack_107[0] = s_GetLoadPartsName_03a7377c[8];
  acStack_107[1] = s_GetLoadPartsName_03a7377c[9];
  acStack_107[2] = s_GetLoadPartsName_03a7377c[10];
  acStack_107[3] = s_GetLoadPartsName_03a7377c[0xb];
  acStack_107[4] = s_GetLoadPartsName_03a7377c[0xc];
  acStack_107[5] = s_GetLoadPartsName_03a7377c[0xd];
  acStack_107[6] = s_GetLoadPartsName_03a7377c[0xe];
  local_100 = 0x65;
  local_e0 = 0x14;
  local_d7 = 0x6465;
  local_df[0] = s_IsFinished_03a73974[0];
  local_df[1] = s_IsFinished_03a73974[1];
  local_df[2] = s_IsFinished_03a73974[2];
  local_df[3] = s_IsFinished_03a73974[3];
  local_df[4] = s_IsFinished_03a73974[4];
  local_df[5] = s_IsFinished_03a73974[5];
  local_df[6] = s_IsFinished_03a73974[6];
  local_df[7] = s_IsFinished_03a73974[7];
  local_c0 = &LAB_02224fac;
  local_d5 = 0;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_d0 = 0;
  puStack_c8 = &LAB_02224f64;
  local_b0 = 0xc;
  local_af = 0x53746547;
  local_ab = 0x7865;
  local_a9 = 0;
  local_88 = 0xffffffff;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = &LAB_02224ff4;
  puStack_90 = &LAB_0222503c;
  do {
    uVar18 = *(ulong *)(psVar32 + 8);
    psVar3 = *(string **)(psVar32 + 0x10);
    if (((byte)*psVar32 & 1) == 0) {
      psVar3 = psVar32 + 1;
      uVar18 = (ulong)((byte)*psVar32 >> 1);
    }
    uVar18 = FUN_008e8ed4(local_80,psVar3,uVar18);
    uVar28 = plVar17[2];
    if (uVar28 != 0) {
      uVar34 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
      uVar21 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar34 = uVar28 - 1 & uVar18;
      }
      else {
        uVar34 = uVar18;
        if (uVar28 <= uVar18) {
          uVar34 = 0;
          if (uVar28 != 0) {
            uVar34 = uVar18 / uVar28;
          }
          uVar34 = uVar18 - uVar34 * uVar28;
        }
      }
      plVar23 = *(long **)(*plVar30 + uVar34 * 8);
      if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
        psVar3 = psVar32 + 1;
        sVar20 = (ulong)((byte)*psVar32 >> 1);
        if (((byte)*psVar32 & 1) != 0) {
          psVar3 = *(string **)(psVar32 + 0x10);
          sVar20 = *(size_t *)(psVar32 + 8);
        }
        if (uVar21 < 2) {
          if (sVar20 == 0) {
            do {
              if (plVar23[1] != uVar18 && (plVar23[1] & uVar28 - 1) != uVar34) break;
              uVar21 = (ulong)(*(byte *)(plVar23 + 2) >> 1);
              if ((*(byte *)(plVar23 + 2) & 1) != 0) {
                uVar21 = plVar23[3];
              }
              if (uVar21 == 0) goto LAB_02223310;
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
          else {
            do {
              if (plVar23[1] != uVar18 && (plVar23[1] & uVar28 - 1) != uVar34) break;
              bVar4 = *(byte *)(plVar23 + 2);
              uVar21 = (ulong)(bVar4 >> 1);
              sVar2 = uVar21;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar23[3];
              }
              if (sVar2 == sVar20) {
                if ((bVar4 & 1) == 0) {
                  psVar25 = (string *)((long)plVar23 + 0x11);
                  psVar27 = psVar3;
                  while (*psVar25 == *psVar27) {
                    uVar21 = uVar21 - 1;
                    psVar25 = psVar25 + 1;
                    psVar27 = psVar27 + 1;
                    if (uVar21 == 0) goto LAB_02223310;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar23[4],psVar3,sVar20);
                  if (iVar9 == 0) goto LAB_02223310;
                }
              }
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
        }
        else if (sVar20 == 0) {
          do {
            uVar21 = plVar23[1];
            if (uVar21 != uVar18) {
              if (uVar28 <= uVar21) {
                uVar5 = 0;
                if (uVar28 != 0) {
                  uVar5 = uVar21 / uVar28;
                }
                uVar21 = uVar21 - uVar5 * uVar28;
              }
              if (uVar21 != uVar34) break;
            }
            uVar21 = (ulong)(*(byte *)(plVar23 + 2) >> 1);
            if ((*(byte *)(plVar23 + 2) & 1) != 0) {
              uVar21 = plVar23[3];
            }
            if (uVar21 == 0) goto LAB_02223310;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar23[1];
            if (uVar21 != uVar18) {
              if (uVar28 <= uVar21) {
                uVar5 = 0;
                if (uVar28 != 0) {
                  uVar5 = uVar21 / uVar28;
                }
                uVar21 = uVar21 - uVar5 * uVar28;
              }
              if (uVar21 != uVar34) break;
            }
            bVar4 = *(byte *)(plVar23 + 2);
            uVar21 = (ulong)(bVar4 >> 1);
            sVar2 = uVar21;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar23[3];
            }
            if (sVar2 == sVar20) {
              if ((bVar4 & 1) == 0) {
                psVar25 = (string *)((long)plVar23 + 0x11);
                psVar27 = psVar3;
                while (*psVar25 == *psVar27) {
                  uVar21 = uVar21 - 1;
                  psVar25 = psVar25 + 1;
                  psVar27 = psVar27 + 1;
                  if (uVar21 == 0) goto LAB_02223310;
                }
              }
              else {
                iVar9 = memcmp((void *)plVar23[4],psVar3,sVar20);
                if (iVar9 == 0) goto LAB_02223310;
              }
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
        }
      }
    }
    plVar23 = DAT_043f1798;
    plVar22 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar22 = plVar23;
    }
    plVar23 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x40,8);
    std::string::string((string *)(plVar23 + 2),psVar32);
    lVar24 = *(long *)(psVar32 + 0x18);
    lVar26 = *(long *)(psVar32 + 0x28);
    plVar23[6] = *(long *)(psVar32 + 0x20);
    plVar23[7] = lVar26;
    plVar23[5] = lVar24;
    *plVar23 = 0;
    plVar23[1] = uVar18;
    if ((uVar28 == 0) || (*(float *)(plVar17 + 5) * (float)uVar28 < (float)(plVar17[4] + 1))) {
      uVar34 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
      uVar28 = (ulong)((float)(plVar17[4] + 1) / *(float *)(plVar17 + 5));
      if (uVar28 <= uVar34) {
        uVar28 = uVar34;
      }
      FUN_008e9ae4(plVar30,uVar28);
      uVar28 = plVar17[2];
      if ((uVar28 & uVar28 - 1) == 0) {
        uVar34 = uVar28 - 1 & uVar18;
      }
      else if (uVar18 < uVar28) {
        uVar34 = uVar18;
      }
      else {
        uVar34 = 0;
        if (uVar28 != 0) {
          uVar34 = uVar18 / uVar28;
        }
        uVar34 = uVar18 - uVar34 * uVar28;
      }
    }
    lVar24 = *plVar30;
    plVar22 = *(long **)(lVar24 + uVar34 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar23 = *plVar1;
      *plVar1 = (long)plVar23;
      *(long **)(lVar24 + uVar34 * 8) = plVar1;
      if (*plVar23 != 0) {
        uVar18 = *(ulong *)(*plVar23 + 8);
        if ((uVar28 & uVar28 - 1) == 0) {
          uVar18 = uVar18 & uVar28 - 1;
        }
        else if (uVar28 <= uVar18) {
          uVar21 = 0;
          if (uVar28 != 0) {
            uVar21 = uVar18 / uVar28;
          }
          uVar18 = uVar18 - uVar21 * uVar28;
        }
        plVar22 = (long *)(*plVar30 + uVar18 * 8);
        goto LAB_02223300;
      }
    }
    else {
      *plVar23 = *plVar22;
LAB_02223300:
      *plVar22 = (long)plVar23;
    }
    plVar17[4] = plVar17[4] + 1;
LAB_02223310:
    psVar32 = psVar32 + 0x30;
  } while (psVar32 != (string *)local_80);
  lVar26 = FUN_008cca50();
  lVar24 = 0;
  do {
    lVar19 = FUN_008e8c90(plVar30,lVar26 + lVar24);
    if (lVar19 != 0) {
      FUN_008f2aec(local_80,plVar30,lVar19);
      lVar19 = local_80[0];
      plVar1 = DAT_043f1798;
      local_80[0] = 0;
      if (lVar19 != 0) {
        if (((local_70 != '\0') && ((*(byte *)(lVar19 + 0x10) & 1) != 0)) &&
           (lVar33 = *(long *)(lVar19 + 0x20), lVar33 != 0)) {
          plVar23 = *(long **)(lVar6 + 0x20);
          if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
            *(long **)(lVar6 + 0x20) = DAT_043f1798;
            plVar23 = plVar1;
          }
          uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
          if ((uVar34 & 1) != 0) {
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar23,lVar33,0,8);
              goto LAB_02223618;
            }
          }
          (**(code **)(*plVar23 + 0x18))(plVar23,lVar33,0,8);
        }
LAB_02223618:
        plVar1 = DAT_043f1798;
        plVar23 = *(long **)(lVar6 + 0x20);
        if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
          *(long **)(lVar6 + 0x20) = DAT_043f1798;
          plVar23 = plVar1;
        }
        uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
        if ((uVar34 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar23,lVar19,0,8);
            goto LAB_022235d0;
          }
        }
        (**(code **)(*plVar23 + 0x18))(plVar23,lVar19,0,8);
      }
    }
LAB_022235d0:
    lVar24 = lVar24 + 0x18;
  } while (lVar24 != 0x300);
  pcVar31 = (char *)plVar17[0xc];
  sVar20 = strlen(pcVar31);
  iVar9 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0xd];
  sVar20 = strlen(pcVar31);
  iVar10 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0xf];
  sVar20 = strlen(pcVar31);
  iVar11 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x12];
  sVar20 = strlen(pcVar31);
  iVar12 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x15];
  sVar20 = strlen(pcVar31);
  iVar13 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x18];
  sVar20 = strlen(pcVar31);
  iVar14 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x1b];
  sVar20 = strlen(pcVar31);
  iVar15 = FUN_008f2c60(sVar20,pcVar31);
  pcVar31 = (char *)plVar17[0x1e];
  sVar20 = strlen(pcVar31);
  iVar16 = FUN_008f2c60(sVar20,pcVar31);
  lVar26 = local_a0;
  *(bool *)(plVar17 + 0xb) =
       ((((((iVar10 != 0 || iVar9 != 0) || iVar11 != 0) || iVar12 != 0) || iVar13 != 0) ||
        iVar14 != 0) || iVar15 != 0) || iVar16 != 0;
  plVar1 = DAT_043f1798;
  lVar24 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_d0;
        goto joined_r0x0222382c;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_d0;
  }
joined_r0x0222382c:
  lVar26 = local_100;
  local_d0 = lVar24;
  if (((local_e0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_100;
        goto joined_r0x02223f60;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_100;
  }
joined_r0x02223f60:
  lVar24 = local_130;
  local_100 = lVar26;
  if (((local_110 & 1) != 0) && (lVar26 != 0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar26,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_130;
        goto joined_r0x02223994;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar26,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_130;
  }
joined_r0x02223994:
  pcVar31 = local_160;
  local_130 = lVar24;
  if (((local_140 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar1 = DAT_043f1798;
        pcVar31 = local_160;
        goto joined_r0x02223fa0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar1 = DAT_043f1798;
    pcVar31 = local_160;
  }
joined_r0x02223fa0:
  pcVar7 = local_190;
  local_160 = pcVar31;
  if (((local_170 & 1) != 0) && (pcVar31 != (char *)0x0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,pcVar31,0,8);
        plVar1 = DAT_043f1798;
        pcVar7 = local_190;
        goto joined_r0x02223afc;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pcVar31,0,8);
    plVar1 = DAT_043f1798;
    pcVar7 = local_190;
  }
joined_r0x02223afc:
  lVar24 = local_1c0;
  local_190 = pcVar7;
  if (((local_1a0 & 1) != 0) && (pcVar7 != (char *)0x0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,pcVar7,0,8);
        plVar1 = DAT_043f1798;
        lVar24 = local_1c0;
        goto joined_r0x02223fe0;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pcVar7,0,8);
    plVar1 = DAT_043f1798;
    lVar24 = local_1c0;
  }
joined_r0x02223fe0:
  lVar26 = local_1f0;
  local_1c0 = lVar24;
  if (((local_1d0 & 1) != 0) && (lVar24 != 0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar24,0,8);
        plVar1 = DAT_043f1798;
        lVar26 = local_1f0;
        goto joined_r0x02223c64;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar24,0,8);
    plVar1 = DAT_043f1798;
    lVar26 = local_1f0;
  }
joined_r0x02223c64:
  DAT_043f1798 = plVar1;
  local_1f0 = lVar26;
  if ((((byte)local_200 & 1) != 0) && (lVar26 != 0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = plVar1;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar26,0,8);
        goto LAB_02223d14;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar26,0,8);
  }
LAB_02223d14:
  uVar29 = *(undefined8 *)(param_1 + 0x20);
  FUN_0014fef0(uVar29);
  (**(code **)*plVar17)(plVar17,uVar29);
  (**(code **)(*plVar17 + 0x10))(plVar17);
  pcVar31 = (char *)((ulong)&local_218 | 1);
  if ((local_218 & 1) != 0) {
    pcVar31 = local_208;
  }
  FUN_001522a0(uVar29,pcVar31);
  pcVar31 = local_208;
  plVar1 = DAT_043f1798;
  if (((local_218 & 1) != 0) && (local_208 != (char *)0x0)) {
    plVar23 = *(long **)(lVar6 + 0x20);
    if (*(long **)(lVar6 + 0x20) == (long *)0x0) {
      *(long **)(lVar6 + 0x20) = DAT_043f1798;
      plVar23 = plVar1;
    }
    uVar34 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar34 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar23,pcVar31,0,8);
        return;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,pcVar31,0,8);
  }
  return;
}


