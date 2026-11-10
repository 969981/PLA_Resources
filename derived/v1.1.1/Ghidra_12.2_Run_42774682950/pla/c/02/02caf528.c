/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02caf528; name: FUN_02caf528
 */


void FUN_02caf528(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  plVar7 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar7 == (long *)0x0) {
    return;
  }
  FUN_02bcbe58(auStack_80,0);
  FUN_02cb0be4(plVar7 + 4,0);
  lVar9 = *plVar7;
  *plVar7 = 0;
  lVar5 = tpidr_el0;
  if (lVar9 != 0) {
    FUN_02bcbe58(auStack_68,0);
    plVar1 = (long *)plVar7[1];
    lVar2 = plVar7[2];
    lVar10 = plVar7[3];
    uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar6 & 1) == 0) {
LAB_02caf5e4:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar9,lVar2,lVar10);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02caf5e4;
      FUN_02bcc824(plVar1,lVar9,lVar2,lVar10);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  plVar1 = *(long **)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar1,plVar7,uVar3,uVar8);
      goto LAB_02caf6f8;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,plVar7,uVar3,uVar8);
LAB_02caf6f8:
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
  return;
}


