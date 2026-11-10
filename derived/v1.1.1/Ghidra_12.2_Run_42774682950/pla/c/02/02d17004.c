/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d17004; name: FUN_02d17004
 */


undefined8 FUN_02d17004(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_50 [8];
  long *local_48;
  undefined8 local_40;
  long *local_38;
  
  if ((*(int *)(param_1 + 0xb8) == 0) && (*(long *)(param_1 + 0xa0) == 0)) {
    uVar4 = FUN_00612290();
    FUN_00783f38(&local_40,uVar4);
    FUN_02765714(param_1 + 0xc0,&local_40);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00783fac(auStack_50,param_1 + 200);
    FUN_006e9408(&local_40,param_1 + 0x68,param_2,auStack_50);
    plVar1 = local_38;
    uVar4 = local_40;
    local_40 = 0;
    local_38 = (long *)0x0;
    plVar6 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    *(long **)(param_1 + 0xe0) = plVar1;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


