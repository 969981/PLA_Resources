/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc2a18; name: FUN_02cc2a18
 */


void FUN_02cc2a18(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [24];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
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
  param_1[0x11] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pvVar6 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x100000,1);
  puVar3 = PTR_DAT_04379528;
  pbVar12 = PTR_DAT_04379520;
  if (pvVar6 == (void *)0x0) {
    param_2 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02cc30cc;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    uVar14 = 0x100000;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    memset(pvVar6,0,0x100000);
    uVar13 = 1;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar11 = param_1[3];
  param_1[3] = pvVar6;
  lVar7 = tpidr_el0;
  if (lVar11 != 0) {
    FUN_02bcbe58(auStack_78,0);
    plVar9 = (long *)param_1[4];
    uVar2 = param_1[5];
    uVar10 = param_1[6];
    uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar8 & 1) == 0) {
LAB_02cc2b84:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,uVar2,uVar10);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02cc2b84;
      FUN_02bcc824(plVar9,lVar11,uVar2,uVar10);
    }
    pbVar12 = PTR_DAT_04379520;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
    pvVar6 = (void *)param_1[3];
  }
  param_1[6] = uVar13;
  param_1[4] = param_2;
  param_1[5] = uVar14;
  memset(pvVar6,0,0x100000);
  plVar9 = (long *)param_1[0x11];
  pvVar6 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x8000,1);
  if (pvVar6 == (void *)0x0) {
    plVar9 = (long *)0x0;
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    if (((*pbVar12 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02cc30cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar9;
    uVar13 = 0x8000;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    memset(pvVar6,0,0x8000);
    uVar14 = 1;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  lVar11 = param_1[7];
  param_1[7] = pvVar6;
  if (lVar11 == 0) goto LAB_02cc2de0;
  FUN_02bcbe58(auStack_78,0);
  plVar1 = (long *)param_1[8];
  uVar2 = param_1[9];
  uVar10 = param_1[10];
  uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar8 & 1) == 0) {
LAB_02cc2d40:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar11,uVar2,uVar10);
  }
  else {
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02cc2d40;
    FUN_02bcc824(plVar1,lVar11,uVar2,uVar10);
  }
  if (*(char *)(lVar7 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar7 + 0x38d488) = 1;
    *(undefined8 *)(lVar7 + 0x38d478) = 0;
    *(undefined8 *)(lVar7 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar5 = *(int *)(lVar7 + 0x38d480) + -1;
  *(int *)(lVar7 + 0x38d480) = iVar5;
  if (iVar5 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar7 + 0x38d484) = 0;
  }
  pvVar6 = (void *)param_1[7];
LAB_02cc2de0:
  param_1[8] = plVar9;
  param_1[9] = uVar13;
  param_1[10] = uVar14;
  memset(pvVar6,0,0x8000);
  return;
}


