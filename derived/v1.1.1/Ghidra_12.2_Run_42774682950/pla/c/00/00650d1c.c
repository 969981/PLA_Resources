/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00650d1c; name: FUN_00650d1c
 */


void FUN_00650d1c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long local_e0;
  long *local_d8;
  undefined1 auStack_d0 [8];
  long *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long *plStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  FUN_0067d740(auStack_d0,param_2);
  FUN_0067dbfc(auStack_d0,param_2,param_3);
  FUN_0067dec0(&local_e0,auStack_d0);
  plVar2 = local_d8;
  lVar9 = local_e0;
  lVar8 = *(long *)(*(long *)(*param_2 + 8) + 0x48);
  local_e0 = 0;
  local_d8 = (long *)0x0;
  plVar11 = *(long **)(lVar8 + 0x198);
  puVar10 = *(undefined8 **)(lVar8 + 0x348);
  plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xd0,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar5 = PTR_DAT_04375438;
  plVar6[3] = (long)plVar11;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_00782ef8(plVar1);
  plVar6[4] = (long)(PTR_DAT_04375448 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_04375440 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)(plVar6 + 0x19) = 0;
  if (plVar6 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x150,8);
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar11;
  *plVar7 = (long)&PTR_LAB_041948c8;
  FUN_007840dc(plVar7 + 4);
  plVar7[4] = (long)&PTR_LAB_04194918;
  lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x10000,0x10);
  if (lVar8 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_00782cfc(plVar7 + 10,plVar1,0,lVar8,0x10000,1);
  *(undefined1 *)((long)plVar7 + 0x149) = 1;
  plVar7[0x25] = (long)plVar11;
  plVar7[0x26] = 0x10000;
  plVar7[10] = (long)&PTR_LAB_04194960;
  plVar7[0x27] = (long)plVar1;
  plVar7[0x28] = (long)plVar6;
  plVar7[0x23] = lVar9;
  plVar7[0x24] = (long)plVar2;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = plVar7 + 4;
  local_68 = plVar7;
  (**(code **)*puVar10)(puVar10,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      lVar9 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d8 != (long *)0x0) {
    plVar1 = local_d8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar9 = local_a0;
  if (local_a0 != 0) {
    lVar8 = local_98;
    if (local_98 != local_a0) {
      do {
        lVar8 = lVar8 + -8;
        FUN_0064ef40(lVar8);
      } while (lVar9 != lVar8);
    }
    local_98 = lVar9;
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_a0,local_90 - local_a0,8);
  }
  lVar9 = local_c0;
  if (local_c0 != 0) {
    lVar8 = local_b8;
    if (local_b8 != local_c0) {
      do {
        lVar8 = lVar8 + -8;
        FUN_00680b34(lVar8);
      } while (lVar9 != lVar8);
    }
    local_b8 = lVar9;
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_c0,local_b0 - local_c0,8);
  }
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


