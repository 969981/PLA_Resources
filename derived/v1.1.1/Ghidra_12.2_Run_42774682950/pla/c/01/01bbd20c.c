/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbd20c; name: FUN_01bbd20c
 */


void FUN_01bbd20c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_430 [2];
  long *local_420;
  long *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  long *local_250;
  long *local_248;
  long *local_240;
  long *local_238;
  undefined8 local_230;
  undefined5 local_228;
  undefined3 uStack_223;
  undefined5 uStack_220;
  undefined1 local_210;
  undefined1 local_150;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [64];
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((((*(char *)(param_1 + 0x3a8) != '\0') && (*(char *)(param_1 + 0x3ab) == '\0')) &&
      (lVar14 = *(long *)(param_1 + 0x2e8), lVar14 != 0)) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar9 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) {
          return;
        }
        if (plVar16 == (long *)puVar8) break;
        plVar16 = (long *)*plVar16;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return;
          }
          plVar16 = (long *)(lVar14 + -0x50);
          FUN_0199c138(&local_78,plVar16);
          if (local_78 != (long *)0x0) {
            FUN_0199c048(local_430,plVar16);
            if (local_430[0] == (long *)0x0) {
              local_80 = (long *)0x0;
            }
            else {
              FUN_00ccf754(&local_80);
              plVar13 = local_430[0];
              if (local_430[0] != (long *)0x0) {
                plVar15 = local_430[0] + 1;
                do {
                  iVar9 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 == 0) {
                  local_430[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_240 = (long *)*plVar13;
                  FUN_02a44274(lVar12 + 0xd8,&local_240);
                }
              }
            }
            if (local_80 != (long *)0x0) {
              local_210 = 0;
              local_150 = 0;
              local_e0 = 0;
              local_dc = 0;
              local_d8[0] = 0;
              local_98 = 0;
              local_94 = 0;
              local_90 = 0;
              local_228 = 0;
              local_230 = 0;
              local_240 = (long *)0x0;
              local_238 = (long *)0x0;
              uStack_223 = 0;
              uStack_220 = 0;
              FUN_009c69bc(local_430,local_78);
              plVar13 = local_240;
              local_240 = (long *)0x0;
              if (plVar13 != (long *)0x0) {
                lVar12 = plVar13[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))();
                }
              }
              local_240 = local_430[0];
              FUN_01bbdc14(local_430,param_1);
              if (local_430[0] == (long *)0x0) {
                local_250 = (long *)0x0;
              }
              else {
                FUN_00b911c4(&local_250);
              }
              FUN_009c69bc(&local_248,local_250);
              plVar13 = local_238;
              local_238 = (long *)0x0;
              if (plVar13 != (long *)0x0) {
                lVar12 = plVar13[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))();
                }
              }
              local_238 = local_248;
              local_248 = (long *)0x0;
              plVar13 = local_430[0];
              if (local_250 != (long *)0x0) {
                lVar12 = local_250[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_250 + 0x20))();
                  plVar13 = local_430[0];
                }
              }
              local_430[0] = plVar13;
              if (plVar13 != (long *)0x0) {
                plVar15 = plVar13 + 1;
                do {
                  iVar9 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 == 0) {
                  plVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_70[0] = *plVar13;
                  FUN_02a44274(lVar12 + 0xd8,local_70);
                }
              }
              FUN_01b3a354(local_430,param_2);
              FUN_0095a500(&local_230,local_430);
              plVar13 = local_430[0];
              if (local_430[0] != (long *)0x0) {
                plVar15 = local_430[0] + 1;
                do {
                  iVar9 = (int)*plVar15 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar4) {
                    *(int *)plVar15 = iVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 == 0) {
                  local_430[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar12;
                  local_70[0] = *plVar13;
                  FUN_02a44274(lVar12 + 0xd8,local_70);
                }
              }
              local_e0 = CONCAT11(1,(undefined1)local_e0);
              local_dc = *(undefined4 *)(param_1 + 0x1f0);
              local_98 = FUN_01bba68c(param_1);
              FUN_01bc06b4(local_d8,param_1 + 0x370);
              FUN_0199c048(local_430,plVar16);
              if (local_430[0] == (long *)0x0) {
                local_248 = (long *)0x0;
              }
              else {
                FUN_00ccf754(&local_248);
                plVar13 = local_430[0];
                if (local_430[0] != (long *)0x0) {
                  plVar15 = local_430[0] + 1;
                  do {
                    iVar9 = (int)*plVar15 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar4) {
                      *(int *)plVar15 = iVar9;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 == 0) {
                    local_430[0][2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar12;
                    local_70[0] = *plVar13;
                    FUN_02a44274(lVar12 + 0xd8,local_70);
                  }
                }
              }
              if (local_248 != (long *)0x0) {
                FUN_019bbcc0(local_430);
                if (local_430[0] == (long *)0x0) {
                  local_250 = (long *)0x0;
                }
                else {
                  FUN_0165ce38(&local_250);
                  plVar13 = local_430[0];
                  if (local_430[0] != (long *)0x0) {
                    plVar15 = local_430[0] + 1;
                    do {
                      iVar9 = (int)*plVar15 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar4) {
                        *(int *)plVar15 = iVar9;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar9 == 0) {
                      local_430[0][2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar12 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar12;
                      local_70[0] = *plVar13;
                      FUN_02a44274(lVar12 + 0xd8,local_70);
                    }
                  }
                }
                if (local_250 != (long *)0x0) {
                  FUN_018dcf20(param_2);
                  FUN_019bbda4(local_430,local_248);
                  plVar13 = local_430[0];
                  if (local_430[0] != (long *)0x0) {
                    if (*(int *)((long)local_430[0] + 0xc) == 0) {
LAB_01bbdbc8:
                      plVar15 = (long *)0x0;
                      plVar13 = local_430[0];
                    }
                    else {
                      piVar1 = (int *)((long)local_430[0] + 0xc);
                      iVar9 = *(int *)((long)local_430[0] + 0xc);
                      while( true ) {
                        plVar15 = (long *)plVar13[2];
                        if (((*puVar5 & 1) == 0) &&
                           (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                          uVar11 = FUN_0087f8f0();
                          *(undefined8 *)puVar6 = uVar11;
                          __cxa_guard_release(puVar5);
                          if (plVar15 != (long *)0x0) goto LAB_01bbdabc;
                          goto LAB_01bbdbc8;
                        }
                        while( true ) {
                          if (plVar15 == (long *)0x0) goto LAB_01bbdbc8;
LAB_01bbdabc:
                          if (plVar15 == (long *)puVar6) break;
                          plVar15 = (long *)*plVar15;
                        }
                        iVar10 = *piVar1;
                        if (iVar10 == iVar9) break;
                        ClearExclusiveLocal();
LAB_01bbdaa4:
                        iVar9 = iVar10;
                        if (iVar10 == 0) goto LAB_01bbdbc8;
                      }
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar9 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 != '\0') goto LAB_01bbdaa4;
                      lVar12 = plVar13[3];
                      if (lVar12 == 0) goto LAB_01bbdbc8;
                      plVar13 = (long *)(lVar12 + -8);
                      if (local_420 != (long *)0x0) {
                        (**(code **)(*local_420 + 0x10))(local_420);
                      }
                      (**(code **)(*plVar13 + 0x18))(plVar13);
                      plVar13 = local_430[0];
                      plVar15 = local_420;
                    }
                    if (plVar13 != (long *)0x0) {
                      plVar2 = plVar13 + 1;
                      do {
                        iVar9 = (int)*plVar2 + -1;
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar4) {
                          *(int *)plVar2 = iVar9;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar9 == 0) {
                        plVar13[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar12 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar12;
                        local_70[0] = *plVar13;
                        FUN_02a44274(lVar12 + 0xd8,local_70);
                      }
                    }
                    if (plVar15 != (long *)0x0) {
                      (**(code **)(*plVar15 + 0x38))(plVar15,0);
                      (**(code **)(*plVar15 + 0x18))(plVar15);
                    }
                  }
                  FUN_0167bad8(local_430,&local_240);
                  local_268 = 0;
                  uStack_260 = 0;
                  local_270 = (long *)0x0;
                  FUN_0167b2b4(local_250[0xf],local_430);
                  plVar13 = local_270;
                  *(undefined1 *)(param_1 + 0x3aa) = 1;
                  if (local_270 != (long *)0x0) {
                    plVar15 = local_270 + 1;
                    do {
                      iVar9 = (int)*plVar15 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar4) {
                        *(int *)plVar15 = iVar9;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar9 == 0) {
                      local_270[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar12 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar12;
                      local_70[0] = *plVar13;
                      FUN_02a44274(lVar12 + 0xd8,local_70);
                    }
                  }
                  FUN_0167b61c(local_430);
                  if (local_250 != (long *)0x0) {
                    lVar12 = local_250[0xb];
                    piVar1 = (int *)(lVar12 + 0xc);
                    do {
                      iVar9 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar9 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar9 + -1 == 0) {
                      *(undefined8 *)(lVar12 + 0x18) = 0;
                      (**(code **)(*local_250 + 0x20))();
                    }
                  }
                }
                if (local_248 != (long *)0x0) {
                  lVar12 = local_248[0xb];
                  piVar1 = (int *)(lVar12 + 0xc);
                  do {
                    iVar9 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*local_248 + 0x20))();
                  }
                }
              }
              FUN_0167b61c(&local_240);
              if (local_80 != (long *)0x0) {
                lVar12 = local_80[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar9 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
            }
            if (local_78 != (long *)0x0) {
              lVar12 = local_78[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*local_78 + 0x20))();
              }
            }
          }
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


