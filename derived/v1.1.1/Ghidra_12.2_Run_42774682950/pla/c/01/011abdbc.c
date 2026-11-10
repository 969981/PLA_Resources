/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011abdbc; name: FUN_011abdbc
 */


void FUN_011abdbc(undefined8 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  uVar2 = param_1[1];
  if (0x4ff < uVar2) {
    uVar5 = 0;
    lVar3 = param_2;
    do {
      FUN_011ac054(lVar3);
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 0x500;
    } while (uVar5 < uVar2 / 0x500);
    uVar2 = param_1[1];
  }
  plVar6 = (long *)*param_1;
  uVar4 = param_1[2];
  uVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar3 = tpidr_el0;
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar6,param_2,uVar2,uVar4);
      goto LAB_011abea4;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,uVar2,uVar4);
LAB_011abea4:
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar1 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar1;
  if (iVar1 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
  return;
}


