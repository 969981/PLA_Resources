/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f03dc; name: FUN_028f03dc
 */


void FUN_028f03dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  FUN_028f1c28(param_1 + 0xa0);
  plVar8 = *(long **)(param_1 + 8);
  lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x100,8);
  if (lVar5 == 0) {
    plVar8 = (long *)0x0;
    uVar12 = 0;
    uVar11 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_028f6494(lVar5,plVar8,param_3);
    uVar11 = 8;
    uVar12 = 0x100;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  puVar9 = *(undefined8 **)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar5;
  if (puVar9 == (undefined8 *)0x0) goto LAB_028f05c8;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar9)(puVar9);
  plVar1 = *(long **)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar5 = tpidr_el0;
  if ((uVar7 & 1) == 0) {
LAB_028f052c:
    (**(code **)(*plVar1 + 0x18))(plVar1,puVar9,uVar2,uVar10);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028f052c;
    FUN_02bcc824(plVar1,puVar9,uVar2,uVar10);
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
LAB_028f05c8:
  *(long **)(param_1 + 0xd8) = plVar8;
  *(undefined8 *)(param_1 + 0xe0) = uVar12;
  *(undefined8 *)(param_1 + 0xe8) = uVar11;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  return;
}


