/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01da1e20; name: FUN_01da1e20
 */


void FUN_01da1e20(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_58;
  
  local_98 = 0;
  local_90 = (long *)0x0;
  local_a0 = (undefined8 *)0x0;
  (**(code **)(*(long *)*param_3 + 0x18))(&local_78);
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_009cc714(&local_88,&local_78);
  puVar4 = local_78;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_58 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  FUN_01da45c8(&local_a0,&local_88);
  plVar16 = local_88;
  if (local_88 != (long *)0x0) {
    plVar12 = local_88 + 1;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      local_88[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_78 = (undefined8 *)*plVar16;
      FUN_02a44274(lVar14 + 0xd8,&local_78);
    }
  }
  plVar16 = (long *)*param_4;
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01da295c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_90 != (long *)0x0) {
    lVar14 = local_90[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      lVar14 = *local_90;
      local_90 = plVar16;
      (**(code **)(lVar14 + 0x20))();
      plVar16 = local_90;
    }
  }
  local_90 = plVar16;
  lVar14 = *(long *)(param_1 + 0x68);
  plVar16 = *(long **)(lVar14 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar16;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x2d0,0x10);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_00b6291c(&local_78,&local_a0);
  local_68 = local_90;
  if (local_90 != (long *)0x0) {
    lVar17 = local_90[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01da295c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00d021ec(plVar12,&local_78);
  puVar4 = local_78;
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      puVar4 = local_78;
    }
  }
  local_78 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar4[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)puVar6;
      *(long *)puVar7 = lVar17;
      local_88 = (long *)*puVar4;
      FUN_02a44274(lVar17 + 0xd8,&local_88);
    }
  }
  plVar12[1] = (long)plVar16;
  plVar12[2] = (long)plVar12;
  plVar12[3] = 0x2d0;
  plVar12[4] = 0x10;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_01da295c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar16 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar16 = plVar12 + 9;
  }
  (**(code **)(*plVar16 + 0xb8))(plVar16,lVar14);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_009ad580(&local_78,lVar14 + 0x318);
  (**(code **)(*plVar16 + 0xc0))(plVar16,&local_78);
  puVar4 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar6;
      *(long *)puVar7 = lVar11;
      local_88 = (long *)*puVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_88);
    }
  }
  (**(code **)(*plVar16 + 200))(plVar16,*(undefined1 *)(lVar14 + 0x33b));
  (**(code **)(*plVar16 + 0x90))(plVar16);
  local_88 = plVar12;
  FUN_02a4dad4(lVar14 + 0xf0,&local_88);
  if (local_88 != (long *)0x0) {
    lVar14 = local_88[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  local_a8 = 0xc548ae28649ef3b8;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_008802f0(&local_78,plVar12 + 0xb);
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_00880560(&local_88,&local_78);
  puVar4 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_58 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_00b68a9c(&local_78,&local_88);
  plVar16 = local_88;
  if (local_88 != (long *)0x0) {
    plVar12 = local_88 + 1;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      local_88[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_58 = (undefined8 *)*plVar16;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  do {
    uVar10 = local_70;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&local_70,0x10);
    if (bVar3) {
      local_70 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar13 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar13;
  FUN_02a44e0c(&local_58,uVar13,uVar10);
  puVar4 = local_78;
  local_78 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar4[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_88 = (long *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_88);
    }
  }
  puVar4 = local_b8;
  local_b8 = (undefined8 *)0x0;
  if (local_58 == (undefined8 *)0x0) {
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 1) {
        puVar4[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_88 = (long *)*puVar4;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
    }
    uVar10 = 0;
  }
  else {
    puVar15 = local_58;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar4[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_88 = (long *)*puVar4;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
      puVar15 = local_58;
    }
    local_58 = (undefined8 *)0x0;
    local_b8 = puVar15;
  }
  puVar4 = local_58;
  local_b0 = uVar10;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_58[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_88 = (long *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_88);
    }
  }
  FUN_00ceead4(param_2,&local_a8,&local_b8);
  puVar4 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b8 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_b8[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_88 = (long *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_88);
    }
  }
  puVar4 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_78[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_88 = (long *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_88);
    }
  }
  puVar4 = local_a0;
  if (local_90 != (long *)0x0) {
    lVar14 = local_90[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
      puVar4 = local_a0;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar4[2] = 0;
      local_a0 = puVar4;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_78 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_78);
    }
  }
  return;
}


