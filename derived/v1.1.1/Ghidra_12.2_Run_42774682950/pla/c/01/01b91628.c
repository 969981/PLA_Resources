/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b91628; name: FUN_01b91628
 */


bool FUN_01b91628(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  piVar1 = (int *)(param_1 + 0x500);
  if (*(int *)(param_1 + 0x714) != 1) {
    piVar1 = (int *)(param_1 + 0x2f0);
  }
  if (*piVar1 == 2) {
    local_30 = (undefined8 *)0x0;
    uStack_28 = 0;
    FUN_01b6a890(&local_30,piVar1 + 0x78);
    puVar4 = local_30;
    if (local_30 == (undefined8 *)0x0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)((long)local_30 + 0xc) != 0;
      if (local_30 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_30 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_30[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_18 = *puVar4;
          FUN_02a44274(lVar7 + 0xd8,&local_18);
        }
      }
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


