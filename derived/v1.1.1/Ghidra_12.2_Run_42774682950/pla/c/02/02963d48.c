/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02963d48; name: FUN_02963d48
 */


void FUN_02963d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  local_60 = *(undefined8 *)(param_1 + 8);
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_00882460(&local_90,param_2,&local_70);
  lVar4 = local_90;
  local_90 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4;
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x38) = local_80;
    *(undefined8 *)(param_1 + 0x40) = local_78;
    *(long **)(param_1 + 0x30) = local_88;
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_00883f8c(lVar6);
  plVar1 = *(long **)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar4 = tpidr_el0;
  if ((uVar5 & 1) == 0) {
LAB_02963e0c:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar7);
  }
  else {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02963e0c;
    FUN_02bcc824(plVar1,lVar6,uVar2,uVar7);
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
  lVar6 = local_90;
  *(long **)(param_1 + 0x30) = local_88;
  *(undefined8 *)(param_1 + 0x38) = local_80;
  *(undefined8 *)(param_1 + 0x40) = local_78;
  local_90 = 0;
  if (lVar6 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  FUN_00883f8c(lVar6);
  uVar5 = (**(code **)(*local_88 + 0xc0))(local_88);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(local_88,lVar6,local_80,local_78);
      goto LAB_02963f4c;
    }
  }
  (**(code **)(*local_88 + 0x18))(local_88,lVar6,local_80,local_78);
LAB_02963f4c:
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


