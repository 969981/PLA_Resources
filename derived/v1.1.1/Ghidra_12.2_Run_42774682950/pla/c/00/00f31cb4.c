/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f31cb4; name: FUN_00f31cb4
 */


void FUN_00f31cb4(long *param_1,char *param_2,char *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  undefined8 local_f0;
  size_t local_e8;
  void *local_e0;
  byte local_d8;
  undefined7 local_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  void *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  byte local_a8;
  undefined4 local_a7;
  undefined7 local_a3;
  undefined4 uStack_9c;
  long local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined4 local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  void *local_68;
  
  lVar16 = *param_1;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (void *)0x0;
  sVar5 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar5 < 0x17) {
    local_f0 = CONCAT71(local_f0._1_7_,(char)((int)sVar5 << 1));
    pvVar15 = (void *)((ulong)&local_f0 | 1);
    if (sVar5 != 0) goto LAB_00f31d24;
  }
  else {
    uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
    plVar6 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar6 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar9,8);
    local_f0 = uVar9 | 1;
    local_e8 = sVar5;
    local_e0 = pvVar15;
LAB_00f31d24:
    memcpy(pvVar15,param_2,sVar5);
  }
  *(undefined1 *)((long)pvVar15 + sVar5) = 0;
  plVar2 = DAT_043f1798;
  plVar6 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar6 = plVar2;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,200,8);
  plVar6[4] = 0;
  plVar14 = plVar6 + 1;
  *plVar14 = 0;
  *(undefined4 *)(plVar6 + 5) = 0x3f800000;
  plVar6[10] = 0;
  plVar6[6] = (long)FUN_00f3b0f0;
  plVar6[7] = (long)FUN_00f3b1a0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined1 *)(plVar6 + 0xb) = 0;
  *plVar6 = (long)&PTR_FUN_041eeb60;
  plVar6[0xc] = (long)param_3;
  plVar6[8] = 0;
  plVar6[9] = 0;
  lVar11 = *param_4;
  plVar6[0x18] = 0;
  *(undefined1 *)(plVar6 + 0x17) = 0;
  plVar6[0xd] = lVar11;
  plVar6[0xe] = (long)&DAT_0392da3c;
  plVar6[0x11] = (long)FUN_00f3b374;
  plVar6[0x12] = (long)&LAB_00f3b654;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x13] = (long)&LAB_00f32ea0;
  plVar6[0x14] = (long)&LAB_00f32eb0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  sVar5 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = 0;
  uStack_6f = 0;
  local_68 = (void *)0x0;
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    local_78 = (byte)((int)sVar5 << 1);
    pvVar15 = (void *)((ulong)&local_78 | 1);
    if (sVar5 != 0) goto LAB_00f31e4c;
  }
  else {
    uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
    plVar10 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar10 = plVar2;
    }
    pvVar15 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar9,8);
    local_78 = (byte)uVar9 | 1;
    uStack_77 = (undefined7)(uVar9 >> 8);
    local_70 = (undefined1)sVar5;
    uStack_6f = (undefined7)(sVar5 >> 8);
    local_68 = pvVar15;
LAB_00f31e4c:
    memcpy(pvVar15,param_3,sVar5);
  }
  *(undefined1 *)((long)pvVar15 + sVar5) = 0;
  local_d8 = local_78;
  local_d7 = uStack_77;
  uStack_d0 = local_70;
  uStack_cf = uStack_6f;
  local_c8 = local_68;
  local_c0 = &LAB_00f3b930;
  puStack_b8 = &LAB_00f3b978;
  local_a8 = 8;
  local_a7 = 0x63675f5f;
  local_b0 = 0xffffffff;
  local_a3 = 0;
  uStack_9c = 0;
  local_88 = &LAB_00f3ba08;
  local_98 = 0;
  puStack_90 = &LAB_00f3b9c0;
  local_80 = 0xffffffff;
  FUN_00f3307c(plVar14,&local_d8,2);
  lVar7 = FUN_008cca50();
  lVar11 = 0;
  do {
    lVar8 = FUN_008e8c90(plVar14,lVar7 + lVar11);
    if (lVar8 != 0) {
      FUN_008f2aec(&local_78,plVar14,lVar8);
      plVar2 = DAT_043f1798;
      lVar8 = CONCAT71(uStack_77,local_78);
      local_78 = 0;
      uStack_77 = 0;
      if (lVar8 != 0) {
        if ((((char)local_68 != '\0') && ((*(byte *)(lVar8 + 0x10) & 1) != 0)) &&
           (lVar17 = *(long *)(lVar8 + 0x20), lVar17 != 0)) {
          plVar10 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar10,lVar17,0,8);
              goto LAB_00f32090;
            }
          }
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar17,0,8);
        }
LAB_00f32090:
        plVar2 = DAT_043f1798;
        plVar10 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar10 = plVar2;
        }
        uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar8,0,8);
            goto LAB_00f31fec;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,0,8);
      }
    }
LAB_00f31fec:
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0x300);
  pcVar12 = (char *)plVar6[0xc];
  sVar5 = strlen(pcVar12);
  iVar3 = FUN_008f2c60(sVar5,pcVar12);
  pcVar12 = (char *)plVar6[0xe];
  sVar5 = strlen(pcVar12);
  iVar4 = FUN_008f2c60(sVar5,pcVar12);
  lVar11 = local_98;
  *(bool *)(plVar6 + 0xb) = iVar4 != 0 || iVar3 != 0;
  plVar2 = DAT_043f1798;
  pvVar15 = local_c8;
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar2;
    }
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar11,0,8);
        plVar2 = DAT_043f1798;
        pvVar15 = local_c8;
        goto joined_r0x00f3221c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,0,8);
    plVar2 = DAT_043f1798;
    pvVar15 = local_c8;
  }
joined_r0x00f3221c:
  DAT_043f1798 = plVar2;
  local_c8 = pvVar15;
  if (((local_d8 & 1) != 0) && (pvVar15 != (void *)0x0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar14 = plVar2;
    }
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,pvVar15,0,8);
        goto LAB_00f322c8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pvVar15,0,8);
  }
LAB_00f322c8:
  uVar13 = *(undefined8 *)(lVar16 + 0x20);
  FUN_0014fef0(uVar13);
  (**(code **)*plVar6)(plVar6,uVar13);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  pvVar15 = local_e0;
  if ((local_f0 & 1) == 0) {
    pvVar15 = (void *)((long)&local_f0 + 1);
  }
  FUN_001522a0(uVar13,pvVar15);
  pvVar15 = local_e0;
  plVar2 = DAT_043f1798;
  if (((local_f0 & 1) != 0) && (local_e0 != (void *)0x0)) {
    plVar6 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar6 = plVar2;
    }
    uVar9 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,pvVar15,0,8);
        return;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,pvVar15,0,8);
  }
  return;
}


