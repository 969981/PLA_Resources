/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00651100; name: FUN_00651100
 */


void FUN_00651100(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(*param_2 + 0x18);
  plVar3 = *(long **)(*param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    lVar7 = (long)param_2 + 0x51;
  }
  else {
    lVar7 = param_2[0xc];
  }
                    /* try { // try from 0065115c to 0065115f has its CatchHandler @ 006511bc */
  uVar6 = FUN_0065be44(uVar2,lVar7,param_3,param_4);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00667218(param_1,param_2,uVar6);
  return;
}


