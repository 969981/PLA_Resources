/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01287a04; name: FUN_01287a04
 */


void FUN_01287a04(long param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  long *local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148c68(&local_28);
  FUN_011171c8(local_28,param_2);
  FUN_0128f7b8(*(undefined8 *)(param_1 + 0x1a8));
  FUN_0128fd28(*(undefined8 *)(param_1 + 0x1a8),param_2);
  FUN_02a4754c(auStack_48,&DAT_04201c10);
  FUN_028354b0(auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


