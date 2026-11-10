/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01286460; name: FUN_01286460
 */


void FUN_01286460(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined1 auStack_50 [24];
  long *local_38;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01149164(&local_28);
  plVar4 = local_28;
  iVar5 = FUN_010d90c0(local_28);
  FUN_010d90c8(plVar4,iVar5 + param_2);
  plVar4 = local_28;
  iVar5 = FUN_010d90e0(local_28);
  FUN_010d90e8(plVar4,iVar5 + param_2);
  FUN_0128f960(*(undefined8 *)(param_1 + 0x1a8));
  FUN_0128fd28(*(undefined8 *)(param_1 + 0x1a8),param_2);
  FUN_02a4754c(auStack_50,&DAT_04201a18);
  FUN_028354b0(auStack_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


