/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280068c; name: FUN_0280068c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0280068c(long param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (((*(long *)(param_1 + 0x68) != 0) && (*(byte *)(param_1 + 0x78) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x68) + 0x7e0) != '\0')) {
    if ((*(byte *)(param_1 + 0x78) >> 2 & 1) != 0) {
      return 0;
    }
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar11 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar11;
    plVar13 = *(long **)(lVar11 + 0xc0);
    if (plVar13 != (long *)0x0) {
      lVar11 = plVar13[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02801458;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00e8b8e8(&local_80,plVar13);
    if (local_80 == (long *)0x0) {
      if (plVar13 == (long *)0x0) {
        return 0;
      }
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_028007cc;
    }
    if (local_80[0x1a] == 0) {
      local_78 = (long *)0x0;
      uStack_70 = 0;
    }
    else {
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_019d08dc(&local_78,local_80[0x1a] + 0x1c0);
      plVar16 = local_78;
      puVar7 = PTR_DAT_0437c670;
      puVar6 = PTR_DAT_0437c668;
      puVar5 = PTR_DAT_043794d0;
      if (local_78 != (long *)0x0) {
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar8 = *(int *)((long)local_78 + 0xc);
          do {
            plVar17 = (long *)plVar16[2];
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar10 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar7 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar17 == (long *)0x0) goto LAB_02800b30;
              if (plVar17 == (long *)puVar7) break;
              plVar17 = (long *)*plVar17;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar8) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar11 = plVar16[3];
                plVar16 = (long *)0x0;
                plVar17 = local_78;
                if (lVar11 != 0) {
                  plVar16 = (long *)(lVar11 + -0x50);
                }
                goto joined_r0x02800938;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar9;
          } while (iVar9 != 0);
        }
LAB_02800b30:
        plVar16 = (long *)0x0;
        plVar17 = local_78;
joined_r0x02800938:
        local_78 = plVar17;
        if (plVar17 != (long *)0x0) {
          plVar18 = plVar17 + 1;
          do {
            iVar8 = (int)*plVar18 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *(int *)plVar18 = iVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 == 0) {
            plVar17[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_90 = (long *)*plVar17;
            FUN_02a44274(lVar11 + 0xd8,&local_90);
          }
        }
        if (plVar16 != (long *)0x0) {
          plVar17 = (long *)plVar16[0xe];
          if (plVar17 == (long *)0x0) {
            lVar11 = plVar16[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16);
            }
            if (local_80 != (long *)0x0) {
              lVar11 = local_80[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_80 + 0x20))();
              }
            }
            if (plVar13 == (long *)0x0) {
              return 0;
            }
            lVar11 = plVar13[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_028007cc;
          }
          lVar11 = plVar17[0xb];
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02801458;
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar10;
          }
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar11 = plVar17[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          (**(code **)(*(long *)plVar17[0x2c] + 0x10))(&local_78);
          local_90 = (long *)0x0;
          uStack_88 = 0;
          FUN_0096a7f4(&local_90,&local_78);
          plVar17 = local_78;
          if (local_78 != (long *)0x0) {
            plVar18 = local_78 + 1;
            do {
              iVar8 = (int)*plVar18 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar3) {
                *(int *)plVar18 = iVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_68 = *plVar17;
              FUN_02a44274(lVar11 + 0xd8,&local_68);
            }
          }
          plVar17 = local_90;
          puVar6 = PTR_DAT_04379f78;
          if (local_90 != (long *)0x0) {
            if (*(int *)((long)local_90 + 0xc) != 0) {
              piVar1 = (int *)((long)local_90 + 0xc);
              iVar8 = *(int *)((long)local_90 + 0xc);
              do {
                plVar18 = (long *)plVar17[2];
                if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
                  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                    uVar10 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                    __cxa_guard_release(puVar5);
                  }
                  *(undefined **)PTR_DAT_04379f80 = PTR_DAT_043794d8;
                  __cxa_guard_release(puVar6);
                }
                while( true ) {
                  if (plVar18 == (long *)0x0) goto LAB_02800cdc;
                  if (plVar18 == (long *)PTR_DAT_04379f80) break;
                  plVar18 = (long *)*plVar18;
                }
                iVar9 = *piVar1;
                if (iVar9 == iVar8) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') {
                    lVar11 = plVar17[3];
                    plVar17 = (long *)0x0;
                    plVar18 = local_90;
                    if (lVar11 != 0) {
                      plVar17 = (long *)(lVar11 + -0x50);
                    }
                    goto joined_r0x02800d00;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar8 = iVar9;
              } while (iVar9 != 0);
            }
LAB_02800cdc:
            plVar17 = (long *)0x0;
            plVar18 = local_90;
joined_r0x02800d00:
            local_90 = plVar18;
            if (plVar18 != (long *)0x0) {
              plVar15 = plVar18 + 1;
              do {
                iVar8 = (int)*plVar15 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar3) {
                  *(int *)plVar15 = iVar8;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 == 0) {
                plVar18[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar11 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar11;
                local_78 = (long *)*plVar18;
                FUN_02a44274(lVar11 + 0xd8,&local_78);
              }
            }
            if (plVar17 != (long *)0x0) {
              if (_DAT_043d4b04 != 0) {
                *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) & 0xffffffffffffff00;
                *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x7e0) = 0;
                *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 0x80;
                lVar11 = plVar17[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar17 + 0x20))(plVar17);
                }
                lVar11 = plVar16[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar16 + 0x20))(plVar16);
                }
                if (local_80 != (long *)0x0) {
                  lVar11 = local_80[0xb];
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 + -1 == 0) {
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    (**(code **)(*local_80 + 0x20))();
                  }
                }
                if (plVar13 != (long *)0x0) {
                  lVar11 = plVar13[0xb];
                  piVar1 = (int *)(lVar11 + 0xc);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 + -1 == 0) {
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))(plVar13);
                  }
                }
                goto LAB_02800e08;
              }
              lVar11 = plVar17[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar17 + 0x20))(plVar17);
              }
            }
          }
          lVar11 = plVar16[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar16 + 0x20))(plVar16);
          }
          if (local_80 != (long *)0x0) {
            lVar11 = local_80[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
          if (plVar13 == (long *)0x0) {
            return 0;
          }
          lVar11 = plVar13[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_028007cc;
        }
      }
    }
    if (local_80 != (long *)0x0) {
      lVar11 = local_80[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if (plVar13 == (long *)0x0) {
      return 0;
    }
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_028007cc:
    if (iVar8 == 1) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    return 0;
  }
LAB_02800e08:
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar13 = *(long **)(lVar11 + 0xc0);
  if (plVar13 == (long *)0x0) goto LAB_02800ee4;
  lVar11 = plVar13[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02801458;
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
    *(undefined8 *)(lVar11 + 0x10) = uVar10;
  }
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00e8b8e8(&local_80,plVar13);
  if (local_80 != (long *)0x0) {
    if (local_80[0x1a] == 0) {
      local_78 = (long *)0x0;
      uStack_70 = 0;
    }
    else {
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_019d08dc(&local_78,local_80[0x1a] + 0x1c0);
      plVar16 = local_78;
      puVar7 = PTR_DAT_0437c670;
      puVar6 = PTR_DAT_0437c668;
      puVar5 = PTR_DAT_043794d0;
      if (local_78 != (long *)0x0) {
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar8 = *(int *)((long)local_78 + 0xc);
          do {
            plVar17 = (long *)plVar16[2];
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                uVar10 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar7 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              if (plVar17 == (long *)0x0) goto LAB_028014c4;
              if (plVar17 == (long *)puVar7) break;
              plVar17 = (long *)*plVar17;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar8) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                plVar17 = (long *)0x0;
                plVar18 = local_78;
                if (plVar16[3] != 0) {
                  plVar17 = (long *)(plVar16[3] + -0x50);
                }
                goto joined_r0x028010e8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar9;
          } while (iVar9 != 0);
        }
LAB_028014c4:
        plVar17 = (long *)0x0;
        plVar18 = local_78;
joined_r0x028010e8:
        local_78 = plVar18;
        if (plVar18 != (long *)0x0) {
          plVar15 = plVar18 + 1;
          do {
            iVar8 = (int)*plVar15 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *(int *)plVar15 = iVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 == 0) {
            plVar18[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_90 = (long *)*plVar18;
            FUN_02a44274(lVar11 + 0xd8,&local_90);
          }
        }
        if (plVar17 != (long *)0x0) {
          plVar18 = (long *)plVar17[0xe];
          if (plVar18 == (long *)0x0) {
            plVar18 = (long *)0x0;
            if (_DAT_00000210 == 2) {
LAB_02801520:
              iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar8 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
LAB_02801244:
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_68 = *plVar18;
              FUN_02a44274(lVar11 + 0xd8,&local_68);
LAB_02801270:
              plVar18 = local_90;
              puVar5 = PTR_DAT_04379f80;
              if (local_90 == (long *)0x0) {
                plVar14 = (long *)0x0;
              }
              else {
                if (*(int *)((long)local_90 + 0xc) != 0) {
                  piVar1 = (int *)((long)local_90 + 0xc);
                  iVar8 = *(int *)((long)local_90 + 0xc);
                  do {
                    plVar15 = (long *)plVar18[2];
                    if (((*PTR_DAT_04379f78 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379f78), iVar9 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                        uVar10 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)puVar5 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_04379f78);
                    }
                    plVar14 = (long *)0x0;
                    plVar4 = local_90;
                    if (plVar15 == (long *)0x0) goto joined_r0x028016fc;
                    while (plVar15 != (long *)puVar5) {
                      plVar15 = (long *)*plVar15;
                      if (plVar15 == (long *)0x0) {
                        plVar14 = (long *)0x0;
                        goto joined_r0x028016fc;
                      }
                    }
                    iVar9 = *piVar1;
                    if (iVar9 == iVar8) {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar3) {
                        *piVar1 = iVar8 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      if (cVar2 == '\0') {
                        lVar11 = plVar18[3];
                        plVar14 = (long *)0x0;
                        if (lVar11 != 0) {
                          plVar14 = (long *)(lVar11 + -0x50);
                        }
                        goto joined_r0x028016fc;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar8 = iVar9;
                  } while (iVar9 != 0);
                }
                plVar14 = (long *)0x0;
                plVar4 = local_90;
joined_r0x028016fc:
                local_90 = plVar4;
                if (plVar4 != (long *)0x0) {
                  plVar18 = plVar4 + 1;
                  do {
                    iVar8 = (int)*plVar18 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar3) {
                      *(int *)plVar18 = iVar8;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 == 0) {
                    plVar4[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_78 = (long *)*plVar4;
                    FUN_02a44274(lVar11 + 0xd8,&local_78);
                  }
                }
              }
              lVar11 = plVar16[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar16 + 0x20))(plVar16);
              }
              if (plVar14 != (long *)0x0) {
                lVar11 = *(long *)(param_1 + 0x68);
                (**(code **)(*plVar14 + 0x10))(&local_78,plVar14);
                local_90 = (long *)0x0;
                uStack_88 = 0;
                FUN_0096a7f4(&local_90,&local_78);
                plVar16 = local_78;
                if (local_78 != (long *)0x0) {
                  plVar18 = local_78 + 1;
                  do {
                    iVar8 = (int)*plVar18 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar3) {
                      *(int *)plVar18 = iVar8;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 == 0) {
                    local_78[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar12;
                    local_68 = *plVar16;
                    FUN_02a44274(lVar12 + 0xd8,&local_68);
                  }
                }
                local_a0 = (long *)0x0;
                uStack_98 = 0;
                FUN_0096adf4(&local_a0,&local_90);
                FUN_008802f0(lVar11 + 0x688,&local_a0);
                plVar16 = local_a0;
                if (local_a0 != (long *)0x0) {
                  plVar18 = local_a0 + 1;
                  do {
                    iVar8 = (int)*plVar18 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar3) {
                      *(int *)plVar18 = iVar8;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 == 0) {
                    local_a0[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_78 = (long *)*plVar16;
                    FUN_02a44274(lVar11 + 0xd8,&local_78);
                  }
                }
                plVar16 = local_90;
                if (local_90 != (long *)0x0) {
                  plVar18 = local_90 + 1;
                  do {
                    iVar8 = (int)*plVar18 + -1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar3) {
                      *(int *)plVar18 = iVar8;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 == 0) {
                    local_90[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar11 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar11;
                    local_78 = (long *)*plVar16;
                    FUN_02a44274(lVar11 + 0xd8,&local_78);
                  }
                }
                lVar11 = plVar14[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                }
              }
            }
          }
          else {
            lVar11 = plVar18[0xb];
            if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_02801458:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar11 + 0x10) == 0) {
              uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
              *(undefined8 *)(lVar11 + 0x10) = uVar10;
            }
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            lVar12 = plVar18[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            lVar11 = plVar18[0x42];
            do {
              iVar8 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar12 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            if ((int)lVar11 == 2) {
              plVar16 = (long *)plVar17[0xe];
              lVar11 = plVar16[0xb];
              if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02801458;
              if (*(long *)(lVar11 + 0x10) == 0) {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
                *(undefined8 *)(lVar11 + 0x10) = uVar10;
              }
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              (**(code **)(*(long *)plVar16[0x2c] + 0x10))(&local_78);
              local_90 = (long *)0x0;
              uStack_88 = 0;
              FUN_0096a7f4(&local_90,&local_78);
              if (local_78 != (long *)0x0) {
                plVar18 = local_78 + 1;
                do {
                  iVar8 = (int)*plVar18 + -1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar3) {
                    *(int *)plVar18 = iVar8;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 == 0) {
                  local_78[2] = 0;
                  plVar18 = local_78;
                  if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_02801520;
                  goto LAB_02801244;
                }
              }
              goto LAB_02801270;
            }
          }
          lVar11 = plVar17[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
        }
      }
    }
    if (local_80 != (long *)0x0) {
      lVar11 = local_80[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  lVar11 = plVar13[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
LAB_02800ee4:
  *(undefined1 *)(param_1 + 0x70) = *param_2;
  lVar11 = *(long *)(param_1 + 0x68);
  if (*(int *)(lVar11 + 0x4c0) == 5) {
    *(undefined4 *)(lVar11 + 0x4c0) = 3;
    *(undefined4 *)(lVar11 + 0x4d4) = 0;
    lVar11 = *(long *)(param_1 + 0x68);
  }
  FUN_027fbaa8(lVar11 + 0x6a0);
  *(undefined8 *)(lVar11 + 0x7a8) = 0x3ec28f5c3f000000;
  *(undefined8 *)(lVar11 + 0x7b8) = 0x3f19999a3f800000;
  *(undefined8 *)(lVar11 + 0x7b0) = 0x3f0000003f800000;
  *(undefined4 *)(lVar11 + 0x7c8) = 0;
  *(undefined8 *)(lVar11 + 0x7c0) = 0x3b83126f3c83126f;
  FUN_01f21324();
  *(undefined1 *)(lVar11 + 0x7e0) = 1;
  *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 1;
  return 1;
}


