/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131ddc4; name: FUN_0131ddc4
 */


void FUN_0131ddc4(int *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int *piVar15;
  long *plVar16;
  float fVar17;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_80;
  int local_7c;
  long *local_70;
  long local_68;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar15 = param_1 + 4;
  piVar15[0] = 0;
  piVar15[1] = 0;
  param_1[8] = 7;
  param_1[9] = 0;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar12 = *(long **)(lVar11 + 0xc0);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_0131e2bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_68 = plVar12[0x18];
  local_70 = (long *)(local_68 + plVar12[0x19] * 8);
  FUN_0131fce0(&local_a0,&local_68,&local_70);
  if (local_a0 != (long *)(plVar12[0x18] + plVar12[0x19] * 8)) {
    plVar14 = (long *)*local_a0;
    puVar10 = (undefined8 *)(**(code **)plVar14[10])(plVar14 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar8 != 0)) {
      uVar9 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar9;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar10 != (undefined8 *)0x0) {
LAB_0131ded0:
      if (puVar10 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0131dfc8;
      lVar11 = plVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0131e2bc;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar13 = plVar14;
      } while (cVar3 != '\0');
LAB_0131df14:
      if (plVar13 == (long *)0x0) goto LAB_0131df54;
      if (plVar13[0x1a] == 0) {
        local_a0 = (long *)0x0;
        uStack_98 = 0;
      }
      else {
        local_a0 = (long *)0x0;
        uStack_98 = 0;
        FUN_019d08dc(&local_a0,plVar13[0x1a] + 0x1c0);
        plVar14 = local_a0;
        puVar6 = PTR_DAT_0437c670;
        puVar5 = PTR_DAT_0437c668;
        if (local_a0 != (long *)0x0) {
          if (*(int *)((long)local_a0 + 0xc) == 0) {
LAB_0131e39c:
            plVar14 = (long *)0x0;
            plVar16 = local_a0;
          }
          else {
            piVar1 = (int *)((long)local_a0 + 0xc);
            iVar8 = *(int *)((long)local_a0 + 0xc);
            while( true ) {
              plVar16 = (long *)plVar14[2];
              if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
                  uVar9 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar9;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar6 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar5);
              }
              while( true ) {
                if (plVar16 == (long *)0x0) goto LAB_0131e39c;
                if (plVar16 == (long *)puVar6) break;
                plVar16 = (long *)*plVar16;
              }
              iVar7 = *piVar1;
              if (iVar7 == iVar8) break;
              ClearExclusiveLocal();
LAB_0131e080:
              iVar8 = iVar7;
              if (iVar7 == 0) goto LAB_0131e39c;
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_0131e080;
            lVar11 = plVar14[3];
            plVar14 = (long *)0x0;
            plVar16 = local_a0;
            if (lVar11 != 0) {
              plVar14 = (long *)(lVar11 + -0x50);
            }
          }
          local_a0 = plVar16;
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 1;
            do {
              iVar8 = (int)*plVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 == 0) {
              plVar16[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_68 = *plVar16;
              FUN_02a44274(lVar11 + 0xd8,&local_68);
            }
          }
          if (plVar14 != (long *)0x0) {
            plVar16 = (long *)plVar14[0xe];
            if (plVar16 != (long *)0x0) {
              lVar11 = plVar16[0xb];
              if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0131e2bc;
              if (*(long *)(lVar11 + 0x10) == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                *(undefined8 *)(lVar11 + 0x10) = uVar9;
              }
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar11 = plVar16[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              FUN_0199f15c(&local_a0,plVar16);
              if (local_a0 == (long *)0x0) {
                local_70 = (long *)0x0;
              }
              else {
                FUN_0131fdb8(&local_70);
                plVar16 = local_a0;
                if (local_a0 != (long *)0x0) {
                  plVar2 = local_a0 + 1;
                  do {
                    iVar8 = (int)*plVar2 + -1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar4) {
                      *(int *)plVar2 = iVar8;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar8 == 0) {
                    local_a0[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_68 = *plVar16;
                    FUN_02a44274(lVar11 + 0xd8,&local_68);
                  }
                }
              }
              if (local_70 == (long *)0x0) goto LAB_0131e1e0;
              FUN_025a67a4(&local_a0);
              if ((int)local_a0 == 0) {
LAB_0131e1b8:
                *param_1 = 0;
              }
              else if ((int)local_a0 - 1U < 2) {
                *param_1 = (int)local_a0;
                iVar8 = (int)local_a0;
LAB_0131e224:
                param_1[1] = local_a0._4_4_;
                *(undefined8 *)piVar15 = local_90;
                *(undefined8 *)(param_1 + 6) = uStack_88;
                iVar7 = FUN_0131a338();
                if (iVar7 == 7) {
                  iVar7 = 5;
                }
                param_1[8] = iVar7;
                if (0 < local_7c) {
                  if (local_80 < 1) {
                    if (iVar8 != 1) {
                      param_1[9] = 0;
                      goto joined_r0x0131e340;
                    }
                    iVar8 = 100;
LAB_0131e2ac:
                    param_1[9] = iVar8;
                  }
                  else {
                    fVar17 = 1.0 - (float)local_80 / (float)local_7c;
                    if (iVar8 != 1) {
                      fVar17 = (float)local_80 / (float)local_7c;
                    }
                    iVar7 = (int)(fVar17 * 100.0);
                    param_1[9] = iVar7;
                    if (iVar7 < 0) {
                      iVar7 = 0;
LAB_0131e304:
                      param_1[9] = iVar7;
                    }
                    else if (100 < iVar7) {
                      iVar7 = 100;
                      goto LAB_0131e304;
                    }
                    if (iVar8 == 1) {
                      if (99 < iVar7) {
                        iVar8 = 99;
                        goto LAB_0131e2ac;
                      }
                    }
                    else if (iVar7 < 1) {
                      iVar8 = 1;
                      goto LAB_0131e2ac;
                    }
                  }
                }
              }
              else {
                if ((int)local_a0 == 3) goto LAB_0131e1b8;
                iVar8 = *param_1;
                if (iVar8 != 0) goto LAB_0131e224;
              }
joined_r0x0131e340:
              if (local_70 != (long *)0x0) {
                lVar11 = local_70[0xb];
                piVar15 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar15;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                  if (bVar4) {
                    *piVar15 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*local_70 + 0x20))();
                }
              }
            }
LAB_0131e1e0:
            lVar11 = plVar14[0xb];
            piVar15 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar4) {
                *piVar15 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
        }
      }
      lVar11 = plVar13[0xb];
      piVar15 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 != 0) goto LAB_0131df54;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
      if (plVar12 == (long *)0x0) {
        return;
      }
      goto LAB_0131df58;
    }
  }
LAB_0131df54:
  if (plVar12 != (long *)0x0) {
LAB_0131df58:
    lVar11 = plVar12[0xb];
    piVar15 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar4) {
        *piVar15 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
LAB_0131dfc8:
  puVar10 = (undefined8 *)*puVar10;
  plVar13 = (long *)0x0;
  if (puVar10 == (undefined8 *)0x0) goto LAB_0131df14;
  goto LAB_0131ded0;
}


