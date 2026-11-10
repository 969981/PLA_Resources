/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b97950; name: FUN_02b97950
 */


void FUN_02b97950(long param_1,undefined8 *param_2,undefined4 param_3,ulong param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_f8 [128];
  undefined1 auStack_78 [24];
  
  uVar8 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x70) / (param_4 & 0xffffffff);
  }
  *(ulong *)(param_1 + 0x70) = uVar8;
  (*DAT_043f04b8)(auStack_f8);
  (*DAT_043f04b0)(auStack_f8,param_2[2]);
  (*DAT_043f04c8)(auStack_f8,10);
  (*DAT_043f0508)(auStack_f8,param_3);
  (*DAT_043f04d0)(auStack_f8,*(undefined4 *)(param_1 + 0x70));
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  }
  (*DAT_043f0538)(auStack_f8,uVar5,*(undefined8 *)(param_1 + 0x10));
  plVar9 = (long *)*param_2;
  lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,0xc0,8);
  if (lVar6 == 0) {
    plVar9 = (long *)0x0;
    uVar11 = 0;
    uVar5 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = 8;
    uVar11 = 0xc0;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
  }
  lVar7 = *(long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar6;
  if (lVar7 == 0) goto LAB_02b97ba8;
  FUN_02bcbe58(auStack_78,0);
  plVar1 = *(long **)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar6 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_02b97b08:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar2,uVar10);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b97b08;
    FUN_02bcc824(plVar1,lVar7,uVar2,uVar10);
  }
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x48);
LAB_02b97ba8:
  *(long **)(param_1 + 0x50) = plVar9;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = param_5;
  (*DAT_043f0678)(lVar6,auStack_f8);
  *(undefined1 *)(param_1 + 0x89) = 1;
  return;
}


