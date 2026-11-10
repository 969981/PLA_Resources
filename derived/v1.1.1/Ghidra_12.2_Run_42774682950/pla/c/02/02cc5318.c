/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc5318; name: FUN_02cc5318
 */


long * FUN_02cc5318(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long local_78;
  long *plStack_70;
  long local_68;
  
  puVar1 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar2 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  puVar3 = PTR_DAT_043796d0;
  lVar15 = *param_3;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  *(undefined4 *)(plVar6 + 6) = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *plVar6 = (long)&DAT_04296c70;
  plVar6[1] = lVar11;
  plVar6[9] = (long)&PTR_LAB_04296ca0;
  lVar7 = FUN_013b2b18();
  *(undefined1 *)(lVar7 + 8) = 1;
  *plVar6 = (long)&PTR_LAB_04296c20;
  plVar6[9] = (long)&PTR_LAB_04296c50;
  plVar6[10] = lVar15;
  plVar6[0xb] = lVar15;
  plVar6[0xc] = 0x1c71c71c71c71c7;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  plVar14 = plVar6 + 0xf;
  *plVar14 = lVar15;
  plVar6[0x10] = 0x1c71c71c71c71c7;
  plVar6[0x11] = 0;
  plVar6[0x12] = plVar6[0xe];
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  lVar8 = FUN_013b4538(plVar14,0x20);
  lVar11 = plVar6[0x13];
  lVar13 = plVar6[0x14];
  local_68 = 0;
  lVar7 = lVar8;
  plStack_70 = plVar14;
  if (lVar11 == 0) {
    local_68 = 0;
  }
  else {
    local_78 = lVar8;
    if (lVar13 == 0) {
      lVar10 = 0;
      local_68 = 0;
    }
    else {
      lVar12 = lVar13 * 0x90;
      lVar10 = lVar11;
      do {
        FUN_013b4060(plVar14,lVar7,lVar10);
        lVar10 = lVar10 + 0x90;
        lVar7 = lVar7 + 0x90;
        lVar12 = lVar12 + -0x90;
      } while (lVar12 != 0);
      lVar10 = plVar6[0x14];
      local_68 = (lVar7 - lVar8 >> 4) * -0x71c71c71c71c71c7;
      if (lVar10 != lVar13) {
        lVar12 = 0;
        do {
          FUN_013b4060(plVar14,lVar7 + lVar12,lVar11 + lVar13 * 0x90 + lVar12);
          lVar12 = lVar12 + 0x90;
        } while (lVar13 * -0x90 + lVar10 * 0x90 != lVar12);
        lVar10 = plVar6[0x14];
        lVar7 = lVar7 + lVar12;
      }
    }
    FUN_02cc5e70(lVar11,lVar10);
    lVar11 = plVar6[0x15];
    plVar14 = (long *)plVar6[0xf];
    lVar13 = plVar6[0x13];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar13,lVar11 * 0x90,0x10);
        goto LAB_02cc55d0;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar11 * 0x90,0x10);
  }
LAB_02cc55d0:
  plVar6[0x13] = lVar8;
  plVar6[0x14] = (lVar7 - lVar8 >> 4) * -0x71c71c71c71c71c7;
  plVar6[0x15] = 0x20;
  local_78 = 0;
  FUN_013b48c8(&local_78);
  plVar14 = plVar6 + 0x1a;
  *plVar14 = lVar15;
  *(undefined4 *)(plVar6 + 0x19) = 0;
  plVar6[0x16] = lVar15;
  plVar6[0x17] = 0x1fffffffffffffff;
  plVar6[0x18] = 0;
  plVar6[0x1b] = 0x1fffffffffffffff;
  plVar6[0x1c] = 0;
  plVar6[0x1f] = 0;
  plVar6[0x20] = 0;
  plVar6[0x1d] = plVar6[0x19];
  plVar6[0x1e] = 0;
  lVar8 = FUN_013b58d8(plVar14,0x20);
  lVar11 = plVar6[0x1e];
  lVar13 = plVar6[0x1f];
  local_68 = 0;
  lVar7 = lVar8;
  plStack_70 = plVar14;
  if (lVar11 == 0) {
    local_68 = 0;
  }
  else {
    local_78 = lVar8;
    if (lVar13 == 0) {
      lVar10 = 0;
      local_68 = 0;
    }
    else {
      lVar12 = lVar13 << 3;
      lVar10 = lVar11;
      do {
        FUN_013b5c0c(plVar14,lVar7,lVar10);
        lVar10 = lVar10 + 8;
        lVar7 = lVar7 + 8;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
      lVar10 = plVar6[0x1f];
      local_68 = lVar7 - lVar8 >> 3;
      if (lVar10 != lVar13) {
        lVar12 = 0;
        do {
          FUN_013b5c0c(plVar14,lVar7 + lVar12,lVar11 + lVar13 * 8 + lVar12);
          lVar12 = lVar12 + 8;
        } while (lVar10 * 8 + lVar13 * -8 != lVar12);
        lVar10 = plVar6[0x1f];
        lVar7 = lVar7 + lVar12;
      }
    }
    FUN_02cc5f90(lVar11,lVar10);
    lVar11 = plVar6[0x20];
    plVar14 = (long *)plVar6[0x1a];
    lVar13 = plVar6[0x1e];
    uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(plVar14,lVar13,lVar11 << 3,8);
        goto LAB_02cc577c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar11 << 3,8);
  }
LAB_02cc577c:
  plVar6[0x1e] = lVar8;
  plVar6[0x1f] = lVar7 - lVar8 >> 3;
  plVar6[0x20] = 0x20;
  local_78 = 0;
  FUN_013b5ba0(&local_78);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0x21),true,0);
  DAT_04408b98 = lVar15;
  plVar6[1] = (long)param_2;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0x128;
  plVar6[4] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


