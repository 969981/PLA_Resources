/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024a0468; name: FUN_024a0468
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_024a0468(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

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
  long lVar14;
  void *pvVar15;
  undefined8 local_1d8;
  size_t local_1d0;
  void *local_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  void *local_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  void *local_198;
  undefined7 local_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined7 local_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
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
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar14 = *param_1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_1d8 = CONCAT71(local_1d8._1_7_,(char)((int)sVar4 << 1));
    pvVar15 = (void *)((ulong)&local_1d8 | 1);
    if (sVar4 != 0) goto LAB_024a04e8;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_1d8 = uVar8 | 1;
    local_1d0 = sVar4;
    local_1c8 = pvVar15;
LAB_024a04e8:
    memcpy(pvVar15,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xf0,8);
  plVar5[4] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[10] = 0;
  plVar5[6] = (long)FUN_024c6690;
  plVar5[7] = (long)FUN_024c6730;
  *plVar5 = (long)&PTR_FUN_0425c278;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0xc] = (long)param_3;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[0xd] = *param_4;
  plVar5[0xe] = (long)param_5;
  plVar5[0xf] = *param_6;
  plVar5[0x10] = (long)param_7;
  lVar10 = *param_8;
  plVar5[0x1d] = 0;
  plVar5[0x13] = (long)&DAT_0392da3c;
  plVar5[0x14] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x11] = lVar10;
  plVar5[0x12] = (long)&DAT_038ca815;
  plVar5[0x15] = 0;
  plVar5[0x16] = (long)FUN_024c6904;
  plVar5[0x17] = (long)&LAB_024c6be4;
  plVar5[0x18] = (long)&LAB_024a3c20;
  plVar5[0x19] = (long)&LAB_024a3c30;
  *(undefined1 *)(plVar5 + 0x1c) = 1;
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
    pvVar15 = (void *)((ulong)&local_80 | 1);
    if (sVar4 != 0) goto LAB_024a0640;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_80 = (byte)uVar8 | 1;
    uStack_7f = (undefined7)(uVar8 >> 8);
    local_78 = (undefined1)sVar4;
    uStack_77 = (undefined7)(sVar4 >> 8);
    local_70 = pvVar15;
LAB_024a0640:
    memcpy(pvVar15,param_3,sVar4);
  }
  local_160 = local_70;
  uStack_167 = uStack_77;
  uStack_168 = local_78;
  local_16f = uStack_7f;
  local_170 = local_80;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_024c6ec0;
  puStack_150 = &LAB_024c6edc;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_1a8 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_1a8 | 1);
    if (sVar4 != 0) goto LAB_024a06e4;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_1a8 = (byte)uVar8 | 1;
    uStack_1a7 = (undefined7)(uVar8 >> 8);
    local_1a0 = (undefined1)sVar4;
    uStack_19f = (undefined7)(sVar4 >> 8);
    local_198 = pvVar15;
LAB_024a06e4:
    memcpy(pvVar15,param_5,sVar4);
  }
  local_130 = local_198;
  uStack_137 = uStack_19f;
  uStack_138 = local_1a0;
  local_13f = uStack_1a7;
  local_140 = local_1a8;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_024c6ef8;
  puStack_120 = &LAB_024c6f14;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_1c0 = 0;
  uStack_1bf = 0;
  local_1b8 = 0;
  uStack_1b7 = 0;
  local_1b0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_1c0 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_1c0 | 1);
    if (sVar4 != 0) goto LAB_024a0780;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_1c0 = (byte)uVar8 | 1;
    uStack_1bf = (undefined7)(uVar8 >> 8);
    local_1b8 = (undefined1)sVar4;
    uStack_1b7 = (undefined7)(sVar4 >> 8);
    local_1b0 = pvVar15;
LAB_024a0780:
    memcpy(pvVar15,param_7,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_110 = local_1c0;
  local_10f = uStack_1bf;
  uStack_108 = local_1b8;
  uStack_107 = uStack_1b7;
  local_100 = local_1b0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_024c6f30;
  puStack_f0 = &LAB_024c6f4c;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_024c6fb0;
  local_d4 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_024c6f68;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_024c7040;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_024c6ff8;
  FUN_024a3fc8(plVar12,&local_170,5);
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
           (lVar13 = *(long *)(lVar7 + 0x20), lVar13 != 0)) {
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
              FUN_02bcc824(plVar9,lVar13,0,8);
              goto LAB_024a0ab4;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,0,8);
        }
LAB_024a0ab4:
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
            goto LAB_024a0a6c;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
      }
    }
LAB_024a0a6c:
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
        goto joined_r0x024a0bf4;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar10 = local_d0;
  }
joined_r0x024a0bf4:
  pvVar15 = local_100;
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
        pvVar15 = local_100;
        goto joined_r0x024a10f0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_100;
  }
joined_r0x024a10f0:
  pvVar3 = local_130;
  local_100 = pvVar15;
  if (((local_110 & 1) != 0) && (pvVar15 != (void *)0x0)) {
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
        FUN_02bcc824(plVar12,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x024a0d5c;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x024a0d5c:
  pvVar15 = local_160;
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
        pvVar15 = local_160;
        goto joined_r0x024a1130;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_160;
  }
joined_r0x024a1130:
  DAT_043f1798 = plVar2;
  local_160 = pvVar15;
  if (((local_170 & 1) != 0) && (pvVar15 != (void *)0x0)) {
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
        FUN_02bcc824(plVar12,pvVar15,0,8);
        goto LAB_024a0ec0;
      }
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,pvVar15,0,8);
  }
LAB_024a0ec0:
  uVar11 = *(undefined8 *)(lVar14 + 0x20);
  FUN_0014fef0(uVar11);
  (**(code **)*plVar5)(plVar5,uVar11);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar15 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar15 = (void *)((long)&local_1d8 + 1);
  }
  FUN_001522a0(uVar11,pvVar15);
  pvVar15 = local_1c8;
  plVar2 = DAT_043f1798;
  if (((local_1d8 & 1) != 0) && (local_1c8 != (void *)0x0)) {
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
        FUN_02bcc824(plVar5,pvVar15,0,8);
        return;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,pvVar15,0,8);
  }
  return;
}


