/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a9a80; name: FUN_011a9a80
 */


uint FUN_011a9a80(undefined8 param_1,undefined4 param_2,short param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar6 = *(long **)(lVar8 + 0xd0);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)plVar6[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar7 = (**(code **)(*plVar9 + 0x58))(plVar9,param_2);
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_60 = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0109aad0(&local_60);
  if (param_3 == 0) {
    uVar4 = FUN_02c63e34(DAT_04407c28,(long)&local_28 + 4,&local_28,uVar7,plVar9,&local_60);
  }
  else {
    uVar4 = FUN_02c647f0(DAT_04407c28,(long)&local_28 + 4,&local_28,uVar7,&local_60,param_3);
  }
  plVar6 = plVar9 + 10;
  do {
    iVar5 = (int)*plVar6 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *(int *)plVar6 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return uVar4 & 1;
}


