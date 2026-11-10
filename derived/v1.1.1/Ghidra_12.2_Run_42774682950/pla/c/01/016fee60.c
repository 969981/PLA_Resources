/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016fee60; name: FUN_016fee60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016fee60(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
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
  byte local_1d0;
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
  byte local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar20 = *param_1;
  local_280 = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  sVar11 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar11 < 0x17) {
    local_288 = CONCAT71(local_288._1_7_,(char)((int)sVar11 << 1));
    pvVar21 = (void *)((ulong)&local_288 | 1);
    if (sVar11 != 0) goto LAB_016feef0;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar12 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar12 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,8);
    local_288 = uVar15 | 1;
    local_280 = sVar11;
    local_278 = pvVar21;
LAB_016feef0:
    memcpy(pvVar21,param_2,sVar11);
  }
  *(undefined1 *)((long)pvVar21 + sVar11) = 0;
  plVar2 = DAT_043f1798;
  plVar12 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar12 = plVar2;
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x138,8);
  plVar12[4] = 0;
  plVar19 = plVar12 + 1;
  *plVar19 = 0;
  *(undefined4 *)(plVar12 + 5) = 0x3f800000;
  plVar12[10] = 0;
  plVar12[6] = (long)FUN_01708f80;
  plVar12[7] = (long)FUN_01709030;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *(undefined1 *)(plVar12 + 0xb) = 0;
  *plVar12 = (long)&PTR_FUN_04224ee8;
  plVar12[0xc] = (long)param_3;
  plVar12[8] = 0;
  plVar12[9] = 0;
  lVar23 = param_4[1];
  plVar12[0xd] = *param_4;
  plVar12[0xe] = lVar23;
  plVar12[0xf] = (long)param_5;
  lVar23 = param_6[1];
  plVar12[0x10] = *param_6;
  plVar12[0x11] = lVar23;
  plVar12[0x12] = (long)param_7;
  lVar23 = param_8[1];
  plVar12[0x13] = *param_8;
  plVar12[0x14] = lVar23;
  plVar12[0x15] = (long)param_9;
  lVar23 = param_10[1];
  plVar12[0x16] = *param_10;
  plVar12[0x17] = lVar23;
  plVar12[0x18] = (long)param_11;
  lVar23 = *param_12;
  lVar13 = param_12[1];
  plVar12[0x26] = 0;
  *(undefined1 *)(plVar12 + 0x25) = 0;
  plVar12[0x1b] = (long)&DAT_038ca815;
  plVar12[0x1c] = (long)&DAT_0392da3c;
  plVar12[0x1f] = (long)FUN_017091c0;
  plVar12[0x20] = (long)&LAB_017094a0;
  plVar12[0x19] = lVar23;
  plVar12[0x1a] = lVar13;
  plVar12[0x1d] = 0;
  plVar12[0x1e] = 0;
  plVar12[0x23] = 0;
  plVar12[0x24] = 0;
  plVar12[0x21] = (long)&LAB_01700bb0;
  plVar12[0x22] = (long)&LAB_01700bc0;
  sVar11 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_80 = (byte)((int)sVar11 << 1);
    pvVar21 = (void *)((ulong)&local_80 | 1);
    if (sVar11 != 0) goto LAB_016ff074;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar16 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar15,8);
    local_80 = (byte)uVar15 | 1;
    uStack_7f = (undefined7)(uVar15 >> 8);
    local_78 = (undefined1)sVar11;
    uStack_77 = (undefined7)(sVar11 >> 8);
    local_70 = pvVar21;
LAB_016ff074:
    memcpy(pvVar21,param_3,sVar11);
  }
  local_1c0 = local_70;
  uStack_1c7 = uStack_77;
  uStack_1c8 = local_78;
  local_1cf = uStack_7f;
  local_1d0 = local_80;
  *(undefined1 *)((long)pvVar21 + sVar11) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_1e0 = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  local_1b8 = &LAB_0170977c;
  puStack_1b0 = &LAB_017097c4;
  local_1a8 = 0xffffffff;
  sVar11 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_208 = (byte)((int)sVar11 << 1);
    pvVar21 = (void *)((ulong)&local_208 | 1);
    if (sVar11 != 0) goto LAB_016ff118;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar16 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar15,8);
    local_208 = (byte)uVar15 | 1;
    uStack_207 = (undefined7)(uVar15 >> 8);
    local_200 = (undefined1)sVar11;
    uStack_1ff = (undefined7)(sVar11 >> 8);
    local_1f8 = pvVar21;
LAB_016ff118:
    memcpy(pvVar21,param_5,sVar11);
  }
  local_190 = local_1f8;
  uStack_197 = uStack_1ff;
  uStack_198 = local_200;
  local_19f = uStack_207;
  local_1a0 = local_208;
  *(undefined1 *)((long)pvVar21 + sVar11) = 0;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  uStack_1e9 = 0;
  uStack_1e8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_0170980c;
  puStack_180 = &LAB_01709854;
  sVar11 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_230 = (byte)((int)sVar11 << 1);
    pvVar21 = (void *)((ulong)&local_230 | 1);
    if (sVar11 != 0) goto LAB_016ff1b0;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar16 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar15,8);
    local_230 = (byte)uVar15 | 1;
    uStack_22f = (undefined7)(uVar15 >> 8);
    local_228 = (undefined1)sVar11;
    uStack_227 = (undefined7)(sVar11 >> 8);
    local_220 = pvVar21;
LAB_016ff1b0:
    memcpy(pvVar21,param_7,sVar11);
  }
  local_160 = local_220;
  uStack_167 = uStack_227;
  uStack_168 = local_228;
  local_16f = uStack_22f;
  local_170 = local_230;
  *(undefined1 *)((long)pvVar21 + sVar11) = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  local_218 = 0;
  uStack_211 = 0;
  uStack_210 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_0170989c;
  puStack_150 = &LAB_017098e4;
  sVar11 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_258 = (byte)((int)sVar11 << 1);
    pvVar21 = (void *)((ulong)&local_258 | 1);
    if (sVar11 != 0) goto LAB_016ff24c;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar16 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar15,8);
    local_258 = (byte)uVar15 | 1;
    uStack_257 = (undefined7)(uVar15 >> 8);
    local_250 = (undefined1)sVar11;
    uStack_24f = (undefined7)(sVar11 >> 8);
    local_248 = pvVar21;
LAB_016ff24c:
    memcpy(pvVar21,param_9,sVar11);
  }
  local_130 = local_248;
  uStack_137 = uStack_24f;
  uStack_138 = local_250;
  local_13f = uStack_257;
  local_140 = local_258;
  *(undefined1 *)((long)pvVar21 + sVar11) = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0170992c;
  puStack_120 = &LAB_01709974;
  sVar11 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_270 = 0;
  uStack_26f = 0;
  local_268 = 0;
  uStack_267 = 0;
  local_260 = (void *)0x0;
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_270 = (byte)((int)sVar11 << 1);
    pvVar21 = (void *)((ulong)&local_270 | 1);
    if (sVar11 != 0) goto LAB_016ff2ec;
  }
  else {
    uVar15 = sVar11 + 0x10 & 0xfffffffffffffff0;
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar16 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar15,8);
    local_270 = (byte)uVar15 | 1;
    uStack_26f = (undefined7)(uVar15 >> 8);
    local_268 = (undefined1)sVar11;
    uStack_267 = (undefined7)(sVar11 >> 8);
    local_260 = pvVar21;
LAB_016ff2ec:
    memcpy(pvVar21,param_11,sVar11);
  }
  *(undefined1 *)((long)pvVar21 + sVar11) = 0;
  local_110 = local_270;
  local_10f = uStack_26f;
  local_e8 = 0xffffffff;
  uStack_108 = local_268;
  uStack_107 = uStack_267;
  local_100 = local_260;
  local_f8 = &LAB_017099bc;
  puStack_f0 = &LAB_01709a04;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_01709a4c;
  local_c0 = &LAB_01709a94;
  local_d4 = 0;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_01709b24;
  local_98 = &LAB_01709adc;
  local_88 = 0xffffffff;
  FUN_01701044(plVar19,&local_1d0,7);
  lVar13 = FUN_008cca50();
  lVar23 = 0;
  do {
    lVar14 = FUN_008e8c90(plVar19,lVar13 + lVar23);
    if (lVar14 != 0) {
      FUN_008f2aec(&local_80,plVar19,lVar14);
      plVar2 = DAT_043f1798;
      lVar14 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar14 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar14 + 0x10) & 1) != 0)) &&
           (lVar22 = *(long *)(lVar14 + 0x20), lVar22 != 0)) {
          plVar16 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar16 = plVar2;
          }
          uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
          if ((uVar15 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar16,lVar22,0,8);
              goto LAB_016ff710;
            }
          }
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar22,0,8);
        }
LAB_016ff710:
        plVar2 = DAT_043f1798;
        plVar16 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar16 = plVar2;
        }
        uVar15 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar16,lVar14,0,8);
            goto LAB_016ff6c8;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,0,8);
      }
    }
LAB_016ff6c8:
    lVar23 = lVar23 + 0x18;
  } while (lVar23 != 0x300);
  pcVar17 = (char *)plVar12[0xc];
  sVar11 = strlen(pcVar17);
  iVar4 = FUN_008f2c60(sVar11,pcVar17);
  pcVar17 = (char *)plVar12[0xf];
  sVar11 = strlen(pcVar17);
  iVar5 = FUN_008f2c60(sVar11,pcVar17);
  pcVar17 = (char *)plVar12[0x12];
  sVar11 = strlen(pcVar17);
  iVar6 = FUN_008f2c60(sVar11,pcVar17);
  pcVar17 = (char *)plVar12[0x15];
  sVar11 = strlen(pcVar17);
  iVar7 = FUN_008f2c60(sVar11,pcVar17);
  pcVar17 = (char *)plVar12[0x18];
  sVar11 = strlen(pcVar17);
  iVar8 = FUN_008f2c60(sVar11,pcVar17);
  pcVar17 = (char *)plVar12[0x1b];
  sVar11 = strlen(pcVar17);
  iVar9 = FUN_008f2c60(sVar11,pcVar17);
  pcVar17 = (char *)plVar12[0x1c];
  sVar11 = strlen(pcVar17);
  iVar10 = FUN_008f2c60(sVar11,pcVar17);
  lVar13 = local_a0;
  *(bool *)(plVar12 + 0xb) =
       (((((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) || iVar9 != 0) ||
       iVar10 != 0;
  plVar2 = DAT_043f1798;
  lVar23 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar13,0,8);
        plVar2 = DAT_043f1798;
        lVar23 = local_d0;
        goto joined_r0x016ff904;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,0,8);
    plVar2 = DAT_043f1798;
    lVar23 = local_d0;
  }
joined_r0x016ff904:
  pvVar21 = local_100;
  local_d0 = lVar23;
  if (((local_e0 & 1) != 0) && (lVar23 != 0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar23,0,8);
        plVar2 = DAT_043f1798;
        pvVar21 = local_100;
        goto joined_r0x016fff74;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar23,0,8);
    plVar2 = DAT_043f1798;
    pvVar21 = local_100;
  }
joined_r0x016fff74:
  pvVar3 = local_130;
  local_100 = pvVar21;
  if (((local_110 & 1) != 0) && (pvVar21 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar21,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x016ffa6c;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar21,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x016ffa6c:
  pvVar21 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar21 = local_160;
        goto joined_r0x016fffb4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar21 = local_160;
  }
joined_r0x016fffb4:
  pvVar3 = local_190;
  local_160 = pvVar21;
  if (((local_170 & 1) != 0) && (pvVar21 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar21,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x016ffbd4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar21,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x016ffbd4:
  pvVar21 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar21 = local_1c0;
        goto joined_r0x016ffff4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar21 = local_1c0;
  }
joined_r0x016ffff4:
  DAT_043f1798 = plVar2;
  local_1c0 = pvVar21;
  if (((local_1d0 & 1) != 0) && (pvVar21 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar15 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar21,0,8);
        goto LAB_016ffd38;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar21,0,8);
  }
LAB_016ffd38:
  uVar18 = *(undefined8 *)(lVar20 + 0x20);
  FUN_0014fef0(uVar18);
  (**(code **)*plVar12)(plVar12,uVar18);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  pvVar21 = local_278;
  if ((local_288 & 1) == 0) {
    pvVar21 = (void *)((long)&local_288 + 1);
  }
  FUN_001522a0(uVar18,pvVar21);
  pvVar21 = local_278;
  plVar2 = DAT_043f1798;
  if (((local_288 & 1) != 0) && (local_278 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar12 = plVar2;
    }
    uVar15 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar15 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar21,0,8);
        return;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar21,0,8);
  }
  return;
}


