/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b3f374; name: FUN_00b3f374
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00b3f374(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12)

{
  long *plVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  size_t sVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  string *psVar22;
  long lVar23;
  string *psVar24;
  char *pcVar25;
  undefined8 uVar26;
  string *psVar27;
  long *plVar28;
  long lVar29;
  void *pvVar30;
  long lVar31;
  void *pvVar32;
  void *pvVar33;
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
  
  lVar29 = *param_1;
  local_280 = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  sVar13 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar5 = tpidr_el0;
  if (sVar13 < 0x17) {
    local_288 = CONCAT71(local_288._1_7_,(char)((int)sVar13 << 1));
    pvVar30 = (void *)((ulong)&local_288 | 1);
    if (sVar13 != 0) goto LAB_00b3f404;
  }
  else {
    uVar16 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar16,8);
    local_288 = uVar16 | 1;
    local_280 = sVar13;
    local_278 = pvVar30;
LAB_00b3f404:
    memcpy(pvVar30,param_2,sVar13);
  }
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  plVar1 = DAT_043f1798;
  plVar14 = *(long **)(lVar5 + 0x20);
  if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
    plVar14 = plVar1;
  }
  plVar14 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x138,8);
  plVar14[4] = 0;
  plVar28 = plVar14 + 1;
  *plVar28 = 0;
  *(undefined4 *)(plVar14 + 5) = 0x3f800000;
  plVar14[10] = 0;
  plVar14[6] = (long)FUN_00b40cc0;
  plVar14[7] = (long)FUN_00b40d70;
  plVar14[2] = 0;
  plVar14[3] = 0;
  *(undefined1 *)(plVar14 + 0xb) = 0;
  *plVar14 = (long)&PTR_FUN_041d5268;
  plVar14[0xc] = (long)param_3;
  plVar14[8] = 0;
  plVar14[9] = 0;
  lVar20 = param_4[1];
  plVar14[0xd] = *param_4;
  plVar14[0xe] = lVar20;
  plVar14[0xf] = (long)param_5;
  lVar20 = param_6[1];
  plVar14[0x10] = *param_6;
  plVar14[0x11] = lVar20;
  plVar14[0x12] = (long)param_7;
  lVar20 = param_8[1];
  plVar14[0x13] = *param_8;
  plVar14[0x14] = lVar20;
  plVar14[0x15] = (long)param_9;
  lVar20 = param_10[1];
  plVar14[0x16] = *param_10;
  plVar14[0x17] = lVar20;
  plVar14[0x18] = (long)param_11;
  lVar20 = *param_12;
  lVar23 = param_12[1];
  plVar14[0x26] = 0;
  *(undefined1 *)(plVar14 + 0x25) = 0;
  plVar14[0x1b] = (long)&DAT_038ca815;
  plVar14[0x1c] = (long)&DAT_0392da3c;
  plVar14[0x1f] = (long)FUN_00b40f00;
  plVar14[0x20] = (long)&LAB_00b411e0;
  plVar14[0x19] = lVar20;
  plVar14[0x1a] = lVar23;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x23] = 0;
  plVar14[0x24] = 0;
  plVar14[0x21] = (long)&LAB_00b414c0;
  plVar14[0x22] = (long)&LAB_00b414d0;
  sVar13 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_80 = SUB41((int)sVar13 << 1,0);
    pvVar30 = (void *)((ulong)&local_80 | 1);
    if (sVar13 != 0) goto LAB_00b3f588;
  }
  else {
    uVar16 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_80 = (string)((byte)uVar16 | 1);
    uStack_7f = (undefined7)(uVar16 >> 8);
    local_78 = (undefined1)sVar13;
    uStack_77 = (undefined7)(sVar13 >> 8);
    local_70 = pvVar30;
LAB_00b3f588:
    memcpy(pvVar30,param_3,sVar13);
  }
  local_1c0 = local_70;
  uStack_1c7 = uStack_77;
  uStack_1c8 = local_78;
  local_1cf = uStack_7f;
  local_1d0 = local_80;
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_1e0 = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  local_1b8 = &LAB_00b414d4;
  puStack_1b0 = &LAB_00b4151c;
  local_1a8 = 0xffffffff;
  sVar13 = strlen(param_5);
  plVar1 = DAT_043f1798;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_208 = (byte)((int)sVar13 << 1);
    pvVar30 = (void *)((ulong)&local_208 | 1);
    if (sVar13 != 0) goto LAB_00b3f628;
  }
  else {
    uVar16 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_208 = (byte)uVar16 | 1;
    uStack_207 = (undefined7)(uVar16 >> 8);
    local_200 = (undefined1)sVar13;
    uStack_1ff = (undefined7)(sVar13 >> 8);
    local_1f8 = pvVar30;
LAB_00b3f628:
    memcpy(pvVar30,param_5,sVar13);
  }
  local_190 = local_1f8;
  uStack_197 = uStack_1ff;
  uStack_198 = local_200;
  local_19f = uStack_207;
  local_1a0 = local_208;
  *(undefined1 *)((long)pvVar30 + sVar13) = 0;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  uStack_1e9 = 0;
  uStack_1e8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_00b41564;
  puStack_180 = &LAB_00b415ac;
  sVar13 = strlen(param_7);
  plVar1 = DAT_043f1798;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_230 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_230 | 1);
    if (sVar13 != 0) goto LAB_00b3f6c0;
  }
  else {
    uVar16 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_230 = (byte)uVar16 | 1;
    uStack_22f = (undefined7)(uVar16 >> 8);
    local_228 = (undefined1)sVar13;
    uStack_227 = (undefined7)(sVar13 >> 8);
    local_220 = pvVar32;
LAB_00b3f6c0:
    memcpy(pvVar32,param_7,sVar13);
  }
  local_160 = local_220;
  uStack_167 = uStack_227;
  uStack_168 = local_228;
  local_16f = uStack_22f;
  local_170 = local_230;
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  local_218 = 0;
  uStack_211 = 0;
  uStack_210 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_00b415f4;
  puStack_150 = &LAB_00b4163c;
  sVar13 = strlen(param_9);
  plVar1 = DAT_043f1798;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_258 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_258 | 1);
    if (sVar13 != 0) goto LAB_00b3f75c;
  }
  else {
    uVar16 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_258 = (byte)uVar16 | 1;
    uStack_257 = (undefined7)(uVar16 >> 8);
    local_250 = (undefined1)sVar13;
    uStack_24f = (undefined7)(sVar13 >> 8);
    local_248 = pvVar32;
LAB_00b3f75c:
    memcpy(pvVar32,param_9,sVar13);
  }
  local_130 = local_248;
  uStack_137 = uStack_24f;
  uStack_138 = local_250;
  local_13f = uStack_257;
  local_140 = local_258;
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_00b41684;
  puStack_120 = &LAB_00b416cc;
  sVar13 = strlen(param_11);
  plVar1 = DAT_043f1798;
  local_270 = 0;
  uStack_26f = 0;
  local_268 = 0;
  uStack_267 = 0;
  local_260 = (void *)0x0;
  if (0xffffffffffffffef < sVar13) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar13 < 0x17) {
    local_270 = (byte)((int)sVar13 << 1);
    pvVar32 = (void *)((ulong)&local_270 | 1);
    if (sVar13 != 0) goto LAB_00b3f7f8;
  }
  else {
    uVar16 = sVar13 + 0x10 & 0xfffffffffffffff0;
    plVar19 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    pvVar32 = (void *)(**(code **)(*plVar19 + 0x10))(plVar19,uVar16,8);
    local_270 = (byte)uVar16 | 1;
    uStack_26f = (undefined7)(uVar16 >> 8);
    local_268 = (undefined1)sVar13;
    uStack_267 = (undefined7)(sVar13 >> 8);
    local_260 = pvVar32;
LAB_00b3f7f8:
    memcpy(pvVar32,param_11,sVar13);
  }
  *(undefined1 *)((long)pvVar32 + sVar13) = 0;
  local_110 = local_270;
  local_10f = uStack_26f;
  uStack_108 = local_268;
  uStack_107 = uStack_267;
  local_100 = local_260;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_00b41714;
  puStack_f0 = &LAB_00b4175c;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_00b417ec;
  psVar27 = &local_1d0;
  local_d0 = 0;
  puStack_c8 = &LAB_00b417a4;
  plVar1 = plVar14 + 3;
  local_b8 = 0xffffffff;
  local_b0 = 8;
  local_d4 = 0;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_98 = &LAB_00b41834;
  local_a0 = 0;
  local_90 = &LAB_00b4187c;
  local_88 = 0xffffffff;
  do {
    uVar16 = *(ulong *)(psVar27 + 8);
    psVar3 = *(string **)(psVar27 + 0x10);
    if (((byte)*psVar27 & 1) == 0) {
      psVar3 = psVar27 + 1;
      uVar16 = (ulong)((byte)*psVar27 >> 1);
    }
    pvVar32 = (void *)FUN_008e8ed4(&local_80,psVar3,uVar16);
    pvVar33 = (void *)plVar14[2];
    if (pvVar33 != (void *)0x0) {
      uVar16 = (long)pvVar33 - ((ulong)pvVar33 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        pvVar30 = (void *)((long)pvVar33 - 1U & (ulong)pvVar32);
      }
      else {
        pvVar30 = pvVar32;
        if (pvVar33 <= pvVar32) {
          uVar21 = 0;
          if (pvVar33 != (void *)0x0) {
            uVar21 = (ulong)pvVar32 / (ulong)pvVar33;
          }
          pvVar30 = (void *)((long)pvVar32 - uVar21 * (long)pvVar33);
        }
      }
      plVar19 = *(long **)(*plVar28 + (long)pvVar30 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        psVar3 = psVar27 + 1;
        sVar13 = (ulong)((byte)*psVar27 >> 1);
        if (((byte)*psVar27 & 1) != 0) {
          psVar3 = *(string **)(psVar27 + 0x10);
          sVar13 = *(size_t *)(psVar27 + 8);
        }
        if (uVar16 < 2) {
          if (sVar13 == 0) {
            do {
              if ((void *)plVar19[1] != pvVar32 &&
                  (void *)((ulong)plVar19[1] & (long)pvVar33 - 1U) != pvVar30) break;
              uVar16 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
              if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                uVar16 = plVar19[3];
              }
              if (uVar16 == 0) goto LAB_00b3fb18;
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
          else {
            do {
              if ((void *)plVar19[1] != pvVar32 &&
                  (void *)((ulong)plVar19[1] & (long)pvVar33 - 1U) != pvVar30) break;
              bVar4 = *(byte *)(plVar19 + 2);
              uVar16 = (ulong)(bVar4 >> 1);
              sVar2 = uVar16;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar19[3];
              }
              if (sVar2 == sVar13) {
                if ((bVar4 & 1) == 0) {
                  psVar22 = (string *)((long)plVar19 + 0x11);
                  psVar24 = psVar3;
                  while (*psVar22 == *psVar24) {
                    uVar16 = uVar16 - 1;
                    psVar22 = psVar22 + 1;
                    psVar24 = psVar24 + 1;
                    if (uVar16 == 0) goto LAB_00b3fb18;
                  }
                }
                else {
                  iVar6 = memcmp((void *)plVar19[4],psVar3,sVar13);
                  if (iVar6 == 0) goto LAB_00b3fb18;
                }
              }
              plVar19 = (long *)*plVar19;
            } while (plVar19 != (long *)0x0);
          }
        }
        else if (sVar13 == 0) {
          do {
            pvVar17 = (void *)plVar19[1];
            if (pvVar17 != pvVar32) {
              if (pvVar33 <= pvVar17) {
                uVar16 = 0;
                if (pvVar33 != (void *)0x0) {
                  uVar16 = (ulong)pvVar17 / (ulong)pvVar33;
                }
                pvVar17 = (void *)((long)pvVar17 - uVar16 * (long)pvVar33);
              }
              if (pvVar17 != pvVar30) break;
            }
            uVar16 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
            if ((*(byte *)(plVar19 + 2) & 1) != 0) {
              uVar16 = plVar19[3];
            }
            if (uVar16 == 0) goto LAB_00b3fb18;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            pvVar17 = (void *)plVar19[1];
            if (pvVar17 != pvVar32) {
              if (pvVar33 <= pvVar17) {
                uVar16 = 0;
                if (pvVar33 != (void *)0x0) {
                  uVar16 = (ulong)pvVar17 / (ulong)pvVar33;
                }
                pvVar17 = (void *)((long)pvVar17 - uVar16 * (long)pvVar33);
              }
              if (pvVar17 != pvVar30) break;
            }
            bVar4 = *(byte *)(plVar19 + 2);
            uVar16 = (ulong)(bVar4 >> 1);
            sVar2 = uVar16;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar19[3];
            }
            if (sVar2 == sVar13) {
              if ((bVar4 & 1) == 0) {
                psVar22 = (string *)((long)plVar19 + 0x11);
                psVar24 = psVar3;
                while (*psVar22 == *psVar24) {
                  uVar16 = uVar16 - 1;
                  psVar22 = psVar22 + 1;
                  psVar24 = psVar24 + 1;
                  if (uVar16 == 0) goto LAB_00b3fb18;
                }
              }
              else {
                iVar6 = memcmp((void *)plVar19[4],psVar3,sVar13);
                if (iVar6 == 0) goto LAB_00b3fb18;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    plVar19 = DAT_043f1798;
    plVar18 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar18 = plVar19;
    }
    plVar19 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
    std::string::string((string *)(plVar19 + 2),psVar27);
    lVar20 = *(long *)(psVar27 + 0x18);
    lVar23 = *(long *)(psVar27 + 0x28);
    plVar19[6] = *(long *)(psVar27 + 0x20);
    plVar19[7] = lVar23;
    plVar19[5] = lVar20;
    *plVar19 = 0;
    plVar19[1] = (long)pvVar32;
    if ((pvVar33 == (void *)0x0) ||
       (*(float *)(plVar14 + 5) * (float)pvVar33 < (float)(plVar14[4] + 1))) {
      uVar16 = (ulong)(pvVar33 < (void *)0x3 || ((ulong)pvVar33 & (long)pvVar33 - 1U) != 0) |
               (long)pvVar33 << 1;
      uVar21 = (ulong)((float)(plVar14[4] + 1) / *(float *)(plVar14 + 5));
      if (uVar21 <= uVar16) {
        uVar21 = uVar16;
      }
      FUN_008e9ae4(plVar28,uVar21);
      pvVar33 = (void *)plVar14[2];
      if (((ulong)pvVar33 & (long)pvVar33 - 1U) == 0) {
        pvVar30 = (void *)((long)pvVar33 - 1U & (ulong)pvVar32);
      }
      else if (pvVar32 < pvVar33) {
        pvVar30 = pvVar32;
      }
      else {
        uVar16 = 0;
        if (pvVar33 != (void *)0x0) {
          uVar16 = (ulong)pvVar32 / (ulong)pvVar33;
        }
        pvVar30 = (void *)((long)pvVar32 - uVar16 * (long)pvVar33);
      }
    }
    lVar20 = *plVar28;
    plVar18 = *(long **)(lVar20 + (long)pvVar30 * 8);
    if (plVar18 == (long *)0x0) {
      *plVar19 = *plVar1;
      *plVar1 = (long)plVar19;
      *(long **)(lVar20 + (long)pvVar30 * 8) = plVar1;
      if (*plVar19 != 0) {
        pvVar32 = *(void **)(*plVar19 + 8);
        if (((ulong)pvVar33 & (long)pvVar33 - 1U) == 0) {
          pvVar32 = (void *)((ulong)pvVar32 & (long)pvVar33 - 1U);
        }
        else if (pvVar33 <= pvVar32) {
          uVar16 = 0;
          if (pvVar33 != (void *)0x0) {
            uVar16 = (ulong)pvVar32 / (ulong)pvVar33;
          }
          pvVar32 = (void *)((long)pvVar32 - uVar16 * (long)pvVar33);
        }
        plVar18 = (long *)(*plVar28 + (long)pvVar32 * 8);
        goto LAB_00b3fb08;
      }
    }
    else {
      *plVar19 = *plVar18;
LAB_00b3fb08:
      *plVar18 = (long)plVar19;
    }
    plVar14[4] = plVar14[4] + 1;
LAB_00b3fb18:
    psVar27 = psVar27 + 0x30;
  } while (psVar27 != &local_80);
  lVar23 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar15 = FUN_008e8c90(plVar28,lVar23 + lVar20);
    if (lVar15 != 0) {
      FUN_008f2aec(&local_80,plVar28,lVar15);
      plVar1 = DAT_043f1798;
      lVar15 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar15 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar15 + 0x10) & 1) != 0)) &&
           (lVar31 = *(long *)(lVar15 + 0x20), lVar31 != 0)) {
          plVar19 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar19 = plVar1;
          }
          uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar19,lVar31,0,8);
              goto LAB_00b40028;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar31,0,8);
        }
LAB_00b40028:
        plVar1 = DAT_043f1798;
        plVar19 = *(long **)(lVar5 + 0x20);
        if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
          *(long **)(lVar5 + 0x20) = DAT_043f1798;
          plVar19 = plVar1;
        }
        uVar16 = (**(code **)(*plVar19 + 0xc0))(plVar19);
        if ((uVar16 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar19,lVar15,0,8);
            goto LAB_00b3ffe0;
          }
        }
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar15,0,8);
      }
    }
LAB_00b3ffe0:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar25 = (char *)plVar14[0xc];
  sVar13 = strlen(pcVar25);
  iVar6 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0xf];
  sVar13 = strlen(pcVar25);
  iVar7 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x12];
  sVar13 = strlen(pcVar25);
  iVar8 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x15];
  sVar13 = strlen(pcVar25);
  iVar9 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x18];
  sVar13 = strlen(pcVar25);
  iVar10 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x1b];
  sVar13 = strlen(pcVar25);
  iVar11 = FUN_008f2c60(sVar13,pcVar25);
  pcVar25 = (char *)plVar14[0x1c];
  sVar13 = strlen(pcVar25);
  iVar12 = FUN_008f2c60(sVar13,pcVar25);
  lVar23 = local_a0;
  *(bool *)(plVar14 + 0xb) =
       (((((iVar7 != 0 || iVar6 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) || iVar11 != 0)
       || iVar12 != 0;
  plVar1 = DAT_043f1798;
  lVar20 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar23,0,8);
        plVar1 = DAT_043f1798;
        lVar20 = local_d0;
        goto joined_r0x00b4022c;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar23,0,8);
    plVar1 = DAT_043f1798;
    lVar20 = local_d0;
  }
joined_r0x00b4022c:
  pvVar30 = local_100;
  local_d0 = lVar20;
  if (((local_e0 & 1) != 0) && (lVar20 != 0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,lVar20,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_100;
        goto joined_r0x00b408a8;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,lVar20,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_100;
  }
joined_r0x00b408a8:
  pvVar32 = local_130;
  local_100 = pvVar30;
  if (((local_110 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_130;
        goto joined_r0x00b40394;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_130;
  }
joined_r0x00b40394:
  pvVar30 = local_160;
  local_130 = pvVar32;
  if (((local_140 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar32,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_160;
        goto joined_r0x00b408e8;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar32,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_160;
  }
joined_r0x00b408e8:
  pvVar32 = local_190;
  local_160 = pvVar30;
  if (((local_170 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        plVar1 = DAT_043f1798;
        pvVar32 = local_190;
        goto joined_r0x00b404fc;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
    plVar1 = DAT_043f1798;
    pvVar32 = local_190;
  }
joined_r0x00b404fc:
  pvVar30 = local_1c0;
  local_190 = pvVar32;
  if (((local_1a0 & 1) != 0) && (pvVar32 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    DAT_043f1798 = plVar1;
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar32,0,8);
        plVar1 = DAT_043f1798;
        pvVar30 = local_1c0;
        goto joined_r0x00b40928;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar32,0,8);
    plVar1 = DAT_043f1798;
    pvVar30 = local_1c0;
  }
joined_r0x00b40928:
  DAT_043f1798 = plVar1;
  local_1c0 = pvVar30;
  if ((((byte)local_1d0 & 1) != 0) && (pvVar30 != (void *)0x0)) {
    plVar28 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = plVar1;
      plVar28 = plVar1;
    }
    uVar16 = (**(code **)(*plVar28 + 0xc0))(plVar28);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar28,pvVar30,0,8);
        goto LAB_00b40660;
      }
    }
    (**(code **)(*plVar28 + 0x18))(plVar28,pvVar30,0,8);
  }
LAB_00b40660:
  uVar26 = *(undefined8 *)(lVar29 + 0x20);
  FUN_0014fef0(uVar26);
  (**(code **)*plVar14)(plVar14,uVar26);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  pvVar30 = local_278;
  if ((local_288 & 1) == 0) {
    pvVar30 = (void *)((long)&local_288 + 1);
  }
  FUN_001522a0(uVar26,pvVar30);
  pvVar30 = local_278;
  plVar1 = DAT_043f1798;
  if (((local_288 & 1) != 0) && (local_278 != (void *)0x0)) {
    plVar14 = *(long **)(lVar5 + 0x20);
    if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
      *(long **)(lVar5 + 0x20) = DAT_043f1798;
      plVar14 = plVar1;
    }
    uVar16 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar14,pvVar30,0,8);
        return;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pvVar30,0,8);
  }
  return;
}


