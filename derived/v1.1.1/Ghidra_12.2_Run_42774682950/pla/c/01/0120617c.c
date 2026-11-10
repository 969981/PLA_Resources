/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120617c; name: FUN_0120617c
 */


void FUN_0120617c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *local_38;
  
  uVar4 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
  uVar5 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),uVar4);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148bf4(&local_38);
  uVar6 = FUN_010e67cc(local_38);
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0xa8);
  uVar8 = thunk_FUN_0121fbdc(*(undefined8 *)(param_1 + 0x90),uVar4,uVar6,uVar5);
  FUN_0142f980(uVar10,uVar8);
  FUN_0142f7d0(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xb0) = 3;
  return;
}


