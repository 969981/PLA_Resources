/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c0020; name: FUN_028c0020
 */


void FUN_028c0020(undefined8 *param_1,long *param_2,long param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 auStack_78 [24];
  
  param_1[0x10] = 0;
  *param_1 = &PTR_LAB_042730a8;
  param_1[1] = param_3;
  param_1[2] = &PTR_LAB_042731e0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = &PTR_LAB_04273200;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0x3c00000000;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar12 = param_1 + 0x16;
  *puVar12 = 0;
  *(undefined8 *)((long)param_1 + 0xa2) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0x3f8000003f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar6 = PTR_DAT_0437a570;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x3f800000;
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
    lVar14 = *(long *)(param_3 + 200);
  }
  else {
    lVar14 = *(long *)(param_3 + 200);
  }
  plVar19 = (long *)PTR_DAT_0437a578;
  if (lVar14 != 0) {
    plVar19 = (long *)(lVar14 + 0x88);
  }
  if (((param_4 & 1) != 0) && (*plVar19 != 0)) {
    puVar10 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x130,8);
    if (puVar10 == (undefined8 *)0x0) {
      uVar17 = 0;
      uVar18 = 0;
      plVar19 = (long *)0x0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_028c1368;
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR_FUN_04273488;
      *(undefined4 *)((long)puVar10 + 0xc) = 0;
      FUN_028cca78(puVar10 + 2);
      FUN_028ccb68(puVar10 + 9);
      FUN_028ccc5c(puVar10 + 0x10);
      FUN_00bb8ef0(puVar10 + 0x17);
      FUN_028ccd4c(puVar10 + 0x1e);
      uVar18 = 0x130;
      uVar17 = 8;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      plVar19 = param_2;
    }
    puVar15 = (undefined8 *)*puVar12;
    *puVar12 = puVar10;
    if (puVar15 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar15)(puVar15);
      plVar1 = (long *)param_1[0x17];
      uVar2 = param_1[0x18];
      uVar16 = param_1[0x19];
      uVar11 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      lVar14 = tpidr_el0;
      if ((uVar11 & 1) == 0) {
LAB_028c0268:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar15,uVar2,uVar16);
      }
      else {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_028c0268;
        FUN_02bcc824(plVar1,puVar15,uVar2,uVar16);
      }
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar9 = *(int *)(lVar14 + 0x38d480) + -1;
      *(int *)(lVar14 + 0x38d480) = iVar9;
      if (iVar9 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar14 + 0x38d484) = 0;
      }
    }
    param_1[0x17] = plVar19;
    param_1[0x18] = uVar18;
    param_1[0x19] = uVar17;
  }
  if ((param_4 >> 1 & 1) != 0) {
    puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x78,8);
    if (puVar12 == (undefined8 *)0x0) {
      uVar18 = 0;
      uVar17 = 0;
      plVar19 = (long *)0x0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_028c1368;
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar12 = &PTR_FUN_042734d0;
      *(undefined1 *)(puVar12 + 1) = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      uVar17 = 8;
      uVar18 = 0x78;
      puVar12[0xc] = 0;
      *(undefined4 *)(puVar12 + 0xd) = 0;
      *(undefined2 *)(puVar12 + 0xe) = 0;
      puVar12[6] = param_2;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = param_2;
      puVar12[0xb] = 0x7ffffffffffffff;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      plVar19 = param_2;
    }
    puVar10 = (undefined8 *)param_1[0x1a];
    param_1[0x1a] = puVar12;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar10)(puVar10);
      plVar1 = (long *)param_1[0x1b];
      uVar2 = param_1[0x1c];
      uVar16 = param_1[0x1d];
      uVar11 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar11 & 1) == 0) {
LAB_028c0454:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar2,uVar16);
      }
      else {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_028c0454;
        FUN_02bcc824(plVar1,puVar10,uVar2,uVar16);
      }
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar9 = *(int *)(lVar14 + 0x38d480) + -1;
      *(int *)(lVar14 + 0x38d480) = iVar9;
      if (iVar9 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar14 + 0x38d484) = 0;
      }
    }
    param_1[0x1b] = plVar19;
    param_1[0x1c] = uVar18;
    param_1[0x1d] = uVar17;
  }
  if ((param_4 >> 2 & 1) != 0) {
    puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x50,8);
    puVar6 = PTR_DAT_04379520;
    if (puVar12 == (undefined8 *)0x0) {
      plVar19 = (long *)0x0;
      uVar18 = 0;
      uVar17 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      puVar7 = PTR_DAT_04379528;
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_028c1368;
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = &PTR_FUN_04273790;
      puVar12[1] = 0;
      if (((*puVar6 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
      lVar8 = DAT_043f1798;
      if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
         (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) {
        lVar5 = tpidr_el0;
        lVar13 = *(long *)(lVar5 + 0x20);
        if (*(long *)(lVar5 + 0x20) == 0) {
          *(long *)(lVar5 + 0x20) = DAT_043f1798;
          lVar13 = lVar8;
        }
      }
      puVar12[7] = 0;
      *(undefined4 *)(puVar12 + 8) = 0;
      puVar12[5] = lVar13;
      puVar12[6] = 0x492492492492492;
      uVar17 = 8;
      uVar18 = 0x50;
      *(undefined1 *)((long)puVar12 + 0x4c) = 0;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      plVar19 = param_2;
    }
    puVar10 = (undefined8 *)param_1[0x1e];
    param_1[0x1e] = puVar12;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar10)(puVar10);
      plVar1 = (long *)param_1[0x1f];
      uVar2 = param_1[0x20];
      uVar16 = param_1[0x21];
      uVar11 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar11 & 1) == 0) {
LAB_028c06a0:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar2,uVar16);
      }
      else {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_028c06a0;
        FUN_02bcc824(plVar1,puVar10,uVar2,uVar16);
      }
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar9 = *(int *)(lVar14 + 0x38d480) + -1;
      *(int *)(lVar14 + 0x38d480) = iVar9;
      if (iVar9 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar14 + 0x38d484) = 0;
      }
    }
    param_1[0x1f] = plVar19;
    param_1[0x20] = uVar18;
    param_1[0x21] = uVar17;
  }
  if ((param_4 >> 3 & 1) != 0) {
    puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,0x10);
    if (puVar12 == (undefined8 *)0x0) {
      plVar19 = (long *)0x0;
      uVar18 = 0;
      uVar17 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_028c1368;
      *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      uVar2 = *(undefined8 *)PTR_DAT_0437a120;
      uVar3 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
      *(undefined1 *)(puVar12 + 1) = 0;
      *puVar12 = &PTR_LAB_04273748;
      *(undefined2 *)((long)puVar12 + 10) = 0xffff;
      puVar12[2] = uVar2;
      puVar12[3] = uVar3;
      uVar16 = *(undefined8 *)PTR_DAT_04379570;
      uVar4 = *(undefined8 *)(PTR_DAT_04379570 + 8);
      puVar12[4] = uVar16;
      puVar12[5] = uVar4;
      uVar17 = 0x10;
      puVar12[6] = 0;
      puVar12[7] = 0;
      uVar18 = 0x70;
      puVar12[8] = uVar2;
      puVar12[9] = uVar3;
      puVar12[10] = uVar16;
      puVar12[0xb] = uVar4;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      plVar19 = param_2;
    }
    puVar10 = (undefined8 *)param_1[0x22];
    param_1[0x22] = puVar12;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar10)(puVar10);
      plVar1 = (long *)param_1[0x23];
      uVar2 = param_1[0x24];
      uVar16 = param_1[0x25];
      uVar11 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar11 & 1) == 0) {
LAB_028c08a4:
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar10,uVar2,uVar16);
      }
      else {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_028c08a4;
        FUN_02bcc824(plVar1,puVar10,uVar2,uVar16);
      }
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar9 = *(int *)(lVar14 + 0x38d480) + -1;
      *(int *)(lVar14 + 0x38d480) = iVar9;
      if (iVar9 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar14 + 0x38d484) = 0;
      }
    }
    param_1[0x23] = plVar19;
    param_1[0x24] = uVar18;
    param_1[0x25] = uVar17;
  }
  if ((param_4 >> 4 & 1) == 0) {
    return;
  }
  puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
  puVar6 = PTR_DAT_04379520;
  if (puVar12 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar18 = 0;
    uVar17 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    puVar7 = PTR_DAT_04379528;
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_028c1368:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = param_2;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    *puVar12 = &PTR_FUN_04273220;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    if (((*puVar6 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    lVar8 = DAT_043f1798;
    if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
       (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) {
      lVar5 = tpidr_el0;
      lVar13 = *(long *)(lVar5 + 0x20);
      if (*(long *)(lVar5 + 0x20) == 0) {
        *(long *)(lVar5 + 0x20) = DAT_043f1798;
        lVar13 = lVar8;
      }
    }
    puVar12[9] = 0;
    *(undefined4 *)(puVar12 + 10) = 0;
    puVar12[7] = lVar13;
    puVar12[8] = 0x492492492492492;
    uVar17 = 8;
    uVar18 = 0x60;
    *(undefined4 *)(puVar12 + 0xb) = 0xbf800000;
    *(undefined1 *)((long)puVar12 + 0x5c) = 0;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  puVar10 = (undefined8 *)param_1[0x26];
  param_1[0x26] = puVar12;
  if (puVar10 == (undefined8 *)0x0) goto LAB_028c0b94;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar10)(puVar10);
  plVar19 = (long *)param_1[0x27];
  uVar2 = param_1[0x28];
  uVar16 = param_1[0x29];
  uVar11 = (**(code **)(*plVar19 + 0xc0))(plVar19);
  if ((uVar11 & 1) == 0) {
LAB_028c0af4:
    (**(code **)(*plVar19 + 0x18))(plVar19,puVar10,uVar2,uVar16);
  }
  else {
    lVar14 = tpidr_el0;
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar14 + 0x38d480) < 1) goto LAB_028c0af4;
    FUN_02bcc824(plVar19,puVar10,uVar2,uVar16);
  }
  lVar14 = tpidr_el0;
  if (*(char *)(lVar14 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar14 + 0x38d488) = 1;
    *(undefined8 *)(lVar14 + 0x38d478) = 0;
    *(undefined8 *)(lVar14 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar14 + 0x38d480) + -1;
  *(int *)(lVar14 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar14 + 0x38d484) = 0;
  }
LAB_028c0b94:
  param_1[0x27] = param_2;
  param_1[0x28] = uVar18;
  param_1[0x29] = uVar17;
  return;
}


