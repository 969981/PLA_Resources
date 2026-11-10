/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00548ed0; name: FUN_00548ed0
 */


void FUN_00548ed0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_04374cc8 + 0x10);
                    /* try { // try from 00548ef0 to 00548ef3 has its CatchHandler @ 00548f6c */
  FUN_002fe060(param_1[5]);
  puVar6 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_002e2ea0(PTR_LAB_04373088,puVar6);
  }
  plVar5 = (long *)param_1[4];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


