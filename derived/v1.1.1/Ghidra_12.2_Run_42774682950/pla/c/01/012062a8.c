/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012062a8; name: FUN_012062a8
 */


void FUN_012062a8(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar9 = *(long **)(lVar11 + 0xd0);
  if (plVar9 != (long *)0x0) {
    plVar13 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)plVar9[0xb];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar9 + 10;
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  uVar5 = FUN_01225298(*(undefined8 *)(param_1 + 0x90));
  iVar6 = FUN_02c58444(plVar13,1,uVar5);
  local_90 = param_1;
  if (iVar6 == 0) {
    local_88 = &LAB_01206728;
    uStack_80 = 0;
    local_b0 = (long *)&LAB_012076fc;
    local_a8 = FUN_01207718;
    local_a0 = &LAB_0120771c;
    puStack_98 = &LAB_01207730;
    FUN_01205224(param_1,0x9997f9f9c3316c93,&local_b0);
    pcVar12 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar12)(&local_90);
    }
    if (plVar13 == (long *)0x0) {
      return;
    }
    plVar9 = plVar13 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != 0) {
      return;
    }
    pcVar12 = *(code **)(*plVar13 + 0x10);
  }
  else {
    if (plVar13 != (long *)0x0) {
      plVar9 = plVar13 + 10;
      do {
        iVar6 = (int)*plVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    iVar6 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
    uVar5 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),iVar6);
    if (iVar6 == 0) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148bf4(&local_b0);
      uVar7 = FUN_010e67cc(local_b0);
      if (local_b0 != (long *)0x0) {
        lVar11 = local_b0[0xb];
        piVar2 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_b0 + 0x20))();
        }
      }
    }
    else {
      uVar7 = 0;
    }
    uVar10 = FUN_0122428c(*(undefined8 *)(param_1 + 0x90),iVar6,uVar7,uVar5);
    if ((uVar10 & 1) == 0) {
      local_88 = &LAB_01206728;
      uStack_80 = 0;
      local_b0 = (long *)&LAB_012076fc;
      local_a8 = FUN_01207718;
      local_a0 = &LAB_0120771c;
      puStack_98 = &LAB_01207730;
      FUN_01205224(param_1,0x999b84f9c3348e9b,&local_b0);
      pcVar12 = local_a8;
    }
    else {
      uVar10 = FUN_01224510(*(undefined8 *)(param_1 + 0x90),iVar6,uVar7,uVar5);
      if ((uVar10 & 1) == 0) {
        local_88 = &LAB_01206c98;
        uVar10 = 0x10bcf2c7a1ef;
      }
      else {
        local_88 = &LAB_01206c58;
        uVar10 = 0x12bcf2c7a555;
      }
      uStack_80 = 0;
      local_a8 = FUN_01207764;
      local_b0 = (long *)&LAB_01207744;
      local_a0 = &LAB_01207768;
      puStack_98 = &LAB_0120777c;
      FUN_0120678c(param_1,uVar10 | 0xd95b000000000000,&local_b0);
      pcVar12 = local_a8;
    }
    if (pcVar12 == (code *)0x0) {
      return;
    }
    plVar13 = &local_90;
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (long *)0x0;
    local_a8 = (code *)0x0;
  }
  (*pcVar12)(plVar13);
  return;
}


