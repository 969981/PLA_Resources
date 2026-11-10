/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086a20c; name: FUN_0086a20c
 */


undefined8 FUN_0086a20c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_30;
  long *local_28;
  
  lVar5 = FUN_00865cec(*(undefined8 *)PTR_DAT_043780f8);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x18));
  *(undefined4 *)(param_1 + 0x94) = 1;
  if (*(long **)(param_1 + 0x98) == (long *)0x0) {
    uVar8 = 0;
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04378310;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "AttachMeshJob::CompleteFailure";
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0xb8))(&local_30);
    plVar1 = local_28;
    uVar8 = local_30;
    local_30 = 0;
    local_28 = (long *)0x0;
    plVar7 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    *(long **)(param_1 + 0xb0) = plVar1;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar4 = PTR_LAB_04378308;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "AttachMeshJob::WaitGameSessionFixedData";
    *(undefined **)(param_1 + 0x30) = puVar4;
    *(undefined4 *)(param_1 + 0x94) = 2;
    uVar8 = 5;
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x18));
  return uVar8;
}


