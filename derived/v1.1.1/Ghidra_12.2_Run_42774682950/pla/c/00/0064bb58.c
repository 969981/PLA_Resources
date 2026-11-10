/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064bb58; name: FUN_0064bb58
 */


void FUN_0064bb58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *local_40;
  long *local_38;
  
  plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 400);
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x280,8);
  puVar1 = PTR_DAT_043757d8 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar6;
  plVar6 = plVar4 + 4;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  FUN_0065b320(plVar6,param_2);
  plVar7 = *(long **)(param_1 + 0x20);
  *(long **)(param_1 + 0x18) = plVar6;
  *(long **)(param_1 + 0x20) = plVar4;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(param_1 + 0x18);
    plVar4 = *(long **)(param_1 + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_40 = plVar6;
  local_38 = plVar4;
  FUN_0065b980(plVar6,&local_40);
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


