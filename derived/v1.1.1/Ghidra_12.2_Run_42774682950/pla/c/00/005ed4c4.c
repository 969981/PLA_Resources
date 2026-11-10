/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ed4c4; name: FUN_005ed4c4
 */


void FUN_005ed4c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = (long)&PTR_LAB_0418eb08;
                    /* try { // try from 005ed4e0 to 005ed4f3 has its CatchHandler @ 005ed57c */
  FUN_002e4a10(param_1[7]);
  FUN_002fe060(param_1[8]);
  free((void *)param_1[6]);
  puVar4 = PTR_DAT_04374a00;
  puVar7 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  plVar6 = (long *)param_1[4];
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
      return;
    }
  }
  return;
}


