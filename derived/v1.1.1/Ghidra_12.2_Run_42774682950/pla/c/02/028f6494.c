/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f6494; name: FUN_028f6494
 */


void FUN_028f6494(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_LAB_04274ba8;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar5 = PTR_DAT_0437a570;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  local_80 = param_3;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
    lVar11 = *(long *)(param_3 + 200);
    if (lVar11 != 0) goto LAB_028f791c;
LAB_028f6528:
    plVar16 = (long *)PTR_DAT_0437a578;
  }
  else {
    lVar11 = *(long *)(param_3 + 200);
    if (lVar11 == 0) goto LAB_028f6528;
LAB_028f791c:
    plVar16 = (long *)(lVar11 + 0x88);
  }
  lVar11 = tpidr_el0;
  if (*plVar16 != 0) {
    puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,8);
    if (puVar8 == (undefined8 *)0x0) {
      plVar16 = (long *)0x0;
      uVar14 = 0;
      uVar15 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_028f7a44;
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *puVar8 = &PTR_FUN_04274c60;
      *(undefined1 *)(puVar8 + 1) = 0;
      FUN_028fb698(puVar8 + 2);
      *(undefined1 *)(puVar8 + 9) = 0;
      FUN_028fb698(puVar8 + 10);
      FUN_008c2014(puVar8 + 0x11);
      uVar15 = 8;
      uVar14 = 0xc0;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      plVar16 = param_2;
    }
    puVar12 = (undefined8 *)param_1[3];
    param_1[3] = puVar8;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_02bcbe58(&local_a0,0);
      (**(code **)*puVar12)(puVar12);
      plVar1 = (long *)param_1[4];
      uVar2 = param_1[5];
      uVar13 = param_1[6];
      uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar10 & 1) == 0) {
LAB_028f6674:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar2,uVar13);
      }
      else {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f6674;
        FUN_02bcc824(plVar1,puVar12,uVar2,uVar13);
      }
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
      *(int *)(lVar11 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar11 + 0x38d484) = 0;
      }
    }
    param_1[4] = plVar16;
    param_1[5] = uVar14;
    param_1[6] = uVar15;
  }
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xd8,8);
  if (puVar8 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_028f7a44;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *(undefined4 *)(puVar8 + 6) = 0;
    *puVar8 = &PTR_LAB_04274f60;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = param_2;
    puVar8[7] = 0;
    puVar8[8] = param_2;
    uVar15 = 8;
    uVar14 = 0xd8;
    *(undefined4 *)(puVar8 + 0xb) = 0;
    puVar8[0xc] = 0;
    *(undefined4 *)(puVar8 + 0xd) = 0x3f800000;
    puVar8[0x12] = 0;
    *(undefined4 *)(puVar8 + 0x13) = 0;
    *(undefined4 *)(puVar8 + 0x18) = 0;
    puVar8[0x19] = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0x3f800000;
    puVar8[4] = 0xaaaaaaaaaaaaaaa;
    puVar8[5] = 0;
    puVar8[9] = 0xaaaaaaaaaaaaaaa;
    puVar8[10] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = param_2;
    puVar8[0x11] = 0xaaaaaaaaaaaaaaa;
    puVar8[0x14] = 0;
    puVar8[0x15] = param_2;
    puVar8[0x16] = 0xaaaaaaaaaaaaaaa;
    puVar8[0x17] = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    plVar16 = param_2;
  }
  puVar12 = (undefined8 *)param_1[7];
  param_1[7] = puVar8;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_a0,0);
    (**(code **)*puVar12)(puVar12);
    plVar1 = (long *)param_1[8];
    uVar2 = param_1[9];
    uVar13 = param_1[10];
    uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar10 & 1) == 0) {
LAB_028f687c:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f687c;
      FUN_02bcc824(plVar1,puVar12,uVar2,uVar13);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  param_1[8] = plVar16;
  param_1[9] = uVar14;
  param_1[10] = uVar15;
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xe8,8);
  if (puVar8 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_028f7a44;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar8[6] = 0;
    puVar8[4] = param_2;
    puVar8[5] = 0x3ffffffffffffff;
    *(undefined4 *)(puVar8 + 7) = 0;
    puVar8[10] = 0x3ffffffffffffff;
    puVar8[0xb] = 0;
    uVar15 = 8;
    uVar14 = 0xe8;
    *(undefined4 *)(puVar8 + 0xc) = 0;
    puVar8[0xd] = 0;
    *(undefined4 *)(puVar8 + 0x15) = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0;
    puVar8[0x1b] = 0;
    *puVar8 = &PTR_LAB_04274d50;
    puVar8[1] = param_2;
    *(undefined4 *)(puVar8 + 0xe) = 0x3f800000;
    *(undefined4 *)(puVar8 + 0x1c) = 0x3f800000;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[8] = 0;
    puVar8[9] = param_2;
    puVar8[0xf] = param_2;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = param_2;
    puVar8[0x13] = 0x3ffffffffffffff;
    puVar8[0x14] = 0;
    puVar8[0x16] = 0;
    puVar8[0x17] = param_2;
    puVar8[0x18] = 0x3ffffffffffffff;
    puVar8[0x19] = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    plVar16 = param_2;
  }
  puVar12 = (undefined8 *)param_1[0xb];
  param_1[0xb] = puVar8;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_a0,0);
    (**(code **)*puVar12)(puVar12);
    plVar1 = (long *)param_1[0xc];
    uVar2 = param_1[0xd];
    uVar13 = param_1[0xe];
    uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar10 & 1) == 0) {
LAB_028f6a84:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f6a84;
      FUN_02bcc824(plVar1,puVar12,uVar2,uVar13);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  param_1[0xc] = plVar16;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar15;
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_028f7a44:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    *puVar8 = &PTR_LAB_04274ef8;
    puVar6 = PTR_DAT_0437a120;
    puVar5 = PTR_DAT_04379570;
    puVar8[6] = 0;
    puVar8[7] = 0;
    uVar14 = 0x10;
    uVar2 = *(undefined8 *)puVar6;
    uVar3 = *(undefined8 *)(puVar6 + 8);
    uVar15 = 0xd0;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    uVar13 = *(undefined8 *)puVar5;
    uVar4 = *(undefined8 *)(puVar5 + 8);
    puVar8[8] = uVar2;
    puVar8[9] = uVar3;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = uVar2;
    puVar8[0xf] = uVar3;
    puVar8[0x10] = uVar13;
    puVar8[0x11] = uVar4;
    puVar8[4] = uVar13;
    puVar8[5] = uVar4;
    puVar8[10] = uVar13;
    puVar8[0xb] = uVar4;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = uVar2;
    puVar8[0x15] = uVar3;
    puVar8[0x16] = uVar13;
    puVar8[0x17] = uVar4;
    puVar8[0x18] = 0;
    puVar8[0x19] = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    plVar16 = param_2;
  }
  puVar12 = (undefined8 *)param_1[0xf];
  param_1[0xf] = puVar8;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_a0,0);
    (**(code **)*puVar12)(puVar12);
    plVar1 = (long *)param_1[0x10];
    uVar2 = param_1[0x11];
    uVar13 = param_1[0x12];
    uVar10 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar10 & 1) == 0) {
LAB_028f6c84:
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar2,uVar13);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f6c84;
      FUN_02bcc824(plVar1,puVar12,uVar2,uVar13);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  param_1[0x12] = uVar14;
  param_1[0x10] = plVar16;
  param_1[0x11] = uVar15;
  local_b0 = 0x100;
  uStack_a8 = 1;
  FUN_028f7a50(&local_a0,param_2,&local_80,&local_b0);
  uVar14 = local_a0;
  local_a0 = 0;
  puVar8 = (undefined8 *)param_1[0x13];
  param_1[0x13] = uVar14;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar16 = (long *)param_1[0x14];
    uVar14 = param_1[0x15];
    uVar15 = param_1[0x16];
    uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar10 & 1) == 0) {
LAB_028f6dd4:
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar8,uVar14,uVar15);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f6dd4;
      FUN_02bcc824(plVar16,puVar8,uVar14,uVar15);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  param_1[0x14] = local_98;
  param_1[0x15] = uStack_90;
  param_1[0x16] = local_88;
  local_b0 = 0x110;
  uStack_a8 = 1;
  FUN_028f7a50(&local_a0,param_2,&local_80,&local_b0);
  uVar14 = local_a0;
  local_a0 = 0;
  puVar8 = (undefined8 *)param_1[0x17];
  param_1[0x17] = uVar14;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar8)(puVar8);
    plVar16 = (long *)param_1[0x18];
    uVar14 = param_1[0x19];
    uVar15 = param_1[0x1a];
    uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
    if ((uVar10 & 1) == 0) {
LAB_028f6f2c:
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar8,uVar14,uVar15);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f6f2c;
      FUN_02bcc824(plVar16,puVar8,uVar14,uVar15);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  param_1[0x18] = local_98;
  param_1[0x19] = uStack_90;
  param_1[0x1a] = local_88;
  local_b0 = 0x120;
  uStack_a8 = 1;
  FUN_028f7a50(&local_a0,param_2,&local_80,&local_b0);
  uVar14 = local_a0;
  local_a0 = 0;
  puVar8 = (undefined8 *)param_1[0x1b];
  param_1[0x1b] = uVar14;
  if (puVar8 == (undefined8 *)0x0) goto LAB_028f7120;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar8)(puVar8);
  plVar16 = (long *)param_1[0x1c];
  uVar14 = param_1[0x1d];
  uVar15 = param_1[0x1e];
  uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar10 & 1) == 0) {
LAB_028f7084:
    (**(code **)(*plVar16 + 0x18))(plVar16,puVar8,uVar14,uVar15);
  }
  else {
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_028f7084;
    FUN_02bcc824(plVar16,puVar8,uVar14,uVar15);
  }
  if (*(char *)(lVar11 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar11 + 0x38d488) = 1;
    *(undefined8 *)(lVar11 + 0x38d478) = 0;
    *(undefined8 *)(lVar11 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar11 + 0x38d480) + -1;
  *(int *)(lVar11 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar11 + 0x38d484) = 0;
  }
LAB_028f7120:
  param_1[0x1c] = local_98;
  param_1[0x1d] = uStack_90;
  param_1[0x1e] = local_88;
  return;
}


