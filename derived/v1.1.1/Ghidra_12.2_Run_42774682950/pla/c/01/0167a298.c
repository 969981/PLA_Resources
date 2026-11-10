/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167a298; name: FUN_0167a298
 */


void FUN_0167a298(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *local_50;
  long *local_48;
  long *local_40 [2];
  long *local_30;
  long *local_28;
  
  FUN_0199c138(&local_28,*param_1);
  FUN_0199d14c(local_40,*param_1);
  if (local_40[0] == (long *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_00959d38(&local_30);
    if (local_40[0] != (long *)0x0) {
      FUN_02a43934();
    }
  }
  plVar4 = local_30;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_48);
  FUN_016b6250(local_40,local_48);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
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
      (**(code **)(*local_48 + 0x10))();
    }
  }
  FUN_01781b68(local_40[0],local_28,plVar4);
  plVar4 = local_40[0];
  local_50 = (long *)*param_1;
  if (local_50 != (long *)0x0) {
    FUN_02a439f4(local_50[0xb]);
  }
  FUN_01782390(plVar4,&local_50);
  plVar4 = local_50;
  if ((local_50 != (long *)0x0) && (uVar6 = FUN_02a43a5c(local_50[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  plVar4 = local_30;
  if (local_40[0] != (long *)0x0) {
    plVar1 = local_40[0] + 10;
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
      (**(code **)(*local_40[0] + 0x10))();
      plVar4 = local_30;
    }
  }
  local_30 = plVar4;
  plVar1 = local_28;
  if ((plVar4 != (long *)0x0) &&
     (uVar6 = FUN_02a43a5c(plVar4[0xb]), plVar1 = local_28, (uVar6 & 1) != 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    plVar1 = local_28;
  }
  if ((plVar1 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar1[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}


