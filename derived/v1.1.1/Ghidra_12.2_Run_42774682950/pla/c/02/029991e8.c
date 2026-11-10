/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029991e8; name: FUN_029991e8
 */


void FUN_029991e8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [24];
  
  *param_1 = param_2[1];
  param_1[1] = param_2[2];
  param_1[2] = param_2[3];
  param_1[3] = param_2[4];
  param_1[4] = param_2[5];
  uVar11 = param_2[6];
  puVar14 = param_1 + 6;
  *puVar14 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = uVar11;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar12 = (long *)*param_2;
  puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0xc10,8);
  puVar4 = PTR_DAT_04379528;
  if (puVar7 == (undefined8 *)0x0) {
    plVar12 = (long *)0x0;
    uVar16 = 0;
    uVar11 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02999e68;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    uVar11 = *param_2;
    *puVar7 = &PTR_LAB_04276f68;
    memset(puVar7 + 1,0,0xc04);
    FUN_0299b19c(puVar7,uVar11);
    *(undefined4 *)(puVar7 + 0x181) = 0;
    lVar10 = 0;
    do {
      lVar1 = lVar10 + 0x60;
      *(undefined2 *)(*(long *)((long)puVar7 + lVar10 + 8) + 8) = 0;
      *(undefined2 *)(*(long *)((long)puVar7 + lVar10 + 0x28) + 8) = 0;
      *(undefined2 *)(*(long *)((long)puVar7 + lVar10 + 0x48) + 8) = 0;
      lVar10 = lVar1;
    } while (lVar1 != 0xc00);
    uVar11 = 8;
    uVar16 = 0xc10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  puVar13 = (undefined8 *)*puVar14;
  *puVar14 = puVar7;
  lVar8 = tpidr_el0;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar13)(puVar13);
    plVar2 = (long *)param_1[7];
    uVar3 = param_1[8];
    uVar15 = param_1[9];
    uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar9 & 1) == 0) {
LAB_029993c8:
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar13,uVar3,uVar15);
    }
    else {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_029993c8;
      FUN_02bcc824(plVar2,puVar13,uVar3,uVar15);
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
    *(int *)(lVar8 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar8 + 0x38d484) = 0;
    }
  }
  param_1[7] = plVar12;
  param_1[8] = uVar16;
  param_1[9] = uVar11;
  plVar12 = (long *)*param_2;
  puVar7 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x410,8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar12 = (long *)0x0;
    uVar11 = 0;
    uVar16 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_02999e68:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    uVar11 = *param_2;
    *puVar7 = &PTR_LAB_04276f48;
    memset(puVar7 + 1,0,0x404);
    FUN_0299a4c8(puVar7,uVar11);
    uVar11 = 0x410;
    *(undefined4 *)(puVar7 + 0x81) = 0;
    memset((void *)(puVar7[1] + 8),0,0x410);
    memset((void *)(puVar7[5] + 8),0,0x410);
    memset((void *)(puVar7[9] + 8),0,0x410);
    memset((void *)(puVar7[0xd] + 8),0,0x410);
    memset((void *)(puVar7[0x11] + 8),0,0x410);
    memset((void *)(puVar7[0x15] + 8),0,0x410);
    memset((void *)(puVar7[0x19] + 8),0,0x410);
    memset((void *)(puVar7[0x1d] + 8),0,0x410);
    memset((void *)(puVar7[0x21] + 8),0,0x410);
    memset((void *)(puVar7[0x25] + 8),0,0x410);
    memset((void *)(puVar7[0x29] + 8),0,0x410);
    memset((void *)(puVar7[0x2d] + 8),0,0x410);
    memset((void *)(puVar7[0x31] + 8),0,0x410);
    memset((void *)(puVar7[0x35] + 8),0,0x410);
    memset((void *)(puVar7[0x39] + 8),0,0x410);
    memset((void *)(puVar7[0x3d] + 8),0,0x410);
    memset((void *)(puVar7[0x41] + 8),0,0x410);
    memset((void *)(puVar7[0x45] + 8),0,0x410);
    memset((void *)(puVar7[0x49] + 8),0,0x410);
    memset((void *)(puVar7[0x4d] + 8),0,0x410);
    memset((void *)(puVar7[0x51] + 8),0,0x410);
    memset((void *)(puVar7[0x55] + 8),0,0x410);
    memset((void *)(puVar7[0x59] + 8),0,0x410);
    memset((void *)(puVar7[0x5d] + 8),0,0x410);
    memset((void *)(puVar7[0x61] + 8),0,0x410);
    memset((void *)(puVar7[0x65] + 8),0,0x410);
    memset((void *)(puVar7[0x69] + 8),0,0x410);
    memset((void *)(puVar7[0x6d] + 8),0,0x410);
    memset((void *)(puVar7[0x71] + 8),0,0x410);
    memset((void *)(puVar7[0x75] + 8),0,0x410);
    memset((void *)(puVar7[0x79] + 8),0,0x410);
    memset((void *)(puVar7[0x7d] + 8),0,0x410);
    uVar16 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  puVar14 = (undefined8 *)param_1[10];
  param_1[10] = puVar7;
  if (puVar14 == (undefined8 *)0x0) goto LAB_029998c8;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar14)(puVar14);
  plVar2 = (long *)param_1[0xb];
  uVar3 = param_1[0xc];
  uVar15 = param_1[0xd];
  uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar9 & 1) == 0) {
LAB_02999828:
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar14,uVar3,uVar15);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02999828;
    FUN_02bcc824(plVar2,puVar14,uVar3,uVar15);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  puVar7 = (undefined8 *)param_1[10];
LAB_029998c8:
  param_1[0xb] = plVar12;
  param_1[0xc] = uVar11;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = uVar16;
  param_1[0xe] = 0;
  *(undefined4 *)(puVar7 + 0x81) = 0;
  memset((void *)(puVar7[1] + 8),0,0x410);
  memset((void *)(puVar7[5] + 8),0,0x410);
  memset((void *)(puVar7[9] + 8),0,0x410);
  memset((void *)(puVar7[0xd] + 8),0,0x410);
  memset((void *)(puVar7[0x11] + 8),0,0x410);
  memset((void *)(puVar7[0x15] + 8),0,0x410);
  memset((void *)(puVar7[0x19] + 8),0,0x410);
  memset((void *)(puVar7[0x1d] + 8),0,0x410);
  memset((void *)(puVar7[0x21] + 8),0,0x410);
  memset((void *)(puVar7[0x25] + 8),0,0x410);
  memset((void *)(puVar7[0x29] + 8),0,0x410);
  memset((void *)(puVar7[0x2d] + 8),0,0x410);
  memset((void *)(puVar7[0x31] + 8),0,0x410);
  memset((void *)(puVar7[0x35] + 8),0,0x410);
  memset((void *)(puVar7[0x39] + 8),0,0x410);
  memset((void *)(puVar7[0x3d] + 8),0,0x410);
  memset((void *)(puVar7[0x41] + 8),0,0x410);
  memset((void *)(puVar7[0x45] + 8),0,0x410);
  memset((void *)(puVar7[0x49] + 8),0,0x410);
  memset((void *)(puVar7[0x4d] + 8),0,0x410);
  memset((void *)(puVar7[0x51] + 8),0,0x410);
  memset((void *)(puVar7[0x55] + 8),0,0x410);
  memset((void *)(puVar7[0x59] + 8),0,0x410);
  memset((void *)(puVar7[0x5d] + 8),0,0x410);
  memset((void *)(puVar7[0x61] + 8),0,0x410);
  memset((void *)(puVar7[0x65] + 8),0,0x410);
  memset((void *)(puVar7[0x69] + 8),0,0x410);
  memset((void *)(puVar7[0x6d] + 8),0,0x410);
  memset((void *)(puVar7[0x71] + 8),0,0x410);
  memset((void *)(puVar7[0x75] + 8),0,0x410);
  memset((void *)(puVar7[0x79] + 8),0,0x410);
  memset((void *)(puVar7[0x7d] + 8),0,0x410);
  lVar10 = param_1[6];
  lVar8 = 0;
  *(undefined4 *)(lVar10 + 0xc08) = 0;
  do {
    lVar1 = lVar10 + lVar8;
    lVar8 = lVar8 + 0x60;
    *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
  } while (lVar8 != 0xc00);
  return;
}


