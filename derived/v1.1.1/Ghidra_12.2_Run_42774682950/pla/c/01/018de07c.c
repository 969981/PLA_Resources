/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018de07c; name: FUN_018de07c
 */


undefined8 FUN_018de07c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *local_38;
  undefined8 uStack_30;
  long *local_28;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x75c) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x714) != 7) {
    return 0;
  }
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00ac3fa4(&local_38,param_1 + 0x248);
  if (local_38 == (undefined8 *)0x0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_28);
    puVar4 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_18 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_18);
        if (local_28 == (long *)0x0) {
          return 0;
        }
        goto LAB_018de0d8;
      }
    }
  }
  if (local_28 == (long *)0x0) {
    return 0;
  }
LAB_018de0d8:
  uVar6 = FUN_01b3de90();
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  return 0;
}


