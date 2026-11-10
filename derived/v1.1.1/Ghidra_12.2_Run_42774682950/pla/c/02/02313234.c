/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02313234; name: FUN_02313234
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02313234(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8,char *param_9,long *param_10)

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
  long lVar12;
  long *plVar13;
  long lVar14;
  void *pvVar15;
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
  
  lVar12 = *param_1;
  local_230 = 0;
  local_228 = 0;
  local_220 = (void *)0x0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_230 = CONCAT71(local_230._1_7_,(char)((int)sVar4 << 1));
    pvVar15 = (void *)((ulong)&local_230 | 1);
    if (sVar4 != 0) goto LAB_023132c4;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_230 = uVar8 | 1;
    local_228 = sVar4;
    local_220 = pvVar15;
LAB_023132c4:
    memcpy(pvVar15,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x100,8);
  plVar5[4] = 0;
  plVar13 = plVar5 + 1;
  *plVar13 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[10] = 0;
  plVar5[6] = (long)FUN_02315590;
  plVar5[7] = (long)FUN_02315640;
  *plVar5 = (long)&PTR_FUN_0425bba0;
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
  plVar5[0x11] = *param_8;
  plVar5[0x12] = (long)param_9;
  lVar10 = *param_10;
  plVar5[0x15] = (long)&DAT_0392da3c;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0;
  plVar5[0x18] = (long)FUN_02315814;
  plVar5[0x1c] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x13] = lVar10;
  plVar5[0x14] = (long)&DAT_038ca815;
  plVar5[0x19] = (long)&LAB_02315af4;
  plVar5[0x1a] = (long)&LAB_02315dd0;
  plVar5[0x1b] = (long)&LAB_02315de0;
  *(undefined1 *)(plVar5 + 0x1e) = 1;
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
    if (sVar4 != 0) goto LAB_0231342c;
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
LAB_0231342c:
    memcpy(pvVar15,param_3,sVar4);
  }
  local_190 = local_70;
  uStack_197 = uStack_77;
  uStack_198 = local_78;
  local_19f = uStack_7f;
  local_1a0 = local_80;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_1b0 = 0;
  uStack_1a9 = 0;
  uStack_1a8 = 0;
  local_178 = 0xffffffff;
  local_188 = &LAB_02315de4;
  puStack_180 = &LAB_02315e00;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_1d8 = 0;
  uStack_1d7 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_1d8 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_1d8 | 1);
    if (sVar4 != 0) goto LAB_023134cc;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_1d8 = (byte)uVar8 | 1;
    uStack_1d7 = (undefined7)(uVar8 >> 8);
    local_1d0 = (undefined1)sVar4;
    uStack_1cf = (undefined7)(sVar4 >> 8);
    local_1c8 = pvVar15;
LAB_023134cc:
    memcpy(pvVar15,param_5,sVar4);
  }
  local_160 = local_1c8;
  uStack_167 = uStack_1cf;
  uStack_168 = local_1d0;
  local_16f = uStack_1d7;
  local_170 = local_1d8;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_1d8 = 0;
  uStack_1d7 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  uStack_1b9 = 0;
  uStack_1b8 = 0;
  local_148 = 0xffffffff;
  local_158 = &LAB_02315e1c;
  puStack_150 = &LAB_02315e38;
  sVar4 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_200 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_200 | 1);
    if (sVar4 != 0) goto LAB_02313564;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_200 = (byte)uVar8 | 1;
    uStack_1ff = (undefined7)(uVar8 >> 8);
    local_1f8 = (undefined1)sVar4;
    uStack_1f7 = (undefined7)(sVar4 >> 8);
    local_1f0 = pvVar15;
LAB_02313564:
    memcpy(pvVar15,param_7,sVar4);
  }
  local_130 = local_1f0;
  uStack_137 = uStack_1f7;
  uStack_138 = local_1f8;
  local_13f = uStack_1ff;
  local_140 = local_200;
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_200 = 0;
  uStack_1ff = 0;
  local_1f8 = 0;
  uStack_1f7 = 0;
  local_1f0 = (void *)0x0;
  local_1e8 = 0;
  uStack_1e1 = 0;
  uStack_1e0 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_02315e54;
  puStack_120 = &LAB_02315e70;
  sVar4 = strlen(param_9);
  plVar2 = DAT_043f1798;
  local_218 = 0;
  uStack_217 = 0;
  local_210 = 0;
  uStack_20f = 0;
  local_208 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_218 = (byte)((int)sVar4 << 1);
    pvVar15 = (void *)((ulong)&local_218 | 1);
    if (sVar4 != 0) goto LAB_02313600;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_218 = (byte)uVar8 | 1;
    uStack_217 = (undefined7)(uVar8 >> 8);
    local_210 = (undefined1)sVar4;
    uStack_20f = (undefined7)(sVar4 >> 8);
    local_208 = pvVar15;
LAB_02313600:
    memcpy(pvVar15,param_9,sVar4);
  }
  *(undefined1 *)((long)pvVar15 + sVar4) = 0;
  local_110 = local_218;
  local_10f = uStack_217;
  uStack_108 = local_210;
  uStack_107 = uStack_20f;
  local_100 = local_208;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_02315e8c;
  puStack_f0 = &LAB_02315ea8;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_02315f0c;
  local_d4 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_02315ec4;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_02315f9c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_02315f54;
  FUN_02315fe4(plVar13,&local_1a0,6);
  lVar6 = FUN_008cca50();
  lVar10 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar13,lVar6 + lVar10);
    if (lVar7 != 0) {
      FUN_008f2aec(&local_80,plVar13,lVar7);
      plVar2 = DAT_043f1798;
      lVar7 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar7 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) &&
           (lVar14 = *(long *)(lVar7 + 0x20), lVar14 != 0)) {
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
              FUN_02bcc824(plVar9,lVar14,0,8);
              goto LAB_023139a8;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,0,8);
        }
LAB_023139a8:
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
            goto LAB_02313960;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
      }
    }
LAB_02313960:
    lVar7 = local_a0;
    lVar10 = lVar10 + 0x18;
  } while (lVar10 != 0x300);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar10 = local_d0;
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
        lVar10 = local_d0;
        goto joined_r0x02313afc;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar10 = local_d0;
  }
joined_r0x02313afc:
  pvVar15 = local_100;
  local_d0 = lVar10;
  if (((local_e0 & 1) != 0) && (lVar10 != 0)) {
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
        FUN_02bcc824(plVar13,lVar10,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_100;
        goto joined_r0x023140c0;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar10,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_100;
  }
joined_r0x023140c0:
  pvVar3 = local_130;
  local_100 = pvVar15;
  if (((local_110 & 1) != 0) && (pvVar15 != (void *)0x0)) {
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
        FUN_02bcc824(plVar13,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x02313c64;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x02313c64:
  pvVar15 = local_160;
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
        pvVar15 = local_160;
        goto joined_r0x02314100;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_160;
  }
joined_r0x02314100:
  pvVar3 = local_190;
  local_160 = pvVar15;
  if (((local_170 & 1) != 0) && (pvVar15 != (void *)0x0)) {
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
        FUN_02bcc824(plVar13,pvVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_190;
        goto joined_r0x02313dcc;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_190;
  }
joined_r0x02313dcc:
  DAT_043f1798 = plVar2;
  local_190 = pvVar3;
  if (((local_1a0 & 1) != 0) && (pvVar3 != (void *)0x0)) {
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
        goto LAB_02313e7c;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,pvVar3,0,8);
  }
LAB_02313e7c:
  uVar11 = *(undefined8 *)(lVar12 + 0x20);
  FUN_0014fef0(uVar11);
  (**(code **)*plVar5)(plVar5,uVar11);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar15 = local_220;
  if ((local_230 & 1) == 0) {
    pvVar15 = (void *)((long)&local_230 + 1);
  }
  FUN_001522a0(uVar11,pvVar15);
  pvVar15 = local_220;
  plVar2 = DAT_043f1798;
  if (((local_230 & 1) != 0) && (local_220 != (void *)0x0)) {
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


