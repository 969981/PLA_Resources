/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01206984; name: FUN_01206984
 */


void FUN_01206984(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  code *local_88;
  undefined8 uStack_80;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar6 = *(long **)(lVar7 + 0xd0);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)plVar6[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar4 = FUN_01225298(*(undefined8 *)(param_1 + 0x90));
  iVar5 = FUN_02c58444(plVar9,1,uVar4);
  local_90 = param_1;
  if (iVar5 == 0) {
    local_88 = FUN_01206c08;
    uStack_80 = 0;
    local_b0 = &LAB_012076fc;
    local_a8 = FUN_01207718;
    local_a0 = &LAB_0120771c;
    puStack_98 = &LAB_01207730;
    FUN_01205224(param_1,0x9997f9f9c3316c93,&local_b0);
    pcVar8 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar8)(&local_90);
    }
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar6 = plVar9 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 != 0) {
      return;
    }
    pcVar8 = *(code **)(*plVar9 + 0x10);
  }
  else {
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 10;
      do {
        iVar5 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    local_88 = FUN_012071c8;
    uStack_80 = 0;
    local_b0 = &LAB_01207744;
    local_a8 = FUN_01207764;
    local_a0 = &LAB_01207768;
    puStack_98 = &LAB_0120777c;
    FUN_0120678c(param_1,0xd95b10bcf2c7a1ef,&local_b0);
    pcVar8 = local_a8;
    if (local_a8 == (code *)0x0) {
      return;
    }
    plVar9 = &local_90;
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
  }
  (*pcVar8)(plVar9);
  return;
}


