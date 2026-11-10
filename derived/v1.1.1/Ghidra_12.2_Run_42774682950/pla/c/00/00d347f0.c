/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d347f0; name: FUN_00d347f0
 */


void FUN_00d347f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  uVar4 = param_1[1];
  if (0xbf < uVar4) {
    (**(code **)*param_2)(param_2);
    if ((((0x17f < uVar4) && ((**(code **)param_2[0x18])(), 0x23f < uVar4)) &&
        ((**(code **)param_2[0x30])(param_2 + 0x30), 0x2ff < uVar4)) &&
       (((**(code **)param_2[0x48])(param_2 + 0x48), 0x3bf < uVar4 &&
        ((**(code **)param_2[0x60])(param_2 + 0x60), 0x47f < uVar4)))) {
      uVar3 = 5;
      puVar7 = param_2 + 0x78;
      do {
        (**(code **)*puVar7)(puVar7);
        uVar3 = uVar3 + 1;
        puVar7 = puVar7 + 0x18;
      } while (uVar3 < uVar4 / 0xc0);
    }
    uVar4 = param_1[1];
  }
  plVar6 = (long *)*param_1;
  uVar5 = param_1[2];
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar2 = tpidr_el0;
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,param_2,uVar4,uVar5);
      goto LAB_00d34908;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,uVar4,uVar5);
LAB_00d34908:
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


