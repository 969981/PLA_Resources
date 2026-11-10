/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bee320; name: FUN_01bee320
 */


void FUN_01bee320(long param_1)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *local_b0;
  ulong local_a8;
  ulong *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  ulong *local_80;
  ulong *puStack_78;
  
  FUN_01a4fa84(&local_a0);
  FUN_01a4ff90(&local_b0,&local_a0);
  puVar6 = local_a0;
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
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_a8 = *puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_a8);
    }
  }
  if (local_b0 != (ulong *)0x0) {
    if (*(char *)(param_1 + 0xc60) != '\0') {
      *(undefined1 *)(param_1 + 0xc70) = 0;
      local_a8 = local_a8 & 0xffffffffffffff00;
      if (local_b0[0x52] == 0) {
        local_a0 = (ulong *)&LAB_028ae508;
        local_98 = FUN_028ae550;
        local_90 = &LAB_028ae554;
        puStack_88 = &LAB_028ae560;
        local_80 = &local_a8;
        FUN_028aafe0(local_b0,local_b0 + 0x23,param_1 + 0xc60,&local_a0);
        pcVar5 = local_98;
      }
      else {
        puStack_78 = &local_a8;
        local_80 = local_b0;
        local_a0 = (ulong *)&LAB_028ae354;
        local_98 = FUN_028ae4ec;
        local_90 = &LAB_028ae4f0;
        puStack_88 = &LAB_028ae4fc;
        FUN_028aafe0(local_b0,local_b0 + 0x23,param_1 + 0xc60,&local_a0);
        pcVar5 = local_98;
      }
      local_98 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        puStack_88 = (undefined1 *)0x0;
        local_90 = (undefined1 *)0x0;
        local_a0 = (ulong *)0x0;
        local_98 = (code *)0x0;
        (*pcVar5)(&local_80);
      }
      FUN_01a4f4d4(param_1,param_1 + 0xfc8,0);
      if (local_b0 == (ulong *)0x0) {
        return;
      }
    }
    uVar8 = local_b0[0xb];
    piVar2 = (int *)(uVar8 + 0xc);
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
      *(undefined8 *)(uVar8 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  return;
}


