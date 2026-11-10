/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4aa38; name: FUN_02a4aa38
 */


void FUN_02a4aa38(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60 [2];
  long local_48;
  
  FUN_02a49d9c();
  plVar7 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*plVar7 + 0x10))(local_60);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_0087f944(&local_70,local_60);
  plVar7 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar8 = local_60[0] + 1;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *plVar7;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  lVar9 = param_1 + 0x268;
  FUN_0087fcf0(lVar9,&local_70);
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
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
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_60[0] = (long *)*puVar5;
      FUN_02a44274(lVar10 + 0xd8,local_60);
    }
  }
  (**(code **)(*param_2 + 0x20))(local_60,param_2);
  FUN_00880560(param_1 + 0x2a8,local_60);
  plVar7 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar8 = local_60[0] + 1;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_70 = (undefined8 *)*plVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_70);
    }
  }
  *(long **)(param_1 + 0x2b8) = param_2;
  (**(code **)(*param_3 + 0x10))(local_60,param_3);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_0087f944(&local_70,local_60);
  plVar7 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar8 = local_60[0] + 1;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *plVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  FUN_0087fcf0(param_1 + 0x278,&local_70);
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
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
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_60[0] = (long *)*puVar5;
      FUN_02a44274(lVar10 + 0xd8,local_60);
    }
  }
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar6 != 0))
  {
    local_60[0] = (long *)FUN_00938550();
    puVar4 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,local_60);
    FUN_00100250(PTR_LAB_0437a8d8,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  plVar7 = *(long **)PTR_DAT_0437a7d0;
  if (plVar7 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar10 = plVar7[0xb];
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xc];
      goto joined_r0x02a4ad0c;
    }
  }
  lVar11 = *(long *)PTR_PTR_04379d00;
joined_r0x02a4ad0c:
  if (plVar7 == (long *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = plVar7[0xd];
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = *(long **)(param_1 + 0x2e8);
  *(long *)(param_1 + 0x2d0) = lVar10;
  *(long *)(param_1 + 0x2d8) = lVar11;
  *(long *)(param_1 + 0x2e0) = lVar12;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(long **)(param_1 + 0x2e8) = plVar7;
  plVar7 = (long *)FUN_01a74238(lVar9);
  if (plVar7 != param_3) {
    lVar9 = FUN_01a74238(lVar9);
    if (param_3[99] == 0) {
      local_60[0] = (long *)0x0;
    }
    else {
      FUN_00da9c7c(local_60);
    }
    FUN_02a5ca68(local_60[0],(int)param_3[0x65],*(undefined4 *)(lVar9 + 0x328));
    if (local_60[0] != (long *)0x0) {
      lVar9 = local_60[0][0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_60[0] + 0x20))();
      }
    }
  }
  return;
}


