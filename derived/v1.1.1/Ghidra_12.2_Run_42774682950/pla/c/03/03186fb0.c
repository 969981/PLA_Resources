/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03186fb0; name: FUN_03186fb0
 */


void FUN_03186fb0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_LAB_042f5f88;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = param_2;
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  lVar7 = *(long *)(lVar6 + 0xc0);
  if (lVar7 == 0) {
    lVar7 = tpidr_el0;
    lVar5 = *(long *)(lVar7 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar7 + 0x38d490) = lVar5;
    }
    plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,0x20,0);
    FUN_031804f4(lVar7,lVar6);
  }
  else if (*(long *)(lVar7 + 8) != 0) {
    plVar4 = (long *)(lVar7 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *(long *)(lVar6 + 0xc0);
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = lVar7;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0318705c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x48))
            ((long *)param_1[3],*(undefined8 *)(*(long *)(param_1[4] + 0x20) + 0x68));
  return;
}


