/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061d280; name: FUN_0061d280
 */


void FUN_0061d280(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long local_50;
  long *local_48;
  
  plVar6 = *(long **)*param_2;
  plVar7 = *(long **)(*plVar6 + 400);
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x118,8);
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar9 = plVar4 + 2;
  *plVar9 = 0;
  puVar3 = PTR_DAT_043754c0;
  plVar4[3] = (long)plVar7;
  plVar7 = plVar4 + 4;
  *plVar4 = (long)(puVar3 + 0x10);
  FUN_0061ce20(plVar7,param_2,plVar6);
  lVar5 = plVar4[5];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == -1)) {
    if (plVar4 != (long *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar4[4] = (long)plVar7;
    plVar4[5] = (long)plVar4;
    if (lVar5 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    do {
      lVar5 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = (long)plVar7;
  param_1[1] = (long)plVar4;
  FUN_0061d434(&local_50,plVar7);
  plVar7 = local_48;
  lVar5 = local_50;
  local_50 = 0;
  local_48 = (long *)0x0;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 8) = 1;
  }
  plVar6 = (long *)plVar4[0xf];
  plVar4[0xe] = lVar5;
  plVar4[0xf] = (long)plVar7;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      if (local_48 != (long *)0x0) {
        plVar7 = local_48 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  return;
}


