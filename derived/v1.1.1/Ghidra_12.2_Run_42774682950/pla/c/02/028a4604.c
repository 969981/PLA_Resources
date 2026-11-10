/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a4604; name: FUN_028a4604
 */


void FUN_028a4604(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *local_48;
  
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  plVar6 = *(long **)(param_1 + 0x250);
  plVar7 = *(long **)(param_1 + 600);
  if (**(char **)(PTR_DAT_0437a0d8 + 8) == '\0') {
    if (plVar6 != plVar7) {
      plVar5 = (long *)*plVar6;
      while( true ) {
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          local_48 = plVar5;
          (*(code *)*param_2)(param_2 + 4,&local_48);
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        plVar6 = plVar6 + 1;
        if (plVar6 == plVar7) break;
        plVar5 = (long *)*plVar6;
      }
    }
  }
  else if (plVar6 == plVar7) {
LAB_028a467c:
    if ((plVar6 != plVar7) && (local_48 = (long *)*plVar6, local_48 != (long *)0x0)) {
      (*(code *)*param_2)(param_2 + 4,&local_48);
    }
  }
  else {
    do {
      if (*(long *)(*plVar6 + 0x158) == *(long *)PTR_DAT_0437a0d8) goto LAB_028a467c;
      plVar6 = plVar6 + 1;
    } while (plVar7 != plVar6);
  }
  return;
}


