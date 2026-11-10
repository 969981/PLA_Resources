/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2ba64; name: FUN_00d2ba64
 */


void FUN_00d2ba64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_68 [24];
  
  uVar3 = *param_2;
  *param_2 = 0;
  puVar5 = (undefined8 *)*param_1;
  *param_1 = uVar3;
  if (puVar5 == (undefined8 *)0x0) goto LAB_00d2ba9c;
  FUN_02bcbe58(auStack_68,0);
  uVar6 = param_1[2];
  if (0xcf < uVar6) {
    uVar7 = 0;
    puVar8 = puVar5;
    do {
      (**(code **)*puVar8)(puVar8);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 0x1a;
    } while (uVar7 < uVar6 / 0xd0);
    uVar6 = param_1[2];
  }
  plVar9 = (long *)param_1[1];
  uVar3 = param_1[3];
  uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  lVar2 = tpidr_el0;
  if ((uVar7 & 1) == 0) {
LAB_00d2bb84:
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar5,uVar6,uVar3);
  }
  else {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00d2bb84;
    FUN_02bcc824(plVar9,puVar5,uVar6,uVar3);
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
LAB_00d2ba9c:
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  param_1[1] = uVar3;
  return;
}


