/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5a394; name: FUN_02c5a394
 */


void FUN_02c5a394(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long local_88;
  long *local_80;
  long local_78;
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
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_0428add0;
  param_1[1] = lVar6;
  param_1[9] = (long)&PTR_LAB_0428ae10;
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
  FUN_02c8b99c(&local_88,param_2,param_3,param_4,param_5);
  lVar4 = local_88;
  local_88 = 0;
  lVar6 = param_1[0xb];
  param_1[0xb] = lVar4;
  lVar4 = tpidr_el0;
  if (lVar6 == 0) {
    param_1[0xd] = local_78;
    param_1[0xe] = local_70;
    param_1[0xc] = (long)local_80;
    local_88 = 0;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    plVar1 = (long *)param_1[0xc];
    lVar8 = param_1[0xd];
    lVar9 = param_1[0xe];
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) == 0) {
LAB_02c5a4d8:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar8,lVar9);
    }
    else {
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5a4d8;
      FUN_02bcc824(plVar1,lVar6,lVar8,lVar9);
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
    lVar6 = local_88;
    param_1[0xc] = (long)local_80;
    param_1[0xd] = local_78;
    param_1[0xe] = local_70;
    local_88 = 0;
    if (lVar6 != 0) {
      FUN_02bcbe58(auStack_68,0);
      lVar9 = local_70;
      lVar8 = local_78;
      plVar1 = local_80;
      uVar5 = (**(code **)(*local_80 + 0xc0))(local_80);
      if ((uVar5 & 1) == 0) {
LAB_02c5a5f4:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar8,lVar9);
      }
      else {
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5a5f4;
        FUN_02bcc824(plVar1,lVar6,lVar8,lVar9);
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
  }
  FUN_02c5a270(&local_88,param_2);
  lVar6 = local_88;
  local_88 = 0;
  puVar7 = (undefined8 *)param_1[0x13];
  param_1[0x13] = lVar6;
  if (puVar7 == (undefined8 *)0x0) {
    param_1[0x15] = local_78;
    param_1[0x16] = local_70;
    param_1[0x14] = (long)local_80;
    goto LAB_02c5a804;
  }
  FUN_02bcbe58(auStack_68,0);
  (**(code **)*puVar7)(puVar7);
  plVar1 = (long *)param_1[0x14];
  lVar6 = param_1[0x15];
  lVar8 = param_1[0x16];
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar5 & 1) == 0) {
LAB_02c5a740:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,lVar6,lVar8);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c5a740;
    FUN_02bcc824(plVar1,puVar7,lVar6,lVar8);
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
  param_1[0x14] = (long)local_80;
  lVar6 = param_1[0x13];
  param_1[0x15] = local_78;
  param_1[0x16] = local_70;
LAB_02c5a804:
  lVar4 = param_1[0xb];
  *(undefined8 *)(lVar6 + 8) = 0;
  *(long *)(lVar6 + 0x10) = lVar4;
  *(undefined2 *)(lVar6 + 0x18) = 1;
  FUN_02c5abd8(param_1);
  FUN_02c5acfc(param_1);
  return;
}


