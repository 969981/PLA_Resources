/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d17180; name: FUN_02d17180
 */


undefined8 FUN_02d17180(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0xc0) != '\0') {
        plVar5 = *(long **)(param_1 + 0xd0);
        if (plVar5 != (long *)0x0) {
          plVar6 = plVar5 + 1;
          do {
            lVar4 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar4 = *(long *)(param_1 + 0xa0);
        *(undefined1 *)(param_1 + 0xc0) = 0;
      }
      FUN_0064c0d4(&local_30,lVar4);
      plVar5 = local_28;
      uVar3 = local_30;
      local_30 = 0;
      local_28 = (long *)0x0;
      plVar6 = *(long **)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xe8) = uVar3;
      *(long **)(param_1 + 0xf0) = plVar5;
      if (plVar6 != (long *)0x0) {
        plVar5 = plVar6 + 1;
        do {
          lVar4 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_28 != (long *)0x0) {
        plVar5 = local_28 + 1;
        do {
          lVar4 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined4 *)(param_1 + 0xb8) = 2;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


