/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fd648; name: FUN_018fd648
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fd648(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88 [2];
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar17 = *(long **)(lVar14 + 0xc0);
  if (plVar17 != (long *)0x0) {
    lVar14 = plVar17[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_018fdaac:
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
  }
  local_88[0] = (long *)plVar17[0x18];
  local_a0 = local_88[0] + plVar17[0x19];
  FUN_01902880(&local_78,local_88,&local_a0);
  if (local_78 != (undefined8 *)(plVar17[0x18] + plVar17[0x19] * 8)) {
    plVar19 = (long *)*local_78;
    puVar13 = (undefined8 *)(**(code **)plVar19[10])(plVar19 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_018fd738:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_018fd830;
      lVar14 = plVar19[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_018fdaac;
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
        plVar18 = plVar19;
      } while (cVar3 != '\0');
LAB_018fd77c:
      if (plVar18 == (long *)0x0) goto LAB_018fd7bc;
      if (plVar18[0x1a] == 0) {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
      }
      else {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_019d08dc(&local_78,plVar18[0x1a] + 0x1c0);
        puVar13 = local_78;
        puVar8 = PTR_DAT_0437c670;
        puVar7 = PTR_DAT_0437c668;
        puVar6 = PTR_DAT_043794d8;
        puVar5 = PTR_DAT_043794d0;
        if (local_78 != (undefined8 *)0x0) {
          if (*(int *)((long)local_78 + 0xc) == 0) {
LAB_018fdb34:
            plVar19 = (long *)0x0;
            puVar13 = local_78;
          }
          else {
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar11 = *(int *)((long)local_78 + 0xc);
            while( true ) {
              plVar19 = (long *)puVar13[2];
              if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
                if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                  uVar12 = FUN_0087f8f0();
                  *(undefined8 *)puVar6 = uVar12;
                  __cxa_guard_release(puVar5);
                }
                *(undefined **)puVar8 = puVar6;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                if (plVar19 == (long *)0x0) goto LAB_018fdb34;
                if (plVar19 == (long *)puVar8) break;
                plVar19 = (long *)*plVar19;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) break;
              ClearExclusiveLocal();
LAB_018fd8f4:
              iVar11 = iVar10;
              if (iVar10 == 0) goto LAB_018fdb34;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_018fd8f4;
            lVar14 = puVar13[3];
            plVar19 = (long *)0x0;
            puVar13 = local_78;
            if (lVar14 != 0) {
              plVar19 = (long *)(lVar14 + -0x50);
            }
          }
          local_78 = puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar13 + 1);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              puVar13[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_88[0] = (long *)*puVar13;
              FUN_02a44274(lVar14 + 0xd8,local_88);
            }
          }
          if (plVar19 != (long *)0x0) {
            plVar20 = (long *)plVar19[0xe];
            if (plVar20 == (long *)0x0) {
              if (_DAT_00000210 == 2) {
LAB_018fdb90:
                FUN_0199bf58(&local_78,0);
joined_r0x018fdba0:
                if (local_78 != (undefined8 *)0x0) {
LAB_018fdba4:
                  puVar9 = local_78;
                  puVar7 = PTR_DAT_04379fd0;
                  puVar6 = PTR_DAT_04379fc8;
                  puVar5 = PTR_DAT_043794d0;
                  puVar13 = local_78;
                  if (*(int *)((long)local_78 + 0xc) != 0) {
                    piVar1 = (int *)((long)local_78 + 0xc);
                    iVar11 = *(int *)((long)local_78 + 0xc);
                    do {
                      plVar20 = (long *)puVar9[2];
                      if (((*puVar6 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                        if (((*puVar5 & 1) == 0) &&
                           (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
                          uVar12 = FUN_0087f8f0();
                          *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                          __cxa_guard_release(puVar5);
                        }
                        *(undefined **)puVar7 = PTR_DAT_043794d8;
                        __cxa_guard_release(puVar6);
                      }
                      while( true ) {
                        puVar13 = local_78;
                        if (plVar20 == (long *)0x0) goto joined_r0x018fdf60;
                        if (plVar20 == (long *)puVar7) break;
                        plVar20 = (long *)*plVar20;
                      }
                      iVar10 = *piVar1;
                      if (iVar10 == iVar11) {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar4) {
                          *piVar1 = iVar11 + 1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                        if (cVar3 == '\0') {
                          lVar14 = puVar9[3];
                          if (lVar14 != 0) {
                            plVar21 = (long *)(lVar14 + -0x50);
                            FUN_018f8f5c(local_88,plVar21);
                            FUN_018fb610(&local_90,local_88);
                            plVar20 = local_88[0];
                            if (local_90 != (long *)0x0) {
                              local_a0 = (undefined8 *)0x0;
                              uStack_98 = 0;
                              FUN_01901970(&local_a0,local_90 + 0x5e);
                              FUN_018fc9a0(&local_68,&local_a0);
                              if (local_68 != (long *)0x0) {
                                uVar16 = local_68[0x43];
                                if (((uint)(uVar16 >> 0x20) <
                                     (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) -
                                                   *(long *)(DAT_043ef5a8 + 0x100)) >> 2)) &&
                                   (iVar11 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) +
                                                     (uVar16 >> 0x20) * 4), -1 < iVar11)) {
                                  *(ulong *)(*(long *)(*(long *)(DAT_043ef5a8 + 0x60) +
                                                      (long)iVar11 * 0x20) + 0xd0) = uVar16;
                                }
                                lVar15 = local_68[0xb];
                                piVar1 = (int *)(lVar15 + 0xc);
                                do {
                                  iVar11 = *piVar1;
                                  cVar3 = '\x01';
                                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar4) {
                                    *piVar1 = iVar11 + -1;
                                    cVar3 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar3 != '\0');
                                if (iVar11 + -1 == 0) {
                                  *(undefined8 *)(lVar15 + 0x18) = 0;
                                  (**(code **)(*local_68 + 0x20))();
                                }
                              }
                              FUN_01a4bfc0(local_90,1);
                              puVar13 = local_a0;
                              if (local_a0 != (undefined8 *)0x0) {
                                piVar1 = (int *)(local_a0 + 1);
                                do {
                                  iVar11 = *piVar1;
                                  cVar3 = '\x01';
                                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar4) {
                                    *piVar1 = iVar11 + -1;
                                    cVar3 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar3 != '\0');
                                if (iVar11 + -1 == 0) {
                                  local_a0[2] = 0;
                                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0))
                                  {
                                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,
                                                 &PTR_LOOP_0411a000);
                                    __cxa_guard_release(PTR_DAT_04379498);
                                  }
                                  lVar15 = *(long *)PTR_DAT_043794a0;
                                  *(long *)PTR_DAT_043794a8 = lVar15;
                                  local_68 = (long *)*puVar13;
                                  FUN_02a44274(lVar15 + 0xd8,&local_68);
                                }
                              }
                              plVar20 = local_88[0];
                              if (local_90 != (long *)0x0) {
                                lVar15 = local_90[0xb];
                                piVar1 = (int *)(lVar15 + 0xc);
                                do {
                                  iVar11 = *piVar1;
                                  cVar3 = '\x01';
                                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar4) {
                                    *piVar1 = iVar11 + -1;
                                    cVar3 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar3 != '\0');
                                if (iVar11 + -1 == 0) {
                                  *(undefined8 *)(lVar15 + 0x18) = 0;
                                  (**(code **)(*local_90 + 0x20))();
                                  plVar20 = local_88[0];
                                }
                              }
                            }
                            local_88[0] = plVar20;
                            if (plVar20 != (long *)0x0) {
                              plVar2 = plVar20 + 1;
                              do {
                                iVar11 = (int)*plVar2 + -1;
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                                if (bVar4) {
                                  *(int *)plVar2 = iVar11;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if (iVar11 == 0) {
                                plVar20[2] = 0;
                                if (((*PTR_DAT_04379498 & 1) == 0) &&
                                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000)
                                  ;
                                  __cxa_guard_release(PTR_DAT_04379498);
                                }
                                lVar15 = *(long *)PTR_DAT_043794a0;
                                *(long *)PTR_DAT_043794a8 = lVar15;
                                local_a0 = (undefined8 *)*plVar20;
                                FUN_02a44274(lVar15 + 0xd8,&local_a0);
                              }
                            }
                            lVar14 = *(long *)(lVar14 + 8);
                            piVar1 = (int *)(lVar14 + 0xc);
                            do {
                              iVar11 = *piVar1;
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                              if (bVar4) {
                                *piVar1 = iVar11 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                            puVar13 = local_78;
                            if (iVar11 + -1 == 0) {
                              *(undefined8 *)(lVar14 + 0x18) = 0;
                              (**(code **)(*plVar21 + 0x20))(plVar21);
                              puVar13 = local_78;
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
joined_r0x018fdf60:
                  local_78 = puVar13;
                  if (puVar13 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar13 + 1);
                    do {
                      iVar11 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar11 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar11 + -1 == 0) {
                      puVar13[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar14 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar14;
                      local_88[0] = (long *)*puVar13;
                      FUN_02a44274(lVar14 + 0xd8,local_88);
                    }
                  }
                }
              }
            }
            else {
              lVar14 = plVar20[0xb];
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_018fdaac;
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
              lVar15 = plVar20[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              lVar14 = plVar20[0x42];
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*plVar20 + 0x20))(plVar20);
              }
              if ((int)lVar14 == 2) {
                plVar20 = (long *)plVar19[0xe];
                if (plVar20 == (long *)0x0) goto LAB_018fdb90;
                lVar14 = plVar20[0xb];
                if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_018fdaac;
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
                FUN_0199bf58(&local_78,plVar20);
                lVar14 = plVar20[0xb];
                piVar1 = (int *)(lVar14 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 != 0) goto joined_r0x018fdba0;
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*plVar20 + 0x20))(plVar20);
                if (local_78 == (undefined8 *)0x0) goto LAB_018fda78;
                goto LAB_018fdba4;
              }
            }
LAB_018fda78:
            lVar14 = plVar19[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar19 + 0x20))(plVar19);
            }
          }
        }
      }
      lVar14 = plVar18[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 != 0) goto LAB_018fd7bc;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
      if (plVar17 == (long *)0x0) {
        return;
      }
      goto LAB_018fd7c0;
    }
  }
LAB_018fd7bc:
  if (plVar17 != (long *)0x0) {
LAB_018fd7c0:
    lVar14 = plVar17[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return;
LAB_018fd830:
  puVar13 = (undefined8 *)*puVar13;
  plVar18 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_018fd77c;
  goto LAB_018fd738;
}


