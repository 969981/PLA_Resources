/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af960c; name: FUN_00af960c
 */


void FUN_00af960c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  FUN_02ca0e60(&local_78,*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x90));
  puVar5 = local_78;
  local_78 = (undefined8 *)0x0;
  puVar7 = *(undefined8 **)(param_1 + 0x98);
  *(undefined8 **)(param_1 + 0x98) = puVar5;
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = local_68;
    *(undefined8 *)(param_1 + 0xb0) = local_60;
    *(long **)(param_1 + 0xa0) = local_70;
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar7)(puVar7);
  plVar1 = *(long **)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar8 = *(undefined8 *)(param_1 + 0xb0);
  uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar4 = tpidr_el0;
  if ((uVar6 & 1) == 0) {
LAB_00af96f4:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,uVar2,uVar8);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00af96f4;
    FUN_02bcc824(plVar1,puVar7,uVar2,uVar8);
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
  puVar5 = local_78;
  *(long **)(param_1 + 0xa0) = local_70;
  *(undefined8 *)(param_1 + 0xa8) = local_68;
  *(undefined8 *)(param_1 + 0xb0) = local_60;
  local_78 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar5)(puVar5);
  uVar6 = (**(code **)(*local_70 + 0xc0))(local_70);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(local_70,puVar5,local_68,local_60);
      goto LAB_00af9800;
    }
  }
  (**(code **)(*local_70 + 0x18))(local_70,puVar5,local_68,local_60);
LAB_00af9800:
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
  return;
}


