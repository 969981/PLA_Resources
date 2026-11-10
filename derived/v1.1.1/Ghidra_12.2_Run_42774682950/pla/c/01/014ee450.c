/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ee450; name: FUN_014ee450
 */


undefined8 FUN_014ee450(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *local_28;
  
  iVar4 = FUN_015079e0(*(undefined8 *)(param_1 + 0x1a8));
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_28);
  FUN_011171f4(local_28,iVar4);
  FUN_00d72680(*(undefined8 *)(param_1 + 0x1c8),-iVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x1c8);
  uVar5 = FUN_011171a4(local_28);
  FUN_00d72228(uVar9,uVar5);
  FUN_01507cb4(*(undefined8 *)(param_1 + 0x1a8));
  uVar7 = FUN_014ee7a4(param_1);
  if ((uVar7 & 1) == 0) {
    FUN_00d428b0(*(undefined8 *)(param_1 + 0x1a8),0);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return 0;
}


