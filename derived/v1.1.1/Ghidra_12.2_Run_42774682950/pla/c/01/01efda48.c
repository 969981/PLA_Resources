/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01efda48; name: FUN_01efda48
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01efda48(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_430;
  undefined8 uStack_428;
  undefined8 *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  long *local_250;
  long *local_248;
  undefined8 local_240;
  long *local_238;
  undefined8 local_230;
  undefined5 local_228;
  undefined3 uStack_223;
  undefined5 uStack_220;
  undefined1 local_210;
  undefined1 local_150;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  long *local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x80);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar10 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        if (plVar17 == (long *)puVar9) break;
        plVar17 = (long *)*plVar17;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 == 0) {
            return 0;
          }
          plVar17 = (long *)(lVar15 + -0x50);
          FUN_0199c048(&local_430,plVar17);
          if (local_430 == (undefined8 *)0x0) {
            local_78 = (long *)0x0;
          }
          else {
            FUN_00ccf754(&local_78);
            puVar5 = local_430;
            if (local_430 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_430 + 1);
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
                local_430[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar13 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar13;
                local_240 = *puVar5;
                FUN_02a44274(lVar13 + 0xd8,&local_240);
              }
            }
          }
          if (local_78 != (long *)0x0) {
            if (*(long *)(param_1 + 0xa8) == 0) {
              local_80 = (long *)0x0;
LAB_01efdb40:
              bVar4 = false;
            }
            else {
              FUN_009b3e90(&local_80);
              if (local_80 == (long *)0x0) goto LAB_01efdb40;
              local_430 = (undefined8 *)0x0;
              uStack_428 = 0;
              FUN_009ab200(&local_430,local_80 + 0x68);
              puVar5 = local_430;
              if (local_430 == (undefined8 *)0x0) goto LAB_01efdb40;
              if (*(int *)((long)local_430 + 0xc) == 0) {
LAB_01efddac:
                plVar16 = (long *)0x0;
                puVar5 = local_430;
              }
              else {
                piVar1 = (int *)((long)local_430 + 0xc);
                iVar10 = *(int *)((long)local_430 + 0xc);
                while( true ) {
                  plVar16 = (long *)puVar5[2];
                  lVar13 = FUN_009ccde4();
                  while( true ) {
                    if (plVar16 == (long *)0x0) goto LAB_01efddac;
                    if (plVar16 == (long *)lVar13) break;
                    plVar16 = (long *)*plVar16;
                  }
                  iVar11 = *piVar1;
                  if (iVar11 == iVar10) break;
                  ClearExclusiveLocal();
LAB_01efdd14:
                  iVar10 = iVar11;
                  if (iVar11 == 0) goto LAB_01efddac;
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_01efdd14;
                lVar13 = puVar5[3];
                plVar16 = (long *)0x0;
                puVar5 = local_430;
                if (lVar13 != 0) {
                  plVar16 = (long *)(lVar13 + -0x50);
                }
              }
              local_430 = puVar5;
              if (puVar5 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar5 + 1);
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
                  puVar5[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar13 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar13;
                  local_240 = *puVar5;
                  FUN_02a44274(lVar13 + 0xd8,&local_240);
                }
              }
              if (plVar16 == (long *)0x0) goto LAB_01efdb40;
              local_210 = 0;
              local_150 = 0;
              local_e0 = 0;
              local_dc = 0;
              local_d8 = 0;
              local_98 = 0;
              local_94 = 0;
              local_90 = 0;
              local_228 = 0;
              local_230 = 0;
              local_240 = 0;
              local_238 = (long *)0x0;
              uStack_223 = 0;
              uStack_220 = 0;
              FUN_009c69bc(&local_430,plVar16);
              plVar18 = local_238;
              local_238 = (long *)0x0;
              if (plVar18 != (long *)0x0) {
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
                  (**(code **)(*plVar18 + 0x20))();
                }
              }
              puVar7 = PTR_DAT_04382138;
              puVar6 = PTR_DAT_04382130;
              local_238 = local_430;
              if (*(char *)(param_1 + 0x260) == '\0') {
                local_e0 = CONCAT11(local_e0._1_1_,*(undefined1 *)(param_1 + 0xd0));
              }
              lVar13 = *(long *)(param_1 + 0x98);
              if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
                piVar1 = (int *)(lVar13 + 0xc);
                iVar10 = *(int *)(lVar13 + 0xc);
                do {
                  plVar18 = *(long **)(lVar13 + 0x10);
                  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                    uVar12 = FUN_01913b5c();
                    *(undefined8 *)puVar7 = uVar12;
                    __cxa_guard_release(puVar6);
                  }
                  while( true ) {
                    if (plVar18 == (long *)0x0) goto LAB_01efe064;
                    if (plVar18 == (long *)puVar7) break;
                    plVar18 = (long *)*plVar18;
                  }
                  iVar11 = *piVar1;
                  if (iVar11 == iVar10) {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar10 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') {
                      lVar13 = *(long *)(lVar13 + 0x18);
                      plVar18 = (long *)(lVar13 + -0x50);
                      if (lVar13 != 0) {
                        FUN_01ad257c(&local_430,plVar18);
                        FUN_0095a500(&local_230,&local_430);
                        puVar5 = local_430;
                        if (local_430 != (undefined8 *)0x0) {
                          piVar1 = (int *)(local_430 + 1);
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
                            local_430[2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar14 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar14;
                            local_70[0] = *puVar5;
                            FUN_02a44274(lVar14 + 0xd8,local_70);
                          }
                        }
                        lVar13 = *(long *)(lVar13 + 8);
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
                      break;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar10 = iVar11;
                } while (iVar11 != 0);
              }
LAB_01efe064:
              FUN_019bbcc0(&local_430,local_78);
              if (local_430 == (undefined8 *)0x0) {
                local_248 = (long *)0x0;
LAB_01efe310:
                bVar4 = false;
              }
              else {
                FUN_0165ce38(&local_248);
                puVar5 = local_430;
                if (local_430 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_430 + 1);
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
                    local_430[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar13 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar13;
                    local_70[0] = *puVar5;
                    FUN_02a44274(lVar13 + 0xd8,local_70);
                  }
                }
                if (local_248 == (long *)0x0) goto LAB_01efe310;
                FUN_019bbda4(&local_430,local_78);
                FUN_01efd91c(&local_250,&local_430);
                puVar5 = local_430;
                if (local_430 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_430 + 1);
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
                    local_430[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar13 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar13;
                    local_70[0] = *puVar5;
                    FUN_02a44274(lVar13 + 0xd8,local_70);
                  }
                }
                if ((local_250 != (long *)0x0) &&
                   ((**(code **)(*local_250 + 0x38))(local_250,0), local_250 != (long *)0x0)) {
                  (**(code **)(*local_250 + 0x18))();
                }
                FUN_0167bad8(&local_430,&local_240);
                local_268 = 0;
                uStack_260 = 0;
                local_270 = (undefined8 *)0x0;
                FUN_0167b2b4(local_248[0xf],&local_430);
                puVar5 = local_270;
                if (local_270 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_270 + 1);
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
                    local_270[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar13 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar13;
                    local_70[0] = *puVar5;
                    FUN_02a44274(lVar13 + 0xd8,local_70);
                  }
                }
                FUN_0167b61c(&local_430);
                if (local_248 != (long *)0x0) {
                  lVar13 = local_248[0xb];
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
                  if (iVar10 == 1) {
                    *(undefined8 *)(lVar13 + 0x18) = 0;
                    (**(code **)(*local_248 + 0x20))();
                  }
                }
                bVar4 = true;
              }
              FUN_0167b61c(&local_240);
              lVar13 = plVar16[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              if (!bVar4) goto LAB_01efdb40;
              bVar4 = true;
            }
            if (local_80 != (long *)0x0) {
              lVar13 = local_80[0xb];
              piVar1 = (int *)(lVar13 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar13 + 0x18) = 0;
                (**(code **)(*local_80 + 0x20))();
              }
            }
            if (bVar4) {
              bVar4 = true;
              goto joined_r0x01efdc08;
            }
          }
          bVar4 = false;
joined_r0x01efdc08:
          if (local_78 != (long *)0x0) {
            lVar13 = local_78[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_78 + 0x20))();
            }
          }
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          if (bVar4) {
            return 1;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
  return 0;
}


