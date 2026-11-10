/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8105c; name: FUN_00d8105c
 */


void FUN_00d8105c(long param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 uStack_48;
  long local_38;
  
  FUN_009c69bc(&local_50,*param_2);
  lVar7 = FUN_00ab4364(local_50 + 0x1e,&local_60);
  if (local_50 != (long *)0x0) {
    lVar8 = local_50[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (lVar7 == 0) {
    FUN_009c69bc(&local_50,param_1);
    plVar2 = local_50;
    FUN_009c69bc(&local_60,*param_2);
    plVar3 = (long *)0x0;
    if (local_60 != (long *)0x0) {
      plVar3 = local_60 + 0x1d;
    }
    (**(code **)(*plVar2 + 0x48))(plVar2,plVar3);
    if (local_60 != (long *)0x0) {
      lVar7 = local_60[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    if (local_50 == (long *)0x0) goto LAB_00d81114;
    lVar7 = local_50[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    FUN_009c69bc(&local_50,param_1);
    (**(code **)(*local_50 + 0x50))(local_50,lVar7 + 0x1f8,param_3);
    if (local_50 == (long *)0x0) goto LAB_00d81114;
    lVar7 = local_50[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar6 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_50 + 0x20))();
  }
LAB_00d81114:
  FUN_009c69bc(&local_50,param_1);
  lVar7 = FUN_00d82b2c(local_50 + 0x1e,&local_60);
  if (local_50 != (long *)0x0) {
    lVar8 = local_50[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (lVar7 != 0) {
    *(byte *)(lVar7 + 0x2c8) = param_4 & 1;
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_008802f0(&local_50,lVar7 + 0x58);
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_00880560(&local_60,&local_50);
    plVar3 = local_50;
    if (local_50 != (long *)0x0) {
      plVar2 = local_50 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *plVar3;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_00d82144(&local_50,&local_60);
    plVar3 = local_60;
    if (local_60 != (long *)0x0) {
      plVar2 = local_60 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *plVar3;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    FUN_00d82444(param_1 + 0x270,&local_50);
    plVar3 = local_50;
    if (local_50 != (long *)0x0) {
      plVar2 = local_50 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_60 = (long *)*plVar3;
        FUN_02a44274(lVar7 + 0xd8,&local_60);
      }
    }
  }
  return;
}


