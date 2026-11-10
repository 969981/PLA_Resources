/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c59c80; name: FUN_02c59c80
 */


void FUN_02c59c80(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  void *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined1 auStack_68 [24];
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar7 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_0428add0;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_0428ae10;
  param_1[0x16] = 0;
  plVar11 = param_1 + 0xb;
  *plVar11 = 0;
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
  FUN_02c8b88c(&local_88,param_2);
  pvVar6 = local_88;
  memset(local_88,0,0x168);
  local_88 = (void *)0x0;
  lVar7 = *plVar11;
  *plVar11 = (long)pvVar6;
  lVar4 = tpidr_el0;
  if (lVar7 != 0) {
    FUN_02bcbe58(auStack_68,0);
    plVar1 = (long *)param_1[0xc];
    lVar9 = param_1[0xd];
    lVar10 = param_1[0xe];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) == 0) {
LAB_02c59dc4:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar9,lVar10);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c59dc4;
      FUN_02bcc824(plVar1,lVar7,lVar9,lVar10);
    }
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
    *(int *)(lVar4 + 0x38d480) = iVar3;
    if (iVar3 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar4 + 0x38d484) = 0;
    }
  }
  param_1[0xc] = local_80;
  param_1[0xd] = lStack_78;
  param_1[0xe] = local_70;
  FUN_02c5a270(&local_88,param_2);
  pvVar6 = local_88;
  local_88 = (void *)0x0;
  puVar8 = (undefined8 *)param_1[0x13];
  param_1[0x13] = (long)pvVar6;
  if (puVar8 == (undefined8 *)0x0) {
    param_1[0x15] = lStack_78;
    param_1[0x16] = local_70;
    goto LAB_02c59fc4;
  }
  FUN_02bcbe58(auStack_68,0);
  (**(code **)*puVar8)(puVar8);
  plVar1 = (long *)param_1[0x14];
  lVar7 = param_1[0x15];
  lVar9 = param_1[0x16];
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar5 & 1) == 0) {
LAB_02c59f08:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,lVar7,lVar9);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c59f08;
    FUN_02bcc824(plVar1,puVar8,lVar7,lVar9);
  }
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar3;
  if (iVar3 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar4 + 0x38d484) = 0;
  }
  param_1[0x15] = lStack_78;
  param_1[0x16] = local_70;
  pvVar6 = (void *)param_1[0x13];
LAB_02c59fc4:
  param_1[0x14] = local_80;
  FUN_02c658e0(pvVar6,*plVar11,0);
  return;
}


