/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d445e8; name: FUN_00d445e8
 */


void FUN_00d445e8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [24];
  
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  uVar4 = param_1[2];
  if (0xcf < uVar4) {
    uVar6 = 0;
    puVar8 = puVar3;
    do {
      (**(code **)*puVar8)(puVar8);
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 0x1a;
    } while (uVar6 < uVar4 / 0xd0);
    uVar4 = param_1[2];
  }
  plVar7 = (long *)param_1[1];
  uVar5 = param_1[3];
  uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  lVar2 = tpidr_el0;
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar7,puVar3,uVar4,uVar5);
      goto LAB_00d44700;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar3,uVar4,uVar5);
LAB_00d44700:
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


