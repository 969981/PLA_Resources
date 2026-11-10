/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0266955c; name: FUN_0266955c
 */


void FUN_0266955c(long *param_1)

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
    FUN_0266a55c(&local_70,&local_60);
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
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0266a258;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_0266a25c(&local_60,&local_70);
    FUN_0271d57c(plVar9,0,&local_60);
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266a240;
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266a240;
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
    FUN_0266a55c(&local_70,&local_60);
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
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0266a258;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_0266a25c(&local_60,&local_70);
    FUN_0271ca30(plVar9,1,&local_60);
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266a240;
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266a240;
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
    FUN_0266a55c(&local_70,&local_60);
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
LAB_0266a258:
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
    FUN_0266a25c(&local_60,&local_70);
    FUN_02718410(plVar9,2,&local_60);
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0266a240;
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
LAB_0266a240:
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
  if (((((char)plVar14[0x11] == '\0') || (plVar14[0xd] == 0)) || (plVar14[0xe] == 0)) ||
     (plVar14[0xf] == 0)) {
    FUN_0266a85c(plVar14[0xd],0,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x11] != '\0') && (plVar14[0xd] != 0)) goto LAB_02669ca0;
LAB_02669cb0:
    FUN_0266a85c(plVar14[0xe],1,0);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x11] != '\0') && (plVar14[0xd] != 0)) goto LAB_02669cd4;
LAB_02669ce4:
    FUN_0266a85c(plVar14[0xe],2,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x11] != '\0') && (plVar14[0xd] != 0)) goto LAB_02669d08;
LAB_02669d18:
    FUN_0266a85c(plVar14[0xe],3,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x11] != '\0') && (plVar14[0xd] != 0)) goto LAB_02669d3c;
LAB_02669d4c:
    FUN_0266a85c(plVar14[0xf],4,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x11] != '\0') && (plVar14[0xd] != 0)) goto LAB_02669d70;
  }
  else {
LAB_02669ca0:
    if ((plVar14[0xe] == 0) || (plVar14[0xf] == 0)) goto LAB_02669cb0;
LAB_02669cd4:
    if ((plVar14[0xe] == 0) || (plVar14[0xf] == 0)) goto LAB_02669ce4;
LAB_02669d08:
    if ((plVar14[0xe] == 0) || (plVar14[0xf] == 0)) goto LAB_02669d18;
LAB_02669d3c:
    if ((plVar14[0xe] == 0) || (plVar14[0xf] == 0)) goto LAB_02669d4c;
LAB_02669d70:
    if ((plVar14[0xe] != 0) && (plVar14[0xf] != 0)) goto LAB_02669d94;
  }
  FUN_0266a85c(plVar14[0xf],1,0);
  plVar14 = (long *)*param_1;
LAB_02669d94:
  (**(code **)(*plVar14 + 0x40))(plVar14,0);
  return;
}


