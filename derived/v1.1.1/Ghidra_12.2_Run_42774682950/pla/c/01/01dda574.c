/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dda574; name: FUN_01dda574
 */


void FUN_01dda574(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  FUN_01ddac00(&local_78,*(undefined8 *)(param_1 + 8));
  uVar5 = local_78;
  local_78 = 0;
  plVar4 = *(long **)(param_1 + 0x660);
  *(undefined8 *)(param_1 + 0x660) = uVar5;
  if (plVar4 == (long *)0x0) goto LAB_01dda690;
  FUN_02bcbe58(auStack_58,0);
  (**(code **)(*plVar4 + 0x58))(plVar4);
  plVar7 = *(long **)(param_1 + 0x668);
  uVar5 = *(undefined8 *)(param_1 + 0x670);
  uVar6 = *(undefined8 *)(param_1 + 0x678);
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar2 = tpidr_el0;
  if ((uVar3 & 1) == 0) {
LAB_01dda630:
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar4,uVar5,uVar6);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_01dda630;
    FUN_02bcc824(plVar7,plVar4,uVar5,uVar6);
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
LAB_01dda690:
  *(undefined8 *)(param_1 + 0x668) = local_70;
  *(undefined8 *)(param_1 + 0x670) = uStack_68;
  *(undefined8 *)(param_1 + 0x678) = local_60;
  return;
}


