/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b975dc; name: FUN_02b975dc
 */


void FUN_02b975dc(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  uVar5 = (*DAT_043f0450)(param_3);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = 1;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,0x30,8);
  if (lVar6 == 0) {
    param_2 = (long *)0x0;
    uVar10 = 0;
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
    uVar10 = 0x30;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar6;
  if (lVar7 == 0) goto LAB_02b977a0;
  FUN_02bcbe58(auStack_78,0);
  plVar1 = *(long **)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar6 = tpidr_el0;
  if ((uVar8 & 1) == 0) {
LAB_02b97700:
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar2,uVar9);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b97700;
    FUN_02bcc824(plVar1,lVar7,uVar2,uVar9);
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
  lVar6 = *(long *)(param_1 + 0x20);
LAB_02b977a0:
  *(long **)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  (*DAT_043f0458)(lVar6,param_3);
  uVar5 = (*DAT_043f0478)(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  return;
}


