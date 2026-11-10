/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02704fc0; name: FUN_02704fc0
 */


void FUN_02704fc0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long *local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  plVar15 = (long *)*param_2;
  *param_2 = 0;
  lVar20 = *param_1;
  uVar9 = FUN_00b1255c(plVar15 + 10);
  if ((uVar9 & 1) != 0) {
    FUN_00b17f2c(&local_b8,plVar15);
    plVar10 = *(long **)(lVar20 + 0x1b8);
    *(undefined8 *)(lVar20 + 0x1b8) = 0;
    if (plVar10 != (long *)0x0) {
      lVar14 = plVar10[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    *(long **)(lVar20 + 0x1b8) = local_b8;
    plVar10 = (long *)local_b8[0x49];
    local_b8[0x46] = -0x62330aee297b03c5;
    local_b8[0x47] = (long)"RideModelObject";
    local_b8[0x48] = 0xf;
    local_b8[0x49] = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    FUN_02a54690(*(undefined8 *)(lVar20 + 0x1b8),0);
    uVar16 = *(undefined8 *)(lVar20 + 8);
    lVar14 = FUN_0135be64(*(undefined8 *)(lVar20 + 0x68),uVar16);
    if (lVar14 != 0) {
      lVar18 = *(long *)(lVar14 + 0x58);
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = *(long **)(lVar20 + 0x170);
    *(long *)(lVar20 + 0x170) = lVar14;
    if (plVar10 != (long *)0x0) {
      lVar14 = plVar10[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    lVar14 = FUN_0135c050(*(undefined8 *)(lVar20 + 0x68),uVar16);
    if (lVar14 != 0) {
      lVar18 = *(long *)(lVar14 + 0x58);
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = *(long **)(lVar20 + 0x178);
    *(long *)(lVar20 + 0x178) = lVar14;
    if (plVar10 != (long *)0x0) {
      lVar14 = plVar10[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    lVar14 = FUN_0152f590(*(undefined8 *)(lVar20 + 0x68),uVar16);
    if (lVar14 != 0) {
      lVar18 = *(long *)(lVar14 + 0x58);
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = *(long **)(lVar20 + 0x180);
    *(long *)(lVar20 + 0x180) = lVar14;
    if (plVar10 != (long *)0x0) {
      lVar14 = plVar10[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    plVar17 = *(long **)(lVar20 + 0x170);
    FUN_00b17fa0(&local_98,plVar15);
    local_b8 = (long *)0x0;
    local_b0 = (char *)0x0;
    FUN_008802f0(&local_b8,local_98 + 0xb);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00ab3c84(&local_78,&local_b8);
    plVar10 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar11 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_88 = (undefined8 *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
    }
    FUN_00b1b5bc(plVar17 + 0x3e,&local_78);
    (**(code **)(*plVar17 + 0xf0))(plVar17);
    lVar14 = plVar17[0x40];
    FUN_00aae1c0(&local_b8,plVar17);
    FUN_0135c614(lVar14,&local_b8);
    plVar10 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_88 = (undefined8 *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_88);
      }
    }
    puVar19 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_b8 = (long *)*puVar19;
        FUN_02a44274(lVar14 + 0xd8,&local_b8);
      }
    }
    if (local_98 != (long *)0x0) {
      lVar14 = local_98[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    plVar17 = *(long **)(lVar20 + 0x180);
    FUN_00b18098(&local_d0,plVar15);
    (**(code **)(*local_d0 + 0x10))(&local_b8);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_015300dc(&local_88,&local_b8);
    plVar10 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar11 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_98 = (long *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_98);
      }
    }
    FUN_0152fad0(plVar17 + 0x3e,&local_88);
    (**(code **)(*plVar17 + 0xf0))(plVar17);
    lVar14 = plVar17[0x40];
    FUN_0152d920(&local_b8,plVar17);
    FUN_0152f8a0(lVar14,&local_b8);
    plVar10 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_98 = (long *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_98);
      }
    }
    puVar19 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_b8 = (long *)*puVar19;
        FUN_02a44274(lVar14 + 0xd8,&local_b8);
      }
    }
    if (local_d0 != (long *)0x0) {
      lVar14 = local_d0[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_d0 + 0x20))();
      }
    }
    plVar17 = *(long **)(lVar20 + 0x178);
    FUN_00b18014(&local_68,plVar15);
    local_b8 = (long *)0x0;
    local_b0 = (char *)0x0;
    FUN_008802f0(&local_b8,local_68 + 0xb);
    local_98 = (long *)0x0;
    uStack_90 = 0;
    FUN_00aa03f0(&local_98,&local_b8);
    plVar10 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar11 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_d0 = (long *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_d0);
      }
    }
    FUN_00aeaa8c(plVar17 + 0x3e,&local_98);
    (**(code **)(*plVar17 + 0xf0))(plVar17);
    lVar14 = plVar17[0x40];
    FUN_00a9ecd4(&local_b8,plVar17);
    FUN_0135cd08(lVar14,&local_b8);
    plVar10 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar7 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_d0 = (long *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_d0);
      }
    }
    plVar10 = local_98;
    if (local_98 != (long *)0x0) {
      plVar17 = local_98 + 1;
      do {
        iVar7 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_b8 = (long *)*plVar10;
        FUN_02a44274(lVar14 + 0xd8,&local_b8);
      }
    }
    if (local_68 != (long *)0x0) {
      lVar14 = local_68[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    if ((*(uint *)(*(long *)(lVar20 + 0x128) + 0xd0) | 2) == 3) {
      local_b8 = (long *)0x47e27348a6129ec;
      local_b0 = "OffsetControlObject";
      uStack_a8 = 0x13;
      FUN_00d0f008(&local_a0,*(undefined8 *)(lVar20 + 8),&local_b8);
      FUN_02a54690(local_a0,0);
      plVar10 = local_a0;
      puVar6 = PTR_DAT_0437a0f0;
      puVar5 = PTR_DAT_0437a0e8;
      lVar14 = *(long *)(lVar20 + 0x80);
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_02705764:
        plVar17 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar14 + 0xc);
        iVar7 = *(int *)(lVar14 + 0xc);
        do {
          puVar19 = *(undefined8 **)(lVar14 + 0x10);
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar16;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar6 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar5);
          }
          if (puVar19 == (undefined8 *)0x0) goto LAB_02705764;
          while (puVar19 != (undefined8 *)puVar6) {
            puVar19 = (undefined8 *)*puVar19;
            plVar17 = (long *)0x0;
            if (puVar19 == (undefined8 *)0x0) goto LAB_02705768;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar17 = (long *)0x0;
              if (*(long *)(lVar14 + 0x18) != 0) {
                plVar17 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar17 = (long *)0x0;
          iVar7 = iVar8;
        } while (iVar8 != 0);
      }
LAB_02705768:
      local_b8 = (long *)plVar17[0x12];
      local_b0 = (char *)plVar17[0x13];
      plVar10 = (long *)FUN_00bd8988(plVar10,plVar10[1],&local_b8);
      if (plVar17 != (long *)0x0) {
        lVar14 = plVar17[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
      plVar17 = local_a0;
      fVar21 = (float)FUN_00ae6464();
      *(undefined1 *)(plVar17 + 0x1c) = 1;
      plVar17[0x1b] = 0;
      plVar17[0x1a] = (ulong)(uint)-fVar21 << 0x20;
      local_c0 = *(long **)(lVar20 + 0x1c8);
      if (local_c0 != (long *)0x0) {
        lVar14 = local_c0[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d7e99c(plVar10,&local_c0,1);
      if (local_c0 != (long *)0x0) {
        lVar14 = local_c0[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_c0 + 0x20))();
        }
      }
      plVar17 = (long *)FUN_009ae864(&local_b8,*(undefined8 *)(lVar20 + 8));
      if (plVar17 != (long *)0x0) {
        lVar14 = plVar17[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar11 = (long *)plVar17[0x49];
      plVar17[0x46] = 0x75c9fde3cf674b38;
      plVar17[0x47] = (long)"AttitudeControlHierarchyObject";
      plVar17[0x48] = 0x1e;
      plVar17[0x49] = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      FUN_02a54690(plVar17,0);
      puVar5 = PTR_DAT_0437a0f0;
      lVar14 = *(long *)(lVar20 + 0x80);
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_027058a4:
        plVar11 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar14 + 0xc);
        iVar7 = *(int *)(lVar14 + 0xc);
        do {
          puVar19 = *(undefined8 **)(lVar14 + 0x10);
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar8 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar16;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar5 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          if (puVar19 == (undefined8 *)0x0) goto LAB_027058a4;
          while (puVar19 != (undefined8 *)puVar5) {
            puVar19 = (undefined8 *)*puVar19;
            plVar11 = (long *)0x0;
            if (puVar19 == (undefined8 *)0x0) goto LAB_027058a8;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar11 = (long *)0x0;
              if (*(long *)(lVar14 + 0x18) != 0) {
                plVar11 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar11 = (long *)0x0;
          iVar7 = iVar8;
        } while (iVar8 != 0);
      }
LAB_027058a8:
      local_b8 = (long *)plVar11[0x12];
      local_b0 = (char *)plVar11[0x13];
      plVar12 = (long *)FUN_00bd8988(plVar17,plVar17[1],&local_b8);
      if (plVar11 != (long *)0x0) {
        lVar14 = plVar11[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
      }
      plVar11 = (long *)plVar12[0x3c];
      plVar12[0x39] = 0x42a8ca54baf18cbe;
      plVar12[0x3a] = (long)"AttitudeControlHierarchyComponent";
      plVar12[0x3b] = 0x21;
      plVar12[0x3c] = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      (**(code **)(*plVar17 + 0x10))(&local_b8,plVar17);
      local_d0 = (long *)0x0;
      uStack_c8 = 0;
      FUN_0087f944(&local_d0,&local_b8);
      plVar11 = local_b8;
      if (local_b8 != (long *)0x0) {
        plVar2 = local_b8 + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = (long *)*plVar11;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      FUN_0087fcf0(lVar20 + 0x598,&local_d0);
      plVar11 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar2 = local_d0 + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_b8 = (long *)*plVar11;
          FUN_02a44274(lVar14 + 0xd8,&local_b8);
        }
      }
      lVar14 = FUN_00b13c20(*(long *)(lVar20 + 0x1b8) + 0xf0,&local_b8);
      if (lVar14 == 0) {
        lVar18 = *(long *)(lVar20 + 0x1b8);
        lVar14 = *(long *)(lVar20 + 0x80);
        if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_02705c38:
          plVar11 = (long *)0x0;
        }
        else {
          piVar1 = (int *)(lVar14 + 0xc);
          iVar7 = *(int *)(lVar14 + 0xc);
          do {
            puVar19 = *(undefined8 **)(lVar14 + 0x10);
            if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar8 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
                uVar16 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_0437a0e8);
            }
            if (puVar19 == (undefined8 *)0x0) goto LAB_02705c38;
            while (puVar19 != (undefined8 *)PTR_DAT_0437a0f0) {
              puVar19 = (undefined8 *)*puVar19;
              plVar11 = (long *)0x0;
              if (puVar19 == (undefined8 *)0x0) goto LAB_02705c3c;
            }
            iVar8 = *piVar1;
            if (iVar8 == iVar7) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar11 = (long *)0x0;
                if (*(long *)(lVar14 + 0x18) != 0) {
                  plVar11 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            plVar11 = (long *)0x0;
            iVar7 = iVar8;
          } while (iVar8 != 0);
        }
LAB_02705c3c:
        local_b8 = (long *)plVar11[0x12];
        local_b0 = (char *)plVar11[0x13];
        lVar14 = FUN_00bd8988(lVar18,*(undefined8 *)(lVar18 + 8),&local_b8);
        if (plVar11 != (long *)0x0) {
          lVar18 = plVar11[0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      fVar21 = *(float *)(lVar20 + 0x5ac) + *(float *)(lVar20 + 0x5b0) * 0.5;
      *(undefined1 *)(plVar17 + 0x1c) = 1;
      plVar17[0x1b] = 0;
      plVar17[0x1a] = (ulong)(uint)fVar21 << 0x20;
      lVar18 = *(long *)(lVar20 + 0x1b8);
      *(undefined1 *)(lVar18 + 0xe0) = 1;
      *(undefined8 *)(lVar18 + 0xd8) = 0;
      *(ulong *)(lVar18 + 0xd0) = (ulong)(uint)-fVar21 << 0x20;
      local_b8 = plVar10;
      if (plVar10 != (long *)0x0) {
        lVar18 = plVar10[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d7e99c(plVar12,&local_b8,1);
      if (local_b8 != (long *)0x0) {
        lVar18 = local_b8[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_b8 + 0x20))();
        }
      }
      local_d0 = plVar12;
      if (plVar12 != (long *)0x0) {
        lVar18 = plVar12[0xb];
        if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_027061bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar18 + 0x10) == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
          *(undefined8 *)(lVar18 + 0x10) = uVar16;
        }
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d7e99c(lVar14,&local_d0,1);
      if (local_d0 != (long *)0x0) {
        lVar14 = local_d0[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
        }
      }
      lVar14 = plVar17[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
      if (local_a0 != (long *)0x0) {
        lVar14 = local_a0[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_a0 + 0x20))();
        }
      }
    }
    else {
      lVar14 = FUN_00b13c20(*(long *)(lVar20 + 0x1b8) + 0xf0,&local_b8);
      puVar6 = PTR_DAT_0437a0f0;
      puVar5 = PTR_DAT_0437a0e8;
      if (lVar14 == 0) {
        lVar14 = *(long *)(lVar20 + 0x1b8);
        lVar18 = *(long *)(lVar20 + 0x80);
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) {
LAB_02705c9c:
          plVar10 = (long *)0x0;
        }
        else {
          piVar1 = (int *)(lVar18 + 0xc);
          iVar7 = *(int *)(lVar18 + 0xc);
          do {
            puVar19 = *(undefined8 **)(lVar18 + 0x10);
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
                uVar16 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar6 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar5);
            }
            if (puVar19 == (undefined8 *)0x0) goto LAB_02705c9c;
            while (puVar19 != (undefined8 *)puVar6) {
              puVar19 = (undefined8 *)*puVar19;
              plVar10 = (long *)0x0;
              if (puVar19 == (undefined8 *)0x0) goto LAB_02705ca0;
            }
            iVar8 = *piVar1;
            if (iVar8 == iVar7) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar10 = (long *)0x0;
                if (*(long *)(lVar18 + 0x18) != 0) {
                  plVar10 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            plVar10 = (long *)0x0;
            iVar7 = iVar8;
          } while (iVar8 != 0);
        }
LAB_02705ca0:
        local_b8 = (long *)plVar10[0x12];
        local_b0 = (char *)plVar10[0x13];
        uVar16 = FUN_00bd8988(lVar14,*(undefined8 *)(lVar14 + 8),&local_b8);
        if (plVar10 != (long *)0x0) {
          lVar14 = plVar10[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar10 + 0x20))(plVar10);
          }
        }
        local_b8 = *(long **)(lVar20 + 0x1c8);
        if (local_b8 != (long *)0x0) {
          lVar14 = local_b8[0xb];
          if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_027061bc;
          if (*(long *)(lVar14 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
            *(undefined8 *)(lVar14 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00d7e99c(uVar16,&local_b8,1);
        if (local_b8 != (long *)0x0) {
          lVar14 = local_b8[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_b8 + 0x20))();
          }
        }
      }
      lVar14 = *(long *)(lVar20 + 0x1b8);
      fVar21 = (float)FUN_00ae6464();
      *(undefined1 *)(lVar14 + 0xe0) = 1;
      *(undefined8 *)(lVar14 + 0xd8) = 0;
      *(ulong *)(lVar14 + 0xd0) = (ulong)(uint)-fVar21 << 0x20;
    }
    *(undefined1 *)(lVar20 + 0x590) = 1;
    *(undefined4 *)(lVar20 + 0x120) = 2;
  }
  if (plVar15 != (long *)0x0) {
    lVar20 = plVar15[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


