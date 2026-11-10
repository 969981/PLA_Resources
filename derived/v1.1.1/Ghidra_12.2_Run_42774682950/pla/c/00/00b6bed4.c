/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6bed4; name: FUN_00b6bed4
 */


void FUN_00b6bed4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  FUN_00b725cc(&local_78,**(undefined8 **)(param_1 + 0x340));
  lVar2 = local_78;
  local_78 = 0;
  lVar4 = *(long *)(param_1 + 0x360);
  *(long *)(param_1 + 0x360) = lVar2;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x378) = local_60;
    *(undefined8 *)(param_1 + 0x370) = local_68;
    *(long **)(param_1 + 0x368) = local_70;
    local_78 = 0;
    goto LAB_00b6bf2c;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_00b6e0d0(lVar4);
  plVar7 = *(long **)(param_1 + 0x368);
  uVar5 = *(undefined8 *)(param_1 + 0x370);
  uVar6 = *(undefined8 *)(param_1 + 0x378);
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar2 = tpidr_el0;
  if ((uVar3 & 1) == 0) {
LAB_00b6bfc8:
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,uVar5,uVar6);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00b6bfc8;
    FUN_02bcc824(plVar7,lVar4,uVar5,uVar6);
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
  lVar4 = local_78;
  *(undefined8 *)(param_1 + 0x378) = local_60;
  *(undefined8 *)(param_1 + 0x370) = local_68;
  *(long **)(param_1 + 0x368) = local_70;
  local_78 = 0;
  if (lVar4 == 0) goto LAB_00b6bf2c;
  FUN_02bcbe58(auStack_58,0);
  FUN_00b6e0d0(lVar4);
  uVar3 = (**(code **)(*local_70 + 0xc0))(local_70);
  if ((uVar3 & 1) == 0) {
LAB_00b6c0f0:
    (**(code **)(*local_70 + 0x18))(local_70,lVar4,local_68,local_60);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00b6c0f0;
    FUN_02bcc824(local_70,lVar4,local_68,local_60);
  }
  if (*(char *)(lVar2 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar2 + 0x38d488) = 1;
    *(undefined8 *)(lVar2 + 0x38d478) = 0;
    *(undefined8 *)(lVar2 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar2 + 0x38d480) + -1;
  *(int *)(lVar2 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar2 + 0x38d484) = 0;
  }
LAB_00b6bf2c:
  FUN_00b6f390(**(undefined8 **)(param_1 + 0x340));
  return;
}


