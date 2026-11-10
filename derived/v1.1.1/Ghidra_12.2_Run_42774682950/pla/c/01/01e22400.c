/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e22400; name: FUN_01e22400
 */


void FUN_01e22400(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04379528;
  puVar4 = PTR_DAT_04379520;
  plVar14 = (long *)*param_1;
  if (plVar14[0xd] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e2147c(plVar9,0,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0xd];
    plVar14[0xd] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0xe] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xf0,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e14d74(plVar9,1,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xf0;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0xe];
    plVar14[0xe] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0xf] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e206d0(plVar9,2,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0xf];
    plVar14[0xf] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x10] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xf0,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e1ae28(plVar9,3,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xf0;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x10];
    plVar14[0x10] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x11] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e1d828(plVar9,4,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x11];
    plVar14[0x11] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x12] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e1e1cc(plVar9,5,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x12];
    plVar14[0x12] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x13] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e27fd8(plVar9,6,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x13];
    plVar14[0x13] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x14] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e27a58(plVar9,7,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x14];
    plVar14[0x14] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x15] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e276b4(plVar9,8,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x15];
    plVar14[0x15] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x16] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01e267ac;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e2837c(plVar9,9,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x16];
    plVar14[0x16] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x17] == 0) {
    plVar15 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_01e26ab0(&local_70,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (((*puVar4 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_01e267ac:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_01e267b0(&local_60,&local_70);
    FUN_01e28720(plVar9,10,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
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
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    plVar9[1] = (long)plVar15;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e26794;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar7 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
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
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01e26794:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = (long *)plVar14[0x17];
    plVar14[0x17] = (long)plVar9;
    if ((plVar15 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar15[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((plVar9 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar9[0xb]), (uVar11 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar14 = (long *)*param_1;
  lVar12 = plVar14[0xd];
  if ((((((((char)plVar14[0x19] == '\0') || (lVar12 == 0)) || (plVar14[0xe] == 0)) ||
        ((plVar14[0xf] == 0 || (plVar14[0x10] == 0)))) ||
       ((plVar14[0x11] == 0 || ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) ||
      (plVar14[0x14] == 0)) ||
     (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) {
    FUN_01e26db0(lVar12,0,1);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e2400c;
LAB_01e2405c:
    FUN_01e26db0(lVar12,1,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24080;
LAB_01e240d0:
    FUN_01e26db0(plVar14[0xe],2,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e240f4;
LAB_01e24144:
    FUN_01e26db0(lVar12,3,3);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24168;
LAB_01e241b8:
    FUN_01e26db0(plVar14[0xe],3,3);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e241dc;
LAB_01e2422c:
    FUN_01e26db0(plVar14[0x10],4,0);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24250;
LAB_01e242a0:
    FUN_01e26db0(plVar14[0x10],5,5);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e242c4;
LAB_01e24314:
    FUN_01e26db0(plVar14[0x12],4,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e24338;
LAB_01e24388:
    FUN_01e26db0(lVar12,7,4);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e243ac;
LAB_01e243fc:
    FUN_01e26db0(plVar14[0x11],8,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e24420;
LAB_01e24470:
    FUN_01e26db0(lVar12,9,6);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24494;
LAB_01e244e4:
    FUN_01e26db0(plVar14[0xe],9,6);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24508;
LAB_01e24558:
    FUN_01e26db0(plVar14[0x13],0xe,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e2457c;
LAB_01e245cc:
    FUN_01e26db0(plVar14[0x13],0xf,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e245f0;
LAB_01e24640:
    FUN_01e26db0(lVar12,10,7);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24664;
LAB_01e246b4:
    FUN_01e26db0(plVar14[0xe],10,7);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e246d8;
LAB_01e24728:
    FUN_01e26db0(plVar14[0x14],0xe,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e2474c;
LAB_01e2479c:
    FUN_01e26db0(plVar14[0x14],0xf,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e247c0;
LAB_01e24810:
    FUN_01e26db0(lVar12,0xb,8);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24834;
LAB_01e24884:
    FUN_01e26db0(plVar14[0xe],0xb,8);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e248a8;
LAB_01e248f8:
    FUN_01e26db0(plVar14[0x15],0xe,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e2491c;
LAB_01e2496c:
    FUN_01e26db0(plVar14[0x15],0xf,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e24990;
LAB_01e249e0:
    FUN_01e26db0(lVar12,0xc,9);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24a04;
LAB_01e24a54:
    FUN_01e26db0(plVar14[0xe],0xc,9);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24a78;
LAB_01e24ac8:
    FUN_01e26db0(plVar14[0x16],0xe,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24aec;
LAB_01e24b3c:
    FUN_01e26db0(plVar14[0x16],0xf,0);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e24b60;
LAB_01e24bb0:
    FUN_01e26db0(lVar12,0xd,10);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24bd4;
LAB_01e24c24:
    FUN_01e26db0(plVar14[0xe],0xd,10);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24c48;
LAB_01e24c98:
    FUN_01e26db0(plVar14[0x17],0xe,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24cbc;
LAB_01e24d0c:
    FUN_01e26db0(plVar14[0x17],0xf,0);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24d30;
LAB_01e24d80:
    FUN_01e26db0(plVar14[0x13],10,7);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24da4;
LAB_01e24df4:
    FUN_01e26db0(plVar14[0x13],0xb,8);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24e18;
LAB_01e24e68:
    FUN_01e26db0(plVar14[0x13],0xc,9);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24e8c;
LAB_01e24edc:
    FUN_01e26db0(plVar14[0x13],0xd,10);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24f00;
LAB_01e24f50:
    FUN_01e26db0(plVar14[0x14],9,6);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24f74;
LAB_01e24fc4:
    FUN_01e26db0(plVar14[0x14],0xb,8);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e24fe8;
LAB_01e25038:
    FUN_01e26db0(plVar14[0x14],0xc,9);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e2505c;
LAB_01e250ac:
    FUN_01e26db0(plVar14[0x14],0xd,10);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e250d0;
LAB_01e25120:
    FUN_01e26db0(plVar14[0x16],10,7);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e25144;
LAB_01e25194:
    FUN_01e26db0(plVar14[0x16],9,6);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e251b8;
LAB_01e25208:
    FUN_01e26db0(plVar14[0x16],0xd,10);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e2522c;
LAB_01e2527c:
    FUN_01e26db0(plVar14[0x16],0xb,8);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e252a0;
LAB_01e252f0:
    FUN_01e26db0(plVar14[0x17],9,6);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e25314;
LAB_01e25364:
    FUN_01e26db0(plVar14[0x17],0xc,9);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e25388;
LAB_01e253d8:
    FUN_01e26db0(plVar14[0x17],10,7);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e253fc;
LAB_01e2544c:
    FUN_01e26db0(plVar14[0x17],0xb,8);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e25470;
LAB_01e254c0:
    FUN_01e26db0(plVar14[0x15],9,6);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e254e4;
LAB_01e25534:
    FUN_01e26db0(plVar14[0x15],0xc,9);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e25558;
LAB_01e255a8:
    FUN_01e26db0(plVar14[0x15],10,7);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_01e255cc;
LAB_01e2561c:
    FUN_01e26db0(plVar14[0x15],0xd,10);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x19] != '\0') && (lVar12 != 0)) goto LAB_01e25640;
LAB_01e25690:
    FUN_01e26db0(lVar12,0x10,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (plVar14[0xd] != 0)) goto LAB_01e256b4;
LAB_01e25704:
    FUN_01e26db0(plVar14[0xe],0x10,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (plVar14[0xd] != 0)) goto LAB_01e25728;
LAB_01e25778:
    FUN_01e26db0(plVar14[0x13],0x10,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (plVar14[0xd] != 0)) goto LAB_01e2579c;
LAB_01e257ec:
    FUN_01e26db0(plVar14[0x14],0x10,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (plVar14[0xd] != 0)) goto LAB_01e25810;
LAB_01e25860:
    FUN_01e26db0(plVar14[0x16],0x10,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (plVar14[0xd] != 0)) goto LAB_01e25884;
LAB_01e258d4:
    FUN_01e26db0(plVar14[0xf],0x11,0);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x19] != '\0') && (plVar14[0xd] != 0)) goto LAB_01e258f8;
  }
  else {
LAB_01e2400c:
    if (((plVar14[0xe] == 0) || ((plVar14[0xf] == 0 || (plVar14[0x10] == 0)))) ||
       ((plVar14[0x11] == 0 ||
        ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e2405c;
LAB_01e24080:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e240d0;
LAB_01e240f4:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24144;
LAB_01e24168:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e241b8;
LAB_01e241dc:
    if ((plVar14[0xe] == 0) ||
       (((((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
           ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0))))
    goto LAB_01e2422c;
LAB_01e24250:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
         ((plVar14[0x14] == 0 || ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) ||
        (plVar14[0x17] == 0)))) goto LAB_01e242a0;
LAB_01e242c4:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24314;
LAB_01e24338:
    if (((plVar14[0xe] == 0) ||
        ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) ||
       ((plVar14[0x14] == 0 ||
        (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))
    goto LAB_01e24388;
LAB_01e243ac:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e243fc;
LAB_01e24420:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
        (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))
    goto LAB_01e24470;
LAB_01e24494:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) ||
        ((plVar14[0x14] == 0 || ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) ||
       (plVar14[0x17] == 0)) goto LAB_01e244e4;
LAB_01e24508:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24558;
LAB_01e2457c:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0))))
    goto LAB_01e245cc;
LAB_01e245f0:
    if (((plVar14[0xe] == 0) ||
        (((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24640;
LAB_01e24664:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e246b4;
LAB_01e246d8:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24728;
LAB_01e2474c:
    if (((plVar14[0xe] == 0) ||
        ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) ||
       ((plVar14[0x14] == 0 ||
        (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))
    goto LAB_01e2479c;
LAB_01e247c0:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) || (plVar14[0x17] == 0))
    goto LAB_01e24810;
LAB_01e24834:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24884;
LAB_01e248a8:
    if (((plVar14[0xe] == 0) ||
        ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) ||
       ((plVar14[0x14] == 0 ||
        (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))
    goto LAB_01e248f8;
LAB_01e2491c:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e2496c;
LAB_01e24990:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e249e0;
LAB_01e24a04:
    if (((plVar14[0xe] == 0) ||
        (((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24a54;
LAB_01e24a78:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
        ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0)) goto LAB_01e24ac8;
LAB_01e24aec:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) || (plVar14[0x17] == 0))
    goto LAB_01e24b3c;
LAB_01e24b60:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24bb0;
LAB_01e24bd4:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e24c24;
LAB_01e24c48:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24c98;
LAB_01e24cbc:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24d0c;
LAB_01e24d30:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0))))
    goto LAB_01e24d80;
LAB_01e24da4:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24df4;
LAB_01e24e18:
    if (((plVar14[0xe] == 0) ||
        ((((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
           ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) || (plVar14[0x17] == 0))
    goto LAB_01e24e68;
LAB_01e24e8c:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
        (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))
    goto LAB_01e24edc;
LAB_01e24f00:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) || (plVar14[0x17] == 0))
    goto LAB_01e24f50;
LAB_01e24f74:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e24fc4;
LAB_01e24fe8:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e25038;
LAB_01e2505c:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e250ac;
LAB_01e250d0:
    if (((((plVar14[0xe] == 0) ||
          ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
           ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
        ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0)) goto LAB_01e25120;
LAB_01e25144:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0))))
    goto LAB_01e25194;
LAB_01e251b8:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e25208;
LAB_01e2522c:
    if (((plVar14[0xe] == 0) ||
        (((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e2527c;
LAB_01e252a0:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e252f0;
LAB_01e25314:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e25364;
LAB_01e25388:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e253d8;
LAB_01e253fc:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0))))
    goto LAB_01e2544c;
LAB_01e25470:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e254c0;
LAB_01e254e4:
    if (((plVar14[0xe] == 0) ||
        ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) ||
       ((plVar14[0x14] == 0 ||
        (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))
    goto LAB_01e25534;
LAB_01e25558:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e255a8;
LAB_01e255cc:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e2561c;
LAB_01e25640:
    if (((plVar14[0xe] == 0) ||
        (((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e25690;
LAB_01e256b4:
    if (((((plVar14[0xe] == 0) ||
          (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
         (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
        ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))) || (plVar14[0x17] == 0)) goto LAB_01e25704;
LAB_01e25728:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        ((((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)) ||
         ((plVar14[0x15] == 0 || (plVar14[0x16] == 0)))))) || (plVar14[0x17] == 0))
    goto LAB_01e25778;
LAB_01e2579c:
    if ((((plVar14[0xe] == 0) ||
         ((((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)) ||
          ((plVar14[0x12] == 0 || (plVar14[0x13] == 0)))))) || (plVar14[0x14] == 0)) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e257ec;
LAB_01e25810:
    if (((plVar14[0xe] == 0) ||
        (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
       (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) ||
        ((plVar14[0x14] == 0 ||
         (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0))))))))
    goto LAB_01e25860;
LAB_01e25884:
    if ((((plVar14[0xe] == 0) ||
         (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) ||
        (((plVar14[0x12] == 0 || (plVar14[0x13] == 0)) || (plVar14[0x14] == 0)))) ||
       (((plVar14[0x15] == 0 || (plVar14[0x16] == 0)) || (plVar14[0x17] == 0)))) goto LAB_01e258d4;
LAB_01e258f8:
    if ((((plVar14[0xe] != 0) &&
         ((((plVar14[0xf] != 0 && (plVar14[0x10] != 0)) && (plVar14[0x11] != 0)) &&
          ((plVar14[0x12] != 0 && (plVar14[0x13] != 0)))))) && (plVar14[0x14] != 0)) &&
       (((plVar14[0x15] != 0 && (plVar14[0x16] != 0)) && (plVar14[0x17] != 0)))) goto LAB_01e2595c;
  }
  FUN_01e26db0(plVar14[0xf],1,1);
  plVar14 = (long *)*param_1;
LAB_01e2595c:
  (**(code **)(*plVar14 + 0x40))(plVar14,1);
  return;
}


