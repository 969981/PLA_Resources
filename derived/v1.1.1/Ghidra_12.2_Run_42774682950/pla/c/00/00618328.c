/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00618328; name: FUN_00618328
 */


void FUN_00618328(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 ****local_88;
  undefined8 ****ppppuStack_80;
  undefined1 auStack_70 [64];
  long **local_30;
  undefined8 uStack_28;
  
  *param_1 = (long)(PTR_DAT_04375488 + 0x10);
  uVar4 = FUN_00783b70();
  if ((uVar4 & 1) == 0) {
    (**(code **)(*param_1 + 0x10))(&local_98,param_1);
    (**(code **)(*local_98 + 0x18))();
    if (local_90 != (long *)0x0) {
      plVar6 = local_90 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        local_a0 = local_90;
      } while (cVar2 != '\0');
      goto LAB_00618420;
    }
LAB_00618424:
    plVar6 = (long *)param_1[10];
    if (plVar6 == (long *)0x0) goto LAB_00618488;
LAB_0061842c:
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
    if (lVar5 != 0) goto LAB_00618488;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
    plVar6 = (long *)param_1[8];
  }
  else {
    (**(code **)(*param_1 + 0x10))(&local_a8,param_1);
    local_30 = (long **)0x0;
    uStack_28 = 0;
    plVar6 = (long *)(PTR_DAT_04373168 + 0x10);
    local_90 = (long *)(PTR_DAT_04373170 + 0x10);
    local_88 = &local_88;
    local_98 = plVar6;
    ppppuStack_80 = local_88;
    (**(code **)(*local_a8 + 0x10))(local_a8,auStack_70);
    local_30 = &local_90;
    thunk_FUN_00783af0(&local_98);
    local_98 = plVar6;
    FUN_00782f18(&local_90);
    if (local_a0 == (long *)0x0) goto LAB_00618424;
    plVar6 = local_a0 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00618420:
    if (lVar5 != 0) goto LAB_00618424;
    (**(code **)(*local_a0 + 0x10))(local_a0);
    std::__shared_weak_count::__release_weak();
    plVar6 = (long *)param_1[10];
    if (plVar6 != (long *)0x0) goto LAB_0061842c;
LAB_00618488:
    plVar6 = (long *)param_1[8];
  }
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
      plVar6 = (long *)param_1[6];
      goto joined_r0x00618500;
    }
  }
  plVar6 = (long *)param_1[6];
joined_r0x00618500:
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
  nn::os::FinalizeMutex((MutexType *)(param_1 + 1));
  return;
}


