/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0199dbac; name: FUN_0199dbac
 */


void FUN_0199dbac(long param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30 [2];
  long *local_18;
  
  (**(code **)(**(long **)(param_1 + 0x180) + 0x10))(local_30);
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_019a411c(&local_40,local_30);
  plVar7 = local_30[0];
  if (local_30[0] != (long *)0x0) {
    plVar1 = local_30[0] + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      local_30[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_18 = (long *)*plVar7;
      FUN_02a44274(lVar9 + 0xd8,&local_18);
    }
  }
  if (local_40 == (undefined8 *)0x0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_016c1a7c(&local_18);
    puVar6 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_40 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_30[0] = (long *)*puVar6;
        FUN_02a44274(lVar9 + 0xd8,local_30);
      }
    }
  }
  if (local_18 != (long *)0x0) {
    uVar3 = local_18[0x19] | 2;
    if ((param_2 & 1) == 0) {
      uVar3 = local_18[0x19] & 0xfffffffffffffffd;
    }
    local_18[0x19] = uVar3;
    lVar9 = local_18[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


