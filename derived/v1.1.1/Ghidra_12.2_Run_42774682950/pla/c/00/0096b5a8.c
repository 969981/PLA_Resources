/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096b5a8; name: FUN_0096b5a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096b5a8(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 *local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 *local_240;
  code *local_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [104];
  long *local_1b8;
  undefined1 *local_1b0 [4];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 auStack_180 [24];
  uint local_c0;
  undefined4 local_b8;
  int iStack_b4;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 auStack_80 [10];
  
  local_b8 = 0x2000000;
  iStack_b4 = param_2;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar7 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar7;
  plVar6 = *(long **)(lVar7 + 0xb0);
  if (plVar6 == (long *)0x0) {
    lVar7 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = plVar6[0x1c];
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_009346d8(&local_1b8,*(undefined8 *)(lVar7 + 0xd0),&local_b8);
  local_240 = &LAB_0096c000;
  local_238 = FUN_0096c024;
  local_230 = &LAB_0096c028;
  puStack_228 = &LAB_0096c02c;
  local_b0 = &LAB_0096c000;
  local_a8 = FUN_0096c024;
  local_a0 = &LAB_0096c028;
  local_98 = &LAB_0096c02c;
  FUN_009326d0(local_1b0,local_1b0 + local_c0,&local_b0);
  pcVar8 = local_a8;
  if (local_a8 == (code *)0x0) {
    pcVar8 = FUN_0096c024;
  }
  else {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar8)(&local_90);
    pcVar8 = local_238;
    if (local_238 == (code *)0x0) goto LAB_0096b6c4;
  }
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_240 = (undefined1 *)0x0;
  local_238 = (code *)0x0;
  (*pcVar8)(auStack_220);
LAB_0096b6c4:
  local_90 = 0;
  local_88 = 0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  if ((((local_c0 != 0) && (local_b0 = local_1b0[0], local_c0 != 1)) &&
      (local_a8 = (code *)local_1b0[1], local_c0 != 2)) &&
     (((local_a0 = local_1b0[2], local_c0 != 3 && (local_98 = local_1b0[3], local_c0 != 4)) &&
      ((local_90 = local_190, local_c0 != 5 && (local_88 = local_188, local_c0 != 6)))))) {
    lVar7 = (ulong)local_c0 * 8 + -0x30;
    puVar9 = auStack_180;
    puVar10 = auStack_80;
    do {
      lVar7 = lVar7 + -8;
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
  }
  if (param_2 == 0) {
    FUN_00931034(&local_1b8,*(undefined8 *)(param_1 + 0x58));
    local_260 = local_a0;
    uStack_258 = local_98;
    local_250 = local_90;
    uStack_248 = local_88;
    local_270 = local_b0;
    uStack_268 = local_a8;
    FUN_011dd7bc(local_1b8[0xd1],&local_270);
    if (local_1b8 == (long *)0x0) {
      return;
    }
    lVar7 = local_1b8[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_00931034(&local_1b8,*(undefined8 *)(param_1 + 0x58));
    local_290 = local_a0;
    uStack_288 = local_98;
    local_280 = local_90;
    uStack_278 = local_88;
    local_2a0 = local_b0;
    uStack_298 = local_a8;
    FUN_011dd7fc(local_1b8[0xd1],&local_2a0);
    if (local_1b8 == (long *)0x0) {
      return;
    }
    lVar7 = local_1b8[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar5 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_1b8 + 0x20))();
  }
  return;
}


