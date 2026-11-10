/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbafcc; name: FUN_01dbafcc
 */


uint FUN_01dbafcc(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = 0;
  local_30 = (undefined8 *)0x0;
  FUN_01dbc778(&local_30);
  uVar5 = (*(code *)*param_1)(param_1 + 4,&local_30);
  puVar4 = local_30;
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
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar6 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_18 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_18);
    }
  }
  return uVar5 & 1;
}


