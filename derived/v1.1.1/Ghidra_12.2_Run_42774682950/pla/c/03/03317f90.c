/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03317f90; name: FUN_03317f90
 */


void FUN_03317f90(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (*param_1 == 0) {
    lVar6 = tpidr_el0;
    lVar5 = *(long *)(lVar6 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x38,0);
    plVar3[6] = 0;
    plVar3[3] = 0;
    *plVar3 = (long)&PTR_LAB_0434f7e0;
    plVar3[1] = 0xffffffff;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[2] = 1;
    FUN_0332cf84();
    plVar4 = (long *)*param_1;
    if (((plVar4 != plVar3) && (*param_1 = (long)plVar3, plVar4 != (long *)0x0)) && (plVar4[1] != 0)
       ) {
      plVar3 = plVar4 + 2;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0331805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))();
        return;
      }
    }
  }
  return;
}


