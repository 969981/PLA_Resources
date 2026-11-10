/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d7e44; name: FUN_006d7e44
 */


void FUN_006d7e44(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar9 = *(long **)(param_1 + 8);
  puVar8 = *(undefined8 **)(param_1 + 0x68);
  plVar4 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x78,8);
  plVar4[2] = 0;
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  puVar3 = PTR_DAT_043753e0;
  plVar4[3] = (long)plVar9;
  plVar7 = plVar4 + 4;
  *plVar4 = (long)(puVar3 + 0x10);
  FUN_00782ef8(plVar7);
  plVar4[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  if (plVar4 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x148,8);
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  plVar5[2] = 0;
  plVar5[3] = (long)plVar9;
  *plVar5 = (long)&PTR_LAB_0419cad8;
  FUN_007840dc(plVar5 + 4);
  plVar5[4] = (long)&PTR_LAB_0419cb28;
  lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,0x10000,0x10);
  if (lVar6 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_00782cfc(plVar5 + 10,plVar7,0,lVar6,0x10000,1);
  plVar5[0x27] = (long)plVar4;
  plVar5[0x23] = param_1;
  plVar5[0x24] = (long)plVar9;
  plVar5[10] = (long)&PTR_LAB_0419cb70;
  *(undefined1 *)((long)plVar5 + 0x141) = 1;
  plVar5[0x25] = 0x10000;
  plVar5[0x26] = (long)plVar7;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_70 = plVar5 + 4;
  local_68 = plVar5;
  (**(code **)*puVar8)(puVar8,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar9 = local_68 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar9 = local_78 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar5 != (long *)0x0) {
    do {
      lVar6 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(plVar4 + 5) = 1;
  *(long **)(param_1 + 0xe8) = plVar7;
  plVar7 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = plVar4;
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


