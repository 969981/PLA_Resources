/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb5c8c; name: FUN_01bb5c8c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01bb5c8c(long *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long **pplStack_88;
  undefined8 local_80;
  long *local_78;
  long lStack_70;
  long **local_68;
  
  if (((int)param_1[0x3e] != 0) && ((char)param_1[0x5c] != '\0')) {
    FUN_01bb7144(param_1);
  }
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar18 = param_1[0x43];
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar2 = (int *)(lVar18 + 0xc);
    iVar9 = *(int *)(lVar18 + 0xc);
    do {
      plVar15 = *(long **)(lVar18 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
        uVar14 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar14;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01bb5cd0;
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
      }
      iVar10 = *piVar2;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            plVar17 = (long *)(lVar18 + -0x50);
            FUN_00a9ecd4(&local_90,plVar17);
            plVar15 = local_90;
            puVar7 = PTR_DAT_0437a130;
            puVar6 = PTR_DAT_0437a128;
            puVar5 = PTR_DAT_043794d0;
            if (local_90 == (long *)0x0) goto LAB_01bb62a0;
            if (*(int *)((long)local_90 + 0xc) == 0) goto LAB_01bb7010;
            piVar2 = (int *)((long)local_90 + 0xc);
            iVar9 = *(int *)((long)local_90 + 0xc);
            goto LAB_01bb6f40;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01bb5cd0:
  cVar3 = *(char *)((long)param_1 + 0x531);
  goto joined_r0x01bb62d4;
LAB_01bb6f40:
  do {
    plVar19 = (long *)plVar15[2];
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar7 = PTR_DAT_043795e0;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar19 == (long *)0x0) goto LAB_01bb7010;
      if (plVar19 == (long *)puVar7) break;
      plVar19 = (long *)*plVar19;
    }
    iVar10 = *piVar2;
    if (iVar10 == iVar9) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar16 = plVar15[3];
        plVar15 = (long *)0x0;
        plVar19 = local_90;
        if (lVar16 != 0) {
          plVar15 = (long *)(lVar16 + -0x50);
        }
        goto joined_r0x01bb7034;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar10;
  } while (iVar10 != 0);
LAB_01bb7010:
  plVar15 = (long *)0x0;
  plVar19 = local_90;
joined_r0x01bb7034:
  local_90 = plVar19;
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 1;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      plVar19[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_b8 = (long *)*plVar19;
      FUN_02a44274(lVar16 + 0xd8,&local_b8);
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar19 = *(long **)(lVar18 + 0x1a0);
    if (plVar19 == (long *)0x0) {
      if (param_1[0xd2] != 0) goto LAB_01bb70e4;
    }
    else if (param_1[0xd2] != *plVar19) {
LAB_01bb70e4:
      lVar16 = 0;
      if (plVar19 != (long *)0x0) {
        lVar16 = *plVar19;
      }
      param_1[0xd2] = lVar16;
      (**(code **)(*param_1 + 0x100))(param_1);
    }
    lVar16 = plVar15[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
LAB_01bb62a0:
  lVar18 = *(long *)(lVar18 + 8);
  piVar2 = (int *)(lVar18 + 0xc);
  do {
    iVar9 = *piVar2;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 != 0) goto LAB_01bb5cd0;
  *(undefined8 *)(lVar18 + 0x18) = 0;
  (**(code **)(*plVar17 + 0x20))(plVar17);
  cVar3 = *(char *)((long)param_1 + 0x531);
joined_r0x01bb62d4:
  if (((cVar3 == '\0') && ((char)param_1[0x75] != '\0')) && ((char)param_1[0xa5] == '\0')) {
    FUN_01bb5868(&local_90,param_1);
    FUN_00b08e00(&local_68,&local_90);
    plVar15 = local_90;
    if (local_90 != (long *)0x0) {
      plVar17 = local_90 + 1;
      do {
        iVar9 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *(int *)plVar17 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_b8 = (long *)*plVar15;
        FUN_02a44274(lVar18 + 0xd8,&local_b8);
      }
    }
    if (local_68 != (long **)0x0) {
      plVar15 = local_68[0x4a];
      if (plVar15 == local_68[0x4b]) {
        plVar15 = *(long **)(*plVar15 + 0x68);
      }
      else {
        do {
          lVar18 = *plVar15;
          plVar15 = plVar15 + 1;
        } while (*(undefined1 **)(lVar18 + 0x158) != &DAT_afc4d6c05abef19e);
        plVar15 = *(long **)(lVar18 + 0x68);
      }
      if (plVar15 != (long *)0x0) {
        plVar17 = param_1 + 0xa5;
        (**(code **)(*plVar15 + 0x10))(plVar15);
        if ((int)param_1[0x3e] == 0) {
          local_90 = (long *)0x6265428791612fe4;
          pplStack_88 = (long **)0x38b98c4;
          local_80 = 10;
        }
        else {
          local_90 = (long *)0xfb0600093042adfc;
          pplStack_88 = (long **)&DAT_03975f4c;
          local_80 = 4;
        }
        local_78 = (long *)0x0;
        lVar18 = (**(code **)(*plVar15 + 200))(plVar15,&local_90);
        *plVar17 = lVar18;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if ((char)*plVar17 != '\0') {
          (**(code **)(*plVar15 + 0xd8))(plVar15,plVar17,1);
        }
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      if (local_68 != (long **)0x0) {
        plVar15 = local_68[0xb];
        piVar2 = (int *)((long)plVar15 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          plVar15[3] = 0;
          (*(code *)(*local_68)[4])();
        }
      }
    }
  }
  iVar9 = (int)param_1[0xa7];
  if (iVar9 == 1) {
    FUN_01bb5868(&local_90,param_1);
    FUN_00b08e00(&local_98,&local_90);
    plVar15 = local_90;
    if (local_90 != (long *)0x0) {
      plVar17 = local_90 + 1;
      do {
        iVar9 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *(int *)plVar17 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_b8 = (long *)*plVar15;
        FUN_02a44274(lVar18 + 0xd8,&local_b8);
      }
    }
    if (local_98 != (long *)0x0) {
      plVar15 = (long *)local_98[0x4a];
      plVar17 = (long *)local_98[0x4b];
      if (plVar15 == plVar17) {
LAB_01bb5da4:
        if ((plVar15 == plVar17) || (*plVar15 == 0)) goto LAB_01bb5e28;
        FUN_009cda48(&local_a0,*plVar15,&local_90);
        if (local_a0 != (long *)0x0) {
          local_90 = (long *)0x3565f88648ab40b8;
          pplStack_88 = (long **)&DAT_039ac801;
          local_80 = 4;
          local_78 = (long *)0x0;
          uVar12 = FUN_028dcc5c(local_a0,&local_90);
          plVar15 = local_a0;
          if ((uVar12 & 0xff) != 0) {
            lVar18 = nn::os::GetCurrentThread();
            plVar17 = plVar15 + 0xf;
            do {
              if (*plVar17 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x6c));
                  while (*plVar17 == 0) {
                    cVar3 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar8) {
                      *plVar17 = lVar18;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                    if (cVar3 == '\0') goto LAB_01bb5e60;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar8) {
                *plVar17 = lVar18;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
LAB_01bb5e60:
            if ((ulong)(plVar15[0x15] - plVar15[0x14] >> 5) <= uVar12 >> 0x20) goto LAB_01bb6ca0;
            plVar17 = *(long **)(plVar15[0x14] + (uVar12 >> 0x20) * 0x20);
            plVar15[0xf] = 0;
            nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x6c));
            plVar15 = (long *)(**(code **)(*plVar17 + 0x70))(plVar17);
            plVar15 = (long *)(**(code **)(*plVar15 + 0x18))();
            lVar18 = *plVar15;
            plVar15 = (long *)plVar15[3];
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
            if (lVar18 == 0x7473650fbd5b0d00) {
              FUN_009c69bc(&local_a8,param_1);
              local_b8 = &lStack_70;
              pplStack_88 = &local_b8;
              local_90 = local_a8 + 0x1e;
              local_68 = pplStack_88;
              FUN_00ad55f4(local_90,&local_68,&local_90);
              if (local_a8 != (long *)0x0) {
                lVar18 = local_a8[0xb];
                piVar2 = (int *)(lVar18 + 0xc);
                do {
                  iVar9 = *piVar2;
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  *(undefined8 *)(lVar18 + 0x18) = 0;
                  (**(code **)(*local_a8 + 0x20))();
                }
              }
              puVar13 = (undefined8 *)param_1[0xaa];
              param_1[0xaa] = 0;
              if (puVar13 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar13 + 1);
                do {
                  iVar9 = *piVar2;
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  puVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_90 = (long *)*puVar13;
                  FUN_02a44274(lVar18 + 0xd8,&local_90);
                }
              }
              param_1[0xab] = 0;
              puVar13 = (undefined8 *)param_1[0xac];
              param_1[0xac] = 0;
              if (puVar13 != (undefined8 *)0x0) {
                piVar2 = (int *)(puVar13 + 1);
                do {
                  iVar9 = *piVar2;
                  cVar3 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar8) {
                    *piVar2 = iVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar9 + -1 == 0) {
                  puVar13[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_90 = (long *)*puVar13;
                  FUN_02a44274(lVar18 + 0xd8,&local_90);
                }
              }
              param_1[0xad] = 0;
              puVar6 = PTR_DAT_0437a6e0;
              puVar5 = PTR_DAT_0437a6d8;
              lVar18 = param_1[0xae];
              if (lVar18 == 0) {
                param_1[0xae] = 0;
              }
              else {
                if (*(int *)(lVar18 + 0xc) != 0) {
                  piVar2 = (int *)(lVar18 + 0xc);
                  iVar9 = *(int *)(lVar18 + 0xc);
                  do {
                    plVar17 = *(long **)(lVar18 + 0x10);
                    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0))
                    {
                      uVar14 = FUN_00ad3750();
                      *(undefined8 *)puVar6 = uVar14;
                      __cxa_guard_release(puVar5);
                    }
                    while( true ) {
                      if (plVar17 == (long *)0x0) goto LAB_01bb65c4;
                      if (plVar17 == (long *)puVar6) break;
                      plVar17 = (long *)*plVar17;
                    }
                    iVar10 = *piVar2;
                    if (iVar10 == iVar9) {
                      cVar3 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar8) {
                        *piVar2 = iVar9 + 1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') {
                        lVar18 = *(long *)(lVar18 + 0x18);
                        if (lVar18 != 0) {
                          lVar16 = *(long *)(lVar18 + 0x298);
                          if ((*(long *)(lVar16 + 0xe8) != 0) &&
                             (*(int *)(lVar16 + 0xf0) == *(int *)(*(long *)(lVar16 + 0xe8) + 0x2c)))
                          {
                            FUN_002669c8(lVar16 + 0xe8);
                            FUN_002667b4();
                          }
                          lVar16 = *(long *)(lVar18 + 8);
                          piVar2 = (int *)(lVar16 + 0xc);
                          do {
                            iVar9 = *piVar2;
                            cVar3 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                            if (bVar8) {
                              *piVar2 = iVar9 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if (iVar9 + -1 == 0) {
                            *(undefined8 *)(lVar16 + 0x18) = 0;
                            (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))
                                      ((long *)(lVar18 + -0x50));
                          }
                        }
                        break;
                      }
                    }
                    else {
                      ClearExclusiveLocal();
                    }
                    iVar9 = iVar10;
                  } while (iVar10 != 0);
                }
LAB_01bb65c4:
                puVar13 = (undefined8 *)param_1[0xae];
                param_1[0xae] = 0;
                if (puVar13 != (undefined8 *)0x0) {
                  piVar2 = (int *)(puVar13 + 1);
                  do {
                    iVar9 = *piVar2;
                    cVar3 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar8) {
                      *piVar2 = iVar9 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar9 + -1 == 0) {
                    puVar13[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar18 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar18;
                    local_90 = (long *)*puVar13;
                    FUN_02a44274(lVar18 + 0xd8,&local_90);
                  }
                }
              }
              param_1[0xaf] = 0;
              *(undefined4 *)(param_1 + 0xa7) = 2;
            }
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
          if (local_a0 != (long *)0x0) {
            lVar18 = local_a0[0xb];
            piVar2 = (int *)(lVar18 + 0xc);
            do {
              iVar9 = *piVar2;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_a0 + 0x20))();
            }
          }
        }
      }
      else {
        do {
          if (*(undefined1 **)(*plVar15 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01bb5da4;
          plVar15 = plVar15 + 1;
        } while (plVar17 != plVar15);
LAB_01bb5e28:
        local_a0 = (long *)0x0;
      }
      if (local_98 != (long *)0x0) {
        lVar18 = local_98[0xb];
        piVar2 = (int *)(lVar18 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
    }
    iVar9 = (int)param_1[0xa7];
  }
  if (((iVar9 == 0) && ((char)param_1[0x6d] != '\0')) &&
     ((param_1[0xae] == 0 || (*(int *)(param_1[0xae] + 0xc) == 0)))) {
    FUN_01bb7668(&local_90,param_1);
    plVar15 = local_90;
    if (local_90 == (long *)0x0) goto LAB_01bb607c;
    if (*(int *)((long)local_90 + 0xc) != 0) {
      piVar2 = (int *)((long)local_90 + 0xc);
      iVar9 = *(int *)((long)local_90 + 0xc);
      do {
        plVar17 = (long *)plVar15[2];
        lVar18 = FUN_00a3edb8();
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_01bb668c;
          if (plVar17 == (long *)lVar18) break;
          plVar17 = (long *)*plVar17;
        }
        iVar10 = *piVar2;
        if (iVar10 == iVar9) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar18 = plVar15[3];
            plVar15 = (long *)0x0;
            plVar17 = local_90;
            if (lVar18 != 0) {
              plVar15 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x01bb6684;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_01bb668c:
    plVar15 = (long *)0x0;
    plVar17 = local_90;
joined_r0x01bb6684:
    local_90 = plVar17;
    if (plVar17 != (long *)0x0) {
      plVar19 = plVar17 + 1;
      do {
        iVar9 = (int)*plVar19 + -1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *(int *)plVar19 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        plVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_b8 = (long *)*plVar17;
        FUN_02a44274(lVar18 + 0xd8,&local_b8);
      }
    }
    if (plVar15 == (long *)0x0) goto LAB_01bb607c;
    local_90 = (long *)&DAT_afc4d6c05abef19e;
    pplStack_88 = (long **)0x39840c2;
    local_80 = 7;
    local_78 = (long *)0x0;
    puVar13 = (undefined8 *)FUN_02a9b144(plVar15,&local_90);
    plVar17 = (long *)*puVar13;
    if (plVar17 != (long *)0x0) {
      plVar19 = plVar17 + 10;
      do {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *(int *)plVar19 = (int)*plVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (plVar17 != (long *)0x0) {
      if ((plVar17[0x25] != 0) &&
         (plVar19 = *(long **)(plVar17[0x25] + 0x88), plVar19 != (long *)0x0)) {
        plVar1 = plVar19 + 10;
        do {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (param_1[0x54] != 0) {
          FUN_009c69bc(&local_90,plVar15);
          plVar11 = local_90;
          lVar18 = param_1[0x45];
          if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
            piVar2 = (int *)(lVar18 + 0xc);
            iVar9 = *(int *)(lVar18 + 0xc);
            do {
              plVar20 = *(long **)(lVar18 + 0x10);
              if (((*PTR_DAT_0437a740 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a740), iVar10 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_0437a748 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_0437a740);
              }
              while( true ) {
                if (plVar20 == (long *)0x0) goto LAB_01bb67a0;
                if (plVar20 == (long *)PTR_DAT_0437a748) break;
                plVar20 = (long *)*plVar20;
              }
              iVar10 = *piVar2;
              if (iVar10 == iVar9) {
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar8) {
                  *piVar2 = iVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  local_b8 = (long *)0x0;
                  if (*(long *)(lVar18 + 0x18) != 0) {
                    local_b8 = (long *)(*(long *)(lVar18 + 0x18) + -0x50);
                  }
                  goto LAB_01bb67a4;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar9 = iVar10;
            } while (iVar10 != 0);
          }
LAB_01bb67a0:
          local_b8 = (long *)0x0;
LAB_01bb67a4:
          plVar11 = (long *)FUN_00ad6a1c(plVar11,plVar11[1],&local_b8);
          if (local_b8 != (long *)0x0) {
            lVar18 = local_b8[0xb];
            piVar2 = (int *)(lVar18 + 0xc);
            do {
              iVar9 = *piVar2;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_b8 + 0x20))();
            }
          }
          if (local_90 != (long *)0x0) {
            lVar18 = local_90[0xb];
            piVar2 = (int *)(lVar18 + 0xc);
            do {
              iVar9 = *piVar2;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar18 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
          FUN_017d3974(plVar11 + 0x4e,param_1 + 0x53);
          local_90 = (long *)&DAT_3cd05fd5cdd935c9;
          pplStack_88 = (long **)0x3958520;
          local_80 = 0x11;
          local_78 = (long *)0x0;
          FUN_02c91f74(plVar11,&local_90);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          FUN_02c90b50(plVar11,1);
          (**(code **)(*plVar11 + 0x10))(&local_90,plVar11);
          local_b8 = (long *)0x0;
          uStack_b0 = 0;
          FUN_00ad3450(&local_b8,&local_90);
          plVar11 = local_90;
          if (local_90 != (long *)0x0) {
            plVar20 = local_90 + 1;
            do {
              iVar9 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar8) {
                *(int *)plVar20 = iVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 == 0) {
              local_90[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_68 = (long **)*plVar11;
              FUN_02a44274(lVar18 + 0xd8,&local_68);
            }
          }
          FUN_00ad52f4(param_1 + 0xae,&local_b8);
          plVar11 = local_b8;
          if (local_b8 != (long *)0x0) {
            plVar20 = local_b8 + 1;
            do {
              iVar9 = (int)*plVar20 + -1;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar8) {
                *(int *)plVar20 = iVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 == 0) {
              local_b8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_90 = (long *)*plVar11;
              FUN_02a44274(lVar18 + 0xd8,&local_90);
            }
          }
        }
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
      plVar19 = plVar17 + 10;
      do {
        iVar9 = (int)*plVar19 + -1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *(int *)plVar19 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    lVar18 = plVar15[0xb];
    piVar2 = (int *)(lVar18 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 != 0) goto LAB_01bb607c;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
    cVar3 = (char)param_1[0xb7];
  }
  else {
LAB_01bb607c:
    cVar3 = (char)param_1[0xb7];
  }
  if (cVar3 != '\0') {
    return;
  }
  if ((*(char *)((long)param_1 + 0x531) == '\0') && ((char)param_1[0x5c] == '\0')) {
    return;
  }
  if ((int)param_1[0x3e] == 0) {
    return;
  }
  FUN_01bb5868(&local_90,param_1);
  FUN_00b08e00(&local_68,&local_90);
  plVar15 = local_90;
  if (local_90 != (long *)0x0) {
    plVar17 = local_90 + 1;
    do {
      iVar9 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *(int *)plVar17 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_b8 = (long *)*plVar15;
      FUN_02a44274(lVar18 + 0xd8,&local_b8);
    }
  }
  if (local_68 == (long **)0x0) goto LAB_01bb6c28;
  plVar15 = local_68[0x4a];
  plVar17 = local_68[0x4b];
  if (plVar15 == plVar17) {
LAB_01bb6a88:
    if ((plVar15 == plVar17) || (*plVar15 == 0)) goto LAB_01bb6b0c;
    FUN_009cda48(&local_b8,*plVar15,&local_90);
    if (local_b8 == (long *)0x0) {
      bVar8 = false;
    }
    else {
      local_90 = (long *)0x3565f88648ab40b8;
      pplStack_88 = (long **)&DAT_039ac801;
      local_80 = 4;
      local_78 = (long *)0x0;
      uVar12 = FUN_028dcc5c(local_b8,&local_90);
      plVar15 = local_b8;
      if ((uVar12 & 0xff) == 0) {
        bVar8 = false;
      }
      else {
        lVar18 = nn::os::GetCurrentThread();
        plVar17 = plVar15 + 0xf;
        do {
          if (*plVar17 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x6c));
              while (*plVar17 == 0) {
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar8) {
                  *plVar17 = lVar18;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_01bb6b68;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar18;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_01bb6b68:
        if ((ulong)(plVar15[0x15] - plVar15[0x14] >> 5) <= uVar12 >> 0x20) {
LAB_01bb6ca0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        plVar17 = *(long **)(plVar15[0x14] + (uVar12 >> 0x20) * 0x20);
        plVar15[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x6c));
        plVar15 = (long *)(**(code **)(*plVar17 + 0x70))(plVar17);
        puVar13 = (undefined8 *)(**(code **)(*plVar15 + 0x18))();
        bVar8 = (undefined1 *)*puVar13 == &DAT_a957e3270a9644aa;
      }
      if (local_b8 != (long *)0x0) {
        lVar18 = local_b8[0xb];
        piVar2 = (int *)(lVar18 + 0xc);
        do {
          iVar9 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*local_b8 + 0x20))();
        }
      }
    }
  }
  else {
    do {
      if (*(undefined1 **)(*plVar15 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01bb6a88;
      plVar15 = plVar15 + 1;
    } while (plVar17 != plVar15);
LAB_01bb6b0c:
    bVar8 = false;
    local_b8 = (long *)0x0;
  }
  if (local_68 != (long **)0x0) {
    plVar15 = local_68[0xb];
    piVar2 = (int *)((long)plVar15 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      plVar15[3] = 0;
      (*(code *)(*local_68)[4])();
    }
  }
  if ((bool)((char)param_1[0x5c] == '\0' & (bVar8 ^ 1U))) {
    return;
  }
LAB_01bb6c28:
  FUN_01bb7144(param_1);
  return;
}


