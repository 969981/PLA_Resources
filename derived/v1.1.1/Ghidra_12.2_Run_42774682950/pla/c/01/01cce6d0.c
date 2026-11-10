/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cce6d0; name: FUN_01cce6d0
 */


long FUN_01cce6d0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  
  if (((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x68) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a8 = (undefined8 *)0x0;
    local_90 = 0;
    local_88 = (undefined8 *)0x0;
    local_a0 = 0;
    local_98 = (undefined8 *)0x0;
    local_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    FUN_008802f0(&local_d0,*(long *)(param_1 + 0x48) + 0x58);
    local_b8 = (long *)0x0;
    local_b0 = 0;
    FUN_00bd1818(&local_b8,&local_d0);
    puVar9 = local_d0;
    puVar6 = PTR_DAT_043794a8;
    puVar5 = PTR_DAT_043794a0;
    puVar4 = PTR_DAT_04379498;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_d0[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_68 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
    do {
      uVar15 = local_b0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
      if (bVar3) {
        local_b0 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar12 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar12;
    FUN_02a44e0c(&local_68,uVar12,uVar15);
    plVar18 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      plVar14 = plVar18 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 == 0) {
        plVar18[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*plVar18;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    puVar9 = local_98;
    local_98 = (undefined8 *)0x0;
    if (local_68 == (undefined8 *)0x0) {
      if (puVar9 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar9 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 == 1) {
          puVar9[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar5;
          *(long *)puVar6 = lVar16;
          local_d0 = (undefined8 *)*puVar9;
          FUN_02a44274(lVar16 + 0xd8,&local_d0);
        }
      }
      uVar15 = 0;
    }
    else {
      puVar17 = local_68;
      if (puVar9 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar9 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          puVar9[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)puVar5;
          *(long *)puVar6 = lVar16;
          local_d0 = (undefined8 *)*puVar9;
          FUN_02a44274(lVar16 + 0xd8,&local_d0);
        }
        puVar17 = local_68;
      }
      local_68 = (undefined8 *)0x0;
      local_98 = puVar17;
    }
    puVar9 = local_68;
    local_90 = uVar15;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_68[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    plVar18 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar14 = local_b8 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 == 0) {
        local_b8[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*plVar18;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(&local_d0);
    local_b8 = (long *)0x0;
    local_b0 = 0;
    FUN_009cca14(&local_b8,&local_d0);
    puVar9 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_d0[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_68 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
    }
    FUN_00ac3ca4(&local_a8,&local_b8);
    plVar18 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar14 = local_b8 + 1;
      do {
        iVar10 = (int)*plVar14 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 == 0) {
        local_b8[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*plVar18;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    puVar8 = PTR_DAT_043796e8;
    puVar7 = PTR_DAT_043796e0;
    lVar16 = *(long *)(param_1 + 0x30);
    if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
      piVar1 = (int *)(lVar16 + 0xc);
      iVar10 = *(int *)(lVar16 + 0xc);
      do {
        plVar18 = *(long **)(lVar16 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
            uVar15 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar15;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_01cce9e0;
          if (plVar18 == (long *)puVar8) break;
          plVar18 = (long *)*plVar18;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar16 = *(long *)(lVar16 + 0x18);
            plVar18 = (long *)(lVar16 + -0x50);
            if (lVar16 != 0) {
              FUN_0199f718(&local_d0,plVar18);
              FUN_019d1ef8(&local_88,&local_d0);
              puVar9 = local_d0;
              local_78 = local_c0;
              if (local_d0 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_d0 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar10 + -1 == 0) {
                  local_d0[2] = 0;
                  if (((*puVar4 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)puVar5;
                  *(long *)puVar6 = lVar13;
                  local_b8 = (long *)*puVar9;
                  FUN_02a44274(lVar13 + 0xd8,&local_b8);
                }
              }
              lVar16 = *(long *)(lVar16 + 8);
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*plVar18 + 0x20))(plVar18);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_01cce9e0:
    lVar16 = *(long *)(param_1 + 8);
    plVar18 = *(long **)(lVar16 + 8);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar18;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    plVar14 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x480,0x10);
    if (plVar14 == (long *)0x0) {
      (**(code **)(*plVar18 + 0xb8))(plVar18);
    }
    FUN_018187d0(plVar14,&local_a8);
    plVar14[1] = (long)plVar18;
    plVar14[2] = (long)plVar14;
    plVar14[3] = 0x480;
    plVar14[4] = 0x10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01ccf1f0;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar15;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar18 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar18 = plVar14 + 9;
    }
    (**(code **)(*plVar18 + 0xb8))(plVar18,lVar16);
    local_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    FUN_009ad580(&local_d0,lVar16 + 0x318);
    (**(code **)(*plVar18 + 0xc0))(plVar18,&local_d0);
    puVar9 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_d0[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)puVar5;
        *(long *)puVar6 = lVar13;
        local_b8 = (long *)*puVar9;
        FUN_02a44274(lVar13 + 0xd8,&local_b8);
      }
    }
    (**(code **)(*plVar18 + 200))(plVar18,*(undefined1 *)(lVar16 + 0x33b));
    (**(code **)(*plVar18 + 0x90))(plVar18);
    local_b8 = plVar14;
    FUN_02a4dad4(lVar16 + 0xf0,&local_b8);
    if (local_b8 != (long *)0x0) {
      lVar16 = local_b8[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    if (plVar14 != (long *)0x0) {
      lVar16 = plVar14[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_01ccf1f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar15;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar18 = *(long **)(param_1 + 0x78);
    *(long **)(param_1 + 0x78) = plVar14;
    if (plVar18 != (long *)0x0) {
      lVar16 = plVar18[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))();
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x10))(&local_d0);
    local_e0 = (undefined8 *)0x0;
    uStack_d8 = 0;
    FUN_00ac4a8c(&local_e0,&local_d0);
    puVar9 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_d0[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_b8 = (long *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_b8);
      }
    }
    FUN_01a7344c(uVar15,&local_e0);
    puVar9 = local_e0;
    if (local_e0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_e0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_e0[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    puVar9 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_88[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    puVar9 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_98 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_98[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
    puVar9 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a8 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_a8[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_d0 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar16 + 0xd8,&local_d0);
      }
    }
  }
  return param_1;
}


