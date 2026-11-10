/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e7a534; name: FUN_00e7a534
 */


void FUN_00e7a534(long *param_1,char *param_2,char *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  undefined8 local_128;
  size_t local_120;
  void *local_118;
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
  local_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  sVar3 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar3 < 0x17) {
    local_128 = CONCAT71(local_128._1_7_,(char)((int)sVar3 << 1));
    pvVar12 = (void *)((ulong)&local_128 | 1);
    if (sVar3 != 0) goto LAB_00e7a5a4;
  }
  else {
    uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
    plVar4 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar4 = plVar2;
    }
    pvVar12 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar7,8);
    local_128 = uVar7 | 1;
    local_120 = sVar3;
    local_118 = pvVar12;
LAB_00e7a5a4:
    memcpy(pvVar12,param_2,sVar3);
  }
  *(undefined1 *)((long)pvVar12 + sVar3) = 0;
  plVar2 = DAT_043f1798;
  plVar4 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar4 = plVar2;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0xd0,8);
  plVar4[4] = 0;
  plVar11 = plVar4 + 1;
  *plVar11 = 0;
  *(undefined4 *)(plVar4 + 5) = 0x3f800000;
  plVar4[10] = 0;
  plVar4[6] = (long)FUN_00e7b9b0;
  plVar4[7] = (long)FUN_00e7ba60;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined1 *)(plVar4 + 0xb) = 0;
  *plVar4 = (long)&PTR_FUN_041ee940;
  plVar4[0xc] = (long)param_3;
  plVar4[8] = 0;
  plVar4[9] = 0;
  lVar8 = *param_4;
  plVar4[0x19] = 0;
  plVar4[0xd] = lVar8;
  plVar4[0xe] = (long)&DAT_038ca815;
  plVar4[0x11] = 0;
  plVar4[0x12] = (long)FUN_00e7bc34;
  plVar4[0x13] = (long)&LAB_00e7bf14;
  plVar4[0x14] = (long)&LAB_00e7c1f0;
  plVar4[0x15] = (long)&LAB_00e7c200;
  *(undefined1 *)(plVar4 + 0x18) = 1;
  plVar4[0xf] = (long)&DAT_0392da3c;
  plVar4[0x10] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  sVar3 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_80 = (byte)((int)sVar3 << 1);
    pvVar12 = (void *)((ulong)&local_80 | 1);
    if (sVar3 != 0) goto LAB_00e7a6dc;
  }
  else {
    uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar12 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar7,8);
    local_80 = (byte)uVar7 | 1;
    uStack_7f = (undefined7)(uVar7 >> 8);
    local_78 = (undefined1)sVar3;
    uStack_77 = (undefined7)(sVar3 >> 8);
    local_70 = pvVar12;
LAB_00e7a6dc:
    memcpy(pvVar12,param_3,sVar3);
  }
  *(undefined1 *)((long)pvVar12 + sVar3) = 0;
  local_110 = local_80;
  local_f8 = &LAB_00e7c204;
  puStack_f0 = &LAB_00e7c220;
  local_10f = uStack_7f;
  uStack_108 = local_78;
  uStack_107 = uStack_77;
  local_100 = local_70;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_d0 = 0;
  puStack_c8 = &LAB_00e7c23c;
  local_b0 = 8;
  local_c0 = &LAB_00e7c284;
  local_af = 0x63675f5f;
  local_e8 = 0xffffffff;
  local_dc = 0;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_00e7c314;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_00e7c2cc;
  FUN_00e7c35c(plVar11,&local_110,3);
  lVar5 = FUN_008cca50();
  lVar8 = 0;
  do {
    lVar6 = FUN_008e8c90(plVar11,lVar5 + lVar8);
    if (lVar6 != 0) {
      FUN_008f2aec(&local_80,plVar11,lVar6);
      plVar2 = DAT_043f1798;
      lVar6 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar6 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) &&
           (lVar14 = *(long *)(lVar6 + 0x20), lVar14 != 0)) {
          plVar9 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
          if ((uVar7 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar9,lVar14,0,8);
              goto LAB_00e7a95c;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,0,8);
        }
LAB_00e7a95c:
        plVar2 = DAT_043f1798;
        plVar9 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar9 = plVar2;
        }
        uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
        if ((uVar7 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar9,lVar6,0,8);
            goto LAB_00e7a8b8;
          }
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,0,8);
      }
    }
LAB_00e7a8b8:
    lVar6 = local_a0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0x300);
  *(undefined1 *)(plVar4 + 0xb) = 1;
  plVar2 = DAT_043f1798;
  lVar8 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar2;
    }
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,lVar6,0,8);
        plVar2 = DAT_043f1798;
        lVar8 = local_d0;
        goto joined_r0x00e7aab4;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar6,0,8);
    plVar2 = DAT_043f1798;
    lVar8 = local_d0;
  }
joined_r0x00e7aab4:
  pvVar12 = local_100;
  local_d0 = lVar8;
  if (((local_e0 & 1) != 0) && (lVar8 != 0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar11 = plVar2;
    }
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,lVar8,0,8);
        plVar2 = DAT_043f1798;
        pvVar12 = local_100;
        goto joined_r0x00e7add8;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,0,8);
    plVar2 = DAT_043f1798;
    pvVar12 = local_100;
  }
joined_r0x00e7add8:
  DAT_043f1798 = plVar2;
  local_100 = pvVar12;
  if (((local_110 & 1) != 0) && (pvVar12 != (void *)0x0)) {
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar11 = plVar2;
    }
    uVar7 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar11,pvVar12,0,8);
        goto LAB_00e7ac10;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,pvVar12,0,8);
  }
LAB_00e7ac10:
  uVar10 = *(undefined8 *)(lVar13 + 0x20);
  FUN_0014fef0(uVar10);
  (**(code **)*plVar4)(plVar4,uVar10);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  pvVar12 = local_118;
  if ((local_128 & 1) == 0) {
    pvVar12 = (void *)((long)&local_128 + 1);
  }
  FUN_001522a0(uVar10,pvVar12);
  pvVar12 = local_118;
  plVar2 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (void *)0x0)) {
    plVar4 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar4 = plVar2;
    }
    uVar7 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar4,pvVar12,0,8);
        return;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,pvVar12,0,8);
  }
  return;
}


