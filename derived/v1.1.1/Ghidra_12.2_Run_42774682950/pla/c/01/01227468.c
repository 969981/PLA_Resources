/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01227468; name: FUN_01227468
 */


void FUN_01227468(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_210;
  code *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  char *local_190;
  long *local_188;
  long local_180;
  long lStack_178;
  long local_170;
  long *local_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  undefined8 *local_140 [2];
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [104];
  char acStack_a8 [72];
  
  lVar11 = *(long *)(param_1 + 0x448);
  uVar10 = *(undefined8 *)(param_1 + 8);
  snprintf(acStack_a8,0x40,"pane_P_poke_%02d",0);
  local_160 = 0xe6fdb430341a8a83;
  pcStack_158 = "work_box_trade";
  local_150 = 0xe;
  local_148 = (long *)0x0;
  local_190 = acStack_a8;
  FUN_009313e8(&local_188,&local_190);
  plVar5 = local_188;
  if (local_188 == (long *)0x0) {
    plVar8 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar8 = local_188 + 0xb;
  }
  local_180 = *plVar8;
  if (local_188 == (long *)0x0) {
    plVar8 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar8 = local_188 + 0xc;
  }
  lStack_178 = *plVar8;
  if (local_188 == (long *)0x0) {
    local_170 = 0;
    local_168 = (long *)0x0;
  }
  else {
    local_170 = local_188[0xd];
    local_168 = (long *)0x0;
    (**(code **)(*local_188 + 0x18))(local_188);
    plVar8 = local_168;
    local_168 = plVar5;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  FUN_00d62910(local_140,*(undefined8 *)(param_1 + 0x2c8),&local_160,&local_180);
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_210 = 0;
  local_208 = (code *)0x0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN_0284d5a8(lVar11,uVar10,local_140,0,&local_210);
  pcVar4 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    local_208 = (code *)0x0;
    (*pcVar4)(&local_1f0);
  }
  pcVar4 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar4)(auStack_110);
  }
  puVar6 = local_140[0];
  if (local_140[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_140[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_140[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_160 = *puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_160);
    }
  }
  snprintf(acStack_a8,0x40,"pane_P_poke_%02d",1);
  local_160 = 0xe6fdb430341a8a83;
  pcStack_158 = "work_box_trade";
  local_150 = 0xe;
  local_148 = (long *)0x0;
  local_190 = acStack_a8;
  FUN_009313e8(&local_188,&local_190);
  plVar5 = local_188;
  if (local_188 == (long *)0x0) {
    local_180 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_180 = local_188[0xb];
    if (local_188 != (long *)0x0) {
      lStack_178 = local_188[0xc];
      goto joined_r0x012278f8;
    }
  }
  lStack_178 = *(long *)PTR_PTR_04379d00;
joined_r0x012278f8:
  if (local_188 == (long *)0x0) {
    local_170 = 0;
    local_168 = (long *)0x0;
  }
  else {
    local_170 = local_188[0xd];
    local_168 = (long *)0x0;
    (**(code **)(*local_188 + 0x18))(local_188);
    plVar8 = local_168;
    local_168 = plVar5;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  FUN_00d62910(local_140,*(undefined8 *)(param_1 + 0x2c8),&local_160,&local_180);
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  local_210 = 0;
  local_208 = (code *)0x0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  FUN_0284d5a8(lVar11 + 0xd0,uVar10,local_140,0,&local_210);
  pcVar4 = local_208;
  if (local_208 == (code *)0x0) {
    local_208 = (code *)0x0;
    pcVar4 = local_128;
  }
  else {
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    local_208 = (code *)0x0;
    (*pcVar4)(&local_1f0);
    pcVar4 = local_128;
  }
  local_128 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar4)(auStack_110);
  }
  if (local_140[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_140[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_140[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_160 = *local_140[0];
      FUN_02a44274(lVar11 + 0xd8,&local_160);
    }
  }
  return;
}


