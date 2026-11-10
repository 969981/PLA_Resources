/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb27e4; name: FUN_02cb27e4
 */


bool FUN_02cb27e4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  if (((*(byte *)(param_1 + 0x302) & 1) == 0) || (*(int *)(param_1 + 0x418) != 2))
  goto LAB_02cb29b4;
  if ((*param_3 == 0) ||
     ((*(int *)(*param_3 + 0xc) == 0 || (plVar3 = (long *)param_3[2], plVar3 == (long *)0x0)))) {
LAB_02cb2848:
    iVar2 = *(int *)(param_1 + 0x480);
  }
  else {
    if (*(char *)(param_1 + 0x488) != '\0') {
      (**(code **)(*plVar3 + 0x10))();
      goto LAB_02cb2848;
    }
    if (*(int *)(param_1 + 0x484) == 0) {
      (**(code **)*plVar3)
                (plVar3,param_2,*(undefined8 *)(param_1 + 0x460),(long)*(int *)(param_1 + 0x480));
      iVar2 = *(int *)(param_1 + 0x480);
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3,param_2,param_1 + 0x484);
      iVar2 = *(int *)(param_1 + 0x480);
    }
  }
  if (iVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x460) + lVar4;
      (**(code **)(**(long **)(param_1 + 0x410) + 0x48))
                (*(long **)(param_1 + 0x410),*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x48));
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x50;
    } while (uVar5 < (ulong)(long)*(int *)(param_1 + 0x480));
  }
  lVar4 = *(long *)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x460) = 0;
  if (lVar4 != 0) {
    FUN_02bcbe58(auStack_58,0);
    plVar3 = *(long **)(param_1 + 0x468);
    uVar6 = *(undefined8 *)(param_1 + 0x470);
    uVar7 = *(undefined8 *)(param_1 + 0x478);
    uVar5 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    lVar1 = tpidr_el0;
    if ((uVar5 & 1) == 0) {
LAB_02cb2904:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,uVar6,uVar7);
    }
    else {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02cb2904;
      FUN_02bcc824(plVar3,lVar4,uVar6,uVar7);
    }
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar2 = *(int *)(lVar1 + 0x38d480) + -1;
    *(int *)(lVar1 + 0x38d480) = iVar2;
    if (iVar2 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar1 + 0x38d484) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x480) = 0;
  FUN_02a49534(param_1);
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
LAB_02cb29b4:
  return (*(byte *)(param_1 + 0x301) & 1) == 0;
}


