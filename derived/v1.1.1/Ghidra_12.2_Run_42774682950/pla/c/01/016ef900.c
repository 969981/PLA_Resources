/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ef900; name: FUN_016ef900
 */


void FUN_016ef900(long *param_1,char *param_2,char *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
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
  
  lVar17 = *param_1;
  local_128 = 0;
  local_120 = 0;
  local_118 = (void *)0x0;
  sVar6 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar6 < 0x17) {
    local_128 = CONCAT71(local_128._1_7_,(char)((int)sVar6 << 1));
    pvVar16 = (void *)((ulong)&local_128 | 1);
    if (sVar6 != 0) goto LAB_016ef970;
  }
  else {
    uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
    plVar7 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar7 = plVar2;
    }
    pvVar16 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar10,8);
    local_128 = uVar10 | 1;
    local_120 = sVar6;
    local_118 = pvVar16;
LAB_016ef970:
    memcpy(pvVar16,param_2,sVar6);
  }
  *(undefined1 *)((long)pvVar16 + sVar6) = 0;
  plVar2 = DAT_043f1798;
  plVar7 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar7 = plVar2;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0xd8,8);
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar14 = plVar7 + 1;
  *plVar14 = 0;
  plVar7[6] = (long)FUN_016f8790;
  plVar7[7] = (long)FUN_016f8840;
  *(undefined4 *)(plVar7 + 5) = 0x3f800000;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  *(undefined1 *)(plVar7 + 0xb) = 0;
  *plVar7 = (long)&PTR_FUN_04224e98;
  plVar7[0xc] = (long)param_3;
  lVar15 = *param_4;
  lVar8 = param_4[1];
  plVar7[0x1a] = 0;
  *(undefined1 *)(plVar7 + 0x19) = 0;
  plVar7[0xd] = lVar15;
  plVar7[0xe] = lVar8;
  plVar7[0xf] = (long)&DAT_038ca815;
  plVar7[0x10] = (long)&DAT_0392da3c;
  plVar7[0x13] = (long)FUN_016f89d0;
  plVar7[0x14] = (long)&LAB_016f8cb0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = (long)&LAB_016f0c60;
  plVar7[0x16] = (long)&LAB_016f0c70;
  plVar7[0x17] = 0;
  plVar7[0x18] = 0;
  sVar6 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar6 < 0x17) {
    local_80 = (byte)((int)sVar6 << 1);
    pvVar16 = (void *)((ulong)&local_80 | 1);
    if (sVar6 != 0) goto LAB_016efaa8;
  }
  else {
    uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
    plVar11 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar11 = plVar2;
    }
    pvVar16 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar10,8);
    local_80 = (byte)uVar10 | 1;
    uStack_7f = (undefined7)(uVar10 >> 8);
    local_78 = (undefined1)sVar6;
    uStack_77 = (undefined7)(sVar6 >> 8);
    local_70 = pvVar16;
LAB_016efaa8:
    memcpy(pvVar16,param_3,sVar6);
  }
  *(undefined1 *)((long)pvVar16 + sVar6) = 0;
  local_110 = local_80;
  local_f8 = &LAB_016f8f8c;
  puStack_f0 = &LAB_016f8fd4;
  local_10f = uStack_7f;
  uStack_108 = local_78;
  uStack_107 = uStack_77;
  local_100 = local_70;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_d0 = 0;
  puStack_c8 = &LAB_016f901c;
  local_b0 = 8;
  local_c0 = &LAB_016f9064;
  local_af = 0x63675f5f;
  local_e8 = 0xffffffff;
  local_dc = 0;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_016f90f4;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_016f90ac;
  FUN_016f1124(plVar14,&local_110,3);
  lVar8 = FUN_008cca50();
  lVar15 = 0;
  do {
    lVar9 = FUN_008e8c90(plVar14,lVar8 + lVar15);
    if (lVar9 != 0) {
      FUN_008f2aec(&local_80,plVar14,lVar9);
      plVar2 = DAT_043f1798;
      lVar9 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar9 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar9 + 0x10) & 1) != 0)) &&
           (lVar18 = *(long *)(lVar9 + 0x20), lVar18 != 0)) {
          plVar11 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar11 = plVar2;
          }
          uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar11,lVar18,0,8);
              goto LAB_016efcd4;
            }
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar18,0,8);
        }
LAB_016efcd4:
        plVar2 = DAT_043f1798;
        plVar11 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar11 = plVar2;
        }
        uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
        if ((uVar10 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar11,lVar9,0,8);
            goto LAB_016efc88;
          }
        }
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,0,8);
      }
    }
LAB_016efc88:
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x300);
  pcVar12 = (char *)plVar7[0xc];
  sVar6 = strlen(pcVar12);
  iVar3 = FUN_008f2c60(sVar6,pcVar12);
  pcVar12 = (char *)plVar7[0xf];
  sVar6 = strlen(pcVar12);
  iVar4 = FUN_008f2c60(sVar6,pcVar12);
  pcVar12 = (char *)plVar7[0x10];
  sVar6 = strlen(pcVar12);
  iVar5 = FUN_008f2c60(sVar6,pcVar12);
  lVar8 = local_a0;
  *(bool *)(plVar7 + 0xb) = (iVar4 != 0 || iVar3 != 0) || iVar5 != 0;
  plVar2 = DAT_043f1798;
  lVar15 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar14 = plVar2;
    }
    uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar8,0,8);
        plVar2 = DAT_043f1798;
        lVar15 = local_d0;
        goto joined_r0x016efe5c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar8,0,8);
    plVar2 = DAT_043f1798;
    lVar15 = local_d0;
  }
joined_r0x016efe5c:
  pvVar16 = local_100;
  local_d0 = lVar15;
  if (((local_e0 & 1) != 0) && (lVar15 != 0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar14 = plVar2;
    }
    uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar15,0,8);
        plVar2 = DAT_043f1798;
        pvVar16 = local_100;
        goto joined_r0x016f01d0;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,0,8);
    plVar2 = DAT_043f1798;
    pvVar16 = local_100;
  }
joined_r0x016f01d0:
  DAT_043f1798 = plVar2;
  local_100 = pvVar16;
  if (((local_110 & 1) != 0) && (pvVar16 != (void *)0x0)) {
    plVar14 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar14 = plVar2;
    }
    uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar14,pvVar16,0,8);
        goto LAB_016effb8;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,pvVar16,0,8);
  }
LAB_016effb8:
  uVar13 = *(undefined8 *)(lVar17 + 0x20);
  FUN_0014fef0(uVar13);
  (**(code **)*plVar7)(plVar7,uVar13);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  pvVar16 = local_118;
  if ((local_128 & 1) == 0) {
    pvVar16 = (void *)((long)&local_128 + 1);
  }
  FUN_001522a0(uVar13,pvVar16);
  pvVar16 = local_118;
  plVar2 = DAT_043f1798;
  if (((local_128 & 1) != 0) && (local_118 != (void *)0x0)) {
    plVar7 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar7 = plVar2;
    }
    uVar10 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar7,pvVar16,0,8);
        return;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,pvVar16,0,8);
  }
  return;
}


