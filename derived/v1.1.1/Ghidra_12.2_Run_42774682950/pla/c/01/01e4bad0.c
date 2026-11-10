/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4bad0; name: FUN_01e4bad0
 */


void FUN_01e4bad0(undefined8 *param_1,int *param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *local_b0 [2];
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (*param_2 == 0x17) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar15 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar15;
    plVar18 = *(long **)(lVar15 + 0xc0);
    if (plVar18 != (long *)0x0) {
      lVar15 = plVar18[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01e4c044:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_88 = (undefined8 *)plVar18[0x18];
    local_a0 = local_88 + plVar18[0x19];
    FUN_01e4d5d0(&local_78,&local_88,&local_a0);
    if (local_78 != (long *)(plVar18[0x18] + plVar18[0x19] * 8)) {
      plVar20 = (long *)*local_78;
      puVar13 = (undefined8 *)(**(code **)plVar20[10])(plVar20 + 10);
      if (((*PTR_DAT_0437c678 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar11 != 0)) {
        uVar12 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_0437c680 = uVar12;
        __cxa_guard_release(PTR_DAT_0437c678);
      }
      if (puVar13 != (undefined8 *)0x0) {
LAB_01e4bbd8:
        if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto code_r0x01e4bbe0;
        lVar15 = plVar20[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01e4c044;
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar19 = plVar20;
        } while (cVar4 != '\0');
LAB_01e4bc2c:
        if (plVar19 == (long *)0x0) goto LAB_01e4bd18;
        if (plVar19[0x1a] == 0) {
          local_78 = (long *)0x0;
          uStack_70 = 0;
LAB_01e4bc50:
          *param_1 = 0;
          param_1[1] = 0;
          FUN_00b63974(param_1,param_2 + 2);
          bVar5 = true;
        }
        else {
          local_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_019d08dc(&local_78,plVar19[0x1a] + 0x1c0);
          plVar20 = local_78;
          puVar9 = PTR_DAT_0437c670;
          puVar8 = PTR_DAT_0437c668;
          if (local_78 == (long *)0x0) goto LAB_01e4bc50;
          if (*(int *)((long)local_78 + 0xc) == 0) {
LAB_01e4c0f8:
            plVar20 = (long *)0x0;
            plVar21 = local_78;
          }
          else {
            piVar1 = (int *)((long)local_78 + 0xc);
            iVar11 = *(int *)((long)local_78 + 0xc);
            while( true ) {
              plVar21 = (long *)plVar20[2];
              if (((*puVar8 & 1) != 0) || (iVar10 = __cxa_guard_acquire(puVar8), iVar10 == 0)) {
                if (plVar21 != (long *)0x0) goto LAB_01e4bde4;
                goto LAB_01e4c0f8;
              }
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)puVar9 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar8);
              while( true ) {
                if (plVar21 == (long *)0x0) goto LAB_01e4c0f8;
LAB_01e4bde4:
                if (plVar21 == (long *)puVar9) break;
                plVar21 = (long *)*plVar21;
              }
              iVar10 = *piVar1;
              if (iVar10 == iVar11) break;
              ClearExclusiveLocal();
LAB_01e4bdcc:
              iVar11 = iVar10;
              if (iVar10 == 0) goto LAB_01e4c0f8;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01e4bdcc;
            lVar15 = plVar20[3];
            plVar20 = (long *)0x0;
            plVar21 = local_78;
            if (lVar15 != 0) {
              plVar20 = (long *)(lVar15 + -0x50);
            }
          }
          local_78 = plVar21;
          if (plVar21 != (long *)0x0) {
            plVar22 = plVar21 + 1;
            do {
              iVar11 = (int)*plVar22 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar5) {
                *(int *)plVar22 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 == 0) {
              plVar21[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar15 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar15;
              local_88 = (undefined8 *)*plVar21;
              FUN_02a44274(lVar15 + 0xd8,&local_88);
            }
          }
          if (plVar20 == (long *)0x0) goto LAB_01e4bc50;
          plVar21 = (long *)plVar20[0xe];
          if (plVar21 != (long *)0x0) {
            lVar15 = plVar21[0xb];
            if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01e4c044;
            if (*(long *)(lVar15 + 0x10) == 0) {
              uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
              *(undefined8 *)(lVar15 + 0x10) = uVar12;
            }
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_0199ffbc(&local_78,plVar21);
          if (local_78 == (long *)0x0) {
            local_90 = (long *)0x0;
LAB_01e4bf48:
            if (plVar21 == (long *)0x0) goto LAB_01e4bf68;
LAB_01e4bf4c:
            lVar15 = plVar21[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 != 0) goto LAB_01e4bf68;
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar21 + 0x20))(plVar21);
            if (local_90 == (long *)0x0) goto LAB_01e4c078;
LAB_01e4bf70:
            uVar3 = *(undefined4 *)(param_3 + 0x58);
            uVar14 = FUN_01e52398(local_90,uVar3);
            if ((uVar14 & 1) != 0) {
              if (((*PTR_DAT_0437a648 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a648);
              }
              lVar15 = *(long *)PTR_DAT_0437a650;
              *(long *)PTR_DAT_0437a658 = lVar15;
              FUN_02bf7d30(&local_78,*(undefined8 *)(lVar15 + 0x230),uVar3);
              local_a0 = (undefined8 *)0x0;
              uStack_98 = 0;
              FUN_00ab944c(&local_a0,&local_78);
              plVar21 = local_78;
              if (local_78 != (long *)0x0) {
                plVar22 = local_78 + 1;
                do {
                  iVar11 = (int)*plVar22 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar5) {
                    *(int *)plVar22 = iVar11;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar11 == 0) {
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_88 = (undefined8 *)*plVar21;
                  FUN_02a44274(lVar15 + 0xd8,&local_88);
                }
              }
              puVar13 = local_a0;
              puVar8 = PTR_DAT_0437a678;
              if (local_a0 != (undefined8 *)0x0) {
                if (*(int *)((long)local_a0 + 0xc) == 0) {
LAB_01e4c3a0:
                  bVar5 = false;
                  puVar13 = local_a0;
                }
                else {
                  piVar1 = (int *)((long)local_a0 + 0xc);
                  iVar11 = *(int *)((long)local_a0 + 0xc);
                  while( true ) {
                    plVar21 = (long *)puVar13[2];
                    if (((*PTR_DAT_0437a670 & 1) != 0) ||
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a670), iVar10 == 0)) {
                      if (plVar21 != (long *)0x0) goto LAB_01e4c268;
                      goto LAB_01e4c3a0;
                    }
                    if (((*PTR_DAT_0437a598 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar10 != 0)) {
                      if (((*PTR_DAT_043794d0 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                        uVar12 = FUN_0087f8f0();
                        *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
                      __cxa_guard_release(PTR_DAT_0437a598);
                    }
                    *(undefined **)puVar8 = PTR_DAT_0437a588;
                    __cxa_guard_release(PTR_DAT_0437a670);
                    while( true ) {
                      if (plVar21 == (long *)0x0) goto LAB_01e4c3a0;
LAB_01e4c268:
                      if (plVar21 == (long *)puVar8) break;
                      plVar21 = (long *)*plVar21;
                    }
                    iVar10 = *piVar1;
                    if (iVar10 == iVar11) break;
                    ClearExclusiveLocal();
LAB_01e4c248:
                    iVar11 = iVar10;
                    if (iVar10 == 0) goto LAB_01e4c3a0;
                  }
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar11 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 != '\0') goto LAB_01e4c248;
                  lVar15 = puVar13[3];
                  if (lVar15 == 0) goto LAB_01e4c3a0;
                  plVar22 = (long *)(lVar15 + -0x50);
                  uVar12 = FUN_02bdab50(plVar22);
                  plVar21 = local_90;
                  uVar3 = *(undefined4 *)(param_3 + 0x60);
                  uVar14 = FUN_01e52124(local_90,uVar12,uVar3);
                  if ((uVar14 & 1) == 0) {
                    *param_1 = 0;
                    param_1[1] = 0;
LAB_01e4c3b4:
                    bVar5 = true;
                  }
                  else {
                    FUN_01e5226c(local_b0,plVar21,uVar12,uVar3);
                    puVar13 = local_b0[0];
                    if (local_b0[0] == (undefined8 *)0x0) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = false;
                      puVar7 = local_b0[0];
                      if (*(int *)((long)local_b0[0] + 0xc) != 0) {
                        piVar1 = (int *)((long)local_b0[0] + 0xc);
                        iVar11 = *(int *)((long)local_b0[0] + 0xc);
                        do {
                          plVar21 = (long *)puVar13[2];
                          if (((*PTR_DAT_0437a250 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a250), iVar10 != 0)) {
                            if (((*PTR_DAT_043795d8 & 1) == 0) &&
                               (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
                              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                 (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                                uVar12 = FUN_0087f8f0();
                                *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                                __cxa_guard_release(PTR_DAT_043794d0);
                              }
                              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
                              __cxa_guard_release(PTR_DAT_043795d8);
                            }
                            *(undefined **)PTR_DAT_0437a258 = PTR_DAT_043795e0;
                            __cxa_guard_release(PTR_DAT_0437a250);
                          }
                          while( true ) {
                            puVar7 = local_b0[0];
                            if (plVar21 == (long *)0x0) {
                              bVar5 = false;
                              goto joined_r0x01e4c5a4;
                            }
                            if (plVar21 == (long *)PTR_DAT_0437a258) break;
                            plVar21 = (long *)*plVar21;
                          }
                          iVar10 = *piVar1;
                          if (iVar10 == iVar11) {
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar5) {
                              *piVar1 = iVar11 + 1;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                            if (cVar4 == '\0') {
                              lVar17 = puVar13[3];
                              bVar5 = false;
                              if (lVar17 != 0) {
                                local_78 = (long *)0x0;
                                uStack_70 = 0;
                                FUN_008802f0(&local_78,(long *)(lVar17 + 8));
                                local_88 = (undefined8 *)0x0;
                                uStack_80 = 0;
                                FUN_00880560(&local_88,&local_78);
                                plVar21 = local_78;
                                if (local_78 != (long *)0x0) {
                                  plVar2 = local_78 + 1;
                                  do {
                                    iVar11 = (int)*plVar2 + -1;
                                    cVar4 = '\x01';
                                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                                    if (bVar5) {
                                      *(int *)plVar2 = iVar11;
                                      cVar4 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar4 != '\0');
                                  if (iVar11 == 0) {
                                    local_78[2] = 0;
                                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)
                                       ) {
                                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,
                                                   &PTR_LOOP_0411a000);
                                      __cxa_guard_release(PTR_DAT_04379498);
                                    }
                                    lVar16 = *(long *)PTR_DAT_043794a0;
                                    *(long *)PTR_DAT_043794a8 = lVar16;
                                    local_68 = *plVar21;
                                    FUN_02a44274(lVar16 + 0xd8,&local_68);
                                  }
                                }
                                *param_1 = 0;
                                param_1[1] = 0;
                                FUN_00b5f91c(param_1,&local_88);
                                puVar13 = local_88;
                                if (local_88 != (undefined8 *)0x0) {
                                  piVar1 = (int *)(local_88 + 1);
                                  do {
                                    iVar11 = *piVar1;
                                    cVar4 = '\x01';
                                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                    if (bVar5) {
                                      *piVar1 = iVar11 + -1;
                                      cVar4 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar4 != '\0');
                                  if (iVar11 + -1 == 0) {
                                    local_88[2] = 0;
                                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)
                                       ) {
                                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,
                                                   &PTR_LOOP_0411a000);
                                      __cxa_guard_release(PTR_DAT_04379498);
                                    }
                                    lVar16 = *(long *)PTR_DAT_043794a0;
                                    *(long *)PTR_DAT_043794a8 = lVar16;
                                    local_78 = (long *)*puVar13;
                                    FUN_02a44274(lVar16 + 0xd8,&local_78);
                                  }
                                }
                                lVar16 = *(long *)(lVar17 + 8);
                                piVar1 = (int *)(lVar16 + 0xc);
                                do {
                                  iVar11 = *piVar1;
                                  cVar4 = '\x01';
                                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                  if (bVar5) {
                                    *piVar1 = iVar11 + -1;
                                    cVar4 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar4 != '\0');
                                if (iVar11 == 1) {
                                  *(undefined8 *)(lVar16 + 0x18) = 0;
                                  (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))
                                            ((long *)(lVar17 + -0x50));
                                }
                                bVar5 = true;
                                puVar7 = local_b0[0];
                              }
                              goto joined_r0x01e4c5a4;
                            }
                          }
                          else {
                            ClearExclusiveLocal();
                          }
                          iVar11 = iVar10;
                        } while (iVar10 != 0);
                        bVar5 = false;
                      }
joined_r0x01e4c5a4:
                      if (puVar7 != (undefined8 *)0x0) {
                        piVar1 = (int *)(puVar7 + 1);
                        do {
                          iVar11 = *piVar1;
                          cVar4 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar6) {
                            *piVar1 = iVar11 + -1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (iVar11 + -1 == 0) {
                          puVar7[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar17 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar17;
                          local_78 = (long *)*puVar7;
                          FUN_02a44274(lVar17 + 0xd8,&local_78);
                        }
                      }
                      if (bVar5) goto LAB_01e4c3b4;
                      bVar5 = false;
                    }
                  }
                  lVar15 = *(long *)(lVar15 + 8);
                  piVar1 = (int *)(lVar15 + 0xc);
                  do {
                    iVar11 = *piVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar11 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  puVar13 = local_a0;
                  if (iVar11 + -1 == 0) {
                    *(undefined8 *)(lVar15 + 0x18) = 0;
                    (**(code **)(*plVar22 + 0x20))(plVar22);
                    puVar13 = local_a0;
                  }
                }
                local_a0 = puVar13;
                if (puVar13 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar13 + 1);
                  do {
                    iVar11 = *piVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar11 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar11 + -1 == 0) {
                    puVar13[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_78 = (long *)*puVar13;
                    FUN_02a44274(lVar15 + 0xd8,&local_78);
                  }
                }
                if (bVar5) goto LAB_01e4c088;
              }
            }
            bVar5 = false;
          }
          else {
            FUN_00bd2404(&local_90);
            plVar22 = local_78;
            if (local_78 == (long *)0x0) goto LAB_01e4bf48;
            plVar2 = local_78 + 1;
            do {
              iVar11 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 != 0) goto LAB_01e4bf48;
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_88 = (undefined8 *)*plVar22;
            FUN_02a44274(lVar15 + 0xd8,&local_88);
            if (plVar21 != (long *)0x0) goto LAB_01e4bf4c;
LAB_01e4bf68:
            if (local_90 != (long *)0x0) goto LAB_01e4bf70;
LAB_01e4c078:
            *param_1 = 0;
            param_1[1] = 0;
            FUN_00b63974(param_1,param_2 + 2);
LAB_01e4c088:
            bVar5 = true;
          }
          if (local_90 != (long *)0x0) {
            lVar15 = local_90[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
          lVar15 = plVar20[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
        }
        lVar15 = plVar19[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        goto joined_r0x01e4bc80;
      }
    }
LAB_01e4bd18:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00b63974(param_1,param_2 + 2);
    bVar5 = true;
joined_r0x01e4bc80:
    if (plVar18 != (long *)0x0) {
      lVar15 = plVar18[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
    }
    if (bVar5) {
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00b63974(param_1,param_2 + 2);
  return;
code_r0x01e4bbe0:
  puVar13 = (undefined8 *)*puVar13;
  plVar19 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto LAB_01e4bc2c;
  goto LAB_01e4bbd8;
}


