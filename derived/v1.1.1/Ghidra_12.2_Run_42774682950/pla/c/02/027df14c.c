/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027df14c; name: FUN_027df14c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_027df14c(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10,
                 char *param_11,long *param_12)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
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
  
  lVar13 = *param_1;
  local_280 = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_288 = CONCAT71(local_288._1_7_,(char)((int)sVar4 << 1));
    pvVar14 = (void *)((ulong)&local_288 | 1);
    if (sVar4 != 0) goto LAB_027df1e0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_288 = uVar8 | 1;
    local_280 = sVar4;
    local_278 = pvVar14;
LAB_027df1e0:
    memcpy(pvVar14,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x110,8);
  plVar5[4] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[6] = (long)FUN_027e1ef0;
  plVar5[7] = (long)FUN_027e1fa0;
  *plVar5 = (long)&PTR_FUN_0426caf0;
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
  lVar10 = *param_12;
  plVar5[0x21] = 0;
  plVar5[0x19] = 0;
  plVar5[0x1a] = (long)FUN_027e2174;
  plVar5[0x1d] = (long)&LAB_027e2740;
  plVar5[0x17] = (long)&DAT_0392da3c;
  plVar5[0x18] = 0;
  *(undefined1 *)(plVar5 + 0x20) = 1;
  plVar5[0x15] = lVar10;
  plVar5[0x16] = (long)&DAT_038ca815;
  plVar5[0x1b] = (long)&LAB_027e2454;
  plVar5[0x1c] = (long)&LAB_027e2730;
  plVar5[0x1e] = 0;
  plVar5[0x1f] = 0;
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
    if (sVar4 != 0) goto LAB_027df364;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_80 = (byte)uVar8 | 1;
    uStack_7f = (undefined7)(uVar8 >> 8);
    local_78 = (undefined1)sVar4;
    uStack_77 = (undefined7)(sVar4 >> 8);
    local_70 = pvVar14;
LAB_027df364:
    memcpy(pvVar14,param_3,sVar4);
  }
  local_1c0 = local_70;
  uStack_1c7 = uStack_77;
  uStack_1c8 = local_78;
  local_1cf = uStack_7f;
  local_1d0 = local_80;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_1e0 = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  local_1b8 = &LAB_027e2744;
  puStack_1b0 = &LAB_027e2760;
  local_1a8 = 0xffffffff;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_208 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_208 | 1);
    if (sVar4 != 0) goto LAB_027df408;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_208 = (byte)uVar8 | 1;
    uStack_207 = (undefined7)(uVar8 >> 8);
    local_200 = (undefined1)sVar4;
    uStack_1ff = (undefined7)(sVar4 >> 8);
    local_1f8 = pvVar14;
LAB_027df408:
    memcpy(pvVar14,param_5,sVar4);
  }
  local_190 = local_1f8;
  uStack_197 = uStack_1ff;
  uStack_198 = local_200;
  local_19f = uStack_207;
  local_1a0 = local_208;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_208 = 0;
  uStack_207 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  uStack_1e9 = 0;
  uStack_1e8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_027e277c;
  puStack_180 = &LAB_027e2798;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_230 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_230 | 1);
    if (sVar4 != 0) goto LAB_027df4a0;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_230 = (byte)uVar8 | 1;
    uStack_22f = (undefined7)(uVar8 >> 8);
    local_228 = (undefined1)sVar4;
    uStack_227 = (undefined7)(sVar4 >> 8);
    local_220 = pvVar14;
LAB_027df4a0:
    memcpy(pvVar14,param_7,sVar4);
  }
  local_160 = local_220;
  uStack_167 = uStack_227;
  uStack_168 = local_228;
  local_16f = uStack_22f;
  local_170 = local_230;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_230 = 0;
  uStack_22f = 0;
  local_228 = 0;
  uStack_227 = 0;
  local_220 = (void *)0x0;
  local_218 = 0;
  uStack_211 = 0;
  uStack_210 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_027e27b4;
  puStack_150 = &LAB_027e27d0;
  sVar4 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_258 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_258 | 1);
    if (sVar4 != 0) goto LAB_027df53c;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_258 = (byte)uVar8 | 1;
    uStack_257 = (undefined7)(uVar8 >> 8);
    local_250 = (undefined1)sVar4;
    uStack_24f = (undefined7)(sVar4 >> 8);
    local_248 = pvVar14;
LAB_027df53c:
    memcpy(pvVar14,param_9,sVar4);
  }
  local_130 = local_248;
  uStack_137 = uStack_24f;
  uStack_138 = local_250;
  local_13f = uStack_257;
  local_140 = local_258;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_258 = 0;
  uStack_257 = 0;
  local_250 = 0;
  uStack_24f = 0;
  local_248 = (void *)0x0;
  local_240 = 0;
  uStack_239 = 0;
  uStack_238 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_027e27ec;
  puStack_120 = &LAB_027e2808;
  sVar4 = strlen(param_11);
  plVar2 = DAT_043f1798;
  local_270 = 0;
  uStack_26f = 0;
  local_268 = 0;
  uStack_267 = 0;
  local_260 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_270 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_270 | 1);
    if (sVar4 != 0) goto LAB_027df5dc;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_270 = (byte)uVar8 | 1;
    uStack_26f = (undefined7)(uVar8 >> 8);
    local_268 = (undefined1)sVar4;
    uStack_267 = (undefined7)(sVar4 >> 8);
    local_260 = pvVar14;
LAB_027df5dc:
    memcpy(pvVar14,param_11,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_110 = local_270;
  local_10f = uStack_26f;
  local_e8 = 0xffffffff;
  uStack_108 = local_268;
  uStack_107 = uStack_267;
  local_100 = local_260;
  local_f8 = &LAB_027e2824;
  puStack_f0 = &LAB_027e2840;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_027e285c;
  local_c0 = &LAB_027e28a4;
  local_d4 = 0;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_90 = &LAB_027e2934;
  local_98 = &LAB_027e28ec;
  local_88 = 0xffffffff;
  FUN_027e297c(plVar12,&local_1d0,7);
  lVar6 = FUN_008cca50();
  lVar10 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar12,lVar6 + lVar10);
    if (lVar7 != 0) {
      FUN_008f2aec(&local_80,plVar12,lVar7);
      plVar2 = DAT_043f1798;
      lVar7 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar7 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar15 = *(long *)(lVar7 + 0x20), lVar15 != 0)) {
          plVar9 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar9,lVar15,0,8);
              goto LAB_027dfa08;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar15,0,8);
        }
LAB_027dfa08:
        plVar2 = DAT_043f1798;
        plVar9 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar9 = plVar2;
        }
        uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar9,lVar7,0,8);
            goto LAB_027df9c0;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
      }
    }
LAB_027df9c0:
    lVar7 = local_a0;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x300);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar10 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar7,0,8);
        plVar2 = DAT_043f1798;
        lVar10 = local_d0;
        goto joined_r0x027dfb50;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar10 = local_d0;
  }
joined_r0x027dfb50:
  pvVar14 = local_100;
  local_d0 = lVar10;
  if (((local_e0 & 1) != 0) && (lVar10 != 0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,lVar10,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_100;
        goto joined_r0x027e01c0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_100;
  }
joined_r0x027e01c0:
  pvVar3 = local_130;
  local_100 = pvVar14;
  if (((local_110 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x027dfcb8;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x027dfcb8:
  pvVar14 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_160;
        goto joined_r0x027e0200;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_160;
  }
joined_r0x027e0200:
  pvVar3 = local_190;
  local_160 = pvVar14;
  if (((local_170 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x027dfe20;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x027dfe20:
  pvVar14 = local_1c0;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_1c0;
        goto joined_r0x027e0240;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_1c0;
  }
joined_r0x027e0240:
  DAT_043f1798 = plVar2;
  local_1c0 = pvVar14;
  if (((local_1d0 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar12 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar12 = plVar2;
    }
    uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar12,pvVar14,0,8);
        goto LAB_027dff84;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar14,0,8);
  }
LAB_027dff84:
  uVar11 = *(undefined8 *)(lVar13 + 0x20);
  FUN_0014fef0(uVar11);
  (**(code **)*plVar5)(plVar5,uVar11);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar14 = local_278;
  if ((local_288 & 1) == 0) {
    pvVar14 = (void *)((long)&local_288 + 1);
  }
  FUN_001522a0(uVar11,pvVar14);
  pvVar14 = local_278;
  plVar2 = DAT_043f1798;
  if (((local_288 & 1) != 0) && (local_278 != (void *)0x0)) {
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


