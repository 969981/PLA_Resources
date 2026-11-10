/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6ce1c; name: FUN_01b6ce1c
 */


void FUN_01b6ce1c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01b6dd80(&local_b0);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = (undefined1 *)0x0;
  puStack_88 = (undefined1 *)0x0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (code *)0x0;
  FUN_01b6da58(&local_80,&local_b0);
  local_a0 = &LAB_01b6d18c;
  local_98 = FUN_01b6d998;
  local_90 = &LAB_01b6dd58;
  puStack_88 = &LAB_01b6dd6c;
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_00d9361c(param_1 + 0x18,*(ulong *)(param_1 + 8),&local_a0);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x80;
    pcVar5 = local_98;
  }
  else {
    FUN_01b6cf98(param_1,&local_a0);
    pcVar5 = local_98;
  }
  if (pcVar5 == (code *)0x0) {
    local_98 = (code *)0x0;
    puVar4 = local_b0;
  }
  else {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar5)(&local_80);
    puVar4 = local_b0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
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
      puVar4[2] = 0;
      local_b0 = puVar4;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_a0 = (undefined1 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_a0);
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


