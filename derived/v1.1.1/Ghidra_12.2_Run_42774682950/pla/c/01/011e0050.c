/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e0050; name: FUN_011e0050
 */


void FUN_011e0050(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  uVar6 = FUN_00d39d00();
  (**(code **)(*param_2 + 0x10))(local_40,param_2);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_009636f0(&local_50,local_40);
  puVar4 = local_40[0];
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
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
      local_40[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_60 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_60);
    }
  }
  (**(code **)(*(long *)param_2[0x6d] + 0x10))(local_40);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01160f90(&local_60,local_40);
  puVar4 = local_40[0];
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
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
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  FUN_011e2d3c(param_1,uVar6,&local_50,&local_60);
  puVar4 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_40[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,local_40);
    }
  }
  puVar4 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
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
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_40[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,local_40);
    }
  }
  return;
}


