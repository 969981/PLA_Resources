/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c7da4; name: FUN_014c7da4
 */


void FUN_014c7da4(undefined8 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  uVar3 = param_1[1];
  if (0x5f < uVar3) {
    FUN_014bca10(param_2);
    if ((0xbf < uVar3) && (FUN_014bca10(param_2 + 0x60), 0x11f < uVar3)) {
      lVar4 = param_2 + 0xc0;
      uVar2 = 2;
      do {
        FUN_014bca10(lVar4);
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x60;
      } while (uVar2 < uVar3 / 0x60);
    }
    uVar3 = param_1[1];
  }
  plVar6 = (long *)*param_1;
  uVar5 = param_1[2];
  uVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar4 = tpidr_el0;
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar6,param_2,uVar3,uVar5);
      goto LAB_014c7e7c;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,uVar3,uVar5);
LAB_014c7e7c:
  if (*(char *)(lVar4 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar4 + 0x38d488) = 1;
    *(undefined8 *)(lVar4 + 0x38d478) = 0;
    *(undefined8 *)(lVar4 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar4 + 0x38d480) + -1;
  *(int *)(lVar4 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
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


