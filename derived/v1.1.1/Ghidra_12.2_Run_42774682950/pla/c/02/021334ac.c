/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021334ac; name: FUN_021334ac
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_021334ac(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6)

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
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  undefined8 local_180;
  size_t local_178;
  void *local_170;
  byte local_168;
  undefined7 uStack_167;
  undefined1 local_160;
  undefined7 uStack_15f;
  void *local_158;
  undefined7 local_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
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
  
  lVar13 = *param_1;
  local_180 = 0;
  local_178 = 0;
  local_170 = (void *)0x0;
  sVar4 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar4 < 0x17) {
    local_180 = CONCAT71(local_180._1_7_,(char)((int)sVar4 << 1));
    pvVar14 = (void *)((ulong)&local_180 | 1);
    if (sVar4 != 0) goto LAB_02133524;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,8);
    local_180 = uVar8 | 1;
    local_178 = sVar4;
    local_170 = pvVar14;
LAB_02133524:
    memcpy(pvVar14,param_2,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xe8,8);
  plVar5[4] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar11 = plVar5 + 1;
  *plVar11 = 0;
  *(undefined4 *)(plVar5 + 5) = 0x3f800000;
  plVar5[6] = (long)FUN_0214a890;
  plVar5[7] = (long)FUN_0214a930;
  plVar5[10] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  *plVar5 = (long)&PTR_FUN_0425b560;
  plVar5[0xc] = (long)param_3;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[0xd] = *param_4;
  plVar5[0xe] = (long)param_5;
  lVar12 = *param_6;
  lVar6 = param_6[1];
  plVar5[0x1c] = 0;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0xf] = lVar12;
  plVar5[0x10] = lVar6;
  plVar5[0x11] = (long)&DAT_038ca815;
  plVar5[0x12] = (long)&DAT_0392da3c;
  plVar5[0x15] = (long)FUN_0214aac0;
  plVar5[0x16] = (long)&LAB_0214ada0;
  plVar5[0x17] = (long)&LAB_02134a30;
  plVar5[0x18] = (long)&LAB_02134a40;
  *(undefined1 *)(plVar5 + 0x1b) = 1;
  plVar5[0x19] = 0;
  plVar5[0x1a] = 0;
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
    if (sVar4 != 0) goto LAB_0213366c;
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
LAB_0213366c:
    memcpy(pvVar14,param_3,sVar4);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_0214b07c;
  puStack_120 = &LAB_0214b098;
  sVar4 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_168 = 0;
  uStack_167 = 0;
  local_160 = 0;
  uStack_15f = 0;
  local_158 = (void *)0x0;
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_168 = (byte)((int)sVar4 << 1);
    pvVar14 = (void *)((ulong)&local_168 | 1);
    if (sVar4 != 0) goto LAB_02133714;
  }
  else {
    uVar8 = sVar4 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar14 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,8);
    local_168 = (byte)uVar8 | 1;
    uStack_167 = (undefined7)(uVar8 >> 8);
    local_160 = (undefined1)sVar4;
    uStack_15f = (undefined7)(sVar4 >> 8);
    local_158 = pvVar14;
LAB_02133714:
    memcpy(pvVar14,param_5,sVar4);
  }
  *(undefined1 *)((long)pvVar14 + sVar4) = 0;
  local_110 = local_168;
  local_10f = uStack_167;
  local_e8 = 0xffffffff;
  uStack_108 = local_160;
  uStack_107 = uStack_15f;
  local_100 = local_158;
  local_f8 = &LAB_0214b0b4;
  puStack_f0 = &LAB_0214b0fc;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_0214b18c;
  local_d4 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_0214b144;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0214b21c;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0214b1d4;
  FUN_02134bd4(plVar11,&local_140,4);
  lVar6 = FUN_008cca50();
  lVar12 = 0;
  do {
    lVar7 = FUN_008e8c90(plVar11,lVar6 + lVar12);
    if (lVar7 != 0) {
      FUN_008f2aec(&local_80,plVar11,lVar7);
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
              goto LAB_02133a0c;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar15,0,8);
        }
LAB_02133a0c:
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
            goto LAB_02133970;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,0,8);
      }
    }
LAB_02133970:
    lVar7 = local_a0;
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x300);
  *(undefined1 *)(plVar5 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar12 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar2;
    }
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,lVar7,0,8);
        plVar2 = DAT_043f1798;
        lVar12 = local_d0;
        goto joined_r0x02133b70;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar7,0,8);
    plVar2 = DAT_043f1798;
    lVar12 = local_d0;
  }
joined_r0x02133b70:
  pvVar14 = local_100;
  local_d0 = lVar12;
  if (((local_e0 & 1) != 0) && (lVar12 != 0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar11 = plVar2;
    }
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,lVar12,0,8);
        plVar2 = DAT_043f1798;
        pvVar14 = local_100;
        goto joined_r0x02133f58;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,0,8);
    plVar2 = DAT_043f1798;
    pvVar14 = local_100;
  }
joined_r0x02133f58:
  pvVar3 = local_130;
  local_100 = pvVar14;
  if (((local_110 & 1) != 0) && (pvVar14 != (void *)0x0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar11 = plVar2;
    }
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,pvVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x02133cd8;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x02133cd8:
  DAT_043f1798 = plVar2;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar11 = plVar2;
    }
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,pvVar3,0,8);
        goto LAB_02133d88;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar3,0,8);
  }
LAB_02133d88:
  uVar10 = *(undefined8 *)(lVar13 + 0x20);
  FUN_0014fef0(uVar10);
  (**(code **)*plVar5)(plVar5,uVar10);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  pvVar14 = local_170;
  if ((local_180 & 1) == 0) {
    pvVar14 = (void *)((long)&local_180 + 1);
  }
  FUN_001522a0(uVar10,pvVar14);
  pvVar14 = local_170;
  plVar2 = DAT_043f1798;
  if (((local_180 & 1) != 0) && (local_170 != (void *)0x0)) {
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


