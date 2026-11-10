/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02314450; name: FUN_02314450
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02314450(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
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
  size_t sVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  void *pvVar21;
  undefined8 local_200;
  size_t local_1f8;
  void *local_1f0;
  byte local_1e8;
  undefined7 uStack_1e7;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  void *local_1d8;
  byte local_1d0;
  undefined7 uStack_1cf;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  void *local_1c0;
  undefined7 local_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
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
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  void *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
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
  
  lVar17 = *param_1;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = (void *)0x0;
  sVar9 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar9 < 0x17) {
    local_200 = CONCAT71(local_200._1_7_,(char)((int)sVar9 << 1));
    pvVar21 = (void *)((ulong)&local_200 | 1);
    if (sVar9 != 0) goto LAB_023144e0;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar13,8);
    local_200 = uVar13 | 1;
    local_1f8 = sVar9;
    local_1f0 = pvVar21;
LAB_023144e0:
    memcpy(pvVar21,param_2,sVar9);
  }
  *(undefined1 *)((long)pvVar21 + sVar9) = 0;
  plVar2 = DAT_043f1798;
  plVar10 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar10 = plVar2;
  }
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x118,8);
  plVar10[4] = 0;
  plVar18 = plVar10 + 1;
  *plVar18 = 0;
  plVar10[6] = (long)FUN_0231d3a0;
  plVar10[7] = (long)FUN_0231d450;
  *(undefined4 *)(plVar10 + 5) = 0x3f800000;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[10] = 0;
  *(undefined1 *)(plVar10 + 0xb) = 0;
  *plVar10 = (long)&PTR_FUN_0425bbc8;
  plVar10[0xc] = (long)param_3;
  plVar10[8] = 0;
  plVar10[9] = 0;
  lVar20 = param_4[1];
  plVar10[0xd] = *param_4;
  plVar10[0xe] = lVar20;
  plVar10[0xf] = (long)param_5;
  lVar20 = param_6[1];
  plVar10[0x10] = *param_6;
  plVar10[0x11] = lVar20;
  plVar10[0x12] = (long)param_7;
  lVar20 = param_8[1];
  plVar10[0x13] = *param_8;
  plVar10[0x14] = lVar20;
  plVar10[0x15] = (long)param_9;
  lVar20 = *param_10;
  lVar11 = param_10[1];
  plVar10[0x22] = 0;
  plVar10[0x20] = 0;
  *(undefined1 *)(plVar10 + 0x21) = 0;
  plVar10[0x16] = lVar20;
  plVar10[0x17] = lVar11;
  plVar10[0x1e] = (long)&LAB_02315de0;
  plVar10[0x1f] = 0;
  plVar10[0x18] = (long)&DAT_0392da3c;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = (long)FUN_0231d5e0;
  plVar10[0x1c] = (long)&LAB_0231d8c0;
  plVar10[0x1d] = (long)&LAB_02315dd0;
  sVar9 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_80 = (byte)((int)sVar9 << 1);
    pvVar21 = (void *)((ulong)&local_80 | 1);
    if (sVar9 != 0) goto LAB_02314644;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar13,8);
    local_80 = (byte)uVar13 | 1;
    uStack_7f = (undefined7)(uVar13 >> 8);
    local_78 = (undefined1)sVar9;
    uStack_77 = (undefined7)(sVar9 >> 8);
    local_70 = pvVar21;
LAB_02314644:
    memcpy(pvVar21,param_3,sVar9);
  }
  local_160 = local_70;
  uStack_167 = uStack_77;
  uStack_168 = local_78;
  local_16f = uStack_7f;
  local_170 = local_80;
  *(undefined1 *)((long)pvVar21 + sVar9) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_180 = 0;
  uStack_179 = 0;
  uStack_178 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_0231db9c;
  puStack_150 = &LAB_0231dbe4;
  sVar9 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_1a8 = (byte)((int)sVar9 << 1);
    pvVar21 = (void *)((ulong)&local_1a8 | 1);
    if (sVar9 != 0) goto LAB_023146e4;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar13,8);
    local_1a8 = (byte)uVar13 | 1;
    uStack_1a7 = (undefined7)(uVar13 >> 8);
    local_1a0 = (undefined1)sVar9;
    uStack_19f = (undefined7)(sVar9 >> 8);
    local_198 = pvVar21;
LAB_023146e4:
    memcpy(pvVar21,param_5,sVar9);
  }
  local_130 = local_198;
  uStack_137 = uStack_19f;
  uStack_138 = local_1a0;
  local_13f = uStack_1a7;
  local_140 = local_1a8;
  *(undefined1 *)((long)pvVar21 + sVar9) = 0;
  local_1a8 = 0;
  uStack_1a7 = 0;
  local_1a0 = 0;
  uStack_19f = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  uStack_189 = 0;
  uStack_188 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0231dc2c;
  puStack_120 = &LAB_0231dc74;
  sVar9 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = 0;
  uStack_1c7 = 0;
  local_1c0 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_1d0 = (byte)((int)sVar9 << 1);
    pvVar21 = (void *)((ulong)&local_1d0 | 1);
    if (sVar9 != 0) goto LAB_0231477c;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar13,8);
    local_1d0 = (byte)uVar13 | 1;
    uStack_1cf = (undefined7)(uVar13 >> 8);
    local_1c8 = (undefined1)sVar9;
    uStack_1c7 = (undefined7)(sVar9 >> 8);
    local_1c0 = pvVar21;
LAB_0231477c:
    memcpy(pvVar21,param_7,sVar9);
  }
  local_100 = local_1c0;
  uStack_107 = uStack_1c7;
  uStack_108 = local_1c8;
  local_10f = uStack_1cf;
  local_110 = local_1d0;
  *(undefined1 *)((long)pvVar21 + sVar9) = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = 0;
  uStack_1c7 = 0;
  local_1c0 = (void *)0x0;
  local_1b8 = 0;
  uStack_1b1 = 0;
  uStack_1b0 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0231dcbc;
  puStack_f0 = &LAB_0231dd04;
  sVar9 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_1e8 = 0;
  uStack_1e7 = 0;
  local_1e0 = 0;
  uStack_1df = 0;
  local_1d8 = (void *)0x0;
  if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    local_1e8 = (byte)((int)sVar9 << 1);
    pvVar21 = (void *)((ulong)&local_1e8 | 1);
    if (sVar9 != 0) goto LAB_02314814;
  }
  else {
    uVar13 = sVar9 + 0x10 & 0xfffffffffffffff0;
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar2;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar13,8);
    local_1e8 = (byte)uVar13 | 1;
    uStack_1e7 = (undefined7)(uVar13 >> 8);
    local_1e0 = (undefined1)sVar9;
    uStack_1df = (undefined7)(sVar9 >> 8);
    local_1d8 = pvVar21;
LAB_02314814:
    memcpy(pvVar21,param_9,sVar9);
  }
  *(undefined1 *)((long)pvVar21 + sVar9) = 0;
  local_e0 = local_1e8;
  local_df = uStack_1e7;
  uStack_d8 = local_1e0;
  uStack_d7 = uStack_1df;
  local_d0 = local_1d8;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_0231dd4c;
  puStack_c0 = &LAB_0231dd94;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0231de24;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0231dddc;
  FUN_02315fe4(plVar18,&local_170,5);
  lVar11 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar12 = FUN_008e8c90(plVar18,lVar11 + lVar20);
    if (lVar12 != 0) {
      FUN_008f2aec(&local_80,plVar18,lVar12);
      plVar2 = DAT_043f1798;
      lVar12 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar12 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) &&
           (lVar19 = *(long *)(lVar12 + 0x20), lVar19 != 0)) {
          plVar14 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar14 = plVar2;
          }
          uVar13 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar19,0,8);
              goto LAB_02314b80;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar19,0,8);
        }
LAB_02314b80:
        plVar2 = DAT_043f1798;
        plVar14 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar14 = plVar2;
        }
        uVar13 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar13 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar14,lVar12,0,8);
            goto LAB_02314b38;
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,0,8);
      }
    }
LAB_02314b38:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar15 = (char *)plVar10[0xc];
  sVar9 = strlen(pcVar15);
  iVar4 = FUN_008f2c60(sVar9,pcVar15);
  pcVar15 = (char *)plVar10[0xf];
  sVar9 = strlen(pcVar15);
  iVar5 = FUN_008f2c60(sVar9,pcVar15);
  pcVar15 = (char *)plVar10[0x12];
  sVar9 = strlen(pcVar15);
  iVar6 = FUN_008f2c60(sVar9,pcVar15);
  pcVar15 = (char *)plVar10[0x15];
  sVar9 = strlen(pcVar15);
  iVar7 = FUN_008f2c60(sVar9,pcVar15);
  pcVar15 = (char *)plVar10[0x18];
  sVar9 = strlen(pcVar15);
  iVar8 = FUN_008f2c60(sVar9,pcVar15);
  lVar20 = local_a0;
  *(bool *)(plVar10 + 0xb) =
       (((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0) || iVar8 != 0;
  plVar2 = DAT_043f1798;
  pvVar21 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar18 = plVar2;
    }
    uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,lVar20,0,8);
        plVar2 = DAT_043f1798;
        pvVar21 = local_d0;
        goto joined_r0x02314d50;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,lVar20,0,8);
    plVar2 = DAT_043f1798;
    pvVar21 = local_d0;
  }
joined_r0x02314d50:
  pvVar3 = local_100;
  local_d0 = pvVar21;
  if (((local_e0 & 1) != 0) && (pvVar21 != (void *)0x0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar18 = plVar2;
    }
    uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,pvVar21,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_100;
        goto joined_r0x02315260;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pvVar21,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_100;
  }
joined_r0x02315260:
  pvVar21 = local_130;
  local_100 = pvVar3;
  if (((local_110 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar18 = plVar2;
    }
    uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar21 = local_130;
        goto joined_r0x02314eb8;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar21 = local_130;
  }
joined_r0x02314eb8:
  pvVar3 = local_160;
  local_130 = pvVar21;
  if (((local_140 & 1) != 0) && (pvVar21 != (void *)0x0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar18 = plVar2;
    }
    uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,pvVar21,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_160;
        goto joined_r0x023152a0;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pvVar21,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_160;
  }
joined_r0x023152a0:
  DAT_043f1798 = plVar2;
  local_160 = pvVar3;
  if (((local_170 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar18 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar18 = plVar2;
    }
    uVar13 = (**(code **)(*plVar18 + 0xc0))(plVar18);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar18,pvVar3,0,8);
        goto LAB_0231501c;
      }
    }
    (**(code **)(*plVar18 + 0x18))(plVar18,pvVar3,0,8);
  }
LAB_0231501c:
  uVar16 = *(undefined8 *)(lVar17 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar10)(plVar10,uVar16);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  pvVar21 = local_1f0;
  if ((local_200 & 1) == 0) {
    pvVar21 = (void *)((long)&local_200 + 1);
  }
  FUN_001522a0(uVar16,pvVar21);
  pvVar21 = local_1f0;
  plVar2 = DAT_043f1798;
  if (((local_200 & 1) != 0) && (local_1f0 != (void *)0x0)) {
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    uVar13 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar13 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar10,pvVar21,0,8);
        return;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pvVar21,0,8);
  }
  return;
}


