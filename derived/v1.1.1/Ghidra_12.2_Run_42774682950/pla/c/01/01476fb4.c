/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01476fb4; name: FUN_01476fb4
 */


void FUN_01476fb4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
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
  long *local_160 [2];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [104];
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  char acStack_a8 [72];
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar10 = *(long *)(param_1 + 0x448);
  local_c8 = 0x3f1ab1bc650f90be;
  pcStack_c0 = "work_fieldinfo_result_00";
  lVar8 = 0;
  local_b8 = 0x18;
  local_b0 = (long *)0x0;
  do {
    snprintf(acStack_a8,0x40,"pane_L_result_plate_%02d_P_icon_poke_00",(int)lVar8);
    local_190 = acStack_a8;
    FUN_009313e8(&local_188,&local_190);
    plVar5 = local_188;
    if (local_188 == (long *)0x0) {
      local_180 = *(long *)PTR_DAT_04379c88;
LAB_01477258:
      lStack_178 = *(long *)PTR_PTR_04379d00;
      if (local_188 != (long *)0x0) goto LAB_014770bc;
LAB_01477268:
      local_170 = 0;
      local_168 = (long *)0x0;
    }
    else {
      local_180 = local_188[0xb];
      if (local_188 == (long *)0x0) goto LAB_01477258;
      lStack_178 = local_188[0xc];
      if (local_188 == (long *)0x0) goto LAB_01477268;
LAB_014770bc:
      local_170 = local_188[0xd];
      local_168 = (long *)0x0;
      (**(code **)(*local_188 + 0x18))(local_188);
      plVar1 = local_168;
      local_168 = plVar5;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
    }
    FUN_00d62910(local_160,*(undefined8 *)(param_1 + 0x2c8),&local_c8,&local_180);
    if (local_168 != (long *)0x0) {
      (**(code **)(*local_168 + 0x20))();
    }
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x20))();
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
    FUN_0284d5a8(lVar10 + lVar8 * 0xd0,uVar9,local_160,0,&local_210);
    pcVar4 = local_208;
    if (local_208 == (code *)0x0) {
      local_208 = (code *)0x0;
      pcVar4 = local_148;
    }
    else {
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = 0;
      local_208 = (code *)0x0;
      (*pcVar4)(&local_1f0);
      pcVar4 = local_148;
    }
    local_148 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar4)(auStack_130);
    }
    plVar5 = local_160[0];
    if (local_160[0] != (long *)0x0) {
      plVar1 = local_160[0] + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        local_160[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_180 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_180);
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 6) {
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      return;
    }
  } while( true );
}


