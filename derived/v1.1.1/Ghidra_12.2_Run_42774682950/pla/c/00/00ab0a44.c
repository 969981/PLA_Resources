/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab0a44; name: FUN_00ab0a44
 */


void FUN_00ab0a44(long *param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_60;
  long lStack_58;
  long *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  long *local_28;
  
  FUN_00956dac(&local_40,*param_1 + 0x1a8);
  lVar12 = local_40[0x1b];
  lVar11 = local_40[0x1a];
  if (local_40 != (long *)0x0) {
    lVar10 = local_40[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  puVar5 = PTR_DAT_04379578;
  local_50 = (long *)CONCAT44((float)((ulong)lVar11 >> 0x20) + (float)((ulong)*param_2 >> 0x20),
                              (float)lVar11 + (float)*param_2);
  uStack_48 = CONCAT44((float)((ulong)lVar12 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                       (float)lVar12 + (float)param_2[1]);
  local_40 = local_50;
  uStack_38 = uStack_48;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  lVar11 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar11;
  if ((*(char *)(*(long *)(lVar11 + 200) + 0x568) != '\0') || ((param_3 & 1) != 0)) {
    local_60 = 0;
    lStack_58 = 0;
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar11 = *(long *)puVar6;
    *(long *)puVar7 = lVar11;
    lVar11 = *(long *)(lVar11 + 200);
    if (*(char *)(lVar11 + 0x566) == '\0') {
      uVar4 = 0x26000;
      if (*(char *)(lVar11 + 0x568) != '\0') {
        uVar4 = 0x1001000;
      }
    }
    else {
      uVar4 = 0x1027000;
    }
    uVar9 = FUN_00ab5160(&local_40,&local_60,uVar4,5);
    if ((uVar9 & 1) != 0) {
      local_50 = (long *)CONCAT44(*(undefined4 *)((ulong)&local_60 | 4),(int)local_50);
    }
  }
  lVar11 = *param_1;
  FUN_00956dac(&local_28,lVar11 + 0x1a8);
  lStack_58 = local_28[0x19];
  local_60 = local_28[0x18];
  FUN_01a83770(lVar11,&local_50,&local_60);
  if (local_28 != (long *)0x0) {
    lVar11 = local_28[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


