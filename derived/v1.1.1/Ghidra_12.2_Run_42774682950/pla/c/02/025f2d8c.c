/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025f2d8c; name: FUN_025f2d8c
 */


void FUN_025f2d8c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *local_48;
  long *local_40;
  undefined8 uStack_38;
  long *local_30;
  long *local_28;
  long local_18;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return;
  }
  FUN_00cfac20(&local_28);
  if (local_28 == (long *)0x0) {
    return;
  }
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_00ac3fa4(&local_40,local_28 + 0x49);
  if (local_40 == (long *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_30);
    plVar5 = local_40;
    if (local_40 != (long *)0x0) {
      plVar2 = local_40 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_18 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_18);
      }
    }
  }
  local_40 = (long *)0x0;
  uStack_38 = 0;
  FUN_00cf9db0(&local_40,local_28 + 0xf1);
  if (local_40 == (long *)0x0) {
    local_48 = (long *)0x0;
LAB_025f2e0c:
    if (local_48 == (long *)0x0) goto LAB_025f2f84;
LAB_025f2e14:
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_00959eac(&local_48);
    plVar5 = local_40;
    if (local_40 == (long *)0x0) goto LAB_025f2e0c;
    plVar2 = local_40 + 1;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != 0) goto LAB_025f2e0c;
    local_40[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar7 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar7;
    local_18 = *plVar5;
    FUN_02a44274(lVar7 + 0xd8,&local_18);
    if (local_48 != (long *)0x0) goto LAB_025f2e14;
LAB_025f2f84:
    if (local_30 == (long *)0x0) goto joined_r0x025f2e34;
    FUN_01a83770(local_30,param_1 + 0x220,param_1 + 0x230);
    FUN_01a8ac20(local_30);
    FUN_01b1fd98(local_30);
    FUN_009c69bc(&local_40,local_30);
    (**(code **)(*local_40 + 0x40))();
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (*(int *)(param_1 + 0x290) == 1) {
      (**(code **)(*local_30 + 0x220))(local_30,0);
    }
    local_40 = (long *)0x0;
    uStack_38 = 0;
    FUN_01a2bf84(&local_40,local_30 + 0xb9);
    FUN_009c685c(&local_48,&local_40);
    plVar5 = local_40;
    if (local_40 != (long *)0x0) {
      plVar2 = local_40 + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_18 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_18);
      }
    }
    if ((local_48 != (long *)0x0) &&
       ((**(code **)(*local_48 + 0x330))(local_48,1), local_48 != (long *)0x0)) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    FUN_01a883dc(&local_40,local_30);
    if (local_40 == (long *)0x0) {
      local_48 = (long *)0x0;
    }
    else {
      FUN_01aa505c(&local_48);
      plVar5 = local_40;
      if (local_40 != (long *)0x0) {
        plVar2 = local_40 + 1;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_18 = *plVar5;
          FUN_02a44274(lVar7 + 0xd8,&local_18);
        }
      }
    }
    if ((local_48 == (long *)0x0) || ((**(code **)(*local_48 + 0xf8))(), local_48 == (long *)0x0))
    goto joined_r0x025f2e34;
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar6 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_48 + 0x20))();
  }
joined_r0x025f2e34:
  if (local_30 != (long *)0x0) {
    lVar7 = local_30[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


