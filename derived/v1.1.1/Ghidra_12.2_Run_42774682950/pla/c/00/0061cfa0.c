/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061cfa0; name: FUN_0061cfa0
 */


void FUN_0061cfa0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x10));
  FUN_00784040(param_2 + 0x40);
  lVar9 = *(long *)(param_2 + 0x50);
  lVar10 = *(long *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x60);
  lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  lVar11 = *(long *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  plVar13 = *(long **)(lVar8 + 0x198);
  puVar12 = *(undefined8 **)(lVar8 + 0x348);
  plVar6 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar5 = PTR_DAT_043753e0;
  plVar6[3] = (long)plVar13;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_00782ef8(plVar1);
  plVar6[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
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
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x160,8);
  plVar14 = plVar7 + 1;
  *plVar14 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar13;
  *plVar7 = (long)&PTR_LAB_04191590;
  FUN_007840dc(plVar7 + 4);
  plVar7[4] = (long)&PTR_LAB_041915e0;
  lVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,0x10000,0x10);
  if (lVar8 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_00782cfc(plVar7 + 10,plVar1,0,lVar8,0x10000,1);
  *(undefined1 *)((long)plVar7 + 0x159) = 1;
  plVar7[0x27] = (long)plVar13;
  plVar7[0x28] = 0x10000;
  plVar7[10] = (long)&PTR_LAB_04191628;
  plVar7[0x26] = lVar11;
  plVar7[0x29] = (long)plVar1;
  plVar7[0x2a] = (long)plVar6;
  plVar7[0x23] = lVar9;
  plVar7[0x24] = lVar10;
  plVar7[0x25] = lVar2;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = plVar7 + 4;
  local_68 = plVar7;
  (**(code **)*puVar12)(puVar12,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 1;
    do {
      lVar10 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 1;
    do {
      lVar10 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      lVar10 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x10));
  return;
}


