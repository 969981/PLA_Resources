/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1f758; name: FUN_01e1f758
 */


void FUN_01e1f758(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40 [2];
  long local_28;
  
  if ((*(long *)(param_2 + 0x70) == 0) ||
     (FUN_01aa4ea4(local_40), plVar6 = local_40[0], local_40[0] == (long *)0x0)) {
    *param_1 = 0;
    return;
  }
  (**(code **)(*local_40[0] + 0x10))(local_40,local_40[0]);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_01d847e8(&local_50,local_40);
  plVar7 = local_40[0];
  if (local_40[0] != (long *)0x0) {
    plVar1 = local_40[0] + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_40[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *plVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if (local_50 == (undefined8 *)0x0) {
    *param_1 = 0;
  }
  else {
    FUN_01aa4ea4(param_1);
    puVar5 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_50 + 1);
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
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_40[0] = (long *)*puVar5;
        FUN_02a44274(lVar10 + 0xd8,local_40);
      }
    }
  }
  uVar9 = FUN_02a43a5c(plVar6[0xb]);
  if ((uVar9 & 1) == 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}


