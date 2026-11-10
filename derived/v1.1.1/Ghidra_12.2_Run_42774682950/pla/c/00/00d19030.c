/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d19030; name: FUN_00d19030
 */


ulong FUN_00d19030(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar7 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar7;
    plVar8 = *(long **)(lVar7 + 0xd0);
    if (plVar8 == (long *)0x0) {
      uVar6 = FUN_00d85350(0);
      return uVar6;
    }
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = FUN_00d85350(plVar8);
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  else {
    uVar4 = 1;
  }
  return (ulong)(uVar4 & 1);
}


