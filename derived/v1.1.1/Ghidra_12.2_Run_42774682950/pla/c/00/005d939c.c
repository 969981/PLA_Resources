/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d939c; name: FUN_005d939c
 */


long FUN_005d939c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  long *plStack_30;
  undefined8 *local_28;
  
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x1b8);
  if (lVar5 != 0) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = param_1[2];
    plStack_30 = (long *)param_1[4];
    local_38 = param_1[3];
    param_1[3] = 0;
    param_1[4] = 0;
    local_28 = (undefined8 *)param_1[5];
    param_1[5] = 0;
                    /* try { // try from 005d93ec to 005d93f7 has its CatchHandler @ 005d9470 */
    FUN_005d79c8(lVar5,&local_50);
    puVar4 = local_28;
    local_28 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
    }
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return lVar5;
}


