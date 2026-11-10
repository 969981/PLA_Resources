/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024a2630; name: FUN_024a2630
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_024a2630(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
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
  
  lVar18 = *param_1;
  local_180 = 0;
  local_178 = 0;
  local_170 = (void *)0x0;
  sVar8 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar8 < 0x17) {
    local_180 = CONCAT71(local_180._1_7_,(char)((int)sVar8 << 1));
    pvVar19 = (void *)((ulong)&local_180 | 1);
    if (sVar8 != 0) goto LAB_024a26a8;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar19 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar12,8);
    local_180 = uVar12 | 1;
    local_178 = sVar8;
    local_170 = pvVar19;
LAB_024a26a8:
    memcpy(pvVar19,param_2,sVar8);
  }
  *(undefined1 *)((long)pvVar19 + sVar8) = 0;
  plVar2 = DAT_043f1798;
  plVar9 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar9 = plVar2;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0xe8,8);
  plVar9[4] = 0;
  plVar17 = plVar9 + 1;
  *plVar17 = 0;
  *(undefined4 *)(plVar9 + 5) = 0x3f800000;
  plVar9[10] = 0;
  plVar9[6] = (long)FUN_024d81f0;
  plVar9[7] = (long)FUN_024d8290;
  plVar9[2] = 0;
  plVar9[3] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  *plVar9 = (long)&PTR_FUN_0425c2c8;
  plVar9[0xc] = (long)param_3;
  plVar9[8] = 0;
  plVar9[9] = 0;
  lVar14 = *param_4;
  lVar10 = param_4[1];
  plVar9[0xf] = (long)param_5;
  plVar9[0xd] = lVar14;
  plVar9[0xe] = lVar10;
  lVar14 = *param_6;
  plVar9[0x1c] = 0;
  *(undefined1 *)(plVar9 + 0x1b) = 0;
  plVar9[0x18] = (long)&LAB_024a3c30;
  plVar9[0x10] = lVar14;
  plVar9[0x11] = (long)&DAT_038ca815;
  plVar9[0x12] = (long)&DAT_0392da3c;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = (long)FUN_024d8464;
  plVar9[0x16] = (long)&LAB_024d8744;
  plVar9[0x17] = (long)&LAB_024a3c20;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  sVar8 = strlen(param_3);
  plVar2 = DAT_043f1798;
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_80 = (byte)((int)sVar8 << 1);
    pvVar19 = (void *)((ulong)&local_80 | 1);
    if (sVar8 != 0) goto LAB_024a27f0;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    pvVar19 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar12,8);
    local_80 = (byte)uVar12 | 1;
    uStack_7f = (undefined7)(uVar12 >> 8);
    local_78 = (undefined1)sVar8;
    uStack_77 = (undefined7)(sVar8 >> 8);
    local_70 = pvVar19;
LAB_024a27f0:
    memcpy(pvVar19,param_3,sVar8);
  }
  local_130 = local_70;
  uStack_137 = uStack_77;
  uStack_138 = local_78;
  local_13f = uStack_7f;
  local_140 = local_80;
  *(undefined1 *)((long)pvVar19 + sVar8) = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  uStack_7f = 0;
  local_150 = 0;
  uStack_149 = 0;
  uStack_148 = 0;
  local_118 = 0xffffffff;
  local_128 = &LAB_024d8a20;
  puStack_120 = &LAB_024d8a68;
  sVar8 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_168 = 0;
  uStack_167 = 0;
  local_160 = 0;
  uStack_15f = 0;
  local_158 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_168 = (byte)((int)sVar8 << 1);
    pvVar19 = (void *)((ulong)&local_168 | 1);
    if (sVar8 != 0) goto LAB_024a2894;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    pvVar19 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar12,8);
    local_168 = (byte)uVar12 | 1;
    uStack_167 = (undefined7)(uVar12 >> 8);
    local_160 = (undefined1)sVar8;
    uStack_15f = (undefined7)(sVar8 >> 8);
    local_158 = pvVar19;
LAB_024a2894:
    memcpy(pvVar19,param_5,sVar8);
  }
  *(undefined1 *)((long)pvVar19 + sVar8) = 0;
  local_110 = local_168;
  local_10f = uStack_167;
  local_e8 = 0xffffffff;
  uStack_108 = local_160;
  uStack_107 = uStack_15f;
  local_100 = local_158;
  local_f8 = &LAB_024d8ab0;
  puStack_f0 = &LAB_024d8af8;
  local_e0 = 6;
  local_df = 0x656e;
  local_dd = 0x77;
  local_dc = 0;
  local_c0 = &LAB_024d8b88;
  local_d4 = 0;
  local_d0 = 0;
  puStack_c8 = &LAB_024d8b40;
  local_b0 = 8;
  local_b8 = 0xffffffff;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_024d8c18;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_024d8bd0;
  FUN_024a3fc8(plVar17,&local_140,4);
  lVar10 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar17,lVar10 + lVar14);
    if (lVar11 != 0) {
      FUN_008f2aec(&local_80,plVar17,lVar11);
      plVar2 = DAT_043f1798;
      lVar11 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar11 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar20 = *(long *)(lVar11 + 0x20), lVar20 != 0)) {
          plVar13 = *(long **)(lVar1 + 0x20);
          if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
            *(long **)(lVar1 + 0x20) = DAT_043f1798;
            plVar13 = plVar2;
          }
          uVar12 = (**(code **)(*plVar13 + 0xc0))(plVar13);
          if ((uVar12 & 1) != 0) {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar1 + 0x38d480)) {
              FUN_02bcc824(plVar13,lVar20,0,8);
              goto LAB_024a2b30;
            }
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar20,0,8);
        }
LAB_024a2b30:
        plVar2 = DAT_043f1798;
        plVar13 = *(long **)(lVar1 + 0x20);
        if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
          *(long **)(lVar1 + 0x20) = DAT_043f1798;
          plVar13 = plVar2;
        }
        uVar12 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar1 + 0x38d480)) {
            FUN_02bcc824(plVar13,lVar11,0,8);
            goto LAB_024a2ae8;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
      }
    }
LAB_024a2ae8:
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  pcVar15 = (char *)plVar9[0xc];
  sVar8 = strlen(pcVar15);
  iVar4 = FUN_008f2c60(sVar8,pcVar15);
  pcVar15 = (char *)plVar9[0xf];
  sVar8 = strlen(pcVar15);
  iVar5 = FUN_008f2c60(sVar8,pcVar15);
  pcVar15 = (char *)plVar9[0x11];
  sVar8 = strlen(pcVar15);
  iVar6 = FUN_008f2c60(sVar8,pcVar15);
  pcVar15 = (char *)plVar9[0x12];
  sVar8 = strlen(pcVar15);
  iVar7 = FUN_008f2c60(sVar8,pcVar15);
  lVar10 = local_a0;
  *(bool *)(plVar9 + 0xb) = ((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0;
  plVar2 = DAT_043f1798;
  lVar14 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar17 = plVar2;
    }
    uVar12 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar10,0,8);
        plVar2 = DAT_043f1798;
        lVar14 = local_d0;
        goto joined_r0x024a2cd0;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,0,8);
    plVar2 = DAT_043f1798;
    lVar14 = local_d0;
  }
joined_r0x024a2cd0:
  pvVar19 = local_100;
  local_d0 = lVar14;
  if (((local_e0 & 1) != 0) && (lVar14 != 0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar17 = plVar2;
    }
    uVar12 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,lVar14,0,8);
        plVar2 = DAT_043f1798;
        pvVar19 = local_100;
        goto joined_r0x024a310c;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar14,0,8);
    plVar2 = DAT_043f1798;
    pvVar19 = local_100;
  }
joined_r0x024a310c:
  pvVar3 = local_130;
  local_100 = pvVar19;
  if (((local_110 & 1) != 0) && (pvVar19 != (void *)0x0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar17 = plVar2;
    }
    uVar12 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,pvVar19,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_130;
        goto joined_r0x024a2e38;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pvVar19,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_130;
  }
joined_r0x024a2e38:
  DAT_043f1798 = plVar2;
  local_130 = pvVar3;
  if (((local_140 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar17 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar17 = plVar2;
    }
    uVar12 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar17,pvVar3,0,8);
        goto LAB_024a2ee8;
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17,pvVar3,0,8);
  }
LAB_024a2ee8:
  uVar16 = *(undefined8 *)(lVar18 + 0x20);
  FUN_0014fef0(uVar16);
  (**(code **)*plVar9)(plVar9,uVar16);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  pvVar19 = local_170;
  if ((local_180 & 1) == 0) {
    pvVar19 = (void *)((long)&local_180 + 1);
  }
  FUN_001522a0(uVar16,pvVar19);
  pvVar19 = local_170;
  plVar2 = DAT_043f1798;
  if (((local_180 & 1) != 0) && (local_170 != (void *)0x0)) {
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    uVar12 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar9,pvVar19,0,8);
        return;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,pvVar19,0,8);
  }
  return;
}


