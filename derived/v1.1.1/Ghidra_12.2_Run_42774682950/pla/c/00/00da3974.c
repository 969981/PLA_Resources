/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da3974; name: FUN_00da3974
 */


undefined8 FUN_00da3974(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_38 [2];
  undefined4 local_24;
  undefined8 local_18;
  
  local_24 = param_2;
  FUN_02bc9018(local_38,*(undefined8 *)(param_1 + 0x60),&local_24);
  if (local_38[0] != (undefined8 *)0x0) {
    iVar2 = *(int *)((long)local_38[0] + 0xc);
    if (local_38[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38[0] + 1);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_18 = *local_38[0];
        FUN_02a44274(lVar6 + 0xd8,&local_18);
      }
    }
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


