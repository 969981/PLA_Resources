/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00706710; name: FUN_00706710
 */


void FUN_00706710(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0x80,8);
  lVar5 = *param_2;
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  puVar3 = PTR_DAT_043764c8;
  plVar7 = plVar4 + 2;
  *plVar7 = 0;
  plVar4[3] = lVar5;
  *plVar4 = (long)(puVar3 + 0x10);
  lVar5 = *param_3;
  plVar8 = plVar4 + 4;
  *plVar8 = 0;
  plVar4[5] = 0;
  plVar4[6] = lVar5;
  plVar4[9] = 0;
  lVar5 = FUN_00612290();
  plVar4[10] = lVar5;
  plVar4[0xb] = 0;
  plVar4[8] = (long)(plVar4 + 9);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xc),true,0);
  *param_1 = plVar8;
  param_1[1] = plVar4;
  lVar5 = plVar4[5];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == -1)) {
    if (plVar4 != (long *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar4[4] = (long)plVar8;
    plVar4[5] = (long)plVar4;
    if (lVar5 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


