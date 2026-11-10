/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122ce1c; name: FUN_0122ce1c
 */


undefined8 FUN_0122ce1c(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114886c(&local_28);
  iVar4 = FUN_010eb3d8(local_28);
  if (param_2 == 1) {
    if (1 < iVar4) goto LAB_0122ceb4;
    iVar7 = iVar4 + 1;
  }
  else if ((param_2 != 0) || (iVar7 = iVar4 + -1, iVar4 < 1)) {
LAB_0122ceb4:
    uVar6 = 0;
    goto joined_r0x0122cea4;
  }
  FUN_010eb3c8(local_28,iVar7);
  FUN_02837368(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5b0),iVar7);
  uVar6 = 1;
joined_r0x0122cea4:
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
  return uVar6;
}


