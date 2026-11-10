/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096c130; name: FUN_0096c130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0096c130(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_1c0 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [96];
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379578), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar8 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar8;
  plVar7 = *(long **)(lVar8 + 0xb0);
  if (plVar7 == (long *)0x0) {
    lVar8 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = plVar7[0x1c];
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
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  uVar2 = *(undefined1 *)(*(long *)(lVar8 + 0x100) + 0x71);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_1c0[0] = 0;
  local_130 = 0;
  local_128 = (code *)0x0;
  local_120 = 0;
  uStack_118 = 0;
  local_198 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = (code *)0x0;
  local_1a0 = 0;
  FUN_0096c2c4(param_1,local_1c0);
  FUN_0096c558(param_1,local_1c0);
  FUN_0096d008(param_1,uVar2);
  FUN_0096d25c(param_1);
  pcVar5 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar5)(auStack_90);
  }
  pcVar5 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar5)(auStack_110);
  }
  pcVar5 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = 0;
    local_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar5)(auStack_190);
  }
  return;
}


