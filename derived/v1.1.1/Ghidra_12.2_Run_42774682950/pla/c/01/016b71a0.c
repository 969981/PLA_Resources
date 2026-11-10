/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b71a0; name: FUN_016b71a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_016b71a0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  puVar6 = PTR_DAT_04379678;
  iVar10 = *(int *)((long)param_1 + 0x54);
  if (iVar10 == 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar8 = PTR_DAT_04379688;
    puVar7 = PTR_DAT_04379680;
    lVar16 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar16;
    plVar17 = _DAT_00000060;
    plVar11 = *(long **)(lVar16 + 0xd0);
    if (plVar11 == (long *)0x0) {
      if (_DAT_00000060 != (long *)0x0) {
        plVar11 = _DAT_00000060 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = (int)*plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      plVar12 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar17 = (long *)plVar11[0xc];
      if (plVar17 != (long *)0x0) {
        plVar18 = plVar17 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = (int)*plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        iVar10 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    local_78 = 0x7a6b5f46342fd2e8;
    plVar11 = (long *)FUN_010badf8(plVar17 + 0xb,&local_78);
    plVar12 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 10;
      do {
        iVar10 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    FUN_010bb998(plVar17 + 0xb,&local_78);
    (**(code **)(*param_1 + 0x28))(param_1);
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar16 = *(long *)puVar7;
    *(long *)puVar8 = lVar16;
    plVar11 = *(long **)(lVar16 + 0xc0);
    if (plVar11 != (long *)0x0) {
      lVar16 = plVar11[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_016b77a0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_68 = plVar11[0x18];
    local_70 = (long *)(local_68 + plVar11[0x19] * 8);
    FUN_016b7980(&local_88,&local_68,&local_70);
    if (local_88 != (long *)(plVar11[0x18] + plVar11[0x19] * 8)) {
      plVar12 = (long *)*local_88;
      puVar14 = (undefined8 *)(**(code **)plVar12[10])(plVar12 + 10);
      if (((*PTR_DAT_0437c678 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
        uVar13 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_0437c680 = uVar13;
        __cxa_guard_release(PTR_DAT_0437c678);
      }
      if (puVar14 != (undefined8 *)0x0) {
LAB_016b7360:
        if (puVar14 != (undefined8 *)PTR_DAT_0437c680) goto LAB_016b7500;
        lVar16 = plVar12[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_016b77a0;
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar13;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar18 = plVar12;
        } while (cVar4 != '\0');
LAB_016b73a4:
        if (plVar18 != (long *)0x0) {
          if (plVar18[0x1a] == 0) {
            local_88 = (long *)0x0;
            uStack_80 = 0;
          }
          else {
            local_88 = (long *)0x0;
            uStack_80 = 0;
            FUN_019d08dc(&local_88,plVar18[0x1a] + 0x1c0);
            plVar12 = local_88;
            puVar7 = PTR_DAT_0437c670;
            puVar6 = PTR_DAT_0437c668;
            if (local_88 != (long *)0x0) {
              if (*(int *)((long)local_88 + 0xc) == 0) {
LAB_016b7838:
                plVar12 = (long *)0x0;
                plVar19 = local_88;
              }
              else {
                piVar1 = (int *)((long)local_88 + 0xc);
                iVar10 = *(int *)((long)local_88 + 0xc);
                while( true ) {
                  plVar19 = (long *)plVar12[2];
                  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                    if (((*PTR_DAT_043794d0 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                      uVar13 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                      __cxa_guard_release(PTR_DAT_043794d0);
                    }
                    *(undefined **)puVar7 = PTR_DAT_043794d8;
                    __cxa_guard_release(puVar6);
                  }
                  while( true ) {
                    if (plVar19 == (long *)0x0) goto LAB_016b7838;
                    if (plVar19 == (long *)puVar7) break;
                    plVar19 = (long *)*plVar19;
                  }
                  iVar9 = *piVar1;
                  if (iVar9 == iVar10) break;
                  ClearExclusiveLocal();
LAB_016b7618:
                  iVar10 = iVar9;
                  if (iVar9 == 0) goto LAB_016b7838;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_016b7618;
                lVar16 = plVar12[3];
                plVar12 = (long *)0x0;
                plVar19 = local_88;
                if (lVar16 != 0) {
                  plVar12 = (long *)(lVar16 + -0x50);
                }
              }
              local_88 = plVar19;
              if (plVar19 != (long *)0x0) {
                plVar2 = plVar19 + 1;
                do {
                  iVar10 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 == 0) {
                  plVar19[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_68 = *plVar19;
                  FUN_02a44274(lVar16 + 0xd8,&local_68);
                }
              }
              if (plVar12 != (long *)0x0) {
                plVar19 = (long *)plVar12[0xe];
                if (plVar19 != (long *)0x0) {
                  lVar16 = plVar19[0xb];
                  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_016b77a0;
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                    *(undefined8 *)(lVar16 + 0x10) = uVar13;
                  }
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  FUN_0199fdf4(&local_88,plVar19);
                  if (local_88 == (long *)0x0) {
                    local_70 = (long *)0x0;
                  }
                  else {
                    FUN_00e91f68(&local_70);
                    plVar2 = local_88;
                    if (local_88 != (long *)0x0) {
                      plVar3 = local_88 + 1;
                      do {
                        iVar10 = (int)*plVar3 + -1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar5) {
                          *(int *)plVar3 = iVar10;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar10 == 0) {
                        local_88[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar16 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar16;
                        local_68 = *plVar2;
                        FUN_02a44274(lVar16 + 0xd8,&local_68);
                      }
                    }
                  }
                  if (local_70 != (long *)0x0) {
                    uVar15 = FUN_01fa3c88();
                    if ((uVar15 & 1) != 0) {
                      FUN_01fa3c80(local_70);
                    }
                    if (local_70 != (long *)0x0) {
                      lVar16 = local_70[0xb];
                      piVar1 = (int *)(lVar16 + 0xc);
                      do {
                        iVar10 = *piVar1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar5) {
                          *piVar1 = iVar10 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar10 + -1 == 0) {
                        *(undefined8 *)(lVar16 + 0x18) = 0;
                        (**(code **)(*local_70 + 0x20))();
                      }
                    }
                  }
                  lVar16 = plVar19[0xb];
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar10 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*plVar19 + 0x20))(plVar19);
                  }
                }
                lVar16 = plVar12[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar12 + 0x20))(plVar12);
                }
              }
            }
          }
          lVar16 = plVar18[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
      }
    }
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + 1;
    if (plVar11 != (long *)0x0) {
      lVar16 = plVar11[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar11 = plVar17 + 10;
      do {
        iVar10 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  else {
    if (iVar10 == 2) goto LAB_016b744c;
    if (iVar10 != 1) {
      return 0;
    }
  }
  uVar15 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) + 1;
LAB_016b744c:
  (**(code **)(*param_1 + 0x38))(param_1);
  return 1;
LAB_016b7500:
  puVar14 = (undefined8 *)*puVar14;
  plVar18 = (long *)0x0;
  if (puVar14 == (undefined8 *)0x0) goto LAB_016b73a4;
  goto LAB_016b7360;
}


