/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00617fbc; name: FUN_00617fbc
 */


void FUN_00617fbc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = (long)(PTR_DAT_04375488 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),false,0);
  uVar5 = FUN_00612290();
  FUN_00783f38(param_1 + 5,uVar5);
  uVar5 = FUN_00612290();
  FUN_00783f38(param_1 + 7,uVar5);
  param_1[9] = 0;
  param_1[10] = 0;
  nn::nifm::Initialize();
  plVar10 = *(long **)(*param_2 + 0x198);
  FUN_0061687c(&local_70,*param_2 + 0x1a0);
  puVar9 = *(undefined8 **)(local_70[1] + 0x58);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x78,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar4 = PTR_DAT_043753e0;
  plVar6[3] = (long)plVar10;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar4 + 0x10);
  FUN_00782ef8(plVar1);
  plVar6[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  if (plVar6 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x148,8);
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar10;
  *plVar7 = (long)&PTR_LAB_041911a8;
  FUN_007840dc(plVar7 + 4);
  plVar7[4] = (long)&PTR_LAB_041911f8;
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x10000,0x10);
  if (lVar8 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_00782cfc(plVar7 + 10,plVar1,0,lVar8,0x10000,1);
  plVar7[0x27] = (long)plVar6;
  plVar7[0x23] = (long)param_1;
  plVar7[0x24] = (long)plVar10;
  plVar7[10] = (long)&PTR_LAB_04191240;
  *(undefined1 *)((long)plVar7 + 0x141) = 1;
  plVar7[0x25] = 0x10000;
  plVar7[0x26] = (long)plVar1;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = plVar7 + 4;
  local_68 = plVar7;
  (**(code **)*puVar9)(puVar9,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar10 = local_68 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar7 != (long *)0x0) {
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(plVar6 + 5) = 1;
  param_1[9] = (long)plVar1;
  plVar10 = (long *)param_1[10];
  param_1[10] = (long)plVar6;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


