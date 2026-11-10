/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a125dc; name: FUN_02a125dc
 */


void FUN_02a125dc(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_58 [24];
  
  lVar4 = param_1[0xbc];
  *param_1 = &PTR_FUN_042791a0;
  param_1[9] = &PTR_LAB_042791d8;
  param_1[0xbc] = 0;
  lVar2 = tpidr_el0;
  if (lVar4 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_00883f8c(lVar4);
    plVar8 = (long *)param_1[0xbd];
    uVar6 = param_1[0xbe];
    uVar7 = param_1[0xbf];
    uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar3 & 1) == 0) {
LAB_02a12690:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,uVar6,uVar7);
    }
    else {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02a12690;
      FUN_02bcc824(plVar8,lVar4,uVar6,uVar7);
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
  }
  puVar5 = (undefined8 *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar5)(puVar5);
  plVar8 = (long *)param_1[0xb9];
  uVar7 = param_1[0xba];
  uVar6 = param_1[0xbb];
  uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar8,puVar5,uVar7,uVar6);
      goto LAB_02a127d0;
    }
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,puVar5,uVar7,uVar6);
LAB_02a127d0:
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


