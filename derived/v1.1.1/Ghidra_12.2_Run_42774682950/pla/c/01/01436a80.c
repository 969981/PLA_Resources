/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01436a80; name: FUN_01436a80
 */


void FUN_01436a80(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar14 = *(long **)(lVar13 + 0xc0);
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_01436e7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_68 = plVar14[0x18];
    local_70 = (long *)(local_68 + plVar14[0x19] * 8);
    FUN_014399e0(&local_80,&local_68,&local_70);
    if (local_80 != (long *)(plVar14[0x18] + plVar14[0x19] * 8)) {
      plVar16 = (long *)*local_80;
      puVar12 = (undefined8 *)(**(code **)plVar16[10])(plVar16 + 10);
      if (((*PTR_DAT_0437c678 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
        uVar11 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_0437c680 = uVar11;
        __cxa_guard_release(PTR_DAT_0437c678);
      }
      if (puVar12 != (undefined8 *)0x0) {
LAB_01436b74:
        if (puVar12 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01436c64;
        lVar13 = plVar16[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01436e7c;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar15 = plVar16;
        } while (cVar3 != '\0');
LAB_01436bb8:
        if (plVar15 != (long *)0x0) {
          if (plVar15[0x1a] == 0) {
            local_80 = (long *)0x0;
            uStack_78 = 0;
          }
          else {
            local_80 = (long *)0x0;
            uStack_78 = 0;
            FUN_019d08dc(&local_80,plVar15[0x1a] + 0x1c0);
            plVar16 = local_80;
            puVar7 = PTR_DAT_0437c670;
            puVar6 = PTR_DAT_0437c668;
            puVar5 = PTR_DAT_043794d0;
            if (local_80 != (long *)0x0) {
              if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_01436ee4:
                plVar16 = (long *)0x0;
                plVar18 = local_80;
              }
              else {
                piVar1 = (int *)((long)local_80 + 0xc);
                iVar10 = *(int *)((long)local_80 + 0xc);
                while( true ) {
                  plVar18 = (long *)plVar16[2];
                  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                      uVar11 = FUN_0087f8f0();
                      *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                      __cxa_guard_release(puVar5);
                    }
                    *(undefined **)puVar7 = PTR_DAT_043794d8;
                    __cxa_guard_release(puVar6);
                  }
                  while( true ) {
                    if (plVar18 == (long *)0x0) goto LAB_01436ee4;
                    if (plVar18 == (long *)puVar7) break;
                    plVar18 = (long *)*plVar18;
                  }
                  iVar9 = *piVar1;
                  if (iVar9 == iVar10) break;
                  ClearExclusiveLocal();
LAB_01436d20:
                  iVar10 = iVar9;
                  if (iVar9 == 0) goto LAB_01436ee4;
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_01436d20;
                lVar13 = plVar16[3];
                plVar16 = (long *)0x0;
                plVar18 = local_80;
                if (lVar13 != 0) {
                  plVar16 = (long *)(lVar13 + -0x50);
                }
              }
              local_80 = plVar18;
              if (plVar18 != (long *)0x0) {
                plVar17 = plVar18 + 1;
                do {
                  iVar10 = (int)*plVar17 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar4) {
                    *(int *)plVar17 = iVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 == 0) {
                  plVar18[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_68 = *plVar18;
                  FUN_02a44274(lVar13 + 0xd8,&local_68);
                }
              }
              if (plVar16 != (long *)0x0) {
                plVar18 = (long *)plVar16[0xe];
                if (plVar18 != (long *)0x0) {
                  lVar13 = plVar18[0xb];
                  if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01436e7c;
                  if (*(long *)(lVar13 + 0x10) == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
                    *(undefined8 *)(lVar13 + 0x10) = uVar11;
                  }
                  piVar1 = (int *)(lVar13 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  lVar13 = plVar18[0xb];
                  piVar1 = (int *)(lVar13 + 0xc);
                  do {
                    iVar10 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar10 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar10 + -1 == 0) {
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*plVar18 + 0x20))(plVar18);
                  }
                  if (((int)plVar18[0x42] != 2) ||
                     (FUN_0199bf58(&local_80,plVar18), plVar18 = local_80, puVar6 = PTR_DAT_04379fd0
                     , puVar5 = PTR_DAT_04379fc8, local_80 == (long *)0x0)) goto LAB_01436e48;
                  if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_0143711c:
                    plVar18 = (long *)0x0;
                    plVar17 = local_80;
                  }
                  else {
                    piVar1 = (int *)((long)local_80 + 0xc);
                    iVar10 = *(int *)((long)local_80 + 0xc);
                    while( true ) {
                      plVar17 = (long *)plVar18[2];
                      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0))
                      {
                        if (((*PTR_DAT_043794d0 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                          uVar11 = FUN_0087f8f0();
                          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
                          __cxa_guard_release(PTR_DAT_043794d0);
                        }
                        *(undefined **)puVar6 = PTR_DAT_043794d8;
                        __cxa_guard_release(puVar5);
                      }
                      while( true ) {
                        if (plVar17 == (long *)0x0) goto LAB_0143711c;
                        if (plVar17 == (long *)puVar6) break;
                        plVar17 = (long *)*plVar17;
                      }
                      iVar9 = *piVar1;
                      if (iVar9 == iVar10) break;
                      ClearExclusiveLocal();
LAB_01436f7c:
                      iVar10 = iVar9;
                      if (iVar9 == 0) goto LAB_0143711c;
                    }
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar10 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 != '\0') goto LAB_01436f7c;
                    lVar13 = plVar18[3];
                    plVar18 = (long *)0x0;
                    plVar17 = local_80;
                    if (lVar13 != 0) {
                      plVar18 = (long *)(lVar13 + -0x50);
                    }
                  }
                  local_80 = plVar17;
                  if (plVar17 != (long *)0x0) {
                    plVar2 = plVar17 + 1;
                    do {
                      iVar10 = (int)*plVar2 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar4) {
                        *(int *)plVar2 = iVar10;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar10 == 0) {
                      plVar17[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar13 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar13;
                      local_68 = *plVar17;
                      FUN_02a44274(lVar13 + 0xd8,&local_68);
                    }
                  }
                  if (plVar18 != (long *)0x0) {
                    FUN_018f98bc(&local_80,plVar18);
                    if (local_80 == (long *)0x0) {
                      local_70 = (long *)0x0;
                    }
                    else {
                      FUN_009b8630(&local_70);
                      plVar17 = local_80;
                      if (local_80 != (long *)0x0) {
                        plVar2 = local_80 + 1;
                        do {
                          iVar10 = (int)*plVar2 + -1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar4) {
                            *(int *)plVar2 = iVar10;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar10 == 0) {
                          local_80[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar13 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar13;
                          local_68 = *plVar17;
                          FUN_02a44274(lVar13 + 0xd8,&local_68);
                        }
                      }
                    }
                    if (local_70 != (long *)0x0) {
                      bVar8 = FUN_01a36330();
                      *(byte *)(param_1 + 0x6a8) = ~bVar8 & 1;
                      if (local_70 != (long *)0x0) {
                        lVar13 = local_70[0xb];
                        piVar1 = (int *)(lVar13 + 0xc);
                        do {
                          iVar10 = *piVar1;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar4) {
                            *piVar1 = iVar10 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar10 + -1 == 0) {
                          *(undefined8 *)(lVar13 + 0x18) = 0;
                          (**(code **)(*local_70 + 0x20))();
                        }
                      }
                    }
                    lVar13 = plVar18[0xb];
                    piVar1 = (int *)(lVar13 + 0xc);
                    do {
                      iVar10 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar10 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar10 + -1 == 0) {
                      *(undefined8 *)(lVar13 + 0x18) = 0;
                      (**(code **)(*plVar18 + 0x20))(plVar18);
                    }
                  }
                }
LAB_01436e48:
                lVar13 = plVar16[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar16 + 0x20))(plVar16);
                }
              }
            }
          }
          lVar13 = plVar15[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
          }
        }
      }
    }
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
LAB_01436c64:
  puVar12 = (undefined8 *)*puVar12;
  plVar15 = (long *)0x0;
  if (puVar12 == (undefined8 *)0x0) goto LAB_01436bb8;
  goto LAB_01436b74;
}


