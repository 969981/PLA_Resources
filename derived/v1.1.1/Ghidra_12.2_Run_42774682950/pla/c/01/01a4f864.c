/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4f864; name: FUN_01a4f864
 */


void FUN_01a4f864(float param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  float *pfVar8;
  long lVar9;
  long *local_b0;
  float local_a4;
  long *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long *local_80;
  long *plStack_78;
  long local_18;
  
  local_a4 = param_1;
  if (param_1 < *(float *)(param_2 + 0x3f8)) {
    pfVar8 = (float *)(param_2 + 0x3f8);
  }
  else {
    pfVar8 = (float *)(param_2 + 0x3fc);
    if (param_1 <= *(float *)(param_2 + 0x3fc)) {
      pfVar8 = &local_a4;
    }
  }
  *(float *)(param_2 + 0x3f0) = *pfVar8;
  FUN_01a4fa84(&local_a0,param_2);
  FUN_01a4ff90(&local_b0,&local_a0);
  plVar6 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 1;
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
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_18 = *plVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_18);
    }
  }
  if (local_b0 != (long *)0x0) {
    if (*(char *)(param_2 + 0x430) != '\0') {
      local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)(param_2 + 0x3f0));
      if (local_b0[0x42] == 0) {
        local_a0 = (long *)&LAB_028ae2f8;
        local_98 = FUN_028ae338;
        local_90 = &LAB_028ae33c;
        puStack_88 = &LAB_028ae348;
        local_80 = &local_18;
        FUN_028aafe0(local_b0,local_b0 + 0x1c,param_2 + 0x430,&local_a0);
        pcVar5 = local_98;
      }
      else {
        plStack_78 = &local_18;
        local_80 = local_b0;
        local_a0 = (long *)&LAB_028ae158;
        local_98 = FUN_028ae2dc;
        local_90 = &LAB_028ae2e0;
        puStack_88 = &LAB_028ae2ec;
        FUN_028aafe0(local_b0,local_b0 + 0x1c,param_2 + 0x430,&local_a0);
        pcVar5 = local_98;
      }
      local_98 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        puStack_88 = (undefined1 *)0x0;
        local_90 = (undefined1 *)0x0;
        local_a0 = (long *)0x0;
        local_98 = (code *)0x0;
        (*pcVar5)(&local_80);
      }
      if (local_b0 == (long *)0x0) {
        return;
      }
    }
    lVar9 = local_b0[0xb];
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
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  return;
}


