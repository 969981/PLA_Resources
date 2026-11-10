/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027beb58; name: FUN_027beb58
 */


void FUN_027beb58(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  if ((*param_2 != 0) && (FUN_02728988(local_40), local_40[0] != (undefined8 *)0x0)) {
    plVar5 = (long *)FUN_0120ccf0();
    if (local_40[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40[0] + 1);
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
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *local_40[0];
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 200))(plVar5);
      FUN_027bec7c(param_1,*param_2,uVar6);
      return;
    }
  }
  *param_1 = 0;
  return;
}


