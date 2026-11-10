/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a09d90; name: FUN_02a09d90
 */


void FUN_02a09d90(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  local_60 = *(undefined8 *)(param_1 + 0x68);
  local_70 = param_2;
  FUN_00882460(&local_90,param_2,&local_70);
  lVar2 = local_90;
  local_90 = 0;
  lVar4 = *(long *)(param_1 + 0x5e0);
  *(long *)(param_1 + 0x5e0) = lVar2;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x5f8) = local_78;
    *(undefined8 *)(param_1 + 0x5f0) = local_80;
    *(long **)(param_1 + 0x5e8) = local_88;
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_00883f8c(lVar4);
  plVar7 = *(long **)(param_1 + 0x5e8);
  uVar5 = *(undefined8 *)(param_1 + 0x5f0);
  uVar6 = *(undefined8 *)(param_1 + 0x5f8);
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar2 = tpidr_el0;
  if ((uVar3 & 1) == 0) {
LAB_02a09e5c:
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,uVar5,uVar6);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a09e5c;
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
  lVar4 = local_90;
  *(undefined8 *)(param_1 + 0x5f8) = local_78;
  *(undefined8 *)(param_1 + 0x5f0) = local_80;
  *(long **)(param_1 + 0x5e8) = local_88;
  local_90 = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_00883f8c(lVar4);
  uVar3 = (**(code **)(*local_88 + 0xc0))(local_88);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(local_88,lVar4,local_80,local_78);
      goto LAB_02a09fa0;
    }
  }
  (**(code **)(*local_88 + 0x18))(local_88,lVar4,local_80,local_78);
LAB_02a09fa0:
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
  return;
}


