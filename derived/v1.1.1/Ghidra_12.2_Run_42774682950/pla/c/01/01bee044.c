/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bee044; name: FUN_01bee044
 */


void FUN_01bee044(long param_1,undefined4 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *local_b8;
  long *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long *local_90;
  long *plStack_88;
  long local_28;
  
  FUN_01a4fa84(&local_b0);
  FUN_01a4ff90(&local_b8,&local_b0);
  plVar6 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar1 = local_b0 + 1;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *plVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  if (local_b8 != (long *)0x0) {
    if ((*(char *)(param_1 + 0xc60) != '\0') && (*(char *)(param_1 + 0xc68) != '\0')) {
      local_28 = CONCAT44(local_28._4_4_,param_2);
      if (local_b8[0x32] == 0) {
        local_b0 = (long *)&LAB_028ae0fc;
        local_a8 = FUN_028ae13c;
        local_a0 = &LAB_028ae140;
        puStack_98 = &LAB_028ae14c;
        local_90 = &local_28;
        FUN_028aafe0(local_b8,local_b8 + 0x15,param_1 + 0xc68,&local_b0);
        pcVar5 = local_a8;
      }
      else {
        plStack_88 = &local_28;
        local_90 = local_b8;
        local_b0 = (long *)&LAB_028adf5c;
        local_a8 = FUN_028ae0e0;
        local_a0 = &LAB_028ae0e4;
        puStack_98 = &LAB_028ae0f0;
        FUN_028aafe0(local_b8,local_b8 + 0x15,param_1 + 0xc68,&local_b0);
        pcVar5 = local_a8;
      }
      if (pcVar5 != (code *)0x0) {
        puStack_98 = (undefined1 *)0x0;
        local_a0 = (undefined1 *)0x0;
        local_b0 = (long *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar5)(&local_90);
      }
      *(undefined1 *)(param_1 + 0xc70) = 1;
      local_28 = CONCAT71(local_28._1_7_,1);
      if (local_b8[0x52] == 0) {
        local_b0 = (long *)&LAB_028ae508;
        local_a8 = FUN_028ae550;
        local_a0 = &LAB_028ae554;
        puStack_98 = &LAB_028ae560;
        local_90 = &local_28;
        FUN_028aafe0(local_b8,local_b8 + 0x23,param_1 + 0xc60,&local_b0);
        pcVar5 = local_a8;
      }
      else {
        plStack_88 = &local_28;
        local_90 = local_b8;
        local_b0 = (long *)&LAB_028ae354;
        local_a8 = FUN_028ae4ec;
        local_a0 = &LAB_028ae4f0;
        puStack_98 = &LAB_028ae4fc;
        FUN_028aafe0(local_b8,local_b8 + 0x23,param_1 + 0xc60,&local_b0);
        pcVar5 = local_a8;
      }
      local_a8 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        puStack_98 = (undefined1 *)0x0;
        local_a0 = (undefined1 *)0x0;
        local_b0 = (long *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar5)(&local_90);
      }
      uVar8 = FUN_01a5ad40(param_1);
      if ((uVar8 & 1) != 0) {
        FUN_01a4f4d4(param_1,param_1 + 0xfc8,1);
      }
    }
    if (local_b8 != (long *)0x0) {
      lVar9 = local_b8[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
  }
  return;
}


