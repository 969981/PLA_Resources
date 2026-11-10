/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013246b0; name: FUN_013246b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013246b0(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar16 = *(long **)(lVar14 + 0xc0);
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01324b48:
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
  local_68 = plVar16[0x18];
  local_70 = local_68 + plVar16[0x19] * 8;
  FUN_0132a510(&local_80,&local_68,&local_70);
  if (local_80 != (long *)(plVar16[0x18] + plVar16[0x19] * 8)) {
    plVar18 = (long *)*local_80;
    puVar13 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_013247a0:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01324898;
      lVar14 = plVar18[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01324b48;
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
        plVar17 = plVar18;
      } while (cVar3 != '\0');
LAB_013247e4:
      if (plVar17 == (long *)0x0) goto LAB_01324824;
      if (plVar17[0x1a] == 0) {
        local_80 = (long *)0x0;
        uStack_78 = 0;
      }
      else {
        local_80 = (long *)0x0;
        uStack_78 = 0;
        FUN_019d08dc(&local_80,plVar17[0x1a] + 0x1c0);
        plVar18 = local_80;
        puVar9 = PTR_DAT_0437c670;
        puVar8 = PTR_DAT_0437c668;
        puVar7 = PTR_DAT_043794d8;
        puVar6 = PTR_DAT_043794d0;
        if (local_80 != (long *)0x0) {
          if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_01324be4:
            plVar18 = (long *)0x0;
            plVar20 = local_80;
          }
          else {
            piVar1 = (int *)((long)local_80 + 0xc);
            iVar11 = *(int *)((long)local_80 + 0xc);
            while( true ) {
              plVar20 = (long *)plVar18[2];
              if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                  uVar12 = FUN_0087f8f0();
                  *(undefined8 *)puVar7 = uVar12;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)puVar9 = puVar7;
                __cxa_guard_release(puVar8);
              }
              while( true ) {
                if (plVar20 == (long *)0x0) goto LAB_01324be4;
                if (plVar20 == (long *)puVar9) break;
                plVar20 = (long *)*plVar20;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) break;
              ClearExclusiveLocal();
LAB_0132495c:
              iVar11 = iVar10;
              if (iVar10 == 0) goto LAB_01324be4;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0132495c;
            lVar14 = plVar18[3];
            plVar18 = (long *)0x0;
            plVar20 = local_80;
            if (lVar14 != 0) {
              plVar18 = (long *)(lVar14 + -0x50);
            }
          }
          local_80 = plVar20;
          if (plVar20 != (long *)0x0) {
            plVar19 = plVar20 + 1;
            do {
              iVar11 = (int)*plVar19 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar4) {
                *(int *)plVar19 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 == 0) {
              plVar20[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar14 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar14;
              local_68 = *plVar20;
              FUN_02a44274(lVar14 + 0xd8,&local_68);
            }
          }
          if (plVar18 != (long *)0x0) {
            plVar20 = (long *)plVar18[0xe];
            if (plVar20 == (long *)0x0) {
              if (_DAT_00000210 == 2) {
                plVar20 = (long *)0x0;
                bVar4 = true;
LAB_01324ab4:
                FUN_0199eeac(&local_80,plVar20);
                plVar19 = local_80;
                if (local_80 == (long *)0x0) {
                  plVar19 = (long *)0x0;
                }
                else {
                  if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_01324db0:
                    plVar19 = (long *)0x0;
                    plVar21 = local_80;
                  }
                  else {
                    piVar1 = (int *)((long)local_80 + 0xc);
                    iVar11 = *(int *)((long)local_80 + 0xc);
                    while( true ) {
                      plVar21 = (long *)plVar19[2];
                      if (((*PTR_DAT_0437ee88 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437ee88), iVar10 != 0)) {
                        if (((*puVar6 & 1) == 0) &&
                           (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                          uVar12 = FUN_0087f8f0();
                          *(undefined8 *)puVar7 = uVar12;
                          __cxa_guard_release(puVar6);
                        }
                        *(undefined **)PTR_DAT_0437ee90 = puVar7;
                        __cxa_guard_release(PTR_DAT_0437ee88);
                      }
                      while( true ) {
                        if (plVar21 == (long *)0x0) goto LAB_01324db0;
                        if (plVar21 == (long *)PTR_DAT_0437ee90) break;
                        plVar21 = (long *)*plVar21;
                      }
                      iVar10 = *piVar1;
                      if (iVar10 == iVar11) break;
                      ClearExclusiveLocal();
LAB_01324c8c:
                      iVar11 = iVar10;
                      if (iVar10 == 0) goto LAB_01324db0;
                    }
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar11 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 != '\0') goto LAB_01324c8c;
                    lVar14 = plVar19[3];
                    plVar19 = (long *)0x0;
                    plVar21 = local_80;
                    if (lVar14 != 0) {
                      plVar19 = (long *)(lVar14 + -0x50);
                    }
                  }
                  local_80 = plVar21;
                  if (plVar21 != (long *)0x0) {
                    plVar2 = plVar21 + 1;
                    do {
                      iVar11 = (int)*plVar2 + -1;
                      cVar3 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar5) {
                        *(int *)plVar2 = iVar11;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar11 == 0) {
                      plVar21[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar14 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar14;
                      local_68 = *plVar21;
                      FUN_02a44274(lVar14 + 0xd8,&local_68);
                    }
                  }
                }
                if (!bVar4) {
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
                  if (iVar11 + -1 == 0) {
                    *(undefined8 *)(lVar14 + 0x18) = 0;
                    (**(code **)(*plVar20 + 0x20))(plVar20);
                  }
                }
                if (plVar19 != (long *)0x0) {
                  FUN_019c7f44(plVar19);
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
            else {
              lVar14 = plVar20[0xb];
              if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01324b48;
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
                plVar20 = (long *)plVar18[0xe];
                if (plVar20 == (long *)0x0) {
                  bVar4 = true;
                }
                else {
                  lVar14 = plVar20[0xb];
                  if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01324b48;
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
                  bVar4 = false;
                }
                goto LAB_01324ab4;
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
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
          }
        }
      }
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
      if (iVar11 + -1 != 0) goto LAB_01324824;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
      if (plVar16 == (long *)0x0) {
        return;
      }
      goto LAB_01324828;
    }
  }
LAB_01324824:
  if (plVar16 != (long *)0x0) {
LAB_01324828:
    lVar14 = plVar16[0xb];
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
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return;
LAB_01324898:
  puVar13 = (undefined8 *)*puVar13;
  plVar17 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_013247e4;
  goto LAB_013247a0;
}


