/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02960fd8; name: FUN_02960fd8
 */


void FUN_02960fd8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  lVar9 = 0;
  lVar2 = tpidr_el0;
  *param_1 = &PTR_FUN_04276be0;
  do {
    puVar5 = *(undefined8 **)((long)param_1 + lVar9 + 8);
    *(undefined8 *)((long)param_1 + lVar9 + 8) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar5)(puVar5);
      plVar8 = *(long **)((long)param_1 + lVar9 + 0x10);
      uVar6 = *(undefined8 *)((long)param_1 + lVar9 + 0x18);
      uVar7 = *(undefined8 *)((long)param_1 + lVar9 + 0x20);
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) == 0) {
LAB_029610d0:
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar5,uVar6,uVar7);
      }
      else {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_029610d0;
        FUN_02bcc824(plVar8,puVar5,uVar6,uVar7);
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
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x260);
  lVar9 = 0;
  do {
    puVar5 = *(undefined8 **)((long)param_1 + lVar9 + 0x268);
    *(undefined8 *)((long)param_1 + lVar9 + 0x268) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar5)(puVar5);
      plVar8 = *(long **)((long)param_1 + lVar9 + 0x270);
      uVar6 = *(undefined8 *)((long)param_1 + lVar9 + 0x278);
      uVar7 = *(undefined8 *)((long)param_1 + lVar9 + 0x280);
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) == 0) {
LAB_02961314:
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar5,uVar6,uVar7);
      }
      else {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02961314;
        FUN_02bcc824(plVar8,puVar5,uVar6,uVar7);
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
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x260);
  lVar9 = 0;
  do {
    puVar5 = *(undefined8 **)((long)param_1 + lVar9 + 0x4a8);
    *(undefined8 *)((long)param_1 + lVar9 + 0x4a8) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      (**(code **)*puVar5)(puVar5);
      plVar8 = *(long **)((long)param_1 + lVar9 + 0x4b0);
      uVar6 = *(undefined8 *)((long)param_1 + lVar9 + 0x4b8);
      uVar7 = *(undefined8 *)((long)param_1 + lVar9 + 0x4c0);
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) == 0) {
LAB_02961558:
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar5,uVar6,uVar7);
      }
      else {
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_02961558;
        FUN_02bcc824(plVar8,puVar5,uVar6,uVar7);
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
    bVar3 = lVar9 == -0x4a0;
    lVar9 = lVar9 + -0x20;
    if (bVar3) {
      return;
    }
  } while( true );
}


