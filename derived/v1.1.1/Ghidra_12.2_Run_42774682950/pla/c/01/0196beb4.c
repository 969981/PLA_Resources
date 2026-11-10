/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196beb4; name: FUN_0196beb4
 */


bool FUN_0196beb4(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  long *local_18;
  
  local_28 = 0;
  local_30 = (long *)0x0;
  FUN_008802f0(&local_30,*(long *)(*(long *)(param_1 + 0x70) + 0xa8) + 0x58);
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00ca524c(&local_40,&local_30);
  plVar6 = local_30;
  if (local_30 != (long *)0x0) {
    plVar1 = local_30 + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_30[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_18 = (long *)*plVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_18);
    }
  }
  if (local_40 == (undefined8 *)0x0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_00ca554c(&local_18);
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_40 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_30 = (long *)*puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_30);
      }
    }
  }
  if (local_18 == (long *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)((long)local_18 + 0x356) != '\0';
    lVar9 = local_18[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return bVar7;
}


