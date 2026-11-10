/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022d6b14; name: FUN_022d6b14
 */


void FUN_022d6b14(long *param_1,char *param_2,char *param_3,long *param_4)

{
  long *plVar1;
  string *psVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  undefined8 uVar17;
  string *psVar18;
  long *plVar19;
  void *pvVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 local_f8;
  size_t local_f0;
  void *local_e8;
  string local_e0;
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
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  string local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  
  lVar22 = *param_1;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  sVar7 = strlen(param_2);
  plVar1 = DAT_043f1798;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  lVar4 = tpidr_el0;
  if (sVar7 < 0x17) {
    local_f8 = CONCAT71(local_f8._1_7_,(char)((int)sVar7 << 1));
    pvVar20 = (void *)((ulong)&local_f8 | 1);
    if (sVar7 != 0) goto LAB_022d6b80;
  }
  else {
    uVar9 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar8 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    pvVar20 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar9,8);
    local_f8 = uVar9 | 1;
    local_f0 = sVar7;
    local_e8 = pvVar20;
LAB_022d6b80:
    memcpy(pvVar20,param_2,sVar7);
  }
  *(undefined1 *)((long)pvVar20 + sVar7) = 0;
  plVar1 = DAT_043f1798;
  plVar8 = *(long **)(lVar4 + 0x20);
  if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
    *(long **)(lVar4 + 0x20) = DAT_043f1798;
    plVar8 = plVar1;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xd0,8);
  plVar8[4] = 0;
  plVar19 = plVar8 + 1;
  *plVar19 = 0;
  *(undefined4 *)(plVar8 + 5) = 0x3f800000;
  plVar8[10] = 0;
  plVar8[6] = (long)FUN_022d7750;
  plVar8[7] = (long)FUN_022d7800;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  *plVar8 = (long)&PTR_FUN_0425bad8;
  plVar8[0xc] = (long)param_3;
  plVar8[8] = 0;
  plVar8[9] = 0;
  lVar14 = *param_4;
  lVar15 = param_4[1];
  plVar8[0x19] = 0;
  plVar8[0x17] = 0;
  *(undefined1 *)(plVar8 + 0x18) = 0;
  plVar8[0xd] = lVar14;
  plVar8[0xe] = lVar15;
  plVar8[0xf] = (long)&DAT_0392da3c;
  plVar8[0x10] = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = (long)FUN_022d7990;
  plVar8[0x13] = (long)&LAB_022d7c70;
  plVar8[0x14] = (long)&LAB_022d7f50;
  plVar8[0x15] = (long)&LAB_022d7f60;
  plVar8[0x16] = 0;
  sVar7 = strlen(param_3);
  plVar1 = DAT_043f1798;
  local_80 = (string)0x0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  local_70 = (void *)0x0;
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_80 = SUB41((int)sVar7 << 1,0);
    pvVar20 = (void *)((ulong)&local_80 | 1);
    if (sVar7 != 0) goto LAB_022d6cb0;
  }
  else {
    uVar9 = sVar7 + 0x10 & 0xfffffffffffffff0;
    plVar21 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar21 = plVar1;
    }
    pvVar20 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar9,8);
    local_80 = (string)((byte)uVar9 | 1);
    uStack_7f = (undefined7)(uVar9 >> 8);
    local_78 = (undefined1)sVar7;
    uStack_77 = (undefined7)(sVar7 >> 8);
    local_70 = pvVar20;
LAB_022d6cb0:
    memcpy(pvVar20,param_3,sVar7);
  }
  psVar18 = &local_e0;
  plVar1 = plVar8 + 3;
  *(undefined1 *)((long)pvVar20 + sVar7) = 0;
  local_df = uStack_7f;
  local_e0 = local_80;
  local_c8 = &LAB_022d7f64;
  puStack_c0 = &LAB_022d7fac;
  local_b0 = 8;
  uStack_d8 = local_78;
  uStack_d7 = uStack_77;
  local_d0 = local_70;
  local_af = 0x63675f5f;
  local_b8 = 0xffffffff;
  local_ab = 0;
  uStack_a4 = 0;
  local_88 = 0xffffffff;
  local_a0 = 0;
  local_98 = &LAB_022d7ff4;
  puStack_90 = &LAB_022d803c;
  do {
    uVar9 = *(ulong *)(psVar18 + 8);
    psVar2 = *(string **)(psVar18 + 0x10);
    if (((byte)*psVar18 & 1) == 0) {
      psVar2 = psVar18 + 1;
      uVar9 = (ulong)((byte)*psVar18 >> 1);
    }
    uVar9 = FUN_008e8ed4(&local_80,psVar2,uVar9);
    uVar24 = plVar8[2];
    if (uVar24 == 0) {
LAB_022d6db8:
      plVar21 = DAT_043f1798;
      plVar12 = *(long **)(lVar4 + 0x20);
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
        *(long **)(lVar4 + 0x20) = DAT_043f1798;
        plVar12 = plVar21;
      }
      plVar21 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,8);
      std::string::string((string *)(plVar21 + 2),psVar18);
      lVar14 = *(long *)(psVar18 + 0x18);
      lVar15 = *(long *)(psVar18 + 0x28);
      plVar21[6] = *(long *)(psVar18 + 0x20);
      plVar21[7] = lVar15;
      plVar21[5] = lVar14;
      *plVar21 = 0;
      plVar21[1] = uVar9;
      if ((uVar24 == 0) || (*(float *)(plVar8 + 5) * (float)uVar24 < (float)(plVar8[4] + 1))) {
        uVar24 = (ulong)(uVar24 < 3 || (uVar24 & uVar24 - 1) != 0) | uVar24 << 1;
        uVar11 = (ulong)((float)(plVar8[4] + 1) / *(float *)(plVar8 + 5));
        if (uVar11 <= uVar24) {
          uVar11 = uVar24;
        }
        FUN_008e9ae4(plVar19,uVar11);
        uVar24 = plVar8[2];
        if ((uVar24 & uVar24 - 1) == 0) {
          sVar7 = uVar24 - 1 & uVar9;
        }
        else if (uVar9 < uVar24) {
          sVar7 = uVar9;
        }
        else {
          uVar11 = 0;
          if (uVar24 != 0) {
            uVar11 = uVar9 / uVar24;
          }
          sVar7 = uVar9 - uVar11 * uVar24;
        }
      }
      lVar14 = *plVar19;
      plVar12 = *(long **)(lVar14 + sVar7 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar21 = *plVar1;
        *plVar1 = (long)plVar21;
        *(long **)(lVar14 + sVar7 * 8) = plVar1;
        if (*plVar21 != 0) {
          uVar9 = *(ulong *)(*plVar21 + 8);
          if ((uVar24 & uVar24 - 1) == 0) {
            uVar9 = uVar9 & uVar24 - 1;
          }
          else if (uVar24 <= uVar9) {
            uVar11 = 0;
            if (uVar24 != 0) {
              uVar11 = uVar9 / uVar24;
            }
            uVar9 = uVar9 - uVar11 * uVar24;
          }
          plVar12 = (long *)(*plVar19 + uVar9 * 8);
          goto LAB_022d6ed4;
        }
      }
      else {
        *plVar21 = *plVar12;
LAB_022d6ed4:
        *plVar12 = (long)plVar21;
      }
      plVar8[4] = plVar8[4] + 1;
    }
    else {
      uVar11 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        sVar7 = uVar24 - 1 & uVar9;
      }
      else {
        sVar7 = uVar9;
        if (uVar24 <= uVar9) {
          uVar3 = 0;
          if (uVar24 != 0) {
            uVar3 = uVar9 / uVar24;
          }
          sVar7 = uVar9 - uVar3 * uVar24;
        }
      }
      plVar21 = *(long **)(*plVar19 + sVar7 * 8);
      if (plVar21 == (long *)0x0) goto LAB_022d6db8;
      if (uVar11 < 2) {
        do {
          plVar21 = (long *)*plVar21;
          if ((plVar21 == (long *)0x0) ||
             (plVar21[1] != uVar9 && (plVar21[1] & uVar24 - 1) != sVar7)) goto LAB_022d6db8;
          uVar11 = FUN_022da530(plVar21 + 2,psVar18);
        } while ((uVar11 & 1) == 0);
      }
      else {
        do {
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_022d6db8;
          sVar13 = plVar21[1];
          if (sVar13 != uVar9) {
            if (uVar24 <= sVar13) {
              uVar11 = 0;
              if (uVar24 != 0) {
                uVar11 = sVar13 / uVar24;
              }
              sVar13 = sVar13 - uVar11 * uVar24;
            }
            if (sVar13 != sVar7) goto LAB_022d6db8;
          }
          uVar11 = FUN_022da530(plVar21 + 2,psVar18);
        } while ((uVar11 & 1) == 0);
      }
    }
    psVar18 = psVar18 + 0x30;
  } while (psVar18 != &local_80);
  lVar15 = FUN_008cca50();
  lVar14 = 0;
  do {
    lVar10 = FUN_008e8c90(plVar19,lVar15 + lVar14);
    if (lVar10 != 0) {
      FUN_008f2aec(&local_80,plVar19,lVar10);
      plVar1 = DAT_043f1798;
      lVar10 = CONCAT71(uStack_7f,local_80);
      local_80 = (string)0x0;
      uStack_7f = 0;
      if (lVar10 != 0) {
        if ((((char)local_70 != '\0') && ((*(byte *)(lVar10 + 0x10) & 1) != 0)) &&
           (lVar23 = *(long *)(lVar10 + 0x20), lVar23 != 0)) {
          plVar21 = *(long **)(lVar4 + 0x20);
          if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
            *(long **)(lVar4 + 0x20) = DAT_043f1798;
            plVar21 = plVar1;
          }
          uVar9 = (**(code **)(*plVar21 + 0xc0))(plVar21);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar21,lVar23,0,8);
              goto LAB_022d7188;
            }
          }
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar23,0,8);
        }
LAB_022d7188:
        plVar1 = DAT_043f1798;
        plVar21 = *(long **)(lVar4 + 0x20);
        if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
          *(long **)(lVar4 + 0x20) = DAT_043f1798;
          plVar21 = plVar1;
        }
        uVar9 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar10,0,8);
            goto LAB_022d70ec;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar10,0,8);
      }
    }
LAB_022d70ec:
    lVar14 = lVar14 + 0x18;
  } while (lVar14 != 0x300);
  pcVar16 = (char *)plVar8[0xc];
  sVar7 = strlen(pcVar16);
  iVar5 = FUN_008f2c60(sVar7,pcVar16);
  pcVar16 = (char *)plVar8[0xf];
  sVar7 = strlen(pcVar16);
  iVar6 = FUN_008f2c60(sVar7,pcVar16);
  lVar14 = local_a0;
  *(bool *)(plVar8 + 0xb) = iVar6 != 0 || iVar5 != 0;
  plVar1 = DAT_043f1798;
  pvVar20 = local_d0;
  if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
    plVar19 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar19 = plVar1;
    }
    uVar9 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar19,lVar14,0,8);
        plVar1 = DAT_043f1798;
        pvVar20 = local_d0;
        goto joined_r0x022d7318;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar14,0,8);
    plVar1 = DAT_043f1798;
    pvVar20 = local_d0;
  }
joined_r0x022d7318:
  DAT_043f1798 = plVar1;
  local_d0 = pvVar20;
  if ((((byte)local_e0 & 1) != 0) && (pvVar20 != (void *)0x0)) {
    plVar19 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = plVar1;
      plVar19 = plVar1;
    }
    uVar9 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar19,pvVar20,0,8);
        goto LAB_022d73c8;
      }
    }
    (**(code **)(*plVar19 + 0x18))(plVar19,pvVar20,0,8);
  }
LAB_022d73c8:
  uVar17 = *(undefined8 *)(lVar22 + 0x20);
  FUN_0014fef0(uVar17);
  (**(code **)*plVar8)(plVar8,uVar17);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  pvVar20 = local_e8;
  if ((local_f8 & 1) == 0) {
    pvVar20 = (void *)((long)&local_f8 + 1);
  }
  FUN_001522a0(uVar17,pvVar20);
  pvVar20 = local_e8;
  plVar1 = DAT_043f1798;
  if (((local_f8 & 1) != 0) && (local_e8 != (void *)0x0)) {
    plVar8 = *(long **)(lVar4 + 0x20);
    if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
      plVar8 = plVar1;
    }
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar8,pvVar20,0,8);
        return;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,pvVar20,0,8);
  }
  return;
}


