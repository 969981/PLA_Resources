/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6fd3c; name: FUN_00d6fd3c
 */


void FUN_00d6fd3c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
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
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [104];
  undefined8 local_38;
  
  FUN_00d71020(&local_d0,*(undefined8 *)(param_1 + 8));
  puVar7 = local_d0;
  local_d0 = (undefined8 *)0x0;
  lVar6 = *(long *)(param_1 + 0x778);
  *(undefined8 **)(param_1 + 0x778) = puVar7;
  if (lVar6 == 0) {
    *(code **)(param_1 + 0x790) = local_b8;
  }
  else {
    FUN_00d71784(param_1 + 0x780);
    *(code **)(param_1 + 0x790) = local_b8;
    puVar7 = *(undefined8 **)(param_1 + 0x778);
  }
  *(undefined8 *)(param_1 + 0x788) = local_c0;
  *(undefined8 *)(param_1 + 0x780) = local_c8;
  uVar8 = *(undefined8 *)(param_1 + 8);
  local_f0 = 0x76def91c81425584;
  pcStack_e8 = "work_tips_00";
  local_e0 = 0xc;
  local_d8 = (long *)0x0;
  local_110 = 0xb07dd24ed0b79a0f;
  pcStack_108 = "pane_P_loader_tipsimage_00";
  local_100 = 0x1a;
  local_f8 = (long *)0x0;
  FUN_00d62910(&local_d0,*(undefined8 *)(param_1 + 0x2c8),&local_f0,&local_110);
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  local_188 = (code *)0x0;
  FUN_0284d5a8(puVar7,uVar8,&local_d0,0,&local_190);
  pcVar4 = local_188;
  if (local_188 == (code *)0x0) {
    local_188 = (code *)0x0;
    pcVar4 = local_b8;
  }
  else {
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar4)(&local_170);
    pcVar4 = local_b8;
  }
  local_b8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar4)(auStack_a0);
  }
  puVar7 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_38 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_38);
    }
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  return;
}


