/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d04dc; name: FUN_005d04dc
 */


long FUN_005d04dc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  long *plStack_48;
  undefined8 *local_38;
  
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x178);
  if (lVar5 != 0) {
    plStack_48 = (long *)param_1[1];
    local_50 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    local_38 = (undefined8 *)0x0;
                    /* try { // try from 005d0538 to 005d054b has its CatchHandler @ 005d05cc */
    FUN_0051988c(lVar5,&local_50,*param_2,*param_3,param_3[1],&local_38,param_5,*param_6);
    puVar4 = local_38;
    local_38 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
    }
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return lVar5;
}


