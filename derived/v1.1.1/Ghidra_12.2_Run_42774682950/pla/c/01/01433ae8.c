/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01433ae8; name: FUN_01433ae8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01433ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long **pplVar11;
  long *plVar12;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  long local_48;
  
  if (*(char *)(param_1 + 0x4fa) != '\0') {
    return;
  }
  FUN_009ab200((long *)(param_1 + 0x4c8));
  if (*(long *)(param_1 + 0x4c8) == 0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_00b907c8(&local_60);
  }
  plVar6 = local_60;
  plVar12 = local_60 + 10;
  plVar8 = (long *)(**(code **)*plVar12)(plVar12);
  lVar9 = FUN_00b65f6c();
  while( true ) {
    if (plVar8 == (long *)0x0) goto LAB_01433d90;
    if (plVar8 == (long *)lVar9) break;
    plVar8 = (long *)*plVar8;
  }
  (**(code **)(*plVar6 + 0x18))(&local_60,plVar6);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00946790(&local_70,&local_60);
  plVar8 = local_60;
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 1;
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_48 = *plVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_48);
    }
  }
  FUN_00b6081c(param_1 + 0x4d8,&local_70);
  plVar8 = local_70;
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 1;
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
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_60 = (long *)*plVar8;
      FUN_02a44274(lVar9 + 0xd8,&local_60);
    }
  }
  plVar8 = (long *)(**(code **)*plVar12)(plVar12);
  if ((*PTR_DAT_04379e58 & 1) != 0) goto joined_r0x01433c70;
  iVar7 = __cxa_guard_acquire(PTR_DAT_04379e58);
  if (iVar7 == 0) goto joined_r0x01433c70;
  uVar10 = FUN_00b65f6c();
  *(undefined8 *)PTR_DAT_04379e60 = uVar10;
  __cxa_guard_release(PTR_DAT_04379e58);
  if (plVar8 == (long *)0x0) {
LAB_01433c8c:
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_01435a5c(&local_60,plVar6 + 0x88);
    if (local_60 == (long *)0x0) goto LAB_01433d90;
    if (*(int *)((long)local_60 + 0xc) != 0) {
      lVar9 = *(long *)(param_1 + 0x348);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_01435a5c(&local_80,&local_60);
      FUN_01435a5c(lVar9 + 0x198,&local_80);
      puVar5 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_80 + 1);
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
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_70 = (long *)*puVar5;
          FUN_02a44274(lVar9 + 0xd8,&local_70);
        }
      }
    }
    plVar8 = local_60;
    if (local_60 == (long *)0x0) goto LAB_01433d90;
    plVar12 = local_60 + 1;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_01433d90;
    local_60[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar9 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar9;
    local_70 = (long *)*plVar8;
    pplVar11 = &local_70;
  }
  else {
    while (plVar8 != (long *)PTR_DAT_04379e60) {
      plVar8 = (long *)*plVar8;
joined_r0x01433c70:
      if (plVar8 == (long *)0x0) goto LAB_01433c8c;
    }
    (**(code **)(*plVar6 + 0x18))(&local_60,plVar6);
    local_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_00b60b1c(&local_70,&local_60);
    plVar8 = local_60;
    if (local_60 != (long *)0x0) {
      plVar12 = local_60 + 1;
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_48 = *plVar8;
        FUN_02a44274(lVar9 + 0xd8,&local_48);
      }
    }
    FUN_00b60e1c(param_1 + 0x4e8,&local_70);
    plVar8 = local_70;
    if (local_70 == (long *)0x0) goto LAB_01433d90;
    plVar12 = local_70 + 1;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != 0) goto LAB_01433d90;
    local_70[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar9 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar9;
    local_60 = (long *)*plVar8;
    pplVar11 = &local_60;
  }
  FUN_02a44274(lVar9 + 0xd8,pplVar11);
LAB_01433d90:
  if (*(long *)(param_1 + 0x4c8) == 0) {
    local_60 = (long *)0x0;
    plVar8 = plRam00000000000005e8;
  }
  else {
    FUN_00b907c8(&local_60);
    plVar8 = (long *)local_60[0xbd];
  }
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
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
      (**(code **)(*local_60 + 0x20))();
    }
  }
  local_88 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_014337d4(param_1,param_3,param_4,&local_88);
  }
  else {
    plVar12 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_014337d4(param_1,param_3,param_4,&local_88);
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*(char *)(param_1 + 0x4fa) != '\x01') {
    *(undefined1 *)(param_1 + 0x4f9) = 0;
    if ((((*(long *)(param_1 + 0x4c8) != 0) && (*(int *)(*(long *)(param_1 + 0x4c8) + 0xc) != 0)) &&
        (*(long *)(param_1 + 0x4c8) != 0)) && (FUN_00b907c8(&local_60), local_60 != (long *)0x0)) {
      *(undefined1 *)((long)local_60 + 0x61a) = 1;
      lVar9 = local_60[0xb];
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
        (**(code **)(*local_60 + 0x20))();
      }
    }
    *(undefined1 *)(param_1 + 0x4fa) = 1;
  }
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


