/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb0be4; name: FUN_02cb0be4
 */


void FUN_02cb0be4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_90,0);
  lVar10 = puVar4[5];
  lVar2 = tpidr_el0;
  if (lVar10 != 0) {
    puVar5 = (undefined8 *)puVar4[4];
    do {
      puVar7 = (undefined8 *)*puVar5;
      lVar10 = lVar10 + -1;
      *puVar5 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar7)(puVar7);
        plVar8 = (long *)puVar5[1];
        uVar6 = puVar5[2];
        uVar9 = puVar5[3];
        uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar3 & 1) == 0) {
LAB_02cb0ce4:
          (**(code **)(*plVar8 + 0x18))(plVar8,puVar7,uVar6,uVar9);
        }
        else {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02cb0ce4;
          FUN_02bcc824(plVar8,puVar7,uVar6,uVar9);
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
      puVar5 = puVar5 + 4;
    } while (lVar10 != 0);
  }
  if (puVar4[6] != 0) {
    plVar8 = (long *)*puVar4;
    lVar10 = puVar4[6] << 5;
    uVar6 = puVar4[4];
    uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar8,uVar6,lVar10,8);
        goto LAB_02cb0ef0;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar6,lVar10,8);
  }
LAB_02cb0ef0:
  plVar8 = (long *)param_1[1];
  uVar6 = param_1[2];
  uVar9 = param_1[3];
  uVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar8,puVar4,uVar6,uVar9);
      goto LAB_02cb0f68;
    }
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,puVar4,uVar6,uVar9);
LAB_02cb0f68:
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


