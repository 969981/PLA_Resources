/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbac80; name: FUN_02cbac80
 */


void FUN_02cbac80(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [24];
  
  FUN_00829460();
  FUN_008259c0();
  if (*(long *)PTR_DAT_043773c0 != 0) {
    lVar1 = *(long *)PTR_DAT_043773c0 + 0x10;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a80,0x7c);
    if (lVar5 != 0) {
      FUN_0084943c();
      FUN_00847a24(lVar1,DAT_04408a80);
    }
    DAT_04408a80 = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a88,0x80);
    if (lVar5 != 0) {
      FUN_00840e8c();
      FUN_00847a24(lVar1,DAT_04408a88);
    }
    DAT_04408a88 = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a90,0x7c);
    if (lVar5 != 0) {
      FUN_0084943c();
      FUN_00847a24(lVar1,DAT_04408a90);
    }
    DAT_04408a90 = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a84,0x7c);
    if (lVar5 != 0) {
      FUN_0084943c();
      FUN_00847a24(lVar1,DAT_04408a84);
    }
    DAT_04408a84 = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a8c,0x80);
    if (lVar5 != 0) {
      FUN_00840e8c();
      FUN_00847a24(lVar1,DAT_04408a8c);
    }
    DAT_04408a8c = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a60,0x81);
    if (lVar5 != 0) {
      thunk_FUN_00840e8c();
      FUN_00847a24(lVar1,DAT_04408a60);
    }
    DAT_04408a60 = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a64,0x81);
    if (lVar5 != 0) {
      thunk_FUN_00840e8c();
      FUN_00847a24(lVar1,DAT_04408a64);
    }
    DAT_04408a64 = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a5c,0x77);
    if (lVar5 != 0) {
      FUN_007e2204();
      FUN_00847a24(lVar1,DAT_04408a5c);
    }
    DAT_04408a5c = 0;
    lVar5 = FUN_00847ad0(lVar1,DAT_04408a98,0x74);
    if (lVar5 != 0) {
      FUN_007e1640();
      FUN_00847a24(lVar1,DAT_04408a98);
    }
    DAT_04408a98 = 0;
    FUN_008544d8();
    FUN_00840c10();
  }
  if (DAT_04408a58 == 3) {
    DAT_04408aa8 = 0;
    if (DAT_04408a10 == (long *)0x0) goto LAB_02cbb158;
    (**(code **)(*DAT_04408a10 + 0x18))();
    plVar8 = DAT_04408a10;
    DAT_04408a10 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_02cbb158;
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*plVar8)(plVar8);
    puVar7 = &DAT_04408a18;
LAB_02cbb058:
    plVar2 = (long *)*puVar7;
    uVar3 = puVar7[1];
    uVar9 = puVar7[2];
    uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar6 & 1) == 0) {
LAB_02cbb0b8:
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar8,uVar3,uVar9);
    }
    else {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02cbb0b8;
      FUN_02bcc824(plVar2,plVar8,uVar3,uVar9);
    }
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar1 + 0x38d480) + -1;
    *(int *)(lVar1 + 0x38d480) = iVar4;
    if (iVar4 != 0) goto LAB_02cbb158;
    FUN_02bcc320();
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
  }
  else {
    if (DAT_04408a58 == 2) {
      DAT_04408aa8 = 0;
      if (DAT_04408a30 == (long *)0x0) goto LAB_02cbb158;
      (**(code **)(*DAT_04408a30 + 0x18))();
      plVar8 = DAT_04408a30;
      DAT_04408a30 = (long *)0x0;
      if (plVar8 == (long *)0x0) goto LAB_02cbb158;
      FUN_02bcbe58(auStack_58,0);
      (**(code **)*plVar8)(plVar8);
      puVar7 = &DAT_04408a38;
      goto LAB_02cbb058;
    }
    if ((DAT_04408a58 != 1) || (DAT_04408aa8 = 0, DAT_044089f0 == (long *)0x0)) goto LAB_02cbb158;
    (**(code **)(*DAT_044089f0 + 0x18))();
    plVar8 = DAT_044089f0;
    DAT_044089f0 = (long *)0x0;
    if (plVar8 == (long *)0x0) goto LAB_02cbb158;
    FUN_02bcbe58(auStack_58,0);
    (**(code **)*plVar8)(plVar8);
    uVar9 = DAT_04408a08;
    uVar3 = DAT_04408a00;
    plVar2 = DAT_044089f8;
    uVar6 = (**(code **)(*DAT_044089f8 + 0xc0))(DAT_044089f8);
    lVar1 = tpidr_el0;
    if ((uVar6 & 1) == 0) {
LAB_02cbaf20:
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar8,uVar3,uVar9);
    }
    else {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02cbaf20;
      FUN_02bcc824(plVar2,plVar8,uVar3,uVar9);
    }
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar1 + 0x38d480) + -1;
    *(int *)(lVar1 + 0x38d480) = iVar4;
    if (iVar4 != 0) goto LAB_02cbb158;
    FUN_02bcc320();
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
  }
  *(undefined4 *)(lVar1 + 0x38d484) = 0;
LAB_02cbb158:
  FUN_007e85d8();
  FUN_007ed208();
  FUN_007e2eb0();
  lVar1 = DAT_04408aa0;
  plVar8 = DAT_04408a50;
  if (DAT_04408aa0 == 0) {
    DAT_04408a58 = 0;
    return;
  }
  uVar6 = (**(code **)(*DAT_04408a50 + 0xc0))(DAT_04408a50);
  if ((uVar6 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar8,lVar1,0xc00000,8);
      DAT_04408a58 = 0;
      DAT_04408aa0 = 0;
      return;
    }
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar1,0xc00000,8);
  DAT_04408aa0 = 0;
  DAT_04408a58 = 0;
  return;
}


