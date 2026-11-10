/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0195323c; name: FUN_0195323c
 */


uint FUN_0195323c(uint param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar15 = *(long **)(lVar14 + 0xc0);
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_019536c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_68 = plVar15[0x18];
  local_70 = (long *)(local_68 + plVar15[0x19] * 8);
  FUN_019545f0(&local_80,&local_68,&local_70);
  if (local_80 != (long *)(plVar15[0x18] + plVar15[0x19] * 8)) {
    plVar17 = (long *)*local_80;
    puVar13 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_01953330:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01953434;
      lVar14 = plVar17[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_019536c4;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar16 = plVar17;
      } while (cVar4 != '\0');
LAB_01953374:
      if (plVar16 != (long *)0x0) {
        if (plVar16[0x1a] == 0) {
          local_80 = (long *)0x0;
          uStack_78 = 0;
        }
        else {
          local_80 = (long *)0x0;
          uStack_78 = 0;
          FUN_019d08dc(&local_80,plVar16[0x1a] + 0x1c0);
          plVar17 = local_80;
          puVar9 = PTR_DAT_0437c670;
          puVar8 = PTR_DAT_0437c668;
          puVar7 = PTR_DAT_043794d0;
          if (local_80 != (long *)0x0) {
            if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_01953774:
              plVar17 = (long *)0x0;
              plVar18 = local_80;
            }
            else {
              piVar1 = (int *)((long)local_80 + 0xc);
              iVar11 = *(int *)((long)local_80 + 0xc);
              while( true ) {
                plVar18 = (long *)plVar17[2];
                if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                    uVar12 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)puVar9 = PTR_DAT_043794d8;
                  __cxa_guard_release(puVar8);
                }
                while( true ) {
                  if (plVar18 == (long *)0x0) goto LAB_01953774;
                  if (plVar18 == (long *)puVar9) break;
                  plVar18 = (long *)*plVar18;
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar11) break;
                ClearExclusiveLocal();
LAB_019534f4:
                iVar11 = iVar10;
                if (iVar10 == 0) goto LAB_01953774;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_019534f4;
              lVar14 = plVar17[3];
              plVar17 = (long *)0x0;
              plVar18 = local_80;
              if (lVar14 != 0) {
                plVar17 = (long *)(lVar14 + -0x50);
              }
            }
            local_80 = plVar18;
            if (plVar18 != (long *)0x0) {
              plVar2 = plVar18 + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                plVar18[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_68 = *plVar18;
                FUN_02a44274(lVar14 + 0xd8,&local_68);
              }
            }
            if (plVar17 != (long *)0x0) {
              plVar18 = (long *)plVar17[0xe];
              if (plVar18 == (long *)0x0) {
                bVar5 = false;
              }
              else {
                lVar14 = plVar18[0xb];
                if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_019536c4;
                if (*(long *)(lVar14 + 0x10) == 0) {
                  uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                  *(undefined8 *)(lVar14 + 0x10) = uVar12;
                }
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((int)plVar18[0x42] == 2) {
                  FUN_0199c048(&local_80,plVar18);
                  if (local_80 == (long *)0x0) {
                    local_70 = (long *)0x0;
                  }
                  else {
                    FUN_00ccf754(&local_70);
                    plVar2 = local_80;
                    if (local_80 != (long *)0x0) {
                      plVar3 = local_80 + 1;
                      do {
                        iVar11 = (int)*plVar3 + -1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar5) {
                          *(int *)plVar3 = iVar11;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar11 == 0) {
                        local_80[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar14 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar14;
                        local_68 = *plVar2;
                        FUN_02a44274(lVar14 + 0xd8,&local_68);
                      }
                    }
                  }
                  if (local_70 == (long *)0x0) goto LAB_019537f4;
                  FUN_019bbbdc(&local_80);
                  if (local_80 == (long *)0x0) {
                    local_88 = (long *)0x0;
LAB_01953620:
                    if (local_88 != (long *)0x0) goto LAB_01953628;
LAB_0195386c:
                    bVar5 = false;
                  }
                  else {
                    FUN_00ccf8c8(&local_88);
                    plVar2 = local_80;
                    if (local_80 == (long *)0x0) goto LAB_01953620;
                    plVar3 = local_80 + 1;
                    do {
                      iVar11 = (int)*plVar3 + -1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar5) {
                        *(int *)plVar3 = iVar11;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar11 != 0) goto LAB_01953620;
                    local_80[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar14;
                    local_68 = *plVar2;
                    FUN_02a44274(lVar14 + 0xd8,&local_68);
                    if (local_88 == (long *)0x0) goto LAB_0195386c;
LAB_01953628:
                    lVar14 = local_88[0xb];
                    param_1 = (uint)(*(uint *)(local_88 + 0x3d) == param_1);
                    piVar1 = (int *)(lVar14 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar5) {
                        *piVar1 = iVar11 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar11 == 1) {
                      *(undefined8 *)(lVar14 + 0x18) = 0;
                      (**(code **)(*local_88 + 0x20))();
                    }
                    bVar5 = true;
                  }
                  if (local_70 != (long *)0x0) {
                    lVar14 = local_70[0xb];
                    piVar1 = (int *)(lVar14 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar11 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar11 + -1 == 0) {
                      *(undefined8 *)(lVar14 + 0x18) = 0;
                      (**(code **)(*local_70 + 0x20))();
                    }
                  }
                  if (!bVar5) goto LAB_019537f4;
                  bVar5 = true;
                }
                else {
LAB_019537f4:
                  bVar5 = false;
                }
                lVar14 = plVar18[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  (**(code **)(*plVar18 + 0x20))(plVar18);
                }
              }
              lVar14 = plVar17[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar17 + 0x20))(plVar17);
              }
              if (bVar5) goto LAB_0195339c;
            }
          }
        }
      }
      goto LAB_01953398;
    }
  }
  plVar16 = (long *)0x0;
LAB_01953398:
  param_1 = 0;
LAB_0195339c:
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return param_1 & 1;
LAB_01953434:
  puVar13 = (undefined8 *)*puVar13;
  plVar16 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_01953374;
  goto LAB_01953330;
}


