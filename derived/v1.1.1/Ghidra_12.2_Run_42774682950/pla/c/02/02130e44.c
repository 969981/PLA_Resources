/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02130e44; name: FUN_02130e44
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02130e44(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12,char *param_13,long *param_14)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  undefined8 local_2e0;
  size_t local_2d8;
  void *local_2d0;
  byte local_2c8;
  undefined7 uStack_2c7;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  void *local_2b8;
  byte local_2b0;
  undefined7 uStack_2af;
  undefined1 local_2a8;
  undefined7 uStack_2a7;
  void *local_2a0;
  undefined7 local_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  byte local_288;
  undefined7 uStack_287;
  undefined1 local_280;
  undefined7 uStack_27f;
  void *local_278;
  undefined7 local_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  byte local_260;
  undefined7 uStack_25f;
  undefined1 local_258;
  undefined7 uStack_257;
  void *local_250;
  undefined7 local_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  byte local_238;
  undefined7 uStack_237;
  undefined1 local_230;
  undefined7 uStack_22f;
  void *local_228;
  undefined7 local_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined7 local_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  byte local_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
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
  undefined1 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined8 local_dc;
  undefined4 local_d4;
  long local_d0;
  undefined1 *local_c8;
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
  
  lVar9 = *param_1;
  local_2d8 = 0;
  local_2d0 = (void *)0x0;
  local_2e0 = 0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_2e0 = CONCAT71(local_2e0._1_7_,(char)((int)sVar4 << 1));
    pvVar14 = (void *)((ulong)&local_2e0 | 1);
    if (sVar4 != 0) goto LAB_02130ee0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_2e0 = uVar8 | 1;
    local_2d8 = sVar4;
    local_2d0 = pvVar14;
LAB_02130ee0:
    memcpy(pvVar14,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x120,8);
  plVar5[4] = 0;
  plVar13 = plVar5 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[6] = (long)FUN_0213cd90;
  plVar5[7] = (long)FUN_0213ce30;
  *plVar5 = (long)&PTR_FUN_0425b510;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0xc] = (long)param_3;
  plVar5[0xd] = *param_4;
  plVar5[0xe] = (long)param_5;
  plVar5[0xf] = *param_6;
  plVar5[0x10] = (long)param_7;
  plVar5[0x11] = *param_8;
  plVar5[0x12] = (long)param_9;
  plVar5[0x13] = *param_10;
  plVar5[0x14] = (long)param_11;
  plVar5[0x15] = *param_12;
  plVar5[0x16] = (long)param_13;
  lVar11 = *param_14;
  plVar5[0x1b] = 0;
  plVar5[0x1c] = (long)FUN_0213d004;
  plVar5[0x19] = (long)&DAT_0392da3c;
  plVar5[0x1a] = 0;
  plVar5[0x1d] = (long)&LAB_0213d2e4;
  plVar5[0x1e] = (long)&LAB_02134a30;
  plVar5[0x1f] = (long)&LAB_02134a40;
  plVar5[0x20] = 0;
  plVar5[0x21] = 0;
  *(undefined1 *)(plVar5 + 0x22) = 1;
  plVar5[0x17] = lVar11;
  plVar5[0x18] = (long)&DAT_038ca815;
  plVar5[0x23] = 0;
  sVar4 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_80 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_80 | 1);
    if (sVar4 != 0) goto LAB_02131074;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_80 = (byte)uVar8 | 1;
    uStack_7f = (undefined7)(uVar8 >> 8);
    local_78 = (undefined1)sVar4;
    uStack_77 = (undefined7)(sVar4 >> 8);
    local_70 = pvVar14;
LAB_02131074:
    memcpy(pvVar14,param_3,sVar4);
  }
  local_1f0 = local_70;
  uStack_1f7 = uStack_77;
  uStack_1f8 = local_78;
  local_1ff = uStack_7f;
  local_200 = local_80;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_210 = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  local_1e8 = &LAB_0213d5c0;
  puStack_1e0 = &LAB_0213d5dc;
  local_1d8 = 0xffffffff;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_238 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_238 | 1);
    if (sVar4 != 0) goto LAB_02131118;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_238 = (byte)uVar8 | 1;
    uStack_237 = (undefined7)(uVar8 >> 8);
    local_230 = (undefined1)sVar4;
    uStack_22f = (undefined7)(sVar4 >> 8);
    local_228 = pvVar14;
LAB_02131118:
    memcpy(pvVar14,param_5,sVar4);
  }
  local_1c0 = local_228;
  uStack_1c7 = uStack_22f;
  uStack_1c8 = local_230;
  local_1cf = uStack_237;
  local_1d0 = local_238;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_238 = 0;
  uStack_237 = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  uStack_219 = 0;
  uStack_218 = 0;
  local_1a8 = 0xffffffff;
  local_1b8 = &LAB_0213d5f8;
  puStack_1b0 = &LAB_0213d614;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_260 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_260 | 1);
    if (sVar4 != 0) goto LAB_021311b0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_260 = (byte)uVar8 | 1;
    uStack_25f = (undefined7)(uVar8 >> 8);
    local_258 = (undefined1)sVar4;
    uStack_257 = (undefined7)(sVar4 >> 8);
    local_250 = pvVar14;
LAB_021311b0:
    memcpy(pvVar14,param_7,sVar4);
  }
  local_190 = local_250;
  uStack_197 = uStack_257;
  uStack_198 = local_258;
  local_19f = uStack_25f;
  local_1a0 = local_260;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_260 = 0;
  uStack_25f = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = (void *)0x0;
  local_248 = 0;
  uStack_241 = 0;
  uStack_240 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_0213d630;
  puStack_180 = &LAB_0213d64c;
  sVar4 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_288 = 0;
  uStack_287 = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_288 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_288 | 1);
    if (sVar4 != 0) goto LAB_0213124c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_288 = (byte)uVar8 | 1;
    uStack_287 = (undefined7)(uVar8 >> 8);
    local_280 = (undefined1)sVar4;
    uStack_27f = (undefined7)(sVar4 >> 8);
    local_278 = pvVar14;
LAB_0213124c:
    memcpy(pvVar14,param_9,sVar4);
  }
  local_160 = local_278;
  uStack_167 = uStack_27f;
  uStack_168 = local_280;
  local_16f = uStack_287;
  local_170 = local_288;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_280 = 0;
  uStack_27f = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  uStack_287 = 0;
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_158 = &LAB_0213d668;
  puStack_150 = &LAB_0213d684;
  local_148 = 0xffffffff;
  sVar4 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2b0 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_2b0 | 1);
    if (sVar4 != 0) goto LAB_021312f0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_2b0 = (byte)uVar8 | 1;
    uStack_2af = (undefined7)(uVar8 >> 8);
    local_2a8 = (undefined1)sVar4;
    uStack_2a7 = (undefined7)(sVar4 >> 8);
    local_2a0 = pvVar14;
LAB_021312f0:
    memcpy(pvVar14,param_11,sVar4);
  }
  local_130 = local_2a0;
  uStack_137 = uStack_2a7;
  uStack_138 = local_2a8;
  local_13f = uStack_2af;
  local_140 = local_2b0;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_2b0 = 0;
  uStack_2af = 0;
  local_2a8 = 0;
  uStack_2a7 = 0;
  local_2a0 = (void *)0x0;
  local_298 = 0;
  uStack_291 = 0;
  uStack_290 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0213d6a0;
  puStack_120 = &LAB_0213d6bc;
  sVar4 = strlen(param_13);
  plVar2 = DAT_043f1798;
  local_2c8 = 0;
  uStack_2c7 = 0;
  local_2c0 = 0;
  uStack_2bf = 0;
  local_2b8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_2c8 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_2c8 | 1);
    if (sVar4 != 0) goto LAB_0213138c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar8,8);
    local_2c8 = (byte)uVar8 | 1;
    uStack_2c7 = (undefined7)(uVar8 >> 8);
    local_2c0 = (undefined1)sVar4;
    uStack_2bf = (undefined7)(sVar4 >> 8);
    local_2b8 = pvVar14;
LAB_0213138c:
    memcpy(pvVar14,param_13,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_110 = local_2c8;
  local_10f = uStack_2c7;
  local_100 = local_2b8;
  uStack_108 = local_2c0;
  uStack_107 = uStack_2bf;
  local_f8 = &LAB_0213d6d8;
  local_f0 = &LAB_0213d6f4;
  local_e0 = 6;
  local_e8 = 0xffffffff;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d4 = 0;
  local_c8 = &LAB_0213d710;
  local_c0 = &LAB_0213d758;
  local_b0 = 8;
  local_d0 = 0;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_0213d7e8;
  local_98 = &LAB_0213d7a0;
  local_88 = 0xffffffff;
  FUN_02134bd4(plVar13,&local_200,8);
  lVar6 = FUN_008cca50();
  lVar11 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar13,lVar6 + lVar11);
    if (lVar7 != 0) {
      FUN_008f2aec(&local_80,plVar13,lVar7);
      plVar2 = DAT_043f1798;
      lVar7 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar7 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar15 = *(long *)(lVar7 + 0x20), lVar15 != 0)) {
          plVar10 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar10 = plVar2;
          }
          uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar15,0,8);
              goto LAB_02131888;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,0,8);
        }
LAB_02131888:
        plVar2 = DAT_043f1798;
        plVar10 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar10 = plVar2;
        }
        uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar7,0,8);
            goto LAB_021317ec;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar7,0,8);
      }
    }
LAB_021317ec:
    lVar7 = local_a0;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0x300);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar11 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar7,0,8);
        plVar2 = DAT_043f1798;
        lVar11 = local_d0;
        goto joined_r0x021319e8;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar11 = local_d0;
  }
joined_r0x021319e8:
  pvVar14 = local_100;
  local_d0 = lVar11;
  if (((local_e0 & 1) != 0) && (lVar11 != 0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,lVar11,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_100;
        goto joined_r0x021320b4;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_100;
  }
joined_r0x021320b4:
  pvVar3 = local_130;
  local_100 = pvVar14;
  if (((local_110 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x02131b50;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x02131b50:
  pvVar14 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_160;
        goto joined_r0x021320f4;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_160;
  }
joined_r0x021320f4:
  pvVar3 = local_190;
  local_160 = pvVar14;
  if (((local_170 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x02131cb8;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x02131cb8:
  pvVar14 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_1c0;
        goto joined_r0x02132134;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_1c0;
  }
joined_r0x02132134:
  pvVar3 = local_1f0;
  local_1c0 = pvVar14;
  if (((local_1d0 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_1f0;
        goto joined_r0x02131e20;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_1f0;
  }
joined_r0x02131e20:
  DAT_043f1798 = plVar2;
  local_1f0 = pvVar3;
  if (((local_200 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar13 = plVar2;
    }
    uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar13,pvVar3,0,8);
        goto LAB_02131ed0;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
  }
LAB_02131ed0:
  uVar12 = *(undefined8 *)(lVar9 + 0x20);
  FUN_0014fef0(uVar12);
  (**(code **)*plVar5)(plVar5,uVar12);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar14 = local_2d0;
  if ((local_2e0 & 1) == 0) {
    pvVar14 = (void *)((long)&local_2e0 + 1);
  }
  FUN_001522a0(uVar12,pvVar14);
  pvVar14 = local_2d0;
  plVar2 = DAT_043f1798;
  if (((local_2e0 & 1) != 0) && (local_2d0 != (void *)0x0)) {
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    uVar8 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,pvVar14,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,pvVar14,0,8);
  }
  return;
}


