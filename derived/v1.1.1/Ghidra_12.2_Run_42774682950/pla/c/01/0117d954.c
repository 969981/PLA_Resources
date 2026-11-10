/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117d954; name: FUN_0117d954
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0117d954(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  char local_80 [64];
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  iVar7 = snprintf(local_80,0x40,"anime_L_list_bonus_00_in_%dline",*(int *)(param_1 + 0x618));
  puVar5 = PTR_DAT_04379ce0;
  puVar4 = PTR_DAT_04379cd8;
  puVar3 = PTR_DAT_04379cd0;
  if (local_80[0] == '\0') {
    plVar9 = (long *)FUN_00938550(iVar7);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar8;
    FUN_02a47cd8(&local_a0,uVar8,local_80);
    plVar9 = local_a0;
  }
  if (plVar9 == (long *)0x0) {
    local_a0 = *(long **)PTR_DAT_04379c88;
    lStack_98 = *(long *)PTR_PTR_04379d00;
    local_90 = 0;
  }
  else {
    local_a0 = *(long **)((long)plVar9 + 0x58);
    lStack_98 = *(long *)((long)plVar9 + 0x60);
    local_90 = *(long *)((long)plVar9 + 0x68);
  }
  local_88 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_88 = (long *)0x0;
    plVar6 = local_88;
  }
  else {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar6 = plVar9;
    if (local_88 != (long *)0x0) {
      lVar10 = *local_88;
      local_88 = plVar9;
      (**(code **)(lVar10 + 0x20))();
      plVar6 = local_88;
    }
  }
  local_88 = plVar6;
  FUN_0283b430(plVar11,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  iVar7 = snprintf(local_80,0x40,"anime_L_list_bonus_00_%dline_reward",*(int *)(param_1 + 0x618));
  if (local_80[0] == '\0') {
    plVar9 = (long *)FUN_00938550(iVar7);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar8;
    FUN_02a47cd8(&local_a0,uVar8,local_80);
    plVar9 = local_a0;
  }
  if (plVar9 == (long *)0x0) {
    local_a0 = *(long **)PTR_DAT_04379c88;
    lStack_98 = *(long *)PTR_PTR_04379d00;
    local_90 = 0;
  }
  else {
    local_a0 = *(long **)((long)plVar9 + 0x58);
    lStack_98 = *(long *)((long)plVar9 + 0x60);
    local_90 = *(long *)((long)plVar9 + 0x68);
  }
  local_88 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_88 = (long *)0x0;
    plVar6 = local_88;
  }
  else {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plVar6 = plVar9;
    if (local_88 != (long *)0x0) {
      lVar10 = *local_88;
      local_88 = plVar9;
      (**(code **)(lVar10 + 0x20))();
      plVar6 = local_88;
    }
  }
  local_88 = plVar6;
  FUN_0283b430(plVar11,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  iVar7 = snprintf(local_80,0x40,"anime_L_list_bonus_00_state_%dline_open",*(int *)(param_1 + 0x618)
                  );
  if (local_80[0] == '\0') {
    plVar9 = (long *)FUN_00938550(iVar7);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar8 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar8;
    FUN_02a47cd8(&local_a0,uVar8,local_80);
    plVar9 = local_a0;
  }
  if (plVar9 == (long *)0x0) {
    local_a0 = *(long **)PTR_DAT_04379c88;
    lStack_98 = *(long *)PTR_PTR_04379d00;
    local_90 = 0;
  }
  else {
    local_a0 = (long *)plVar9[0xb];
    lStack_98 = plVar9[0xc];
    local_90 = plVar9[0xd];
  }
  local_88 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_88 = (long *)0x0;
    FUN_0283b1e8(plVar11,&local_a0);
  }
  else {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    local_88 = plVar9;
    FUN_0283b1e8(plVar11,&local_a0);
    (**(code **)(*plVar9 + 0x20))(plVar9);
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar9 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  return;
}


