/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d9c27c; name: FUN_01d9c27c
 */


void FUN_01d9c27c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_48;
  
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_008802f0(&local_68,*(long *)(param_1 + 0x1c0) + 0x58);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_01da42ac(&local_b8,&local_68);
  puVar7 = local_68;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_48 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  FUN_01adf064(&local_98,&local_b8);
  puVar7 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b8 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_b8[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_01a02dbc(&local_68,*(long *)(param_1 + 400) + 0x460);
  FUN_01784c54(&local_a8,&local_68);
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_b8 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_b8);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))(&local_68);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  do {
    uVar12 = local_60;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_60,0x10);
    if (bVar3) {
      local_60 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  FUN_02a44e0c(&local_58,uVar9,uVar12);
  puVar7 = local_68;
  local_68 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar7[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_48 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  puVar7 = local_b8;
  local_b8 = (undefined8 *)0x0;
  if (local_58 == (undefined8 *)0x0) {
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        puVar7[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_48 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    uVar12 = 0;
  }
  else {
    puVar11 = local_58;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar7[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_48 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
      puVar11 = local_58;
    }
    local_58 = (undefined8 *)0x0;
    local_b8 = puVar11;
  }
  puVar7 = local_58;
  local_b0 = uVar12;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_48 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_48 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  do {
    uVar12 = local_b0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
    if (bVar3) {
      local_b0 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar9 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar6 = uVar9;
  FUN_02a44e0c(&local_48,uVar9,uVar12);
  puVar7 = local_b8;
  local_b8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar7[2] = 0;
      if ((*puVar4 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar8 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar7 = local_78;
  local_78 = (undefined8 *)0x0;
  if (local_48 == (undefined8 *)0x0) {
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        puVar7[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_68 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
    uVar12 = 0;
  }
  else {
    puVar11 = local_48;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar7[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar8 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_68 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
      puVar11 = local_48;
    }
    local_48 = (undefined8 *)0x0;
    local_78 = puVar11;
  }
  puVar7 = local_48;
  local_70 = uVar12;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_48[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar7 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b8 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_b8[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  lVar10 = *(long *)(param_1 + 0x1b0);
  FUN_01a02dbc(lVar10 + 0x3e0,&local_a8);
  FUN_00ac3fa4(lVar10 + 0x3f0,&local_98);
  FUN_01a03034(lVar10 + 0x400,&local_88);
  FUN_01a032ac(lVar10 + 0x410,&local_78);
  puVar7 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_78[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar7 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_88[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar7 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_98 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_98[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  puVar7 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a8 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_a8[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      local_68 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  return;
}


