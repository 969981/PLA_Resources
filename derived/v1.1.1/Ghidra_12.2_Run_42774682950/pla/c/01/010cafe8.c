/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cafe8; name: FUN_010cafe8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010cafe8(long param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long local_70;
  long local_68;
  
  if ((*(int *)(param_1 + 0x50) == 0) &&
     (((*(char *)(param_1 + 0x54) != '\0' || (*(char *)(param_1 + 0x5c) != '\0')) &&
      ((*(byte *)(param_1 + 0x60) & 0x3f) == 0)))) {
    if (*(char *)(param_1 + 0x54) == '\0') {
      *(undefined1 *)(param_1 + 0x6c) = 0;
    }
    else {
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379690), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar14 = *(long *)PTR_DAT_04379698;
      *(long *)PTR_DAT_043796a0 = lVar14;
      plVar17 = *(long **)(*(long *)(lVar14 + 0x50) + 0x30);
      if (plVar17 == (long *)0x0) {
        FUN_01469320(0);
        *(undefined1 *)(param_1 + 0x6c) = 1;
      }
      else {
        lVar14 = plVar17[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_010cb88c;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar12;
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
        FUN_01469320(plVar17);
        *(undefined1 *)(param_1 + 0x6c) = 1;
        lVar14 = plVar17[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar14 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar14;
    if (lVar14 != 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar15 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar15;
      plVar17 = *(long **)(lVar15 + 0xc0);
      if (plVar17 != (long *)0x0) {
        lVar15 = plVar17[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010cb88c;
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_68 = plVar17[0x18];
      local_70 = local_68 + plVar17[0x19] * 8;
      FUN_010cc810(&local_f0,&local_68,&local_70);
      if (local_f0 != (code *)(plVar17[0x18] + plVar17[0x19] * 8)) {
        plVar19 = *(long **)local_f0;
        puVar13 = (undefined8 *)(**(code **)plVar19[10])(plVar19 + 10);
        if (((*PTR_DAT_0437c678 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
          uVar12 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_0437c680 = uVar12;
          __cxa_guard_release(PTR_DAT_0437c678);
        }
        if (puVar13 != (undefined8 *)0x0) {
LAB_010cb1e4:
          if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto code_r0x010cb1ec;
          lVar15 = plVar19[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010cb88c;
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar12;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            plVar18 = plVar19;
          } while (cVar3 != '\0');
LAB_010cb238:
          if (plVar18 == (long *)0x0) goto LAB_010cb278;
          if (plVar18[0x1a] == 0) {
            local_f0 = (code *)0x0;
            local_e8 = (code *)0x0;
          }
          else {
            local_f0 = (code *)0x0;
            local_e8 = (code *)0x0;
            FUN_019d08dc(&local_f0,plVar18[0x1a] + 0x1c0);
            pcVar6 = local_f0;
            puVar9 = PTR_DAT_0437c670;
            puVar8 = PTR_DAT_0437c668;
            puVar7 = PTR_DAT_043794d0;
            if (local_f0 != (code *)0x0) {
              if (*(int *)(local_f0 + 0xc) == 0) {
LAB_010cb910:
                plVar19 = (long *)0x0;
                pcVar6 = local_f0;
              }
              else {
                pcVar2 = local_f0 + 0xc;
                iVar10 = *(int *)(local_f0 + 0xc);
                while( true ) {
                  plVar19 = *(long **)(pcVar6 + 0x10);
                  if (((*puVar8 & 1) != 0) || (iVar11 = __cxa_guard_acquire(puVar8), iVar11 == 0)) {
                    if (plVar19 != (long *)0x0) goto LAB_010cb5dc;
                    goto LAB_010cb910;
                  }
                  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                    uVar12 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                    __cxa_guard_release(puVar7);
                  }
                  *(undefined **)puVar9 = PTR_DAT_043794d8;
                  __cxa_guard_release(puVar8);
                  while( true ) {
                    if (plVar19 == (long *)0x0) goto LAB_010cb910;
LAB_010cb5dc:
                    if (plVar19 == (long *)puVar9) break;
                    plVar19 = (long *)*plVar19;
                  }
                  iVar11 = *(int *)pcVar2;
                  if (iVar11 == iVar10) break;
                  ClearExclusiveLocal();
LAB_010cb5c4:
                  iVar10 = iVar11;
                  if (iVar11 == 0) goto LAB_010cb910;
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar4) {
                  *(int *)pcVar2 = iVar10 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 != '\0') goto LAB_010cb5c4;
                lVar15 = *(long *)(pcVar6 + 0x18);
                plVar19 = (long *)0x0;
                pcVar6 = local_f0;
                if (lVar15 != 0) {
                  plVar19 = (long *)(lVar15 + -0x50);
                }
              }
              local_f0 = pcVar6;
              if (pcVar6 != (code *)0x0) {
                pcVar2 = pcVar6 + 8;
                do {
                  iVar10 = *(int *)pcVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar4) {
                    *(int *)pcVar2 = iVar10 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar10 + -1 == 0) {
                  *(long *)(pcVar6 + 0x10) = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_68 = *(long *)pcVar6;
                  FUN_02a44274(lVar15 + 0xd8,&local_68);
                }
              }
              if (plVar19 != (long *)0x0) {
                plVar20 = (long *)plVar19[0xe];
                if (plVar20 == (long *)0x0) {
                  if (_DAT_00000210 == 2) {
                    plVar20 = (long *)0x0;
LAB_010cb970:
                    bVar4 = true;
LAB_010cb788:
                    FUN_0199edc8(&local_f0,plVar20);
                    pcVar6 = local_f0;
                    if (local_f0 == (code *)0x0) {
                      plVar21 = (long *)0x0;
                    }
                    else {
                      if (*(int *)(local_f0 + 0xc) == 0) {
LAB_010cba54:
                        plVar21 = (long *)0x0;
                        pcVar6 = local_f0;
                      }
                      else {
                        pcVar2 = local_f0 + 0xc;
                        iVar10 = *(int *)(local_f0 + 0xc);
                        while( true ) {
                          plVar21 = *(long **)(pcVar6 + 0x10);
                          if (((*PTR_DAT_043796f0 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_043796f0), iVar11 != 0)) {
                            if (((*PTR_DAT_043794d0 & 1) == 0) &&
                               (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                              uVar12 = FUN_0087f8f0();
                              *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                              __cxa_guard_release(PTR_DAT_043794d0);
                            }
                            *(undefined **)PTR_DAT_043796f8 = PTR_DAT_043794d8;
                            __cxa_guard_release(PTR_DAT_043796f0);
                          }
                          while( true ) {
                            if (plVar21 == (long *)0x0) goto LAB_010cba54;
                            if (plVar21 == (long *)PTR_DAT_043796f8) break;
                            plVar21 = (long *)*plVar21;
                          }
                          iVar11 = *(int *)pcVar2;
                          if (iVar11 == iVar10) break;
                          ClearExclusiveLocal();
LAB_010cb98c:
                          iVar10 = iVar11;
                          if (iVar11 == 0) goto LAB_010cba54;
                        }
                        cVar3 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                        if (bVar5) {
                          *(int *)pcVar2 = iVar10 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        if (cVar3 != '\0') goto LAB_010cb98c;
                        lVar15 = *(long *)(pcVar6 + 0x18);
                        plVar21 = (long *)0x0;
                        pcVar6 = local_f0;
                        if (lVar15 != 0) {
                          plVar21 = (long *)(lVar15 + -0x50);
                        }
                      }
                      local_f0 = pcVar6;
                      if (pcVar6 != (code *)0x0) {
                        pcVar2 = pcVar6 + 8;
                        do {
                          iVar10 = *(int *)pcVar2;
                          cVar3 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                          if (bVar5) {
                            *(int *)pcVar2 = iVar10 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (iVar10 + -1 == 0) {
                          *(long *)(pcVar6 + 0x10) = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar15 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar15;
                          local_68 = *(long *)pcVar6;
                          FUN_02a44274(lVar15 + 0xd8,&local_68);
                        }
                      }
                    }
                    if (!bVar4) {
                      lVar15 = plVar20[0xb];
                      piVar1 = (int *)(lVar15 + 0xc);
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
                        *(undefined8 *)(lVar15 + 0x18) = 0;
                        (**(code **)(*plVar20 + 0x20))(plVar20);
                      }
                    }
                    if (plVar21 != (long *)0x0) {
                      plVar20 = *(long **)(lVar14 + 0x260);
                      if (plVar20 != (long *)0x0) {
                        lVar15 = plVar20[0xb];
                        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010cb88c;
                        if (*(long *)(lVar15 + 0x10) == 0) {
                          uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                          *(undefined8 *)(lVar15 + 0x10) = uVar12;
                        }
                        piVar1 = (int *)(lVar15 + 0xc);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar4) {
                            *piVar1 = *piVar1 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        *(long *)(param_1 + 0x70) = plVar20[0x5d];
                        lVar15 = FUN_01f26800(plVar21);
                        lVar16 = plVar20[0xb];
                        piVar1 = (int *)(lVar16 + 0xc);
                        plVar20[0x5d] = lVar15;
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
                          *(undefined8 *)(lVar16 + 0x18) = 0;
                          (**(code **)(*plVar20 + 0x20))(plVar20);
                        }
                      }
                      lVar15 = plVar21[0xb];
                      piVar1 = (int *)(lVar15 + 0xc);
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
                        *(undefined8 *)(lVar15 + 0x18) = 0;
                        (**(code **)(*plVar21 + 0x20))(plVar21);
                      }
                    }
                  }
                }
                else {
                  lVar15 = plVar20[0xb];
                  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010cb88c;
                  if (*(long *)(lVar15 + 0x10) == 0) {
                    uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                    *(undefined8 *)(lVar15 + 0x10) = uVar12;
                  }
                  piVar1 = (int *)(lVar15 + 0xc);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = *piVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  lVar16 = plVar20[0xb];
                  piVar1 = (int *)(lVar16 + 0xc);
                  lVar15 = plVar20[0x42];
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
                    *(undefined8 *)(lVar16 + 0x18) = 0;
                    (**(code **)(*plVar20 + 0x20))(plVar20);
                  }
                  if ((int)lVar15 == 2) {
                    plVar20 = (long *)plVar19[0xe];
                    if (plVar20 == (long *)0x0) goto LAB_010cb970;
                    lVar15 = plVar20[0xb];
                    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_010cb88c;
                    if (*(long *)(lVar15 + 0x10) == 0) {
                      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                      *(undefined8 *)(lVar15 + 0x10) = uVar12;
                    }
                    piVar1 = (int *)(lVar15 + 0xc);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = *piVar1 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    bVar4 = false;
                    goto LAB_010cb788;
                  }
                }
                lVar15 = plVar19[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
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
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*plVar19 + 0x20))(plVar19);
                }
              }
            }
          }
          lVar15 = plVar18[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 != 0) goto LAB_010cb278;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))(plVar18);
          plVar19 = *(long **)(lVar14 + 0x220);
          goto joined_r0x010cb42c;
        }
      }
LAB_010cb278:
      plVar19 = *(long **)(lVar14 + 0x220);
joined_r0x010cb42c:
      if (plVar19 != (long *)0x0) {
        lVar14 = plVar19[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_010cb88c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar12;
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
        *(uint *)(param_1 + 0x8c) = *(uint *)((long)plVar19 + 0x11c) & 0xfff;
        *(uint *)(param_1 + 0x88) = *(uint *)((long)plVar19 + 0x11c) >> 0xc & 0xf;
        *(uint *)(param_1 + 0x84) = *(ushort *)((long)plVar19 + 0x11e) & 0x1f;
        *(uint *)(param_1 + 0x80) = *(uint *)((long)plVar19 + 0x11c) >> 0x15 & 0x1f;
        *(uint *)(param_1 + 0x7c) = *(uint *)((long)plVar19 + 0x11c) >> 0x1a;
        lVar14 = plVar19[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
      if (plVar17 != (long *)0x0) {
        lVar14 = plVar17[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    if (*(char *)(param_1 + 0x5c) == '\0') {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 2;
      if (((*PTR_DAT_0437b648 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b648), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_0437b660,PTR_DAT_0437b650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b648);
      }
      lVar14 = *(long *)PTR_DAT_0437b650;
      *(long *)PTR_DAT_0437b658 = lVar14;
      if (lVar14 != 0) {
        local_f0 = FUN_010cc8e8;
        local_e8 = FUN_010cc90c;
        local_e0 = &LAB_010cc910;
        local_d8 = &LAB_010cc91c;
        alStack_d0[0] = param_1;
        FUN_00db6d00(lVar14,&local_f0);
        pcVar6 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined1 *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (code *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar6)(alStack_d0);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
code_r0x010cb1ec:
  puVar13 = (undefined8 *)*puVar13;
  plVar18 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_010cb238;
  goto LAB_010cb1e4;
}


