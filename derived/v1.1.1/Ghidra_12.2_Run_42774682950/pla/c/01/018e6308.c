/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e6308; name: FUN_018e6308
 */


void FUN_018e6308(long *param_1)

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
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04379528;
  puVar4 = PTR_DAT_04379520;
  plVar14 = (long *)*param_1;
  if (plVar14[0xd] == 0) {
    plVar11 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_018e7d00(&local_70,&local_60);
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
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018e79fc;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_018e7a00(&local_60,&local_70);
    FUN_018ed870(plVar9,0,&local_60);
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
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
    plVar11 = (long *)plVar14[0xd];
    plVar14[0xd] = (long)plVar9;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0xe] == 0) {
    plVar11 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_018e7d00(&local_70,&local_60);
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
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018e79fc;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xf0,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_018e7a00(&local_60,&local_70);
    FUN_018eac20(plVar9,1,&local_60);
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
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xf0;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
    plVar11 = (long *)plVar14[0xe];
    plVar14[0xe] = (long)plVar9;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0xf] == 0) {
    plVar11 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_018e7d00(&local_70,&local_60);
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
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018e79fc;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_018e7a00(&local_60,&local_70);
    FUN_018e8904(plVar9,2,&local_60);
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
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
    plVar11 = (long *)plVar14[0xf];
    plVar14[0xf] = (long)plVar9;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x10] == 0) {
    plVar11 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_018e7d00(&local_70,&local_60);
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
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_018e79fc;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_018e7a00(&local_60,&local_70);
    FUN_018ee438(plVar9,3,&local_60);
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
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
    plVar11 = (long *)plVar14[0x10];
    plVar14[0x10] = (long)plVar9;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  plVar14 = (long *)*param_1;
  if (plVar14[0x11] == 0) {
    plVar11 = (long *)plVar14[1];
    (**(code **)(*plVar14 + 0x10))(&local_60,plVar14);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_018e7d00(&local_70,&local_60);
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
LAB_018e79fc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar11;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xe8,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_018e7a00(&local_60,&local_70);
    FUN_018ea65c(plVar9,4,&local_60);
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
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0xe8;
    plVar9[4] = 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_018e79e4;
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
LAB_018e79e4:
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
    plVar11 = (long *)plVar14[0x11];
    plVar14[0x11] = (long)plVar9;
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if (plVar9 != (long *)0x0) {
      lVar12 = plVar9[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  plVar14 = (long *)*param_1;
  if ((((((char)plVar14[0x13] == '\0') || (lVar12 = plVar14[0xd], lVar12 == 0)) ||
       (plVar14[0xe] == 0)) || ((plVar14[0xf] == 0 || (plVar14[0x10] == 0)))) ||
     (plVar14[0x11] == 0)) {
    FUN_018e8000(plVar14[0xe],1,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e6f84;
LAB_018e6fa4:
    FUN_018e8000(plVar14[0xe],0,2);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e6fc8;
LAB_018e6fe8:
    FUN_018e8000(plVar14[0xe],5,4);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e700c;
LAB_018e702c:
    FUN_018e8000(plVar14[0xe],7,0);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e7050;
LAB_018e7070:
    FUN_018e8000(plVar14[0xe],9,0);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e7094;
LAB_018e70b4:
    FUN_018e8000(plVar14[0xe],3,3);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e70d8;
LAB_018e70f8:
    FUN_018e8000(plVar14[0xf],2,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e711c;
LAB_018e713c:
    FUN_018e8000(plVar14[0x11],6,1);
    plVar14 = (long *)*param_1;
    if (((char)plVar14[0x13] != '\0') && (lVar12 = plVar14[0xd], lVar12 != 0)) goto LAB_018e7160;
LAB_018e7180:
    FUN_018e8000(plVar14[0x10],4,1);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x13] != '\0') && (lVar12 != 0)) goto LAB_018e71a4;
LAB_018e71c4:
    FUN_018e8000(lVar12,8,1);
    plVar14 = (long *)*param_1;
    lVar12 = plVar14[0xd];
    if (((char)plVar14[0x13] != '\0') && (lVar12 != 0)) goto LAB_018e71e8;
  }
  else {
LAB_018e6f84:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e6fa4;
LAB_018e6fc8:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e6fe8;
LAB_018e700c:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e702c;
LAB_018e7050:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e7070;
LAB_018e7094:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e70b4;
LAB_018e70d8:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e70f8;
LAB_018e711c:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e713c;
LAB_018e7160:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e7180;
LAB_018e71a4:
    if ((plVar14[0xe] == 0) ||
       (((plVar14[0xf] == 0 || (plVar14[0x10] == 0)) || (plVar14[0x11] == 0)))) goto LAB_018e71c4;
LAB_018e71e8:
    if ((plVar14[0xe] != 0) &&
       (((plVar14[0xf] != 0 && (plVar14[0x10] != 0)) && (plVar14[0x11] != 0)))) goto LAB_018e721c;
  }
  FUN_018e8000(lVar12,10,1);
  plVar14 = (long *)*param_1;
LAB_018e721c:
  (**(code **)(*plVar14 + 0x40))(plVar14,0);
  return;
}


