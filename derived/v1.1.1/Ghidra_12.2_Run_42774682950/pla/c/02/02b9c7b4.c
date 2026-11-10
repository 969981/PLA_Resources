/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9c7b4; name: FUN_02b9c7b4
 */


void FUN_02b9c7b4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_68 [24];
  
  FUN_02bcbe58(auStack_68,0);
  if (*(char *)(param_2 + 0x2020) != '\0') {
    (*DAT_043f01e8)(param_2);
  }
  lVar4 = *(long *)(param_2 + 0x2000);
  *(undefined8 *)(param_2 + 0x2000) = 0;
  lVar2 = tpidr_el0;
  if (lVar4 != 0) {
    plVar7 = *(long **)(param_2 + 0x2008);
    uVar5 = *(undefined8 *)(param_2 + 0x2010);
    uVar6 = *(undefined8 *)(param_2 + 0x2018);
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar4,uVar5,uVar6);
        goto LAB_02b9c88c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,uVar5,uVar6);
  }
LAB_02b9c88c:
  plVar7 = (long *)*param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar5,uVar6);
      goto LAB_02b9c904;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar5,uVar6);
LAB_02b9c904:
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


