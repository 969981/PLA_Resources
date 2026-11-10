/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2f270; name: FUN_02c2f270
 */


void FUN_02c2f270(long *param_1,undefined2 param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  undefined2 *local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined1 auStack_58 [24];
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = 0;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x80) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04289e38;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_04289e70;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  *(undefined2 *)(param_1 + 0xf) = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_02c2f150(&local_78,lVar8,param_2);
  puVar7 = local_78;
  local_78 = (undefined2 *)0x0;
  lVar8 = param_1[0xb];
  param_1[0xb] = (long)puVar7;
  if (lVar8 == 0) {
    param_1[0xd] = lStack_68;
    param_1[0xe] = local_60;
    param_1[0xc] = local_70;
    goto joined_r0x02c2f478;
  }
  FUN_02bcbe58(auStack_58,0);
  plVar1 = (long *)param_1[0xc];
  lVar5 = param_1[0xd];
  lVar9 = param_1[0xe];
  uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar2 = tpidr_el0;
  if ((uVar6 & 1) == 0) {
LAB_02c2f390:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,lVar5,lVar9);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02c2f390;
    FUN_02bcc824(plVar1,lVar8,lVar5,lVar9);
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  param_1[0xc] = local_70;
  puVar7 = (undefined2 *)param_1[0xb];
  param_1[0xd] = lStack_68;
  param_1[0xe] = local_60;
joined_r0x02c2f478:
  if (puVar7 != (undefined2 *)0x0) {
    *puVar7 = 0;
    *(undefined1 *)((long)param_1 + 0x7c) = 1;
  }
  return;
}


