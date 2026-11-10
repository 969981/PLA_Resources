/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bedcb0; name: FUN_01bedcb0
 */


undefined4 FUN_01bedcb0(long param_1)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  long *local_a8;
  ulong *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  ulong *apuStack_80 [12];
  ulong local_18;
  
  FUN_01a4fa84(&local_a0);
  FUN_01a4ff90(&local_a8,&local_a0);
  puVar5 = local_a0;
  if (local_a0 != (ulong *)0x0) {
    puVar1 = local_a0 + 1;
    do {
      iVar7 = (int)*puVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(int *)puVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  if (local_a8 == (long *)0x0) {
    uVar9 = 1;
  }
  else {
    if (*(char *)(param_1 + 0xc28) == '\0') {
      uVar9 = 1;
    }
    else {
      local_18 = local_18 & 0xffffffff00000000;
      local_a0 = (ulong *)&LAB_028ae99c;
      local_98 = FUN_028ae9dc;
      local_90 = &LAB_028ae9e0;
      apuStack_80[0] = &local_18;
      local_88 = &LAB_028ae9ec;
      FUN_028aafe0(local_a8,local_a8 + 0x15,param_1 + 0xc28,&local_a0);
      pcVar6 = local_98;
      if (local_98 != (code *)0x0) {
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        local_a0 = (ulong *)0x0;
        local_98 = (code *)0x0;
        (*pcVar6)(apuStack_80);
      }
      uVar9 = (undefined4)local_18;
      if (local_a8 == (long *)0x0) {
        return (undefined4)local_18;
      }
    }
    lVar8 = local_a8[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  return uVar9;
}


