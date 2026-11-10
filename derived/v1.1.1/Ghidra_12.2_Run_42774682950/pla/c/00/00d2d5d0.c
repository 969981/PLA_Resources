/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2d5d0; name: FUN_00d2d5d0
 */


void FUN_00d2d5d0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long ***local_130;
  code *local_128;
  code *local_120;
  undefined1 *local_118;
  long local_110;
  long *plStack_108;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  long *local_88;
  long local_80;
  long local_78;
  long **local_70 [2];
  
  if (*(long *)(param_1 + 0x2c0) != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    local_98 = 0;
    local_88 = (long *)0x0;
    local_80 = 0;
    uStack_a0 = 0x1fffffffffffffff;
    local_90 = 0;
    local_78 = 0;
    local_a8 = plVar9;
    plVar4 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x400,8);
    if (plVar4 == (long *)0x0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x2c0) + 0x58);
    local_80 = 0;
    local_78 = 0x80;
    local_88 = plVar4;
    if (plVar9 == (long *)0x0) {
      bVar10 = true;
    }
    else {
      lVar11 = plVar9[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00d2dad8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar10 = false;
    }
    local_70[0] = &local_a8;
    local_130 = local_70;
    FUN_00d353a4(plVar9,&local_130,0);
    if (!bVar10) {
      lVar11 = plVar9[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    local_120 = (code *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (long ***)0x0;
    local_128 = (code *)0x0;
    if (local_80 != 0) {
      plVar9 = local_88 + local_80;
      plVar4 = local_88;
      do {
        plVar12 = (long *)*plVar4;
        if (plVar12 != (long *)0x0) {
          lVar11 = plVar12[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d2dad8;
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar5;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pcVar7 = local_128;
        if (local_128 != (code *)0x0) {
          local_120 = (code *)0x0;
          local_118 = (undefined1 *)0x0;
          local_130 = (long ***)0x0;
          local_128 = (code *)0x0;
          (*pcVar7)(&local_110);
        }
        local_130 = (long ***)&LAB_00d35d40;
        local_128 = FUN_00d35d58;
        local_120 = FUN_00d35d5c;
        local_118 = &LAB_00d35d68;
        pcVar7 = (code *)plVar12[0x59];
        local_110 = param_1;
        plStack_108 = plVar12;
        if (pcVar7 == (code *)0x0) {
LAB_00d2d798:
          (*local_120)(&local_110,plVar12 + 0x5c);
          plVar12[0x59] = (long)local_128;
          plVar12[0x5b] = (long)local_118;
          plVar12[0x5a] = (long)local_120;
          plVar12[0x58] = (long)local_130;
        }
        else {
          plVar12[0x5a] = 0;
          plVar12[0x5b] = 0;
          plVar12[0x58] = 0;
          plVar12[0x59] = 0;
          (*pcVar7)(plVar12 + 0x5c);
          if (local_120 != (code *)0x0) goto LAB_00d2d798;
        }
        lVar11 = plVar12[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        pcVar7 = local_128;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar9);
      if (local_128 != (code *)0x0) {
        local_120 = (code *)0x0;
        local_118 = (undefined1 *)0x0;
        local_130 = (long ***)0x0;
        local_128 = (code *)0x0;
        (*pcVar7)(&local_110);
      }
      lVar11 = local_80;
      plVar4 = local_88;
      if (local_80 != 0) {
        plVar9 = (long *)*local_88;
        if (plVar9 != (long *)0x0) {
          lVar8 = plVar9[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar10) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar9 + 0x20))();
          }
        }
        if (lVar11 != 1) {
          plVar9 = (long *)plVar4[1];
          if (plVar9 != (long *)0x0) {
            lVar8 = plVar9[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))();
            }
          }
          if (lVar11 != 2) {
            plVar9 = (long *)plVar4[2];
            if (plVar9 != (long *)0x0) {
              lVar8 = plVar9[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar10) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))();
              }
            }
            if (lVar11 != 3) {
              plVar9 = (long *)plVar4[3];
              if (plVar9 != (long *)0x0) {
                lVar8 = plVar9[0xb];
                piVar1 = (int *)(lVar8 + 0xc);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar10) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  *(undefined8 *)(lVar8 + 0x18) = 0;
                  (**(code **)(*plVar9 + 0x20))();
                }
              }
              if (lVar11 != 4) {
                plVar9 = (long *)plVar4[4];
                lVar11 = lVar11 + -5;
                if (plVar9 != (long *)0x0) {
                  lVar8 = plVar9[0xb];
                  piVar1 = (int *)(lVar8 + 0xc);
                  do {
                    iVar2 = *piVar1;
                    cVar3 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar10) {
                      *piVar1 = iVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar2 + -1 == 0) {
                    *(undefined8 *)(lVar8 + 0x18) = 0;
                    (**(code **)(*plVar9 + 0x20))();
                  }
                }
                if (lVar11 != 0) {
                  plVar4 = plVar4 + 5;
                  do {
                    plVar9 = (long *)*plVar4;
                    lVar11 = lVar11 + -1;
                    if (plVar9 != (long *)0x0) {
                      lVar8 = plVar9[0xb];
                      piVar1 = (int *)(lVar8 + 0xc);
                      do {
                        iVar2 = *piVar1;
                        cVar3 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar10) {
                          *piVar1 = iVar2 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if (iVar2 + -1 == 0) {
                        *(undefined8 *)(lVar8 + 0x18) = 0;
                        (**(code **)(*plVar9 + 0x20))();
                      }
                    }
                    plVar4 = plVar4 + 1;
                  } while (lVar11 != 0);
                }
              }
            }
          }
        }
      }
    }
    plVar9 = local_88;
    plVar4 = local_a8;
    if (local_78 != 0) {
      lVar11 = local_78 << 3;
      uVar6 = (**(code **)(*local_a8 + 0xc0))(local_a8);
      if ((uVar6 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar4,plVar9,lVar11,8);
          return;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar9,lVar11,8);
    }
  }
  return;
}


