/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d18f54; name: FUN_00d18f54
 */


void FUN_00d18f54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar5 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar5;
    plVar6 = *(long **)(lVar5 + 0xd0);
    if (plVar6 == (long *)0x0) {
      FUN_00d85234(0);
    }
    else {
      plVar1 = plVar6 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_00d85234(plVar6);
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_011e8d10();
  return;
}


