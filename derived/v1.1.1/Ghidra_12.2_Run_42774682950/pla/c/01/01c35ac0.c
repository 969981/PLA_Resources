/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c35ac0; name: FUN_01c35ac0
 */


void FUN_01c35ac0(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68 [2];
  long *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  
  FUN_01838814(local_68,*param_2);
  if (local_68[0] != (undefined8 *)0x0) {
    FUN_01c38114(&local_58);
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      if (param_1[0x4e] != 0) {
        FUN_01c363fc(local_58,param_1[0x4e] + 0x68);
      }
      lVar12 = plVar9[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  FUN_018389b0(local_78,*param_2);
  if (local_78[0] != (undefined8 *)0x0) {
    FUN_01c38114(&local_58);
    if (local_58 != (long *)0x0) {
      if (param_1[0x4f] != 0) {
        FUN_01c363fc(local_58,param_1[0x4f] + 0x68);
      }
      lVar12 = local_58[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))(local_58);
      }
    }
  }
  if ((int)param_1[0x4d] == 2) {
    *(undefined1 *)(*param_2 + 0x366) = 1;
  }
  local_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_008802f0(&local_58,*param_2 + 0x58);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_00b5f91c(&local_88,&local_58);
  plVar9 = local_58;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_58[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_48 = (undefined8 *)*plVar9;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  FUN_00b5fc1c(param_1 + 0x47,&local_88);
  puVar8 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_88 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_88[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_58 = (long *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  lVar12 = *param_2;
  (**(code **)(*param_1 + 0x10))(&local_58,param_1);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_01c36d88(&local_98,&local_58);
  plVar9 = local_58;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_58[2] = 0;
      if ((*puVar5 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar10 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_88 = (undefined8 *)*plVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_88);
    }
  }
  FUN_0183a050(lVar12,&local_98);
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_98 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_98[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_58 = (long *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  lVar12 = *param_2;
  (**(code **)(*param_1 + 0x10))(&local_58,param_1);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_01c36d88(&local_88,&local_58);
  plVar9 = local_58;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_58[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_48 = (undefined8 *)*plVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_48);
    }
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  do {
    uVar15 = local_80;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_80,0x10);
    if (bVar4) {
      local_80 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar11;
  FUN_02a44e0c(&local_48,uVar11,uVar15);
  puVar8 = local_88;
  local_88 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar8 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      puVar8[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_58 = (long *)*puVar8;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  puVar8 = local_a8;
  local_a8 = (undefined8 *)0x0;
  if (local_48 == (undefined8 *)0x0) {
    if (puVar8 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar8 + 1);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 1) {
        puVar8[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_58 = (long *)*puVar8;
        FUN_02a44274(lVar14 + 0xd8,&local_58);
      }
    }
    uVar15 = 0;
  }
  else {
    puVar13 = local_48;
    if (puVar8 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar8 + 1);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        puVar8[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_58 = (long *)*puVar8;
        FUN_02a44274(lVar14 + 0xd8,&local_58);
      }
      puVar13 = local_48;
    }
    local_48 = (undefined8 *)0x0;
    local_a8 = puVar13;
  }
  puVar8 = local_48;
  local_a0 = uVar15;
  if (local_48 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_48 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_48[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_58 = (long *)*puVar8;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  FUN_0183a8e4(lVar12,&local_a8);
  puVar8 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_a8 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_a8[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_58 = (long *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  puVar8 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_88 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_88[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_58 = (long *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  if (local_78[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_78[0] + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_78[0][2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_58 = (long *)*local_78[0];
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  if (local_68[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_68[0] + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_68[0][2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar6;
      *(long *)puVar7 = lVar12;
      local_58 = (long *)*local_68[0];
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  return;
}


