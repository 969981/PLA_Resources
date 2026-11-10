/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b82f24; name: FUN_01b82f24
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b82f24(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 *local_a0 [2];
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  FUN_009c69bc(&local_78,*param_2);
  plVar12 = (long *)FUN_01b84c30(local_78,local_78[1],param_1);
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_008802f0(&local_78,*param_2 + 0x58);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00b5f91c(&local_90,&local_78);
  plVar17 = local_78;
  if (local_78 != (long *)0x0) {
    plVar18 = local_78 + 1;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = (long *)*plVar17;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  FUN_01b68c40(plVar12,&local_90);
  puVar14 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = (long *)*puVar14;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  (**(code **)(*plVar12 + 0xf0))(plVar12);
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar17 = *(long **)(lVar15 + 0xc0);
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b83a60;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_68 = (long *)plVar17[0x18];
  local_80 = local_68 + plVar17[0x19];
  FUN_01b84fc0(&local_78,&local_68,&local_80);
  if (local_78 != (long *)(plVar17[0x18] + plVar17[0x19] * 8)) {
    plVar18 = (long *)*local_78;
    puVar14 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
      uVar13 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar13;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar14 != (undefined8 *)0x0) {
LAB_01b83160:
      if (puVar14 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01b83260;
      lVar15 = plVar18[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar13;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          plVar16 = plVar18;
        } while (cVar5 != '\0');
        goto joined_r0x01b831a4;
      }
      goto LAB_01b83a60;
    }
  }
  plVar16 = (long *)0x0;
joined_r0x01b831a4:
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (plVar16 != (long *)0x0) {
    FUN_01e564f8(&local_78,plVar16);
    plVar17 = local_78;
    puVar9 = PTR_DAT_0437c670;
    puVar8 = PTR_DAT_0437c668;
    puVar7 = PTR_DAT_043794d0;
    if (local_78 != (long *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar11 = *(int *)((long)local_78 + 0xc);
        do {
          plVar18 = (long *)plVar17[2];
          if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar9 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar8);
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_01b83670;
            if (plVar18 == (long *)puVar9) break;
            plVar18 = (long *)*plVar18;
          }
          iVar10 = *piVar1;
          if (iVar10 == iVar11) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar15 = plVar17[3];
              plVar17 = (long *)0x0;
              plVar18 = local_78;
              if (lVar15 != 0) {
                plVar17 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x01b833dc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar10;
        } while (iVar10 != 0);
      }
LAB_01b83670:
      plVar17 = (long *)0x0;
      plVar18 = local_78;
joined_r0x01b833dc:
      local_78 = plVar18;
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18 + 1;
        do {
          iVar11 = (int)*plVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          plVar18[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_68 = (long *)*plVar18;
          FUN_02a44274(lVar15 + 0xd8,&local_68);
        }
      }
      if (plVar17 != (long *)0x0) {
        plVar18 = (long *)plVar17[0xe];
        if (plVar18 != (long *)0x0) {
          lVar15 = plVar18[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01b83a60:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar15 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
            *(undefined8 *)(lVar15 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          FUN_0199d60c(&local_78,plVar18);
          if (local_78 == (long *)0x0) {
            local_80 = (long *)0x0;
          }
          else {
            FUN_011a5e18(&local_80);
            plVar2 = local_78;
            if (local_78 != (long *)0x0) {
              plVar3 = local_78 + 1;
              do {
                iVar11 = (int)*plVar3 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar6) {
                  *(int *)plVar3 = iVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 == 0) {
                local_78[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_68 = (long *)*plVar2;
                FUN_02a44274(lVar15 + 0xd8,&local_68);
              }
            }
          }
          if (local_80 != (long *)0x0) {
            uVar13 = FUN_019189f0(local_80,*(undefined4 *)(param_1 + 0x30));
            FUN_009c69bc(&local_68,*param_2);
            if (local_68 != (long *)0x0) {
              lVar15 = FUN_01b85098(local_68 + 0x1e,&local_78);
              if (lVar15 != 0) {
                FUN_01b83be4(local_a0);
                FUN_01918af0(uVar13,local_a0);
                if (local_a0[0] != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_a0[0] + 1);
                  do {
                    iVar11 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar11 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar11 + -1 == 0) {
                    local_a0[0][2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_78 = (long *)*local_a0[0];
                    FUN_02a44274(lVar15 + 0xd8,&local_78);
                  }
                }
              }
              if (local_68 != (long *)0x0) {
                lVar15 = local_68[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_68 + 0x20))();
                }
              }
            }
            if (local_80 != (long *)0x0) {
              lVar15 = local_80[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_80 + 0x20))();
              }
            }
          }
          FUN_0199c220(&local_78,plVar18);
          plVar2 = local_78;
          puVar7 = PTR_DAT_0437a0f0;
          if (local_78 != (long *)0x0) {
            if (*(int *)((long)local_78 + 0xc) != 0) {
              piVar1 = (int *)((long)local_78 + 0xc);
              iVar11 = *(int *)((long)local_78 + 0xc);
              do {
                puVar14 = (undefined8 *)plVar2[2];
                if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar10 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                    uVar13 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar7 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a0e8);
                }
                plVar3 = (long *)0x0;
                plVar4 = local_78;
                if (puVar14 == (undefined8 *)0x0) goto joined_r0x01b83840;
                while (puVar14 != (undefined8 *)puVar7) {
                  puVar14 = (undefined8 *)*puVar14;
                  if (puVar14 == (undefined8 *)0x0) {
                    plVar3 = (long *)0x0;
                    goto joined_r0x01b83840;
                  }
                }
                iVar10 = *piVar1;
                if (iVar10 == iVar11) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar11 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar15 = plVar2[3];
                    plVar3 = (long *)0x0;
                    if (lVar15 != 0) {
                      plVar3 = (long *)(lVar15 + -0x50);
                    }
                    goto joined_r0x01b83840;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = iVar10;
              } while (iVar10 != 0);
            }
            plVar3 = (long *)0x0;
            plVar4 = local_78;
joined_r0x01b83840:
            local_78 = plVar4;
            if (plVar4 != (long *)0x0) {
              plVar2 = plVar4 + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = iVar11;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 == 0) {
                plVar4[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_68 = (long *)*plVar4;
                FUN_02a44274(lVar15 + 0xd8,&local_68);
              }
            }
            if (plVar3 != (long *)0x0) {
              FUN_01847290(&local_80,plVar3);
              plVar2 = local_80;
              local_a8 = plVar12;
              if (plVar12 != (long *)0x0) {
                lVar15 = plVar12[0xb];
                if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b83a60;
                if (*(long *)(lVar15 + 0x10) == 0) {
                  uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
                  *(undefined8 *)(lVar15 + 0x10) = uVar13;
                }
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              local_78 = (long *)0x0;
              uStack_70 = 0;
              FUN_008802f0(&local_78,*param_2 + 0x58);
              local_b8 = (undefined8 *)0x0;
              uStack_b0 = 0;
              FUN_00b5f91c(&local_b8,&local_78);
              plVar12 = local_78;
              if (local_78 != (long *)0x0) {
                plVar4 = local_78 + 1;
                do {
                  iVar11 = (int)*plVar4 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar6) {
                    *(int *)plVar4 = iVar11;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_68 = (long *)*plVar12;
                  FUN_02a44274(lVar15 + 0xd8,&local_68);
                }
              }
              FUN_01b83cc4(plVar2,&local_a8,&local_b8);
              puVar14 = local_b8;
              if (local_b8 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_b8 + 1);
                do {
                  iVar11 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 + -1 == 0) {
                  local_b8[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_78 = (long *)*puVar14;
                  FUN_02a44274(lVar15 + 0xd8,&local_78);
                }
              }
              if (local_a8 != (long *)0x0) {
                lVar15 = local_a8[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_a8 + 0x20))();
                }
              }
              if (local_80 != (long *)0x0) {
                lVar15 = local_80[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar11 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              lVar15 = plVar3[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*plVar3 + 0x20))(plVar3);
              }
            }
          }
          lVar15 = plVar18[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
        lVar15 = plVar17[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return;
LAB_01b83260:
  puVar14 = (undefined8 *)*puVar14;
  plVar16 = (long *)0x0;
  if (puVar14 == (undefined8 *)0x0) goto joined_r0x01b831a4;
  goto LAB_01b83160;
}


