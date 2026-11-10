/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4ecf0; name: FUN_00d4ecf0
 */


void FUN_00d4ecf0(long param_1)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 local_2a0;
  code *local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
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
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
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
  undefined8 local_120 [3];
  long *local_108;
  undefined8 *local_100 [2];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar12 = *(undefined8 *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x4e8);
  uVar13 = 0;
  lVar2 = param_1 + 0x5f8;
  do {
    FUN_00d579e8(local_120,0,uVar13 & 0xffffffff);
    FUN_00d62910(local_100,*(undefined8 *)(param_1 + 0x2c8),lVar2,local_120);
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    local_1a0 = 0;
    local_198 = (code *)0x0;
    local_190 = 0;
    uStack_188 = 0;
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
    FUN_0284d5a8(lVar11 + uVar13 * 0xc0,uVar12,local_100,0,&local_1a0);
    pcVar6 = local_198;
    if (local_198 == (code *)0x0) {
      local_198 = (code *)0x0;
      pcVar6 = local_e8;
    }
    else {
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      local_198 = (code *)0x0;
      (*pcVar6)(&local_180);
      pcVar6 = local_e8;
    }
    local_e8 = pcVar6;
    if (pcVar6 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(auStack_d0);
    }
    puVar7 = local_100[0];
    if (local_100[0] != (undefined8 *)0x0) {
      piVar3 = (int *)(local_100[0] + 1);
      do {
        iVar8 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_100[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_120[0] = *puVar7;
        FUN_02a44274(lVar9 + 0xd8,local_120);
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x30);
  FUN_00d57b60(param_1,0,*(undefined1 *)(param_1 + 0x667));
  uVar13 = 0;
  do {
    FUN_00d579e8(local_120,1,uVar13 & 0xffffffff);
    FUN_00d62910(local_100,*(undefined8 *)(param_1 + 0x2c8),lVar2,local_120);
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    local_220 = 0;
    local_218 = (code *)0x0;
    local_210 = 0;
    uStack_208 = 0;
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
    FUN_0284d5a8(lVar11 + uVar13 * 0xc0 + 0x2400,uVar12,local_100,0,&local_220);
    pcVar6 = local_218;
    if (local_218 == (code *)0x0) {
      local_218 = (code *)0x0;
      pcVar6 = local_e8;
    }
    else {
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      local_218 = (code *)0x0;
      (*pcVar6)(&local_200);
      pcVar6 = local_e8;
    }
    local_e8 = pcVar6;
    if (pcVar6 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(auStack_d0);
    }
    puVar7 = local_100[0];
    if (local_100[0] != (undefined8 *)0x0) {
      piVar3 = (int *)(local_100[0] + 1);
      do {
        iVar8 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_100[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_120[0] = *puVar7;
        FUN_02a44274(lVar9 + 0xd8,local_120);
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x30);
  FUN_00d57b60(param_1,1,*(undefined1 *)(param_1 + 0x6c7));
  uVar13 = 0;
  do {
    FUN_00d579e8(local_120,2,uVar13 & 0xffffffff);
    FUN_00d62910(local_100,*(undefined8 *)(param_1 + 0x2c8),lVar2,local_120);
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    local_2a0 = 0;
    local_298 = (code *)0x0;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    FUN_0284d5a8(lVar11 + uVar13 * 0xc0 + 0x4800,uVar12,local_100,0,&local_2a0);
    pcVar6 = local_298;
    if (local_298 == (code *)0x0) {
      local_298 = (code *)0x0;
      pcVar6 = local_e8;
    }
    else {
      local_290 = 0;
      uStack_288 = 0;
      local_2a0 = 0;
      local_298 = (code *)0x0;
      (*pcVar6)(&local_280);
      pcVar6 = local_e8;
    }
    local_e8 = pcVar6;
    if (pcVar6 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar6)(auStack_d0);
    }
    puVar7 = local_100[0];
    if (local_100[0] != (undefined8 *)0x0) {
      piVar3 = (int *)(local_100[0] + 1);
      do {
        iVar8 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_100[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_120[0] = *puVar7;
        FUN_02a44274(lVar9 + 0xd8,local_120);
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x30);
  FUN_00d57b60(param_1,2,*(undefined1 *)(param_1 + 0x670));
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return;
}


