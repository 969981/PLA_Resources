/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01583ce0; name: FUN_01583ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01583ce0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined4 local_bc;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_74;
  undefined *local_70;
  long *local_68;
  undefined8 uStack_60;
  long *local_58 [2];
  long local_48;
  
  if (*(char *)(param_3 + 0x552) != '\0') {
    uVar8 = *(undefined8 *)(param_1 + 0x260);
    uVar9 = *(undefined8 *)(param_1 + 0xb0);
    (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
    local_68 = (long *)0x0;
    uStack_60 = 0;
    FUN_01587478(&local_68,local_58);
    plVar5 = local_58[0];
    if (local_58[0] != (long *)0x0) {
      plVar1 = local_58[0] + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_58[0][2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar6 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_48 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_48);
      }
    }
    local_70 = PTR_DAT_041ee390;
    local_74 = 0;
    FUN_0158520c(local_58,uVar8,uVar9,&local_68,&local_70,&local_74,param_2);
    FUN_01589580((long *)(param_1 + 0x270),local_58);
    plVar5 = local_58[0];
    if (local_58[0] != (long *)0x0) {
      plVar1 = local_58[0] + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_58[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_48 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_48);
      }
    }
    plVar5 = local_68;
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_48 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_48);
      }
    }
    if (*(long *)(param_1 + 0x270) == 0) {
      local_58[0] = (long *)0x0;
      _DAT_00000088 = param_1;
    }
    else {
      FUN_01589880(local_58);
      local_58[0][0x11] = param_1;
      if (local_58[0] != (long *)0x0) {
        lVar7 = local_58[0][0xb];
        piVar2 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_58[0] + 0x20))();
        }
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_01587478(&local_88,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar6 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  local_74 = 1;
  FUN_0158520c(local_58,uVar8,uVar9,&local_88,&local_70,&local_74,param_2);
  FUN_01589580((long *)(param_1 + 0x280),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_88;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x280) == 0) {
    local_58[0] = (long *)0x0;
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  local_74 = 2;
  if (*(char *)(param_3 + 0x550) != '\0') {
    local_74 = 4;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_01587478(&local_98,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  FUN_015857ac(local_58,uVar8,uVar9,&local_98,&local_70,&local_74,param_2);
  FUN_01589580((long *)(param_1 + 0x290),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_98;
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x290) == 0) {
    local_58[0] = (long *)0x0;
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  local_74 = 5;
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_a8 = (long *)0x0;
  uStack_a0 = 0;
  FUN_01587478(&local_a8,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  FUN_015857ac(local_58,uVar8,uVar9,&local_a8,&local_70,&local_74,param_2);
  FUN_01589580((long *)(param_1 + 0x2a0),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar1 = local_a8 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x2a0) == 0) {
    local_58[0] = (long *)0x0;
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_01587478(&local_b8,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  local_bc = 1;
  FUN_0158520c(local_58,uVar8,uVar9,&local_b8,&local_70,&local_bc,param_2);
  FUN_01589580((long *)(param_1 + 0x2b0),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_b8;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    local_58[0] = (long *)0x0;
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_d0 = (long *)0x0;
  uStack_c8 = 0;
  FUN_01587478(&local_d0,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  local_bc = 1;
  FUN_0158520c(local_58,uVar8,uVar9,&local_d0,&local_70,&local_bc,param_2);
  FUN_01589580((long *)(param_1 + 0x2c0),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_d0;
  if (local_d0 != (long *)0x0) {
    plVar1 = local_d0 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x2c0) == 0) {
    local_58[0] = (long *)0x0;
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_e0 = (long *)0x0;
  uStack_d8 = 0;
  FUN_01587478(&local_e0,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  local_bc = 1;
  FUN_0158520c(local_58,uVar8,uVar9,&local_e0,&local_70,&local_bc,param_2);
  FUN_01589580((long *)(param_1 + 0x2d0),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_e0;
  if (local_e0 != (long *)0x0) {
    plVar1 = local_e0 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x2d0) == 0) {
    local_58[0] = (long *)0x0;
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  (**(code **)(**(long **)(param_1 + 0x268) + 0x10))(local_58);
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  FUN_01587478(&local_f0,local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  local_70 = PTR_DAT_041ee390;
  local_bc = 1;
  FUN_0158520c(local_58,uVar8,uVar9,&local_f0,&local_70,&local_bc,param_2);
  FUN_01589580((long *)(param_1 + 0x2e0),local_58);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar1 = local_58[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  plVar5 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_48);
    }
  }
  if (*(long *)(param_1 + 0x2e0) == 0) {
    _DAT_00000088 = param_1;
  }
  else {
    FUN_01589880(local_58);
    local_58[0][0x11] = param_1;
    if (local_58[0] != (long *)0x0) {
      lVar7 = local_58[0][0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_58[0] + 0x20))();
      }
    }
  }
  return;
}


