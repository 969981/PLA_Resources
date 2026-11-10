/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5af7c; name: FUN_02c5af7c
 */


void FUN_02c5af7c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  void *local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined2 local_88;
  undefined8 local_86;
  undefined4 local_7e;
  undefined8 local_7a;
  undefined8 local_72;
  undefined8 local_6a;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_5a;
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_0428add0;
  param_1[1] = lVar7;
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
  FUN_02c8b88c(&local_e0,param_2);
  pvVar3 = local_e0;
  memset(local_e0,0,0x168);
  local_c0 = 0;
  local_b0 = -1;
  local_a8 = 0x3ffffffff;
  local_98 = 0x38a;
  local_94 = 0xff000100000000;
  local_8c = 0xffffffff;
  local_88 = 0x1ff;
  local_60 = 0xffff;
  local_b8 = 0;
  local_a0 = 0xffffffffffffffff;
  local_5c = 0;
  local_7e = 0xffffffff;
  local_7a = 0;
  local_72 = 0;
  local_5a = 0xffff01000100;
  local_86 = 0xffffffffffffffff;
  local_6a = 0;
  FUN_02c8bac0(&local_c0,param_3);
  FUN_02c8c664(local_e0,&local_c0);
  local_e0 = (void *)0x0;
  lVar7 = param_1[0xb];
  param_1[0xb] = (long)pvVar3;
  lVar5 = tpidr_el0;
  if (lVar7 != 0) {
    FUN_02bcbe58(&local_c0,0);
    plVar1 = (long *)param_1[0xc];
    lVar9 = param_1[0xd];
    lVar10 = param_1[0xe];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02c5b140:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar9,lVar10);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02c5b140;
      FUN_02bcc824(plVar1,lVar7,lVar9,lVar10);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  param_1[0xc] = local_d8;
  param_1[0xd] = lStack_d0;
  param_1[0xe] = local_c8;
  FUN_02c5a270(&local_c0,param_2);
  lVar7 = local_c0;
  local_c0 = 0;
  puVar8 = (undefined8 *)param_1[0x13];
  param_1[0x13] = lVar7;
  if (puVar8 == (undefined8 *)0x0) {
    param_1[0x15] = local_b0;
    param_1[0x16] = local_a8;
    param_1[0x14] = CONCAT71(uStack_b7,local_b8);
    goto LAB_02c5b348;
  }
  FUN_02bcbe58(&local_e0,0);
  (**(code **)*puVar8)(puVar8);
  plVar1 = (long *)param_1[0x14];
  lVar7 = param_1[0x15];
  lVar9 = param_1[0x16];
  uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar6 & 1) == 0) {
LAB_02c5b284:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar8,lVar7,lVar9);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02c5b284;
    FUN_02bcc824(plVar1,puVar8,lVar7,lVar9);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
  param_1[0x14] = CONCAT71(uStack_b7,local_b8);
  lVar7 = param_1[0x13];
  param_1[0x15] = local_b0;
  param_1[0x16] = local_a8;
LAB_02c5b348:
  lVar5 = param_1[0xb];
  *(undefined8 *)(lVar7 + 8) = 0;
  *(long *)(lVar7 + 0x10) = lVar5;
  *(undefined2 *)(lVar7 + 0x18) = 1;
  FUN_02c5abd8(param_1);
  FUN_02c5acfc(param_1);
  return;
}


