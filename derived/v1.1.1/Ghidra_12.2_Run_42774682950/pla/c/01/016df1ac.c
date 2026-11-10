/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016df1ac; name: FUN_016df1ac
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016df1ac(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10)

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
  size_t sVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  undefined8 local_230;
  size_t local_228;
  void *local_220;
  byte local_218;
  undefined7 uStack_217;
  undefined1 local_210;
  undefined7 uStack_20f;
  void *local_208;
  byte local_200;
  undefined7 uStack_1ff;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  void *local_1f0;
  undefined7 local_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  void *local_1c8;
  undefined7 local_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined7 local_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
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
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar18 = *param_1;
  local_230 = 0;
  local_228 = 0;
  local_220 = (void *)0x0;
  sVar10 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar10 < 0x17) {
    local_230 = CONCAT71(local_230._1_7_,(char)((int)sVar10 << 1));
    pvVar22 = (void *)((ulong)&local_230 | 1);
    if (sVar10 != 0) goto LAB_016df23c;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar14,8);
    local_230 = uVar14 | 1;
    local_228 = sVar10;
    local_220 = pvVar22;
LAB_016df23c:
    memcpy(pvVar22,param_2,sVar10);
  }
  *(undefined1 *)((long)pvVar22 + sVar10) = 0;
  plVar2 = DAT_043f1798;
  plVar11 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar11 = plVar2;
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x120,8);
  plVar11[4] = 0;
  plVar19 = plVar11 + 1;
  *plVar19 = 0;
  *(undefined4 *)(plVar11 + 5) = 0x3f800000;
  plVar11[10] = 0;
  *(undefined1 *)(plVar11 + 0xb) = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  *plVar11 = (long)&PTR_FUN_04224e48;
  plVar11[0xc] = (long)param_3;
  plVar11[6] = (long)FUN_016e7620;
  plVar11[7] = (long)FUN_016e76d0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  lVar21 = param_4[1];
  plVar11[0xd] = *param_4;
  plVar11[0xe] = lVar21;
  plVar11[0xf] = (long)param_5;
  lVar21 = param_6[1];
  plVar11[0x10] = *param_6;
  plVar11[0x11] = lVar21;
  plVar11[0x12] = (long)param_7;
  lVar21 = param_8[1];
  plVar11[0x13] = *param_8;
  plVar11[0x14] = lVar21;
  plVar11[0x15] = (long)param_9;
  lVar21 = *param_10;
  lVar12 = param_10[1];
  plVar11[0x23] = 0;
  *(undefined1 *)(plVar11 + 0x22) = 0;
  plVar11[0x18] = (long)&DAT_038ca815;
  plVar11[0x19] = (long)&DAT_0392da3c;
  plVar11[0x16] = lVar21;
  plVar11[0x17] = lVar12;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x20] = 0;
  plVar11[0x21] = 0;
  plVar11[0x1c] = (long)FUN_016e7860;
  plVar11[0x1d] = (long)&LAB_016e7b40;
  plVar11[0x1e] = (long)&LAB_016e0cc0;
  plVar11[0x1f] = (long)&LAB_016e0cd0;
  sVar10 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_80 = (byte)((int)sVar10 << 1);
    pvVar22 = (void *)((ulong)&local_80 | 1);
    if (sVar10 != 0) goto LAB_016df3a8;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar14,8);
    local_80 = (byte)uVar14 | 1;
    uStack_7f = (undefined7)(uVar14 >> 8);
    local_78 = (undefined1)sVar10;
    uStack_77 = (undefined7)(sVar10 >> 8);
    local_70 = pvVar22;
LAB_016df3a8:
    memcpy(pvVar22,param_3,sVar10);
  }
  local_190 = local_70;
  uStack_197 = uStack_77;
  uStack_198 = local_78;
  local_19f = uStack_7f;
  local_1a0 = local_80;
  *(undefined1 *)((long)pvVar22 + sVar10) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_1b0 = 0;
  uStack_1a9 = 0;
  uStack_1a8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_016e7e1c;
  puStack_180 = &LAB_016e7e64;
  sVar10 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_1d8 = 0;
  uStack_1d7 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_1d8 = (byte)((int)sVar10 << 1);
    pvVar22 = (void *)((ulong)&local_1d8 | 1);
    if (sVar10 != 0) goto LAB_016df448;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar14,8);
    local_1d8 = (byte)uVar14 | 1;
    uStack_1d7 = (undefined7)(uVar14 >> 8);
    local_1d0 = (undefined1)sVar10;
    uStack_1cf = (undefined7)(sVar10 >> 8);
    local_1c8 = pvVar22;
LAB_016df448:
    memcpy(pvVar22,param_5,sVar10);
  }
  local_160 = local_1c8;
  uStack_167 = uStack_1cf;
  uStack_168 = local_1d0;
  local_16f = uStack_1d7;
  local_170 = local_1d8;
  *(undefined1 *)((long)pvVar22 + sVar10) = 0;
  local_1d8 = 0;
  uStack_1d7 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  uStack_1b9 = 0;
  uStack_1b8 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_016e7eac;
  puStack_150 = &LAB_016e7ef4;
  sVar10 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_200 = (byte)((int)sVar10 << 1);
    pvVar22 = (void *)((ulong)&local_200 | 1);
    if (sVar10 != 0) goto LAB_016df4e0;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar14,8);
    local_200 = (byte)uVar14 | 1;
    uStack_1ff = (undefined7)(uVar14 >> 8);
    local_1f8 = (undefined1)sVar10;
    uStack_1f7 = (undefined7)(sVar10 >> 8);
    local_1f0 = pvVar22;
LAB_016df4e0:
    memcpy(pvVar22,param_7,sVar10);
  }
  local_130 = local_1f0;
  uStack_137 = uStack_1f7;
  uStack_138 = local_1f8;
  local_13f = uStack_1ff;
  local_140 = local_200;
  *(undefined1 *)((long)pvVar22 + sVar10) = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = (void *)0x0;
  local_1e8 = 0;
  uStack_1e1 = 0;
  uStack_1e0 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_016e7f3c;
  puStack_120 = &LAB_016e7f84;
  sVar10 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_218 = 0;
  uStack_217 = 0;
  local_210 = 0;
  uStack_20f = 0;
  local_208 = (void *)0x0;
  if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar10 < 0x17) {
    local_218 = (byte)((int)sVar10 << 1);
    pvVar22 = (void *)((ulong)&local_218 | 1);
    if (sVar10 != 0) goto LAB_016df57c;
  }
  else {
    uVar14 = sVar10 + 0x10 & 0xfffffffffffffff0;
    plVar15 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar15 = plVar2;
    }
    pvVar22 = (void *)(**(code **)(*plVar15 + 0x10))(plVar15,uVar14,8);
    local_218 = (byte)uVar14 | 1;
    uStack_217 = (undefined7)(uVar14 >> 8);
    local_210 = (undefined1)sVar10;
    uStack_20f = (undefined7)(sVar10 >> 8);
    local_208 = pvVar22;
LAB_016df57c:
    memcpy(pvVar22,param_9,sVar10);
  }
  *(undefined1 *)((long)pvVar22 + sVar10) = 0;
  local_110 = local_218;
  local_10f = uStack_217;
  uStack_108 = local_210;
  uStack_107 = uStack_20f;
  local_100 = local_208;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_016e7fcc;
  puStack_f0 = &LAB_016e8014;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_016e80a4;
  local_d4 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_016e805c;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_016e8134;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_016e80ec;
  FUN_016e0dd4(plVar19,&local_1a0,6);
  lVar12 = FUN_008cca50();
  lVar21 = 0;
  do {
    lVar13 = FUN_008e8c90(plVar19,lVar12 + lVar21);
    if (lVar13 != 0) {
      FUN_008f2aec(&local_80,plVar19,lVar13);
      plVar2 = DAT_043f1798;
      lVar13 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar13 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar13 + 0x10) & 1) != 0)) &&
           (lVar20 = *(long *)(lVar13 + 0x20), lVar20 != 0)) {
          plVar15 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar15 = plVar2;
          }
          uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
          if ((uVar14 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar15,lVar20,0,8);
              goto LAB_016df928;
            }
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,0,8);
        }
LAB_016df928:
        plVar2 = DAT_043f1798;
        plVar15 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar15 = plVar2;
        }
        uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar15,lVar13,0,8);
            goto LAB_016df8e0;
          }
        }
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,0,8);
      }
    }
LAB_016df8e0:
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x300);
  pcVar16 = (char *)plVar11[0xc];
  sVar10 = strlen(pcVar16);
  iVar4 = FUN_008f2c60(sVar10,pcVar16);
  pcVar16 = (char *)plVar11[0xf];
  sVar10 = strlen(pcVar16);
  iVar5 = FUN_008f2c60(sVar10,pcVar16);
  pcVar16 = (char *)plVar11[0x12];
  sVar10 = strlen(pcVar16);
  iVar6 = FUN_008f2c60(sVar10,pcVar16);
  pcVar16 = (char *)plVar11[0x15];
  sVar10 = strlen(pcVar16);
  iVar7 = FUN_008f2c60(sVar10,pcVar16);
  pcVar16 = (char *)plVar11[0x18];
  sVar10 = strlen(pcVar16);
  iVar8 = FUN_008f2c60(sVar10,pcVar16);
  pcVar16 = (char *)plVar11[0x19];
  sVar10 = strlen(pcVar16);
  iVar9 = FUN_008f2c60(sVar10,pcVar16);
  lVar12 = local_a0;
  *(bool *)(plVar11 + 0xb) =
       ((((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) || iVar9 != 0;
  plVar2 = DAT_043f1798;
  lVar21 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar19 = plVar2;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar12,0,8);
        plVar2 = DAT_043f1798;
        lVar21 = local_d0;
        goto joined_r0x016dfb14;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar12,0,8);
    plVar2 = DAT_043f1798;
    lVar21 = local_d0;
  }
joined_r0x016dfb14:
  pvVar22 = local_100;
  local_d0 = lVar21;
  if (((local_e0 & 1) != 0) && (lVar21 != 0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar21,0,8);
        plVar2 = DAT_043f1798;
        pvVar22 = local_100;
        goto joined_r0x016e00d4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar21,0,8);
    plVar2 = DAT_043f1798;
    pvVar22 = local_100;
  }
joined_r0x016e00d4:
  pvVar3 = local_130;
  local_100 = pvVar22;
  if (((local_110 & 1) != 0) && (pvVar22 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar22,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x016dfc7c;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar22,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x016dfc7c:
  pvVar22 = local_160;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar22 = local_160;
        goto joined_r0x016e0114;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar22 = local_160;
  }
joined_r0x016e0114:
  pvVar3 = local_190;
  local_160 = pvVar22;
  if (((local_170 & 1) != 0) && (pvVar22 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar22,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x016dfde4;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar22,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x016dfde4:
  DAT_043f1798 = plVar2;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar19 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar19 = plVar2;
    }
    uVar14 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar3,0,8);
        goto LAB_016dfe94;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar3,0,8);
  }
LAB_016dfe94:
  uVar17 = *(undefined8 *)(lVar18 + 0x20);
  FUN_0014fef0(uVar17);
  (**(code **)*plVar11)(plVar11,uVar17);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  pvVar22 = local_220;
  if ((local_230 & 1) == 0) {
    pvVar22 = (void *)((long)&local_230 + 1);
  }
  FUN_001522a0(uVar17,pvVar22);
  pvVar22 = local_220;
  plVar2 = DAT_043f1798;
  if (((local_230 & 1) != 0) && (local_220 != (void *)0x0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar2;
    }
    uVar14 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,pvVar22,0,8);
        return;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar22,0,8);
  }
  return;
}


