/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061016c; name: FUN_0061016c
 */


void FUN_0061016c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 ****local_c8;
  undefined8 ****ppppuStack_c0;
  undefined1 auStack_b0 [64];
  long **local_70;
  undefined8 uStack_68;
  
  lVar9 = *param_1;
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = *(long **)(lVar9 + 0x198);
  puVar10 = *(undefined8 **)(lVar9 + 0x348);
  plVar5 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
  plVar5[2] = 0;
  plVar12 = plVar5 + 1;
  *plVar12 = 0;
  puVar4 = PTR_DAT_043753e0;
  plVar5[3] = (long)plVar11;
  plVar6 = plVar5 + 4;
  *plVar5 = (long)(puVar4 + 0x10);
  FUN_00782ef8();
  plVar5[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = *plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x158,8);
  plVar7[2] = 0;
  plVar13 = plVar7 + 1;
  *plVar13 = 0;
  *plVar7 = (long)&PTR_LAB_041906f0;
  plVar7[3] = (long)plVar11;
  FUN_007840dc();
  plVar7[4] = (long)&PTR_LAB_04190740;
  lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x10000,0x10);
  if (lVar8 == 0) {
    local_d8 = (long *)CONCAT44(local_d8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_d8,"");
  }
  FUN_00782cfc(plVar7 + 10,plVar6,0,lVar8,0x10000,1);
  plVar7[10] = (long)&PTR_LAB_04190788;
  plVar7[0x26] = (long)plVar11;
  plVar7[0x27] = 0x10000;
  *(undefined1 *)((long)plVar7 + 0x151) = 1;
  plVar7[0x28] = (long)plVar6;
  plVar7[0x29] = (long)plVar5;
  if (plVar1 == (long *)0x0) {
    plVar7[0x23] = lVar9;
    plVar7[0x24] = 0;
    plVar7[0x25] = param_2;
  }
  else {
    plVar11 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[0x23] = lVar9;
    plVar7[0x24] = (long)plVar1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[0x25] = param_2;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_e8 = 0;
  local_e0 = (long *)0x0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_d8 = plVar7 + 4;
  local_d0 = plVar7;
  (**(code **)*puVar10)(puVar10,&local_d8,&local_e8);
  if (local_d0 != (long *)0x0) {
    plVar11 = local_d0 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_d0 + 0x10))(local_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar11 = local_e0 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar9 = *plVar13;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (plVar1 != (long *)0x0) {
    plVar11 = plVar1 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = (long *)(PTR_DAT_04373168 + 0x10);
  local_70 = (long **)0x0;
  uStack_68 = 0;
  local_d0 = (long *)(PTR_DAT_04373170 + 0x10);
  local_c8 = &local_c8;
  local_d8 = plVar1;
  ppppuStack_c0 = local_c8;
  (**(code **)(plVar5[4] + 0x10))(plVar6,auStack_b0);
  local_70 = &local_d0;
  thunk_FUN_00783af0(&local_d8);
  local_d8 = plVar1;
  FUN_00782f18(&local_d0);
  if (plVar5 != (long *)0x0) {
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


