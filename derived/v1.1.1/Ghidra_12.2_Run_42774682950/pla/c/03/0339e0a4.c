/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339e0a4; name: FUN_0339e0a4
 */


void FUN_0339e0a4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    lVar5 = tpidr_el0;
    if (lVar7 != 0) {
      FUN_03309b44(lVar7);
      lVar4 = *(long *)(lVar5 + 0x38d490);
      if (lVar4 == 0) {
        lVar4 = FUN_0333d16c(0,1);
        *(long *)(lVar5 + 0x38d490) = lVar4;
      }
      plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar7,0xc0);
    }
    lVar7 = *(long *)(lVar5 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar7;
    }
    plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar6,8);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar3 = plVar6 + 2;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x0339e18c;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x0339e18c:
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar3 = plVar6 + 2;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0339e1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  return;
}


