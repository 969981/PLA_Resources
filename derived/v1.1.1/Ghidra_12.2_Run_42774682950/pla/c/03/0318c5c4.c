/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318c5c4; name: FUN_0318c5c4
 */


void FUN_0318c5c4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = FUN_02898b44();
  }
  FUN_0318e990(uVar4,param_2,param_3);
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
  }
  plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x28,0);
  FUN_03186fb0(uVar4,param_1);
  plVar5 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
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
                    /* WARNING: Could not recover jumptable at 0x0318c698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


