/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027ccb34; name: FUN_027ccb34
 */


void FUN_027ccb34(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_02728988(local_38);
  if (local_38[0] != (undefined8 *)0x0) {
    plVar5 = (long *)FUN_0120ccf0();
    if (local_38[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38[0] + 1);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_28 = *local_38[0];
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x78))(param_1,plVar5);
      return;
    }
  }
  local_58 = 0x35115b5f3e5b9bed;
  pcStack_50 = "SessionInstanceNotFoundOnDataExchangeCancel";
  local_48 = 0x2b;
  local_40 = (long *)0x0;
  FUN_02729a10(param_1,&local_58,&DAT_03a7e378);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


