/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f854ac; name: FUN_01f854ac
 */


void FUN_01f854ac(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar16 = (long *)param_2[2];
  if (plVar16 == (long *)0x0) {
    return;
  }
  lVar17 = plVar16[0xb];
  if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar17 + 0x10) == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
    *(undefined8 *)(lVar17 + 0x10) = uVar12;
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
  if (*param_2 == 0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_01f87d3c(&local_80);
    plVar18 = local_80;
    if (local_80 != (long *)0x0) {
      lVar17 = FUN_00b13c20(plVar16 + 0x1e,local_78);
      if (lVar17 != 0) {
        FUN_00bf5c04(&local_88,param_1);
        puVar7 = PTR_DAT_043794d0;
        puVar6 = PTR_DAT_043794c8;
        puVar5 = PTR_DAT_043794b8;
        puVar4 = PTR_DAT_043794b0;
        plVar18 = local_80;
        if (local_88 != (long *)0x0) {
          lVar14 = local_88[0x35];
          if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
            piVar1 = (int *)(lVar14 + 0xc);
            iVar11 = *(int *)(lVar14 + 0xc);
            do {
              plVar18 = *(long **)(lVar14 + 0x10);
              if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar10 != 0)) {
                  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                    uVar12 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)puVar6 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)puVar5 = puVar6;
                __cxa_guard_release(puVar4);
              }
              while( true ) {
                if (plVar18 == (long *)0x0) goto joined_r0x01f85920;
                if (plVar18 == (long *)puVar5) break;
                plVar18 = (long *)*plVar18;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar14 = *(long *)(lVar14 + 0x18);
                  if (lVar14 != 0) {
                    plVar18 = (long *)(lVar14 + -0x50);
                    (**(code **)(*plVar18 + 0x18))(local_78,plVar18);
                    local_98 = (undefined8 *)0x0;
                    uStack_90 = 0;
                    FUN_0087f944(&local_98,local_78);
                    puVar8 = local_78[0];
                    if (local_78[0] != (undefined8 *)0x0) {
                      piVar1 = (int *)(local_78[0] + 1);
                      do {
                        iVar11 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar11 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar11 + -1 == 0) {
                        local_78[0][2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar15 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar15;
                        local_68 = *puVar8;
                        FUN_02a44274(lVar15 + 0xd8,&local_68);
                      }
                    }
                    FUN_00d804f8(lVar17,&local_98,1);
                    puVar8 = local_98;
                    if (local_98 != (undefined8 *)0x0) {
                      piVar1 = (int *)(local_98 + 1);
                      do {
                        iVar11 = *piVar1;
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar3) {
                          *piVar1 = iVar11 + -1;
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                      if (iVar11 + -1 == 0) {
                        local_98[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar17 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar17;
                        local_78[0] = (undefined8 *)*puVar8;
                        FUN_02a44274(lVar17 + 0xd8,local_78);
                      }
                    }
                    *(undefined1 *)(plVar16 + 0x1c) = 1;
                    plVar16[0x1a] = 0;
                    plVar16[0x1b] = 0;
                    plVar13 = (long *)FUN_00c60148(lVar14 + 0xa0,local_78);
                    plVar9 = local_80;
                    if (plVar13 != (long *)0x0) {
                      (**(code **)(*plVar13 + 0x10))(local_78);
                      local_a8 = (undefined8 *)0x0;
                      uStack_a0 = 0;
                      FUN_018fed88(&local_a8,local_78);
                      puVar8 = local_78[0];
                      if (local_78[0] != (undefined8 *)0x0) {
                        piVar1 = (int *)(local_78[0] + 1);
                        do {
                          iVar11 = *piVar1;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar3) {
                            *piVar1 = iVar11 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (iVar11 + -1 == 0) {
                          local_78[0][2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar17 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar17;
                          local_68 = *puVar8;
                          FUN_02a44274(lVar17 + 0xd8,&local_68);
                        }
                      }
                      FUN_01f8be9c(plVar9,&local_a8);
                      puVar8 = local_a8;
                      if (local_a8 != (undefined8 *)0x0) {
                        piVar1 = (int *)(local_a8 + 1);
                        do {
                          iVar11 = *piVar1;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar3) {
                            *piVar1 = iVar11 + -1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (iVar11 + -1 == 0) {
                          local_a8[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar17 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar17;
                          local_78[0] = (undefined8 *)*puVar8;
                          FUN_02a44274(lVar17 + 0xd8,local_78);
                        }
                      }
                    }
                    if (*(int *)(lVar14 + 0x2c0) == 0) {
                      (**(code **)(*plVar16 + 0xa0))(plVar16,0);
                    }
                    lVar17 = *(long *)(lVar14 + 8);
                    piVar1 = (int *)(lVar17 + 0xc);
                    do {
                      iVar11 = *piVar1;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar11 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (iVar11 + -1 == 0) {
                      *(undefined8 *)(lVar17 + 0x18) = 0;
                      (**(code **)(*plVar18 + 0x20))(plVar18);
                    }
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = iVar10;
            } while (iVar10 != 0);
          }
joined_r0x01f85920:
          plVar18 = local_80;
          if (local_88 != (long *)0x0) {
            lVar17 = local_88[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
              plVar18 = local_80;
            }
          }
        }
        local_80 = plVar18;
        if (plVar18 == (long *)0x0) goto LAB_01f85520;
      }
      lVar17 = plVar18[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
  }
LAB_01f85520:
  lVar17 = plVar16[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return;
}


