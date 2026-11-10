/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02911ed0; name: FUN_02911ed0
 */


undefined8 FUN_02911ed0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  if (*(long **)(param_1 + 0x68) == (long *)0x0) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(local_30);
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_02913eb8(&local_40,local_30);
    if (local_30[0] != (undefined8 *)0x0) {
      piVar6 = (int *)(local_30[0] + 1);
      do {
        iVar4 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        local_30[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_18 = *local_30[0];
        FUN_02a44274(lVar5 + 0xd8,&local_18);
      }
    }
    puVar3 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      piVar6 = (int *)(local_40 + 1);
      uVar7 = *local_40;
      do {
        iVar4 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 + -1 == 0) {
        local_40[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar4 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar5 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar5;
        local_30[0] = (undefined8 *)*puVar3;
        FUN_02a44274(lVar5 + 0xd8,local_30);
      }
    }
  }
  return uVar7;
}


