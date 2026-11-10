/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061fe8c; name: FUN_0061fe8c
 */


void FUN_0061fe8c(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  undefined1 auStack_30 [8];
  long *local_28;
  
  FUN_0061cfa0(auStack_30);
  if (local_28 == (long *)0x0) {
LAB_0061fec4:
    pbVar8 = *(byte **)(param_1 + 0xd0);
  }
  else {
    plVar9 = local_28 + 1;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_0061fec4;
    (**(code **)(*local_28 + 0x10))(local_28);
    std::__shared_weak_count::__release_weak();
    pbVar8 = *(byte **)(param_1 + 0xd0);
  }
  if (pbVar8 != (byte *)0x0) {
    pbVar6 = *(byte **)(param_1 + 0xd8);
    if (pbVar6 == pbVar8) {
      pbVar6 = pbVar8;
    }
    else {
      bVar2 = pbVar6[-0x28];
      pbVar5 = pbVar6 + -0x28;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          (**(code **)(**(long **)(pbVar6 + -0x10) + 0x18))
                    (*(long **)(pbVar6 + -0x10),*(undefined8 *)(pbVar6 + -0x18),
                     *(ulong *)(pbVar6 + -0x28) & 0xfffffffffffffffe,1);
        }
        if (pbVar8 == pbVar5) break;
        bVar2 = pbVar5[-0x28];
        pbVar6 = pbVar5;
        pbVar5 = pbVar5 + -0x28;
      }
      pbVar6 = *(byte **)(param_1 + 0xd0);
    }
    *(byte **)(param_1 + 0xd8) = pbVar8;
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
              (*(long **)(param_1 + 0xe8),pbVar6,*(long *)(param_1 + 0xe0) - (long)pbVar6,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb0));
  pbVar8 = *(byte **)(param_1 + 0x90);
  if (pbVar8 != (byte *)0x0) {
    pbVar6 = *(byte **)(param_1 + 0x98);
    if (pbVar6 == pbVar8) {
      pbVar6 = pbVar8;
    }
    else {
      bVar2 = pbVar6[-0x28];
      pbVar5 = pbVar6 + -0x28;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          (**(code **)(**(long **)(pbVar6 + -0x10) + 0x18))
                    (*(long **)(pbVar6 + -0x10),*(undefined8 *)(pbVar6 + -0x18),
                     *(ulong *)(pbVar6 + -0x28) & 0xfffffffffffffffe,1);
        }
        if (pbVar8 == pbVar5) break;
        bVar2 = pbVar5[-0x28];
        pbVar6 = pbVar5;
        pbVar5 = pbVar5 + -0x28;
      }
      pbVar6 = *(byte **)(param_1 + 0x90);
    }
    *(byte **)(param_1 + 0x98) = pbVar8;
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),pbVar6,*(long *)(param_1 + 0xa0) - (long)pbVar6,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x70));
  plVar9 = *(long **)(param_1 + 0x68);
  if (plVar9 == (long *)0x0) {
LAB_00620020:
    plVar9 = *(long **)(param_1 + 0x58);
    if (plVar9 == (long *)0x0) goto LAB_00620084;
LAB_00620028:
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_00620084;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 != (long *)0x0) goto LAB_0062008c;
LAB_006200a4:
    plVar9 = *(long **)(param_1 + 0x38);
  }
  else {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_00620020;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
    plVar9 = *(long **)(param_1 + 0x58);
    if (plVar9 != (long *)0x0) goto LAB_00620028;
LAB_00620084:
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_006200a4;
LAB_0062008c:
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_006200a4;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
    plVar9 = *(long **)(param_1 + 0x38);
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
      nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10));
      lVar7 = *(long *)(param_1 + 8);
      goto joined_r0x006200e8;
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x10));
  lVar7 = *(long *)(param_1 + 8);
joined_r0x006200e8:
  if (lVar7 == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


