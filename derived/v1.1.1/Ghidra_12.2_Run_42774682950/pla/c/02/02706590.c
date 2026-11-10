/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02706590; name: FUN_02706590
 */


void FUN_02706590(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_50;
  undefined8 local_48;
  
  plVar1 = param_2 + 1;
  do {
    lVar13 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_DAT_04379498;
  } while (cVar3 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  uVar9 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar9;
  FUN_02a44e0c(&local_50,uVar9,lVar13);
  puVar10 = (undefined8 *)*param_2;
  *param_2 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar10 + 1);
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
      puVar10[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_48 = *puVar10;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  puVar10 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (local_50 == (undefined8 *)0x0) {
    if (puVar10 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar10 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 1) {
        puVar10[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        local_48 = *puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    lVar13 = 0;
  }
  else {
    puVar11 = local_50;
    if (puVar10 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_48 = *puVar10;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
      puVar11 = local_50;
    }
    local_50 = (undefined8 *)0x0;
    *param_1 = puVar11;
  }
  puVar10 = local_50;
  param_1[1] = lVar13;
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
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)puVar6;
      *(long *)puVar7 = lVar13;
      local_48 = *puVar10;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  return;
}


