/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d782c; name: FUN_018d782c
 */


undefined8 FUN_018d782c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined1 local_18f;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long alStack_e0 [12];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  undefined8 local_38;
  
  local_1f0 = (undefined8 *)0x0;
  local_1e8 = 0;
  FUN_00ac3fa4(&local_1f0,param_1 + 0x248);
  if (local_1f0 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_48);
    puVar4 = local_1f0;
    if (local_1f0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_1f0 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_1f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
        if (local_48 == (long *)0x0) {
          return 0;
        }
        goto LAB_018d7870;
      }
    }
  }
  if (local_48 == (long *)0x0) {
    return 0;
  }
LAB_018d7870:
  FUN_01a84fdc();
  FUN_01a83548(local_48);
  FUN_01b439bc(local_48,param_2);
  local_1b0 = (long *)0x0;
  local_1e0 = 0x3e2aaaab3dccccce;
  local_80 = 0x1100000014;
  local_78 = 0x14;
  local_1d0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  local_1d8 = 2;
  local_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_100 = (undefined1 *)0x0;
  local_f8 = (code *)0x0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (undefined1 *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_1e8 = *(undefined8 *)(param_2 + 0x18);
  local_1f0 = *(undefined8 **)(param_2 + 0x10);
  local_74 = 1;
  local_190 = 0;
  local_18f = *(undefined1 *)(param_2 + 0x25);
  FUN_01b3e290(*(undefined4 *)(param_2 + 0x20),&local_1f0);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar5)(alStack_e0);
  }
  local_100 = &LAB_018e44b8;
  local_f8 = FUN_018e4794;
  local_f0 = &LAB_018e4798;
  local_e8 = &LAB_018e47a4;
  alStack_e0[0] = param_1;
  FUN_01b41aa8(local_48,&local_1f0);
  if (*(char *)(param_2 + 0x25) != '\0') {
    *(undefined4 *)(param_1 + 0x710) = 1;
  }
  FUN_018db3cc(param_1);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar5)(alStack_e0);
  }
  pcVar5 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar5)(auStack_160);
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  puVar4 = local_1c0;
  if (local_1c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1c0 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_1c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  puVar4 = local_1d0;
  if (local_1d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1d0 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_1d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 1) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return 1;
}


