/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d8110; name: FUN_006d8110
 */


void FUN_006d8110(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = (long)(PTR_DAT_04376190 + 0x10);
                    /* try { // try from 006d8130 to 006d8133 has its CatchHandler @ 006d8224 */
  FUN_006050cc(param_1[0x1b]);
  plVar6 = (long *)param_1[0x1d];
  plVar2 = (long *)param_1[0x1e];
  if (plVar2 == (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    (**(code **)(*plVar6 + 0x18))();
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
      plVar6 = (long *)param_1[0x1e];
      goto joined_r0x006d81a4;
    }
  }
  plVar6 = (long *)param_1[0x1e];
joined_r0x006d81a4:
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar7 = (undefined8 *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar6 = (long *)param_1[0x1c];
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,0x58,8);
  }
  FUN_00617798(param_1 + 2);
  return;
}


