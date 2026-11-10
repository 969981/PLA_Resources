/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4a484; name: FUN_02a4a484
 */


void FUN_02a4a484(long param_1,long *param_2,long param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long *local_70;
  undefined8 uStack_68;
  long *local_60 [2];
  long local_48;
  
  FUN_02a49d9c();
  plVar5 = (long *)(**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*plVar5 + 0x10))(local_60);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_0087f944(&local_70,local_60);
  plVar5 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar7 = local_60[0] + 1;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_48 = *plVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_48);
    }
  }
  lVar8 = param_1 + 0x268;
  FUN_0087fcf0(lVar8,&local_70);
  plVar5 = local_70;
  if (local_70 != (long *)0x0) {
    plVar7 = local_70 + 1;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_60[0] = (long *)*plVar5;
      FUN_02a44274(lVar9 + 0xd8,local_60);
    }
  }
  (**(code **)(*param_2 + 0x20))(local_60,param_2);
  FUN_00880560(param_1 + 0x2a8,local_60);
  plVar5 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar7 = local_60[0] + 1;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_70 = (long *)*plVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_70);
    }
  }
  *(long **)(param_1 + 0x2b8) = param_2;
  (**(code **)(*param_4 + 0x10))(local_60,param_4);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_0087f944(&local_70,local_60);
  plVar5 = local_60[0];
  if (local_60[0] != (long *)0x0) {
    plVar7 = local_60[0] + 1;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *plVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  FUN_0087fcf0(param_1 + 0x278,&local_70);
  plVar5 = local_70;
  if (local_70 != (long *)0x0) {
    plVar7 = local_70 + 1;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_60[0] = (long *)*plVar5;
      FUN_02a44274(lVar9 + 0xd8,local_60);
    }
  }
  pcVar10 = *(char **)(param_3 + 8);
  if (*pcVar10 == '\0') {
    plVar5 = (long *)FUN_00938550();
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar6;
    FUN_02a47cd8(local_60,uVar6,pcVar10);
    plVar5 = local_60[0];
  }
  if (plVar5 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
    lVar9 = *(long *)PTR_PTR_04379d00;
    lVar12 = 0;
  }
  else {
    lVar11 = plVar5[0xb];
    lVar9 = plVar5[0xc];
    lVar12 = plVar5[0xd];
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar7 = *(long **)(param_1 + 0x2e8);
  *(long *)(param_1 + 0x2d0) = lVar11;
  *(long *)(param_1 + 0x2d8) = lVar9;
  *(long *)(param_1 + 0x2e0) = lVar12;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long **)(param_1 + 0x2e8) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  plVar5 = (long *)FUN_01a74238(lVar8);
  if (plVar5 != param_4) {
    lVar8 = FUN_01a74238(lVar8);
    if (param_4[99] == 0) {
      local_60[0] = (long *)0x0;
    }
    else {
      FUN_00da9c7c(local_60);
    }
    FUN_02a5ca68(local_60[0],(int)param_4[0x65],*(undefined4 *)(lVar8 + 0x328));
    if (local_60[0] != (long *)0x0) {
      lVar8 = local_60[0][0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_60[0] + 0x20))();
      }
    }
  }
  return;
}


