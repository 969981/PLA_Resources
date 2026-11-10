/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02543d9c; name: FUN_02543d9c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02543d9c(long *param_1,char *param_2,char *param_3,long *param_4,char *param_5,
                 long *param_6,char *param_7,long *param_8)

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
  char *pcVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  undefined8 local_1a8;
  size_t local_1a0;
  void *local_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined1 local_188;
  undefined7 uStack_187;
  void *local_180;
  byte local_178;
  undefined7 uStack_177;
  undefined1 local_170;
  undefined7 uStack_16f;
  void *local_168;
  undefined7 local_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
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
  
  lVar18 = *param_1;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = (void *)0x0;
  sVar8 = strlen(param_2);
  plVar2 = DAT_043f1798;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar1 = tpidr_el0;
  if (sVar8 < 0x17) {
    local_1a8 = CONCAT71(local_1a8._1_7_,(char)((int)sVar8 << 1));
    pvVar19 = (void *)((ulong)&local_1a8 | 1);
    if (sVar8 != 0) goto LAB_02543e1c;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar9 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    pvVar19 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar12,8);
    local_1a8 = uVar12 | 1;
    local_1a0 = sVar8;
    local_198 = pvVar19;
LAB_02543e1c:
    memcpy(pvVar19,param_2,sVar8);
  }
  *(undefined1 *)((long)pvVar19 + sVar8) = 0;
  plVar2 = DAT_043f1798;
  plVar9 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar9 = plVar2;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x100,8);
  plVar9[4] = 0;
  plVar16 = plVar9 + 1;
  *plVar16 = 0;
  *(undefined4 *)(plVar9 + 5) = 0x3f800000;
  plVar9[10] = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  plVar9[6] = (long)FUN_0254cc50;
  plVar9[7] = (long)FUN_0254cd00;
  *plVar9 = (long)&PTR_FUN_0425c568;
  plVar9[0xc] = (long)param_3;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  lVar20 = *param_4;
  lVar10 = param_4[1];
  plVar9[0xf] = (long)param_5;
  plVar9[0xd] = lVar20;
  plVar9[0xe] = lVar10;
  lVar20 = *param_6;
  lVar10 = param_6[1];
  plVar9[0x12] = (long)param_7;
  plVar9[0x10] = lVar20;
  plVar9[0x11] = lVar10;
  lVar20 = *param_8;
  lVar10 = param_8[1];
  plVar9[0x1f] = 0;
  plVar9[0x1d] = 0;
  *(undefined1 *)(plVar9 + 0x1e) = 0;
  plVar9[0x13] = lVar20;
  plVar9[0x14] = lVar10;
  plVar9[0x1b] = (long)&LAB_025454a0;
  plVar9[0x1c] = 0;
  plVar9[0x15] = (long)&DAT_0392da3c;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0;
  plVar9[0x18] = (long)FUN_0254ce90;
  plVar9[0x19] = (long)&LAB_0254d170;
  plVar9[0x1a] = (long)&LAB_02545490;
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
    if (sVar8 != 0) goto LAB_02543f70;
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
LAB_02543f70:
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
  local_128 = &LAB_0254d44c;
  puStack_120 = &LAB_0254d494;
  sVar8 = strlen(param_5);
  plVar2 = DAT_043f1798;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_178 = (byte)((int)sVar8 << 1);
    pvVar19 = (void *)((ulong)&local_178 | 1);
    if (sVar8 != 0) goto LAB_02544014;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    pvVar19 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar12,8);
    local_178 = (byte)uVar12 | 1;
    uStack_177 = (undefined7)(uVar12 >> 8);
    local_170 = (undefined1)sVar8;
    uStack_16f = (undefined7)(sVar8 >> 8);
    local_168 = pvVar19;
LAB_02544014:
    memcpy(pvVar19,param_5,sVar8);
  }
  local_100 = local_168;
  uStack_107 = uStack_16f;
  uStack_108 = local_170;
  local_10f = uStack_177;
  local_110 = local_178;
  *(undefined1 *)((long)pvVar19 + sVar8) = 0;
  local_178 = 0;
  uStack_177 = 0;
  local_170 = 0;
  uStack_16f = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  uStack_159 = 0;
  uStack_158 = 0;
  local_e8 = 0xffffffff;
  local_f8 = &LAB_0254d4dc;
  puStack_f0 = &LAB_0254d524;
  sVar8 = strlen(param_7);
  plVar2 = DAT_043f1798;
  local_190 = 0;
  uStack_18f = 0;
  local_188 = 0;
  uStack_187 = 0;
  local_180 = (void *)0x0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_190 = (byte)((int)sVar8 << 1);
    pvVar19 = (void *)((ulong)&local_190 | 1);
    if (sVar8 != 0) goto LAB_025440b0;
  }
  else {
    uVar12 = sVar8 + 0x10 & 0xfffffffffffffff0;
    plVar13 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar13 = plVar2;
    }
    pvVar19 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar12,8);
    local_190 = (byte)uVar12 | 1;
    uStack_18f = (undefined7)(uVar12 >> 8);
    local_188 = (undefined1)sVar8;
    uStack_187 = (undefined7)(sVar8 >> 8);
    local_180 = pvVar19;
LAB_025440b0:
    memcpy(pvVar19,param_7,sVar8);
  }
  *(undefined1 *)((long)pvVar19 + sVar8) = 0;
  local_e0 = local_190;
  local_df = uStack_18f;
  uStack_d8 = local_188;
  uStack_d7 = uStack_187;
  local_d0 = local_180;
  local_b8 = 0xffffffff;
  local_c8 = &LAB_0254d56c;
  puStack_c0 = &LAB_0254d5b4;
  local_b0 = 8;
  local_af = 0x63675f5f;
  local_ab = 0;
  uStack_a4 = 0;
  local_90 = &LAB_0254d644;
  local_88 = 0xffffffff;
  local_a0 = 0;
  puStack_98 = &LAB_0254d5fc;
  FUN_0254574c(plVar16,&local_140,4);
  lVar10 = FUN_008cca50();
  lVar20 = 0;
  do {
    lVar11 = FUN_008e8c90(plVar16,lVar10 + lVar20);
    if (lVar11 != 0) {
      FUN_008f2aec(&local_80,plVar16,lVar11);
      plVar2 = DAT_043f1798;
      lVar11 = CONCAT71(uStack_7f,local_80);
      local_80 = 0;
      uStack_7f = 0;
      if (lVar11 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar11 + 0x10) & 1) != 0)) &&
           (lVar17 = *(long *)(lVar11 + 0x20), lVar17 != 0)) {
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
              FUN_02bcc824(plVar13,lVar17,0,8);
              goto LAB_025443a8;
            }
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar17,0,8);
        }
LAB_025443a8:
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
            goto LAB_02544360;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,0,8);
      }
    }
LAB_02544360:
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x300);
  pcVar14 = (char *)plVar9[0xc];
  sVar8 = strlen(pcVar14);
  iVar4 = FUN_008f2c60(sVar8,pcVar14);
  pcVar14 = (char *)plVar9[0xf];
  sVar8 = strlen(pcVar14);
  iVar5 = FUN_008f2c60(sVar8,pcVar14);
  pcVar14 = (char *)plVar9[0x12];
  sVar8 = strlen(pcVar14);
  iVar6 = FUN_008f2c60(sVar8,pcVar14);
  pcVar14 = (char *)plVar9[0x15];
  sVar8 = strlen(pcVar14);
  iVar7 = FUN_008f2c60(sVar8,pcVar14);
  lVar20 = local_a0;
  *(bool *)(plVar9 + 0xb) = ((iVar5 != 0 || iVar4 != 0) || iVar6 != 0) || iVar7 != 0;
  plVar2 = DAT_043f1798;
  pvVar19 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar16 = plVar2;
    }
    uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar16,lVar20,0,8);
        plVar2 = DAT_043f1798;
        pvVar19 = local_d0;
        goto joined_r0x02544554;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar20,0,8);
    plVar2 = DAT_043f1798;
    pvVar19 = local_d0;
  }
joined_r0x02544554:
  pvVar3 = local_100;
  local_d0 = pvVar19;
  if (((local_e0 & 1) != 0) && (pvVar19 != (void *)0x0)) {
    plVar16 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar16 = plVar2;
    }
    uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar16,pvVar19,0,8);
        plVar2 = DAT_043f1798;
        pvVar3 = local_100;
        goto joined_r0x025449a4;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,pvVar19,0,8);
    plVar2 = DAT_043f1798;
    pvVar3 = local_100;
  }
joined_r0x025449a4:
  pvVar19 = local_130;
  local_100 = pvVar3;
  if (((local_110 & 1) != 0) && (pvVar3 != (void *)0x0)) {
    plVar16 = *(long **)(lVar1 + 0x20);
    DAT_043f1798 = plVar2;
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar16 = plVar2;
    }
    uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar16,pvVar3,0,8);
        plVar2 = DAT_043f1798;
        pvVar19 = local_130;
        goto joined_r0x025446bc;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,pvVar3,0,8);
    plVar2 = DAT_043f1798;
    pvVar19 = local_130;
  }
joined_r0x025446bc:
  DAT_043f1798 = plVar2;
  local_130 = pvVar19;
  if (((local_140 & 1) != 0) && (pvVar19 != (void *)0x0)) {
    plVar16 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = plVar2;
      plVar16 = plVar2;
    }
    uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar12 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar16,pvVar19,0,8);
        goto LAB_0254476c;
      }
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,pvVar19,0,8);
  }
LAB_0254476c:
  uVar15 = *(undefined8 *)(lVar18 + 0x20);
  FUN_0014fef0(uVar15);
  (**(code **)*plVar9)(plVar9,uVar15);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  pvVar19 = local_198;
  if ((local_1a8 & 1) == 0) {
    pvVar19 = (void *)((long)&local_1a8 + 1);
  }
  FUN_001522a0(uVar15,pvVar19);
  pvVar19 = local_198;
  plVar2 = DAT_043f1798;
  if (((local_1a8 & 1) != 0) && (local_198 != (void *)0x0)) {
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


