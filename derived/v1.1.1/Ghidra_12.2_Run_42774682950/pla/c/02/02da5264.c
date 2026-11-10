/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da5264; name: FUN_02da5264
 */


void FUN_02da5264(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  (**(code **)(*(long *)param_2[0x4029] + 0x40))();
  plVar23 = (long *)param_2[1];
  plVar27 = (long *)param_2[0x4029];
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar13 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_02da69a4;
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar23;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar15 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0xc0,8);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*plVar23 + 0xb8))(plVar23);
  }
  plVar1 = param_2 + 0x15;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_008802f0(&local_98,param_4);
  local_88 = *(undefined8 *)(param_4 + 0x10);
  (**(code **)(*param_2 + 0x10))(&local_b0,param_2);
  puVar9 = PTR_DAT_04379498;
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  do {
    uVar17 = local_a8;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_a8,0x10);
    if (bVar6) {
      local_a8 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  uVar16 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar16;
  FUN_02a44e0c(&local_68,uVar16,uVar17);
  puVar22 = local_b0;
  local_b0 = (undefined8 *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar22 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      puVar22[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  puVar22 = local_c8;
  local_c8 = (undefined8 *)0x0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 1) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_80 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_80);
      }
    }
    uVar17 = 0;
  }
  else {
    puVar26 = local_68;
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_80 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_80);
      }
      puVar26 = local_68;
    }
    local_68 = (undefined8 *)0x0;
    local_c8 = puVar26;
  }
  puVar22 = local_68;
  local_c0 = uVar17;
  if (local_68 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_68 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  puVar22 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_b0 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_b0[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  do {
    uVar17 = local_c0;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_c0,0x10);
    if (bVar6) {
      local_c0 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar10;
  *(undefined8 *)puVar11 = uVar16;
  FUN_02a44e0c(&local_68,uVar16,uVar17);
  puVar22 = local_c8;
  local_c8 = (undefined8 *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar22 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      puVar22[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  puVar22 = local_b0;
  local_b0 = (undefined8 *)0x0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 1) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_80 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_80);
      }
    }
    uVar17 = 0;
  }
  else {
    puVar26 = local_68;
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_80 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_80);
      }
      puVar26 = local_68;
    }
    local_68 = (undefined8 *)0x0;
    local_b0 = puVar26;
  }
  puVar22 = local_68;
  local_a8 = uVar17;
  if (local_68 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_68 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_68[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  puVar22 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_c8 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_c8[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  local_a0 = param_2 + 0xd;
  (**(code **)(*plVar27 + 0x10))(&local_c8,plVar27);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  do {
    uVar17 = local_c0;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_c0,0x10);
    if (bVar6) {
      local_c0 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar10;
  *(undefined8 *)puVar11 = uVar16;
  FUN_02a44e0c(&local_70,uVar16,uVar17);
  puVar22 = local_c8;
  local_c8 = (undefined8 *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar22 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      puVar22[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_68 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  puVar22 = local_80;
  local_80 = (undefined8 *)0x0;
  if (local_70 == (undefined8 *)0x0) {
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 1) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_68 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
    }
    uVar17 = 0;
  }
  else {
    puVar26 = local_70;
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_68 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
      puVar26 = local_70;
    }
    local_70 = (undefined8 *)0x0;
    local_80 = puVar26;
  }
  puVar22 = local_70;
  local_78 = uVar17;
  if (local_70 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_70 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_70[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_68 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  puVar22 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_c8 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_c8[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_68 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  do {
    uVar17 = local_78;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_78,0x10);
    if (bVar6) {
      local_78 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar10;
  *(undefined8 *)puVar11 = uVar16;
  FUN_02a44e0c(&local_70,uVar16,uVar17);
  puVar22 = local_80;
  local_80 = (undefined8 *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar22 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      puVar22[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_68 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  puVar22 = local_c8;
  local_c8 = (undefined8 *)0x0;
  if (local_70 == (undefined8 *)0x0) {
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 1) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_68 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
    }
    uVar17 = 0;
  }
  else {
    puVar26 = local_70;
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar11 = lVar19;
        local_68 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar19 + 0xd8,&local_68);
      }
      puVar26 = local_70;
    }
    local_70 = (undefined8 *)0x0;
    local_c8 = puVar26;
  }
  puVar22 = local_70;
  local_c0 = uVar17;
  if (local_70 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_70 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_70[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_68 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  puVar22 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_80 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_80[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_68 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_68);
    }
  }
  local_b8 = plVar27 + 0xd;
  FUN_02da3024(plVar15,1,param_3,&local_98,&local_b0,&local_c8);
  puVar22 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_c8 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_c8[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  puVar22 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_b0 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_b0[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  puVar22 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_98 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_98[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)puVar10;
      *(long *)puVar11 = lVar19;
      local_80 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar19 + 0xd8,&local_80);
    }
  }
  plVar15[1] = (long)plVar23;
  plVar15[2] = (long)plVar15;
  plVar15[3] = 0xc0;
  plVar15[4] = 8;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  *param_1 = (long)plVar15;
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar14 = plVar15[0xb];
  if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar14 + 0x10) == 0) {
    uVar17 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
    *(undefined8 *)(lVar14 + 0x10) = uVar17;
  }
  piVar2 = (int *)(lVar14 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = *piVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  (**(code **)(*plVar15 + 0x10))(&local_98,plVar15);
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  do {
    uVar17 = local_90;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_90,0x10);
    if (bVar6) {
      local_90 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar16 = *(undefined8 *)puVar10;
  *(undefined8 *)puVar11 = uVar16;
  FUN_02a44e0c(&local_80,uVar16,uVar17);
  puVar22 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar22 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      puVar22[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar10;
      *(long *)puVar11 = lVar14;
      local_c8 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar14 + 0xd8,&local_c8);
    }
  }
  puVar22 = local_b0;
  local_b0 = (undefined8 *)0x0;
  if (local_80 == (undefined8 *)0x0) {
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 1) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar10;
        *(long *)puVar11 = lVar14;
        local_c8 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar14 + 0xd8,&local_c8);
      }
    }
    uVar17 = 0;
  }
  else {
    puVar26 = local_80;
    if (puVar22 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar22 + 1);
      do {
        iVar13 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        puVar22[2] = 0;
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar10;
        *(long *)puVar11 = lVar14;
        local_c8 = (undefined8 *)*puVar22;
        FUN_02a44274(lVar14 + 0xd8,&local_c8);
      }
      puVar26 = local_80;
    }
    local_80 = (undefined8 *)0x0;
    local_b0 = puVar26;
  }
  puVar22 = local_80;
  local_a8 = uVar17;
  if (local_80 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_80 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_80[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar10;
      *(long *)puVar11 = lVar14;
      local_c8 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar14 + 0xd8,&local_c8);
    }
  }
  puVar22 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_98 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      local_98[2] = 0;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar10;
      *(long *)puVar11 = lVar14;
      local_c8 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar14 + 0xd8,&local_c8);
    }
  }
  uVar18 = param_2[0x1a];
  uVar4 = param_2[0x1b];
  if (uVar18 < uVar4) {
    FUN_02da7160(plVar1,param_2[0x19] + uVar18 * 0x10,&local_b0);
    param_2[0x1a] = param_2[0x1a] + 1;
    puVar22 = local_b0;
    goto joined_r0x02da60f0;
  }
  uVar21 = param_2[0x16];
  if (uVar21 - uVar4 < (uVar18 - uVar4) + 1) {
LAB_02da69a4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = uVar4 << 3;
  if (4 < uVar4 >> 0x3d) {
    uVar3 = 0xffffffffffffffff;
  }
  if (uVar4 >> 0x3d == 0) {
    uVar3 = (uVar4 << 3) / 5;
  }
  uVar4 = uVar21;
  if (uVar3 <= uVar21) {
    uVar4 = uVar3;
  }
  if (uVar4 < uVar18 + 1) {
    uVar4 = uVar18 + 1;
  }
  if (uVar21 < uVar4) goto LAB_02da69a4;
  puVar22 = (undefined8 *)(param_2[0x19] + uVar18 * 0x10);
  lVar14 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar4 << 4,8);
  if (lVar14 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
  puVar26 = (undefined8 *)param_2[0x19];
  lVar19 = lVar14;
  if ((puVar26 != puVar22) && (puVar26 != (undefined8 *)0x0)) {
    puVar24 = puVar26;
    do {
      FUN_02da7160(plVar1,lVar19,puVar24);
      puVar24 = puVar24 + 2;
      lVar19 = lVar19 + 0x10;
    } while (puVar22 != puVar24);
  }
  FUN_02da7160(plVar1,lVar19,&local_b0);
  lVar19 = lVar19 + 0x10;
  if (puVar26 != (undefined8 *)0x0) {
    lVar25 = param_2[0x1a];
    puVar8 = PTR_LAB_04379590;
    if (puVar26 + lVar25 * 2 != puVar22) {
      do {
        FUN_02da7160(plVar1,lVar19,puVar22);
        puVar22 = puVar22 + 2;
        lVar19 = lVar19 + 0x10;
      } while (puVar26 + lVar25 * 2 != puVar22);
      lVar25 = param_2[0x1a];
      puVar8 = PTR_LAB_04379590;
    }
    while (puVar12 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar8, lVar25 != 0) {
      puVar22 = (undefined8 *)*puVar26;
      lVar25 = lVar25 + -1;
      if (puVar22 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar22 + 1);
        do {
          iVar13 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 + -1 == 0) {
          puVar22[2] = 0;
          if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
            FUN_00100250(puVar12,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar9);
          }
          lVar20 = *(long *)puVar10;
          *(long *)puVar11 = lVar20;
          local_98 = (undefined8 *)*puVar22;
          FUN_02a44274(lVar20 + 0xd8,&local_98);
        }
      }
      puVar26 = puVar26 + 2;
      puVar8 = PTR_LAB_04379590;
      PTR_LAB_04379590 = puVar12;
    }
    lVar25 = param_2[0x1b];
    plVar23 = (long *)param_2[0x15];
    lVar20 = param_2[0x19];
    uVar18 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar18 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar23,lVar20,lVar25 << 4,8);
        goto LAB_02da60d8;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,lVar20,lVar25 << 4,8);
  }
LAB_02da60d8:
  param_2[0x19] = lVar14;
  param_2[0x1a] = lVar19 - lVar14 >> 4;
  param_2[0x1b] = uVar4;
  puVar22 = local_b0;
joined_r0x02da60f0:
  if (puVar22 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar22 + 1);
    do {
      iVar13 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      puVar22[2] = 0;
      local_b0 = puVar22;
      if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar10;
      *(long *)puVar11 = lVar14;
      local_98 = (undefined8 *)*puVar22;
      FUN_02a44274(lVar14 + 0xd8,&local_98);
    }
  }
  return;
}


