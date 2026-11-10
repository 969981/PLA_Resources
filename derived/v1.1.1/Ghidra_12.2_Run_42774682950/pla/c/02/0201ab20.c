/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0201ab20; name: FUN_0201ab20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0201ab20(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  ulong uVar14;
  string *psVar15;
  long lVar16;
  string *psVar17;
  long lVar18;
  undefined8 uVar19;
  string *psVar20;
  long *plVar21;
  long lVar22;
  void *pvVar23;
  long lVar24;
  void *pvVar25;
  void *pvVar26;
  undefined8 local_288;
  size_t local_280;
  void *local_278;
  byte local_270;
  undefined7 uStack_26f;
  undefined1 local_268;
  undefined7 uStack_267;
  void *local_260;
  byte local_258;
  undefined7 uStack_257;
  undefined1 local_250;
  undefined7 uStack_24f;
  void *local_248;
  undefined7 local_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  byte local_230;
  undefined7 uStack_22f;
  undefined1 local_228;
  undefined7 uStack_227;
  void *local_220;
  undefined7 local_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  byte local_208;
  undefined7 uStack_207;
  undefined1 local_200;
  undefined7 uStack_1ff;
  void *local_1f8;
  undefined7 local_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined7 local_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  string local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  void *local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined4 local_1a8;
  byte local_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  void *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  byte local_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  void *local_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  byte local_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  void *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  byte local_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  void *local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
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
  undefined1 *local_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar22 = *param_1;
  local_280 = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  sVar7 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar7 < 0x17) {
    local_288 = CONCAT71(local_288._1_7_,(char)((int)sVar7 << 1));
    pvVar23 = (void *)((ulong)&local_288 | 1);
    if (sVar7 != 0) goto LAB_0201abb4;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar10,8);
    local_288 = uVar10 | 1;
    local_280 = sVar7;
    local_278 = pvVar23;
LAB_0201abb4:
    memcpy(pvVar23,param_2,sVar7);
  }
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  plVar1 = DAT_043f1798;
  plVar8 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar8 = plVar1;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x110,8);
  plVar8[4] = 0;
  plVar21 = plVar8 + 1;
  *plVar21 = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[6] = (long)FUN_0201c3c0;
  plVar8[7] = (long)FUN_0201c470;
  *plVar8 = (long)&PTR_FUN_0425b268;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[0xc] = (long)param_3;
  plVar8[0xd] = *param_4;
  plVar8[0xe] = (long)param_5;
  plVar8[0xf] = *param_6;
  plVar8[0x10] = (long)param_7;
  plVar8[0x11] = *param_8;
  plVar8[0x12] = (long)param_9;
  plVar8[0x13] = *param_10;
  plVar8[0x14] = (long)param_11;
  lVar18 = *param_12;
  plVar8[0x21] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = (long)FUN_0201c600;
  plVar8[0x1d] = (long)&LAB_0201cbd0;
  plVar8[0x17] = (long)&DAT_0392da3c;
  plVar8[0x18] = 0;
  *(undefined1 *)(plVar8 + 0x20) = 1;
  plVar8[0x15] = lVar18;
  plVar8[0x16] = (long)&DAT_038ca815;
  plVar8[0x1b] = (long)&LAB_0201c8e0;
  plVar8[0x1c] = (long)&LAB_0201cbc0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  sVar7 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_80 = SUB41((int)sVar7 << 1,0);
    pvVar23 = (void *)((ulong)&local_80 | 1);
    if (sVar7 != 0) goto LAB_0201ad38;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar10,8);
    local_80 = (string)((byte)uVar10 | 1);
    uStack_7f = (undefined7)(uVar10 >> 8);
    local_78 = (undefined1)sVar7;
    uStack_77 = (undefined7)(sVar7 >> 8);
    local_70 = pvVar23;
LAB_0201ad38:
    memcpy(pvVar23,param_3,sVar7);
  }
  local_1c0 = local_70;
  uStack_1c7 = uStack_77;
  uStack_1c8 = local_78;
  local_1cf = uStack_7f;
  local_1d0 = local_80;
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_1e0 = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  local_1b8 = &LAB_0201cbd4;
  puStack_1b0 = &LAB_0201cbdc;
  local_1a8 = 0xffffffff;
  sVar7 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_208 = (byte)((int)sVar7 << 1);
    pvVar23 = (void *)((ulong)&local_208 | 1);
    if (sVar7 != 0) goto LAB_0201add8;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar23 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar10,8);
    local_208 = (byte)uVar10 | 1;
    uStack_207 = (undefined7)(uVar10 >> 8);
    local_200 = (undefined1)sVar7;
    uStack_1ff = (undefined7)(sVar7 >> 8);
    local_1f8 = pvVar23;
LAB_0201add8:
    memcpy(pvVar23,param_5,sVar7);
  }
  local_190 = local_1f8;
  uStack_197 = uStack_1ff;
  uStack_198 = local_200;
  local_19f = uStack_207;
  local_1a0 = local_208;
  *(undefined1 *)((long)pvVar23 + sVar7) = 0;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  uStack_1e9 = 0;
  uStack_1e8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_0201cbf8;
  puStack_180 = &LAB_0201cc14;
  sVar7 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_230 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_230 | 1);
    if (sVar7 != 0) goto LAB_0201ae70;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar10,8);
    local_230 = (byte)uVar10 | 1;
    uStack_22f = (undefined7)(uVar10 >> 8);
    local_228 = (undefined1)sVar7;
    uStack_227 = (undefined7)(sVar7 >> 8);
    local_220 = pvVar25;
LAB_0201ae70:
    memcpy(pvVar25,param_7,sVar7);
  }
  local_160 = local_220;
  uStack_167 = uStack_227;
  uStack_168 = local_228;
  local_16f = uStack_22f;
  local_170 = local_230;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  local_218 = 0;
  uStack_211 = 0;
  uStack_210 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_0201cc30;
  puStack_150 = &LAB_0201cc4c;
  sVar7 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_258 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_258 | 1);
    if (sVar7 != 0) goto LAB_0201af0c;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar10,8);
    local_258 = (byte)uVar10 | 1;
    uStack_257 = (undefined7)(uVar10 >> 8);
    local_250 = (undefined1)sVar7;
    uStack_24f = (undefined7)(sVar7 >> 8);
    local_248 = pvVar25;
LAB_0201af0c:
    memcpy(pvVar25,param_9,sVar7);
  }
  local_130 = local_248;
  uStack_137 = uStack_24f;
  uStack_138 = local_250;
  local_13f = uStack_257;
  local_140 = local_258;
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0201cc68;
  puStack_120 = &LAB_0201cc84;
  sVar7 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_270 = 0;
  uStack_26f = 0;
  local_268 = 0;
  uStack_267 = 0;
  local_260 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_270 = (byte)((int)sVar7 << 1);
    pvVar25 = (void *)((ulong)&local_270 | 1);
    if (sVar7 != 0) goto LAB_0201afa8;
  }
  else {
    uVar10 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar13 = plVar1;
    }
    pvVar25 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar10,8);
    local_270 = (byte)uVar10 | 1;
    uStack_26f = (undefined7)(uVar10 >> 8);
    local_268 = (undefined1)sVar7;
    uStack_267 = (undefined7)(sVar7 >> 8);
    local_260 = pvVar25;
LAB_0201afa8:
    memcpy(pvVar25,param_11,sVar7);
  }
  *(undefined1 *)((long)pvVar25 + sVar7) = 0;
  local_110 = local_270;
  local_10f = uStack_26f;
  uStack_108 = local_268;
  uStack_107 = uStack_267;
  local_100 = local_260;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0201cca0;
  puStack_f0 = &LAB_0201ccbc;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_0201cd20;
  psVar20 = &local_1d0;
  local_d0 = 0;
  puStack_c8 = &LAB_0201ccd8;
  plVar1 = plVar8 + 3;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_d4 = 0;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_0201cdb0;
  local_88 = 0xffffffff;
  local_98 = &LAB_0201cd68;
  do {
    uVar10 = *(ulong *)(psVar20 + 8);
    psVar3 = *(string **)(psVar20 + 0x10);
    if (((byte)*psVar20 & 1) == 0) {
      psVar3 = psVar20 + 1;
      uVar10 = (ulong)((byte)*psVar20 >> 1);
    }
    pvVar25 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar10);
    pvVar26 = (void *)plVar8[2];
    if (pvVar26 != (void *)0x0) {
      uVar10 = (long)pvVar26 - ((ulong)pvVar26 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        pvVar23 = (void *)((long)pvVar26 - 1U & (ulong)pvVar25);
      }
      else {
        pvVar23 = pvVar25;
        if (pvVar26 <= pvVar25) {
          uVar14 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar14 = (ulong)pvVar25 / (ulong)pvVar26;
          }
          pvVar23 = (void *)((long)pvVar25 - uVar14 * (long)pvVar26);
        }
      }
      plVar13 = *(long **)(*plVar21 + (long)pvVar23 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        psVar3 = psVar20 + 1;
        sVar7 = (ulong)((byte)*psVar20 >> 1);
        if (((byte)*psVar20 & 1) != 0) {
          psVar3 = *(string **)(psVar20 + 0x10);
          sVar7 = *(size_t *)(psVar20 + 8);
        }
        if (uVar10 < 2) {
          if (sVar7 == 0) {
            do {
              if ((void *)plVar13[1] != pvVar25 &&
                  (void *)((ulong)plVar13[1] & (long)pvVar26 - 1U) != pvVar23) break;
              uVar10 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
              if ((*(byte *)(plVar13 + 2) & 1) != 0) {
                uVar10 = plVar13[3];
              }
              if (uVar10 == 0) goto LAB_0201b1f0;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar13[1] != pvVar25 &&
                  (void *)((ulong)plVar13[1] & (long)pvVar26 - 1U) != pvVar23) break;
              bVar4 = *(byte *)(plVar13 + 2);
              uVar10 = (ulong)(bVar4 >> 1);
              sVar2 = uVar10;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar13[3];
              }
              if (sVar2 == sVar7) {
                if ((bVar4 & 1) == 0) {
                  psVar15 = (string *)((long)plVar13 + 0x11);
                  psVar17 = psVar3;
                  while (*psVar15 == *psVar17) {
                    uVar10 = uVar10 - 1;
                    psVar15 = psVar15 + 1;
                    psVar17 = psVar17 + 1;
                    if (uVar10 == 0) goto LAB_0201b1f0;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar13[4],psVar3,sVar7);
                  if (iVar6 == 0) goto LAB_0201b1f0;
                }
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
        else if (sVar7 == 0) {
          do {
            pvVar12 = (void *)plVar13[1];
            if (pvVar12 != pvVar25) {
              if (pvVar26 <= pvVar12) {
                uVar10 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar10 = (ulong)pvVar12 / (ulong)pvVar26;
                }
                pvVar12 = (void *)((long)pvVar12 - uVar10 * (long)pvVar26);
              }
              if (pvVar12 != pvVar23) break;
            }
            uVar10 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
            if ((*(byte *)(plVar13 + 2) & 1) != 0) {
              uVar10 = plVar13[3];
            }
            if (uVar10 == 0) goto LAB_0201b1f0;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            pvVar12 = (void *)plVar13[1];
            if (pvVar12 != pvVar25) {
              if (pvVar26 <= pvVar12) {
                uVar10 = 0;
                if (pvVar26 != (void *)0x0) {
                  uVar10 = (ulong)pvVar12 / (ulong)pvVar26;
                }
                pvVar12 = (void *)((long)pvVar12 - uVar10 * (long)pvVar26);
              }
              if (pvVar12 != pvVar23) break;
            }
            bVar4 = *(byte *)(plVar13 + 2);
            uVar10 = (ulong)(bVar4 >> 1);
            sVar2 = uVar10;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar13[3];
            }
            if (sVar2 == sVar7) {
              if ((bVar4 & 1) == 0) {
                psVar15 = (string *)((long)plVar13 + 0x11);
                psVar17 = psVar3;
                while (*psVar15 == *psVar17) {
                  uVar10 = uVar10 - 1;
                  psVar15 = psVar15 + 1;
                  psVar17 = psVar17 + 1;
                  if (uVar10 == 0) goto LAB_0201b1f0;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar13[4],psVar3,sVar7);
                if (iVar6 == 0) goto LAB_0201b1f0;
              }
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    plVar13 = DAT_043f1798;
    plVar11 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar11 = plVar13;
    }
    plVar13 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
    std::string::string((string *)(plVar13 + 2),psVar20);
    lVar18 = *(long *)(psVar20 + 0x18);
    lVar16 = *(long *)(psVar20 + 0x28);
    plVar13[6] = *(long *)(psVar20 + 0x20);
    plVar13[7] = lVar16;
    plVar13[5] = lVar18;
    *plVar13 = 0;
    plVar13[1] = (long)pvVar25;
    if ((pvVar26 == (void *)0x0) ||
       (*(float *)(plVar8 + 5) * (float)pvVar26 < (float)(plVar8[4] + 1))) {
      uVar10 = (ulong)(pvVar26 < (void *)0x3 || ((ulong)pvVar26 & (long)pvVar26 - 1U) != 0) |
               (long)pvVar26 << 1;
      uVar14 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      FUN_008e9ae4(plVar21,uVar14);
      pvVar26 = (void *)plVar8[2];
      if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
        pvVar23 = (void *)((long)pvVar26 - 1U & (ulong)pvVar25);
      }
      else if (pvVar25 < pvVar26) {
        pvVar23 = pvVar25;
      }
      else {
        uVar10 = 0;
        if (pvVar26 != (void *)0x0) {
          uVar10 = (ulong)pvVar25 / (ulong)pvVar26;
        }
        pvVar23 = (void *)((long)pvVar25 - uVar10 * (long)pvVar26);
      }
    }
    lVar18 = *plVar21;
    plVar11 = *(long **)(lVar18 + (long)pvVar23 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar13 = *plVar1;
      *plVar1 = (long)plVar13;
      *(long **)(lVar18 + (long)pvVar23 * 8) = plVar1;
      if (*plVar13 != 0) {
        pvVar25 = *(void **)(*plVar13 + 8);
        if (((ulong)pvVar26 & (long)pvVar26 - 1U) == 0) {
          pvVar25 = (void *)((ulong)pvVar25 & (long)pvVar26 - 1U);
        }
        else if (pvVar26 <= pvVar25) {
          uVar10 = 0;
          if (pvVar26 != (void *)0x0) {
            uVar10 = (ulong)pvVar25 / (ulong)pvVar26;
          }
          pvVar25 = (void *)((long)pvVar25 - uVar10 * (long)pvVar26);
        }
        plVar11 = (long *)(*plVar21 + (long)pvVar25 * 8);
        goto LAB_0201b1e0;
      }
    }
    else {
      *plVar13 = *plVar11;
LAB_0201b1e0:
      *plVar11 = (long)plVar13;
    }
    plVar8[4] = plVar8[4] + 1;
LAB_0201b1f0:
    psVar20 = psVar20 + 0x30;
  } while (psVar20 != &local_80);
  lVar16 = FUN_008cca50();
  lVar18 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar21,lVar16 + lVar18);
    if (lVar9 != 0) {
      FUN_008f2aec(&local_80,plVar21,lVar9);
      plVar1 = DAT_043f1798;
      lVar9 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar9 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar24 = *(long *)(lVar9 + 0x20), lVar24 != 0)) {
          plVar13 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar13 = plVar1;
          }
          uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar13,lVar24,0,8);
              goto LAB_0201b7d8;
            }
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar24,0,8);
        }
LAB_0201b7d8:
        plVar1 = DAT_043f1798;
        plVar13 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar13 = plVar1;
        }
        uVar10 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar13,lVar9,0,8);
            goto LAB_0201b790;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar9,0,8);
      }
    }
LAB_0201b790:
    lVar9 = local_a0;
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0x300);
  *(undefined1 *)(plVar8 + 0xb) = 1;
  plVar1 = DAT_043f1798;
  lVar18 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar9,0,8);
        plVar1 = DAT_043f1798;
        lVar18 = local_d0;
        goto joined_r0x0201b930;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar9,0,8);
    plVar1 = DAT_043f1798;
    lVar18 = local_d0;
  }
joined_r0x0201b930:
  pvVar23 = local_100;
  local_d0 = lVar18;
  if (((local_e0 & 1) != 0) && (lVar18 != 0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,lVar18,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_100;
        goto joined_r0x0201bfa4;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,lVar18,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_100;
  }
joined_r0x0201bfa4:
  pvVar25 = local_130;
  local_100 = pvVar23;
  if (((local_110 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar23,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_130;
        goto joined_r0x0201ba98;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar23,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_130;
  }
joined_r0x0201ba98:
  pvVar23 = local_160;
  local_130 = pvVar25;
  if (((local_140 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_160;
        goto joined_r0x0201bfe4;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_160;
  }
joined_r0x0201bfe4:
  pvVar25 = local_190;
  local_160 = pvVar23;
  if (((local_170 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar23,0,8);
        plVar1 = DAT_043f1798;
        pvVar25 = local_190;
        goto joined_r0x0201bc00;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar23,0,8);
    plVar1 = DAT_043f1798;
    pvVar25 = local_190;
  }
joined_r0x0201bc00:
  pvVar23 = local_1c0;
  local_190 = pvVar25;
  if (((local_1a0 & 1) != 0) && (pvVar25 != (void *)0x0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar25,0,8);
        plVar1 = DAT_043f1798;
        pvVar23 = local_1c0;
        goto joined_r0x0201c024;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar25,0,8);
    plVar1 = DAT_043f1798;
    pvVar23 = local_1c0;
  }
joined_r0x0201c024:
  DAT_043f1798 = plVar1;
  local_1c0 = pvVar23;
  if ((((byte)local_1d0 & 1) != 0) && (pvVar23 != (void *)0x0)) {
    plVar21 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar21 = plVar1;
    }
    uVar10 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar21,pvVar23,0,8);
        goto LAB_0201bd64;
      }
    }
    (**(code **)(*plVar21 + 0x18))(plVar21,pvVar23,0,8);
  }
LAB_0201bd64:
  uVar19 = *(undefined8 *)(lVar22 + 0x20);
  FUN_0014fef0(uVar19);
  (**(code **)*plVar8)(plVar8,uVar19);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  if ((local_288 & 1) == 0) {
    pvVar23 = (void *)((long)&local_288 + 1);
  }
  else {
    pvVar23 = local_278;
  }
  FUN_001522a0(uVar19,pvVar23);
  pvVar23 = local_278;
  plVar1 = DAT_043f1798;
  if (((local_288 & 1) != 0) && (local_278 != (void *)0x0)) {
    plVar8 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar8,pvVar23,0,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,pvVar23,0,8);
  }
  return;
}


