/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c64e4c; name: FUN_02c64e4c
 */


void FUN_02c64e4c(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  FUN_02c8cb6c(&local_78,param_2,**(undefined4 **)(*(long *)(param_1 + 0x98) + 0x10));
  uVar5 = local_78;
  local_78 = 0;
  lVar6 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x88) = uStack_68;
    *(undefined8 *)(param_1 + 0x90) = local_60;
    *(undefined8 *)(param_1 + 0x80) = local_70;
    goto LAB_02c64fc8;
  }
  FUN_02bcbe58(auStack_58,0);
  plVar1 = *(long **)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar3 = tpidr_el0;
  if ((uVar4 & 1) == 0) {
LAB_02c64f04:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar5,uVar7);
  }
  else {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02c64f04;
    FUN_02bcc824(plVar1,lVar6,uVar5,uVar7);
  }
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = local_70;
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = uStack_68;
  *(undefined8 *)(param_1 + 0x90) = local_60;
LAB_02c64fc8:
  lVar6 = *(long *)(param_1 + 0x98);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(lVar6 + 8) = uVar5;
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  *(undefined2 *)(lVar6 + 0x18) = 1;
  return;
}


