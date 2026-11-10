/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f869c; name: FUN_014f869c
 */


void FUN_014f869c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 *local_f0 [2];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  
  if (((DAT_043c74a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043c74a8), iVar6 != 0)) {
    DAT_043c7468 = 0x27075ae79d58e6a8;
    DAT_043c7470 = "pane_L_info_basedata_00_P_loader_icon_poke_00";
    DAT_043c7478 = 0x2d;
    DAT_043c7480 = 0;
    DAT_043c7488 = 0xe77b81d471842a9f;
    DAT_043c7490 = "pane_L_info_basedata_01_P_loader_icon_poke_00";
    DAT_043c7498 = 0x2d;
    DAT_043c74a0 = 0;
    FUN_00100250(&LAB_014f58a0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c74a8);
  }
  lVar9 = *(long *)(param_1 + 0x448);
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_110 = 0xa13d0e048c1283ef;
  pcStack_108 = "work_wazaremember_01";
  local_100 = 0x14;
  local_f8 = (long *)0x0;
  FUN_00d62910(local_f0,*(undefined8 *)(param_1 + 0x2c8),&local_110,&DAT_043c7468);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  local_190 = 0;
  local_188 = (code *)0x0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_0284d5a8(lVar9,uVar8,local_f0,0,&local_190);
  pcVar4 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar4)(&local_170);
  }
  pcVar4 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar4)(auStack_c0);
  }
  puVar5 = local_f0[0];
  if (local_f0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0[0] + 1);
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
      local_f0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_110 = *puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_110);
    }
  }
  local_110 = 0xa13d0e048c1283ef;
  pcStack_108 = "work_wazaremember_01";
  local_100 = 0x14;
  local_f8 = (long *)0x0;
  FUN_00d62910(local_f0,*(undefined8 *)(param_1 + 0x2c8),&local_110,&DAT_043c7488);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  local_190 = 0;
  local_188 = (code *)0x0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_0284d5a8(lVar9 + 0xd0,uVar8,local_f0,0,&local_190);
  pcVar4 = local_188;
  if (local_188 == (code *)0x0) {
    local_188 = (code *)0x0;
    pcVar4 = local_d8;
  }
  else {
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar4)(&local_170);
    pcVar4 = local_d8;
  }
  local_d8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar4)(auStack_c0);
  }
  if (local_f0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0[0] + 1);
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
      local_f0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_110 = *local_f0[0];
      FUN_02a44274(lVar9 + 0xd8,&local_110);
    }
  }
  return;
}


