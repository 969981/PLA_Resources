/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4c850; name: FUN_01e4c850
 */


void FUN_01e4c850(undefined8 *param_1,undefined4 *param_2)

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
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  int *piVar23;
  long *plVar24;
  undefined8 *local_b0 [2];
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  piVar23 = *(int **)(param_2 + 0xe);
  if (piVar23 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*piVar23 == 0x17) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar16 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar16;
      plVar19 = *(long **)(lVar16 + 0xc0);
      if (plVar19 != (long *)0x0) {
        lVar16 = plVar19[0xb];
        if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_01e4cdcc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar13;
        }
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_88 = (undefined8 *)plVar19[0x18];
      local_a0 = local_88 + plVar19[0x19];
      FUN_01e4d5d0(&local_78,&local_88,&local_a0);
      if (local_78 != (long *)(plVar19[0x18] + plVar19[0x19] * 8)) {
        plVar21 = (long *)*local_78;
        puVar14 = (undefined8 *)(**(code **)plVar21[10])(plVar21 + 10);
        if (((*PTR_DAT_0437c678 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar12 != 0)) {
          uVar13 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_0437c680 = uVar13;
          __cxa_guard_release(PTR_DAT_0437c678);
        }
        if (puVar14 != (undefined8 *)0x0) {
LAB_01e4c95c:
          if (puVar14 != (undefined8 *)PTR_DAT_0437c680) goto code_r0x01e4c964;
          lVar16 = plVar21[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01e4cdcc;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            plVar20 = plVar21;
          } while (cVar4 != '\0');
LAB_01e4c9b8:
          if (plVar20 == (long *)0x0) goto LAB_01e4caa4;
          if (plVar20[0x1a] == 0) {
            local_78 = (long *)0x0;
            uStack_70 = 0;
LAB_01e4c9dc:
            *param_1 = 0;
            param_1[1] = 0;
            FUN_00b63974(param_1,piVar23 + 2);
            bVar5 = true;
          }
          else {
            local_78 = (long *)0x0;
            uStack_70 = 0;
            FUN_019d08dc(&local_78,plVar20[0x1a] + 0x1c0);
            plVar21 = local_78;
            puVar10 = PTR_DAT_0437c670;
            puVar9 = PTR_DAT_0437c668;
            puVar8 = PTR_DAT_043794d0;
            if (local_78 == (long *)0x0) goto LAB_01e4c9dc;
            if (*(int *)((long)local_78 + 0xc) == 0) {
LAB_01e4ce8c:
              plVar21 = (long *)0x0;
              plVar24 = local_78;
            }
            else {
              piVar1 = (int *)((long)local_78 + 0xc);
              iVar12 = *(int *)((long)local_78 + 0xc);
              while( true ) {
                plVar24 = (long *)plVar21[2];
                if (((*puVar9 & 1) != 0) || (iVar11 = __cxa_guard_acquire(puVar9), iVar11 == 0)) {
                  if (plVar24 != (long *)0x0) goto LAB_01e4cb78;
                  goto LAB_01e4ce8c;
                }
                if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
                  uVar13 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                  __cxa_guard_release(puVar8);
                }
                *(undefined **)puVar10 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar9);
                while( true ) {
                  if (plVar24 == (long *)0x0) goto LAB_01e4ce8c;
LAB_01e4cb78:
                  if (plVar24 == (long *)puVar10) break;
                  plVar24 = (long *)*plVar24;
                }
                iVar11 = *piVar1;
                if (iVar11 == iVar12) break;
                ClearExclusiveLocal();
LAB_01e4cb60:
                iVar12 = iVar11;
                if (iVar11 == 0) goto LAB_01e4ce8c;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01e4cb60;
              lVar16 = plVar21[3];
              plVar21 = (long *)0x0;
              plVar24 = local_78;
              if (lVar16 != 0) {
                plVar21 = (long *)(lVar16 + -0x50);
              }
            }
            local_78 = plVar24;
            if (plVar24 != (long *)0x0) {
              plVar22 = plVar24 + 1;
              do {
                iVar12 = (int)*plVar22 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar5) {
                  *(int *)plVar22 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 == 0) {
                plVar24[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_88 = (undefined8 *)*plVar24;
                FUN_02a44274(lVar16 + 0xd8,&local_88);
              }
            }
            if (plVar21 == (long *)0x0) goto LAB_01e4c9dc;
            plVar24 = (long *)plVar21[0xe];
            if (plVar24 != (long *)0x0) {
              lVar16 = plVar24[0xb];
              if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01e4cdcc;
              if (*(long *)(lVar16 + 0x10) == 0) {
                uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                *(undefined8 *)(lVar16 + 0x10) = uVar13;
              }
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            FUN_0199ffbc(&local_78,plVar24);
            if (local_78 == (long *)0x0) {
              local_90 = (long *)0x0;
LAB_01e4ccd0:
              if (plVar24 == (long *)0x0) goto LAB_01e4ccf0;
LAB_01e4ccd4:
              lVar16 = plVar24[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 + -1 != 0) goto LAB_01e4ccf0;
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar24 + 0x20))(plVar24);
              if (local_90 == (long *)0x0) goto LAB_01e4ce00;
LAB_01e4ccf8:
              uVar15 = FUN_01e52398(local_90,*param_2);
              if ((uVar15 & 1) != 0) {
                if (((*PTR_DAT_0437a648 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_0437a648);
                }
                lVar16 = *(long *)PTR_DAT_0437a650;
                *(long *)PTR_DAT_0437a658 = lVar16;
                FUN_02bf7d30(&local_78,*(undefined8 *)(lVar16 + 0x230),*param_2);
                local_a0 = (undefined8 *)0x0;
                uStack_98 = 0;
                FUN_00ab944c(&local_a0,&local_78);
                plVar24 = local_78;
                if (local_78 != (long *)0x0) {
                  plVar22 = local_78 + 1;
                  do {
                    iVar12 = (int)*plVar22 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                    if (bVar5) {
                      *(int *)plVar22 = iVar12;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar12 == 0) {
                    local_78[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar16 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar16;
                    local_88 = (undefined8 *)*plVar24;
                    FUN_02a44274(lVar16 + 0xd8,&local_88);
                  }
                }
                puVar14 = local_a0;
                puVar9 = PTR_DAT_0437a678;
                puVar8 = PTR_DAT_0437a670;
                if (local_a0 != (undefined8 *)0x0) {
                  if (*(int *)((long)local_a0 + 0xc) == 0) {
LAB_01e4d12c:
                    bVar5 = false;
                    puVar14 = local_a0;
                  }
                  else {
                    piVar1 = (int *)((long)local_a0 + 0xc);
                    iVar12 = *(int *)((long)local_a0 + 0xc);
                    while( true ) {
                      plVar24 = (long *)puVar14[2];
                      if (((*puVar8 & 1) != 0) ||
                         (iVar11 = __cxa_guard_acquire(puVar8), iVar11 == 0)) {
                        if (plVar24 != (long *)0x0) goto LAB_01e4cffc;
                        goto LAB_01e4d12c;
                      }
                      if (((*PTR_DAT_0437a598 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar11 != 0)) {
                        if (((*PTR_DAT_043794d0 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                          uVar13 = FUN_0087f8f0();
                          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
                          __cxa_guard_release(PTR_DAT_043794d0);
                        }
                        *(undefined **)PTR_DAT_0437a588 = PTR_DAT_043794d8;
                        __cxa_guard_release(PTR_DAT_0437a598);
                      }
                      *(undefined **)puVar9 = PTR_DAT_0437a588;
                      __cxa_guard_release(puVar8);
                      while( true ) {
                        if (plVar24 == (long *)0x0) goto LAB_01e4d12c;
LAB_01e4cffc:
                        if (plVar24 == (long *)puVar9) break;
                        plVar24 = (long *)*plVar24;
                      }
                      iVar11 = *piVar1;
                      if (iVar11 == iVar12) break;
                      ClearExclusiveLocal();
LAB_01e4cfe4:
                      iVar12 = iVar11;
                      if (iVar11 == 0) goto LAB_01e4d12c;
                    }
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar12 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 != '\0') goto LAB_01e4cfe4;
                    lVar16 = puVar14[3];
                    if (lVar16 == 0) goto LAB_01e4d12c;
                    plVar22 = (long *)(lVar16 + -0x50);
                    uVar13 = FUN_02bdab50(plVar22);
                    plVar24 = local_90;
                    uVar3 = param_2[0x10];
                    uVar15 = FUN_01e52124(local_90,uVar13,uVar3);
                    if ((uVar15 & 1) == 0) {
                      *param_1 = 0;
                      param_1[1] = 0;
LAB_01e4d140:
                      bVar5 = true;
                    }
                    else {
                      FUN_01e5226c(local_b0,plVar24,uVar13,uVar3);
                      puVar14 = local_b0[0];
                      if (local_b0[0] == (undefined8 *)0x0) {
                        bVar5 = false;
                      }
                      else {
                        bVar5 = false;
                        puVar7 = local_b0[0];
                        if (*(int *)((long)local_b0[0] + 0xc) != 0) {
                          piVar1 = (int *)((long)local_b0[0] + 0xc);
                          iVar12 = *(int *)((long)local_b0[0] + 0xc);
                          do {
                            plVar24 = (long *)puVar14[2];
                            if (((*PTR_DAT_0437a250 & 1) == 0) &&
                               (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a250), iVar11 != 0)) {
                              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                                 (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
                                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                                   (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
                                  uVar13 = FUN_0087f8f0();
                                  *(undefined8 *)PTR_DAT_043794d8 = uVar13;
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
                              if (plVar24 == (long *)0x0) {
                                bVar5 = false;
                                goto joined_r0x01e4d324;
                              }
                              if (plVar24 == (long *)PTR_DAT_0437a258) break;
                              plVar24 = (long *)*plVar24;
                            }
                            iVar11 = *piVar1;
                            if (iVar11 == iVar12) {
                              cVar4 = '\x01';
                              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                              if (bVar5) {
                                *piVar1 = iVar12 + 1;
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                              if (cVar4 == '\0') {
                                lVar18 = puVar14[3];
                                bVar5 = false;
                                if (lVar18 != 0) {
                                  local_78 = (long *)0x0;
                                  uStack_70 = 0;
                                  FUN_008802f0(&local_78,(long *)(lVar18 + 8));
                                  local_88 = (undefined8 *)0x0;
                                  uStack_80 = 0;
                                  FUN_00880560(&local_88,&local_78);
                                  plVar24 = local_78;
                                  if (local_78 != (long *)0x0) {
                                    plVar2 = local_78 + 1;
                                    do {
                                      iVar12 = (int)*plVar2 + -1;
                                      cVar4 = '\x01';
                                      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                                      if (bVar5) {
                                        *(int *)plVar2 = iVar12;
                                        cVar4 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar4 != '\0');
                                    if (iVar12 == 0) {
                                      local_78[2] = 0;
                                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                                         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498),
                                         iVar12 != 0)) {
                                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,
                                                     &PTR_LOOP_0411a000);
                                        __cxa_guard_release(PTR_DAT_04379498);
                                      }
                                      lVar17 = *(long *)PTR_DAT_043794a0;
                                      *(long *)PTR_DAT_043794a8 = lVar17;
                                      local_68 = *plVar24;
                                      FUN_02a44274(lVar17 + 0xd8,&local_68);
                                    }
                                  }
                                  *param_1 = 0;
                                  param_1[1] = 0;
                                  FUN_00b5f91c(param_1,&local_88);
                                  puVar14 = local_88;
                                  if (local_88 != (undefined8 *)0x0) {
                                    piVar1 = (int *)(local_88 + 1);
                                    do {
                                      iVar12 = *piVar1;
                                      cVar4 = '\x01';
                                      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                      if (bVar5) {
                                        *piVar1 = iVar12 + -1;
                                        cVar4 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar4 != '\0');
                                    if (iVar12 + -1 == 0) {
                                      local_88[2] = 0;
                                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                                         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498),
                                         iVar12 != 0)) {
                                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,
                                                     &PTR_LOOP_0411a000);
                                        __cxa_guard_release(PTR_DAT_04379498);
                                      }
                                      lVar17 = *(long *)PTR_DAT_043794a0;
                                      *(long *)PTR_DAT_043794a8 = lVar17;
                                      local_78 = (long *)*puVar14;
                                      FUN_02a44274(lVar17 + 0xd8,&local_78);
                                    }
                                  }
                                  lVar17 = *(long *)(lVar18 + 8);
                                  piVar1 = (int *)(lVar17 + 0xc);
                                  do {
                                    iVar12 = *piVar1;
                                    cVar4 = '\x01';
                                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                                    if (bVar5) {
                                      *piVar1 = iVar12 + -1;
                                      cVar4 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar4 != '\0');
                                  if (iVar12 == 1) {
                                    *(undefined8 *)(lVar17 + 0x18) = 0;
                                    (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))
                                              ((long *)(lVar18 + -0x50));
                                  }
                                  bVar5 = true;
                                  puVar7 = local_b0[0];
                                }
                                goto joined_r0x01e4d324;
                              }
                            }
                            else {
                              ClearExclusiveLocal();
                            }
                            iVar12 = iVar11;
                          } while (iVar11 != 0);
                          bVar5 = false;
                        }
joined_r0x01e4d324:
                        if (puVar7 != (undefined8 *)0x0) {
                          piVar1 = (int *)(puVar7 + 1);
                          do {
                            iVar12 = *piVar1;
                            cVar4 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar6) {
                              *piVar1 = iVar12 + -1;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          if (iVar12 + -1 == 0) {
                            puVar7[2] = 0;
                            if (((*PTR_DAT_04379498 & 1) == 0) &&
                               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                              __cxa_guard_release(PTR_DAT_04379498);
                            }
                            lVar18 = *(long *)PTR_DAT_043794a0;
                            *(long *)PTR_DAT_043794a8 = lVar18;
                            local_78 = (long *)*puVar7;
                            FUN_02a44274(lVar18 + 0xd8,&local_78);
                          }
                        }
                        if (bVar5) goto LAB_01e4d140;
                        bVar5 = false;
                      }
                    }
                    lVar16 = *(long *)(lVar16 + 8);
                    piVar1 = (int *)(lVar16 + 0xc);
                    do {
                      iVar12 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar12 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    puVar14 = local_a0;
                    if (iVar12 + -1 == 0) {
                      *(undefined8 *)(lVar16 + 0x18) = 0;
                      (**(code **)(*plVar22 + 0x20))(plVar22);
                      puVar14 = local_a0;
                    }
                  }
                  local_a0 = puVar14;
                  if (puVar14 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar14 + 1);
                    do {
                      iVar12 = *piVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = iVar12 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar12 + -1 == 0) {
                      puVar14[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar16 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar16;
                      local_78 = (long *)*puVar14;
                      FUN_02a44274(lVar16 + 0xd8,&local_78);
                    }
                  }
                  if (bVar5) goto LAB_01e4ce14;
                }
              }
              bVar5 = false;
            }
            else {
              FUN_00bd2404(&local_90);
              plVar22 = local_78;
              if (local_78 == (long *)0x0) goto LAB_01e4ccd0;
              plVar2 = local_78 + 1;
              do {
                iVar12 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 != 0) goto LAB_01e4ccd0;
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_88 = (undefined8 *)*plVar22;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
              if (plVar24 != (long *)0x0) goto LAB_01e4ccd4;
LAB_01e4ccf0:
              if (local_90 != (long *)0x0) goto LAB_01e4ccf8;
LAB_01e4ce00:
              *param_1 = 0;
              param_1[1] = 0;
              FUN_00b63974(param_1,piVar23 + 2);
LAB_01e4ce14:
              bVar5 = true;
            }
            if (local_90 != (long *)0x0) {
              lVar16 = local_90[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_90 + 0x20))();
              }
            }
            lVar16 = plVar21[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*plVar21 + 0x20))(plVar21);
            }
          }
          lVar16 = plVar20[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
          goto joined_r0x01e4ca0c;
        }
      }
LAB_01e4caa4:
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00b63974(param_1,piVar23 + 2);
      bVar5 = true;
joined_r0x01e4ca0c:
      if (plVar19 != (long *)0x0) {
        lVar16 = plVar19[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
      }
      if (bVar5) {
        return;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00b63974(param_1,piVar23 + 2);
  }
  return;
code_r0x01e4c964:
  puVar14 = (undefined8 *)*puVar14;
  plVar20 = (long *)0x0;
  if (puVar14 == (undefined8 *)0x0) goto LAB_01e4c9b8;
  goto LAB_01e4c95c;
}


