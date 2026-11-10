/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc47c8; name: FUN_02cc47c8
 */


long FUN_02cc47c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  plVar7 = (long *)FUN_027812ec();
  lVar8 = FUN_02cc5208(auStack_60,param_1,param_2);
  puVar10 = (undefined8 *)*plVar7;
  *plVar7 = lVar8;
  if (puVar10 == (undefined8 *)0x0) goto LAB_02cc4928;
  plVar2 = (long *)puVar10[1];
  uVar4 = puVar10[2];
  uVar3 = puVar10[3];
  uVar5 = puVar10[4];
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*puVar10)(puVar10);
  uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar8 = tpidr_el0;
  if ((uVar9 & 1) == 0) {
LAB_02cc4888:
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar4,uVar3,uVar5);
  }
  else {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02cc4888;
    FUN_02bcc824(plVar2,uVar4,uVar3,uVar5);
  }
  if (*(char *)(lVar8 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar8 + 0x38d488) = 1;
    *(undefined8 *)(lVar8 + 0x38d478) = 0;
    *(undefined8 *)(lVar8 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar8 + 0x38d480) + -1;
  *(int *)(lVar8 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar8 + 0x38d484) = 0;
  }
  lVar8 = *plVar7;
LAB_02cc4928:
  if (0x3ff < DAT_043eeed0) {
                    /* WARNING: Subroutine does not return */
    FUN_02a47540();
  }
  lVar1 = 0;
  if (lVar8 != 0) {
    lVar1 = lVar8 + 0x48;
  }
  *(long *)(&DAT_043eced0 + (long)(int)DAT_043eeed0 * 8) = lVar1;
  DAT_043eeed0 = DAT_043eeed0 + 1;
  return *plVar7;
}


