/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f59e20; name: FUN_01f59e20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f59e20(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *extraout_x10;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *local_148;
  long *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_120;
  undefined8 *local_110;
  undefined8 *local_100;
  undefined8 *local_f0;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_b0 [2];
  long *local_a0;
  undefined8 uStack_98;
  long *local_90 [2];
  undefined1 local_80;
  long *local_70 [2];
  
  lVar20 = *(long *)(param_1 + 0x90);
  if (lVar20 < 1) {
    uVar19 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x98) < lVar20) goto LAB_01f59e70;
    uVar19 = 1;
  }
  *(undefined4 *)(param_1 + 0x88) = uVar19;
LAB_01f59e70:
  puVar14 = PTR_DAT_0437eee0;
  puVar13 = PTR_DAT_0437eed8;
  puVar12 = PTR_DAT_043794d8;
  puVar11 = PTR_DAT_043794d0;
  lVar20 = *(long *)(param_1 + 0x78);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
    return;
  }
  piVar1 = (int *)(lVar20 + 0xc);
  iVar15 = *(int *)(lVar20 + 0xc);
LAB_01f59ed4:
  plVar31 = *(long **)(lVar20 + 0x10);
  if (((*puVar13 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar13), iVar16 != 0)) {
    if (((*puVar11 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar11), iVar16 != 0)) {
      uVar17 = FUN_0087f8f0();
      *(undefined8 *)puVar12 = uVar17;
      __cxa_guard_release(puVar11);
    }
    *(undefined **)puVar14 = puVar12;
    __cxa_guard_release(puVar13);
  }
  while( true ) {
    if (plVar31 == (long *)0x0) {
      return;
    }
    if (plVar31 == (long *)puVar14) break;
    plVar31 = (long *)*plVar31;
  }
  iVar16 = *piVar1;
  if (iVar16 == iVar15) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      lVar20 = *(long *)(lVar20 + 0x18);
      if (lVar20 == 0) {
        return;
      }
      plVar31 = (long *)(lVar20 + -0x50);
      iVar15 = *(int *)(param_1 + 0x88);
      if (*(int *)(lVar20 + 0x70) == iVar15) goto LAB_01f5a700;
      if (iVar15 != 1) goto LAB_01f5a6ec;
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379678), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar21 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar21;
      plVar27 = *(long **)(lVar21 + 0xc0);
      if (plVar27 == (long *)0x0) {
        FUN_00e8b8e8(local_70,0);
      }
      else {
        lVar21 = plVar27[0xb];
        if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01f5b32c;
        if (*(long *)(lVar21 + 0x10) == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
          *(undefined8 *)(lVar21 + 0x10) = uVar17;
        }
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        FUN_00e8b8e8(local_70,plVar27);
        lVar21 = plVar27[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*plVar27 + 0x20))(plVar27);
        }
      }
      if (local_70[0] != (long *)0x0) {
        if (*(long *)((long)local_70[0] + 0xd0) == 0) {
          local_138 = (undefined8 *)0x0;
          local_130 = (undefined8 *)0x0;
LAB_01f5a7dc:
          bVar6 = false;
        }
        else {
          local_138 = (undefined8 *)0x0;
          local_130 = (undefined8 *)0x0;
          FUN_019d08dc(&local_138,*(long *)((long)local_70[0] + 0xd0) + 0x1c0);
          puVar10 = local_138;
          if (local_138 == (undefined8 *)0x0) {
            bVar6 = false;
          }
          else {
            if (*(int *)((long)local_138 + 0xc) == 0) {
LAB_01f5ad30:
              plVar27 = (long *)0x0;
              puVar9 = local_138;
            }
            else {
              piVar1 = (int *)((long)local_138 + 0xc);
              iVar15 = *(int *)((long)local_138 + 0xc);
              while( true ) {
                plVar27 = (long *)puVar10[2];
                if (((*PTR_DAT_0437c668 & 1) != 0) ||
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_0437c668), iVar16 == 0)) {
                  puVar9 = local_138;
                  if (plVar27 != (long *)0x0) goto LAB_01f5ab80;
                  break;
                }
                if (((*puVar11 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar11), iVar16 != 0)) {
                  uVar17 = FUN_0087f8f0();
                  *(undefined8 *)puVar12 = uVar17;
                  __cxa_guard_release(puVar11);
                }
                *(undefined **)PTR_DAT_0437c670 = puVar12;
                __cxa_guard_release(PTR_DAT_0437c668);
                puVar9 = local_138;
                if (plVar27 == (long *)0x0) break;
LAB_01f5ab80:
                while (puVar9 = local_138, plVar27 != (long *)PTR_DAT_0437c670) {
                  plVar27 = (long *)*plVar27;
                  if (plVar27 == (long *)0x0) {
                    plVar27 = (long *)0x0;
                    goto joined_r0x01f5ad38;
                  }
                }
                iVar16 = *piVar1;
                if (iVar16 == iVar15) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar15 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar21 = puVar10[3];
                    plVar27 = (long *)0x0;
                    if (lVar21 != 0) {
                      plVar27 = (long *)(lVar21 + -0x50);
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar15 = iVar16;
                if (iVar16 == 0) goto LAB_01f5ad30;
              }
            }
joined_r0x01f5ad38:
            local_138 = puVar9;
            if (puVar9 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar9 + 1);
              do {
                iVar15 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 + -1 == 0) {
                puVar9[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar21 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar21;
                local_d0 = (long *)*puVar9;
                FUN_02a44274(lVar21 + 0xd8,&local_d0);
              }
            }
            if (plVar27 == (long *)0x0) goto LAB_01f5a7dc;
            plVar28 = (long *)plVar27[0xe];
            if (plVar28 == (long *)0x0) {
              bVar6 = false;
            }
            else {
              lVar21 = plVar28[0xb];
              if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01f5b32c;
              if (*(long *)(lVar21 + 0x10) == 0) {
                uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
                *(undefined8 *)(lVar21 + 0x10) = uVar17;
              }
              piVar1 = (int *)(lVar21 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              FUN_0199c220(&local_138,plVar28);
              puVar10 = local_138;
              if (local_138 == (undefined8 *)0x0) {
LAB_01f5acd4:
                bVar6 = false;
              }
              else {
                if (*(int *)((long)local_138 + 0xc) == 0) {
LAB_01f5ae64:
                  local_148 = (long *)0x0;
                  puVar10 = local_138;
                }
                else {
                  piVar1 = (int *)((long)local_138 + 0xc);
                  iVar15 = *(int *)((long)local_138 + 0xc);
                  while( true ) {
                    local_140 = (long *)puVar10[2];
                    if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                       (iVar16 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar16 != 0)) {
                      if (((*puVar11 & 1) == 0) &&
                         (iVar16 = __cxa_guard_acquire(puVar11), iVar16 != 0)) {
                        uVar17 = FUN_0087f8f0();
                        *(undefined8 *)puVar12 = uVar17;
                        __cxa_guard_release(puVar11);
                      }
                      *(undefined **)PTR_DAT_0437a0f0 = puVar12;
                      __cxa_guard_release(PTR_DAT_0437a0e8);
                      if (local_140 != (long *)0x0) goto LAB_01f5adc4;
                      goto LAB_01f5ae64;
                    }
                    while( true ) {
                      if (local_140 == (long *)0x0) goto LAB_01f5ae64;
LAB_01f5adc4:
                      if (local_140 == (long *)PTR_DAT_0437a0f0) break;
                      local_140 = (long *)*local_140;
                    }
                    iVar16 = *piVar1;
                    if (iVar16 == iVar15) break;
                    ClearExclusiveLocal();
LAB_01f5ad9c:
                    iVar15 = iVar16;
                    if (iVar16 == 0) goto LAB_01f5ae64;
                  }
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar15 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_01f5ad9c;
                  lVar21 = puVar10[3];
                  local_148 = (long *)0x0;
                  puVar10 = local_138;
                  if (lVar21 != 0) {
                    local_148 = (long *)(lVar21 + -0x50);
                  }
                }
                local_138 = puVar10;
                if (puVar10 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar10 + 1);
                  do {
                    iVar15 = *piVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar15 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar15 + -1 == 0) {
                    puVar10[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar21 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar21;
                    local_d0 = (long *)*puVar10;
                    FUN_02a44274(lVar21 + 0xd8,&local_d0);
                  }
                }
                if (local_148 == (long *)0x0) goto LAB_01f5acd4;
                plVar29 = (long *)local_148[0x45];
                if (plVar29 == (long *)0x0) {
                  bVar6 = false;
                }
                else {
                  lVar21 = plVar29[0xb];
                  if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01f5b32c;
                  if (*(long *)(lVar21 + 0x10) == 0) {
                    uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
                    *(undefined8 *)(lVar21 + 0x10) = uVar17;
                  }
                  piVar1 = (int *)(lVar21 + 0xc);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = *piVar1 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  uVar22 = plVar29[0x28];
                  if (uVar22 == 0) {
LAB_01f5b090:
                    FUN_01f5b6f0();
                    plVar26 = extraout_x10;
                  }
                  else {
                    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
                    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
                    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38;
                    if (uVar24 < 2) {
                      uVar25 = (ulong)((uint)uVar22 - 1) & 6;
                    }
                    else {
                      uVar25 = 6;
                      if (uVar22 < 7) {
                        uVar3 = (uint)uVar22 & 0xff;
                        uVar7 = 0;
                        if ((uVar22 & 0xff) != 0) {
                          uVar7 = 6 / uVar3;
                        }
                        uVar25 = (ulong)(6 - uVar7 * uVar3);
                      }
                    }
                    plVar26 = *(long **)(plVar29[0x27] + uVar25 * 8);
                    if ((plVar26 == (long *)0x0) ||
                       (plVar26 = (long *)*plVar26, plVar26 == (long *)0x0)) goto LAB_01f5b090;
                    if (uVar24 < 2) {
                      do {
                        if (plVar26[1] == 6) {
                          if ((int)plVar26[2] == 6) goto LAB_01f5b094;
                        }
                        else if ((plVar26[1] & uVar22 - 1) != uVar25) break;
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                      goto LAB_01f5b090;
                    }
                    while( true ) {
                      uVar24 = plVar26[1];
                      if (uVar24 != 6) {
                        if (uVar22 <= uVar24) {
                          uVar8 = 0;
                          if (uVar22 != 0) {
                            uVar8 = uVar24 / uVar22;
                          }
                          uVar24 = uVar24 - uVar8 * uVar22;
                        }
                        if (uVar24 == uVar25) goto LAB_01f5b050;
                        goto LAB_01f5b090;
                      }
                      if ((int)plVar26[2] == 6) break;
LAB_01f5b050:
                      plVar26 = (long *)*plVar26;
                      if (plVar26 == (long *)0x0) goto LAB_01f5b090;
                    }
                  }
LAB_01f5b094:
                  plVar26 = (long *)plVar26[3];
                  if (plVar26 != (long *)0x0) {
                    lVar21 = plVar26[0xb];
                    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01f5b32c;
                    if (*(long *)(lVar21 + 0x10) == 0) {
                      uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
                      *(undefined8 *)(lVar21 + 0x10) = uVar17;
                    }
                    piVar1 = (int *)(lVar21 + 0xc);
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar6) {
                        *piVar1 = *piVar1 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  plVar18 = (long *)(**(code **)plVar26[10])(plVar26 + 10);
                  if (((*PTR_DAT_0437eee8 & 1) == 0) &&
                     (iVar15 = __cxa_guard_acquire(PTR_DAT_0437eee8), iVar15 != 0)) {
                    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(PTR_DAT_0437eef8), iVar15 != 0)) {
                      if (((*puVar11 & 1) == 0) &&
                         (iVar15 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar15 != 0)) {
                        uVar17 = FUN_0087f8f0();
                        *(undefined8 *)puVar12 = uVar17;
                        __cxa_guard_release(PTR_DAT_043794d0);
                      }
                      *(undefined **)PTR_DAT_0437ef00 = puVar12;
                      __cxa_guard_release(PTR_DAT_0437eef8);
                    }
                    *(undefined **)PTR_DAT_0437eef0 = PTR_DAT_0437ef00;
                    __cxa_guard_release(PTR_DAT_0437eee8);
                  }
                  for (; plVar18 != (long *)PTR_DAT_0437eef0; plVar18 = (long *)*plVar18) {
                  }
                  plVar18 = (long *)plVar26[0x13];
                  if (plVar18 == (long *)0x0) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = false;
                    do {
                      while( true ) {
                        plVar23 = (long *)plVar18[3];
                        if (plVar23 != (long *)0x0) {
                          lVar21 = plVar23[0xb];
                          if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0)
                          goto LAB_01f5b32c;
                          if (*(long *)(lVar21 + 0x10) == 0) {
                            uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
                            *(undefined8 *)(lVar21 + 0x10) = uVar17;
                          }
                          piVar1 = (int *)(lVar21 + 0xc);
                          do {
                            cVar5 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar4) {
                              *piVar1 = *piVar1 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          lVar21 = plVar23[0xb];
                          if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0)
                          goto LAB_01f5b32c;
                          if (*(long *)(lVar21 + 0x10) == 0) {
                            uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
                            *(undefined8 *)(lVar21 + 0x10) = uVar17;
                          }
                          piVar1 = (int *)(lVar21 + 0xc);
                          do {
                            cVar5 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar4) {
                              *piVar1 = *piVar1 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                        }
                        plVar30 = (long *)plVar23[0xbd];
                        if (plVar30 != (long *)0x0) {
                          plVar2 = plVar30 + 10;
                          do {
                            cVar5 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                            if (bVar4) {
                              *(int *)plVar2 = (int)*plVar2 + 1;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          iVar15 = FUN_02c6849c(plVar30[0x13]);
                          if (iVar15 - 0x281U < 2) {
                            bVar6 = true;
                          }
                          do {
                            iVar15 = (int)*plVar2 + -1;
                            cVar5 = '\x01';
                            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                            if (bVar4) {
                              *(int *)plVar2 = iVar15;
                              cVar5 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar5 != '\0');
                          if (iVar15 == 0) {
                            (**(code **)(*plVar30 + 0x10))(plVar30);
                          }
                        }
                        lVar21 = plVar23[0xb];
                        piVar1 = (int *)(lVar21 + 0xc);
                        do {
                          iVar15 = *piVar1;
                          cVar5 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar4) {
                            *piVar1 = iVar15 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar15 + -1 == 0) {
                          *(undefined8 *)(lVar21 + 0x18) = 0;
                          (**(code **)(*plVar23 + 0x20))();
                        }
                        lVar21 = plVar23[0xb];
                        piVar1 = (int *)(lVar21 + 0xc);
                        do {
                          iVar15 = *piVar1;
                          cVar5 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar4) {
                            *piVar1 = iVar15 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar15 + -1 == 0) break;
                        plVar18 = (long *)*plVar18;
                        if (plVar18 == (long *)0x0) goto LAB_01f5b348;
                      }
                      *(undefined8 *)(lVar21 + 0x18) = 0;
                      (**(code **)(*plVar23 + 0x20))();
                      plVar18 = (long *)*plVar18;
                    } while (plVar18 != (long *)0x0);
                  }
LAB_01f5b348:
                  if (plVar26 != (long *)0x0) {
                    lVar21 = plVar26[0xb];
                    piVar1 = (int *)(lVar21 + 0xc);
                    do {
                      iVar15 = *piVar1;
                      cVar5 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar15 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar15 + -1 == 0) {
                      *(undefined8 *)(lVar21 + 0x18) = 0;
                      (**(code **)(*plVar26 + 0x20))();
                    }
                  }
                  lVar21 = plVar29[0xb];
                  piVar1 = (int *)(lVar21 + 0xc);
                  do {
                    iVar15 = *piVar1;
                    cVar5 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar15 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar15 + -1 == 0) {
                    *(undefined8 *)(lVar21 + 0x18) = 0;
                    (**(code **)(*plVar29 + 0x20))();
                  }
                }
                lVar21 = local_148[0xb];
                piVar1 = (int *)(lVar21 + 0xc);
                do {
                  iVar15 = *piVar1;
                  cVar5 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar15 + -1 == 0) {
                  *(undefined8 *)(lVar21 + 0x18) = 0;
                  (**(code **)(*local_148 + 0x20))();
                }
              }
              lVar21 = plVar28[0xb];
              piVar1 = (int *)(lVar21 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar5 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar21 + 0x18) = 0;
                (**(code **)(*plVar28 + 0x20))(plVar28);
              }
            }
            lVar21 = plVar27[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*plVar27 + 0x20))(plVar27);
            }
          }
        }
        if (local_70[0] != (long *)0x0) {
          lVar21 = local_70[0][0xb];
          piVar1 = (int *)(lVar21 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        if (bVar6) {
          local_d0 = (long *)0x0;
          uStack_c8 = 0;
          FUN_01933b30(&local_d0,param_1 + 0xa0);
          local_c0 = (long *)0x0;
          uStack_b8 = 0;
          FUN_01933da0(&local_c0,param_1 + 0xb0);
          puVar11 = PTR_DAT_04379558;
          if (((*PTR_DAT_04379558 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          puVar13 = PTR_DAT_04379568;
          puVar12 = PTR_DAT_04379560;
          lVar21 = *(long *)PTR_DAT_04379560;
          *(long *)PTR_DAT_04379568 = lVar21;
          plVar27 = *(long **)(lVar21 + 0x300);
          if (plVar27 != (long *)0x0) {
            lVar21 = plVar27[0xb];
            if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01f5b32c;
            if (*(long *)(lVar21 + 0x10) == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
              *(undefined8 *)(lVar21 + 0x10) = uVar17;
            }
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_0168485c(local_b0,plVar27);
          if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)
             ) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          lVar21 = *(long *)puVar12;
          *(long *)puVar13 = lVar21;
          plVar28 = *(long **)(lVar21 + 0x228);
          if (plVar28 != (long *)0x0) {
            lVar21 = plVar28[0xb];
            if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_01f5b32c;
            if (*(long *)(lVar21 + 0x10) == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
              *(undefined8 *)(lVar21 + 0x10) = uVar17;
            }
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_138 = (undefined8 *)0x0;
          local_130 = (undefined8 *)0x0;
          FUN_008802f0(&local_138,plVar28 + 0xb);
          local_a0 = (long *)0x0;
          uStack_98 = 0;
          FUN_01685098(&local_a0,&local_138);
          puVar10 = local_138;
          if (local_138 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_138 + 1);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              local_138[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_70[0] = (long *)*puVar10;
              FUN_02a44274(lVar21 + 0xd8,local_70);
            }
          }
          if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)
             ) {
            FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379558);
          }
          lVar21 = *(long *)puVar12;
          *(long *)puVar13 = lVar21;
          plVar29 = *(long **)(lVar21 + 0x298);
          if (plVar29 == (long *)0x0) {
            FUN_0168493c(local_90,0);
            local_80 = 0;
          }
          else {
            lVar21 = plVar29[0xb];
            if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_01f5b32c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar21 + 0x10) == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
              *(undefined8 *)(lVar21 + 0x10) = uVar17;
            }
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            FUN_0168493c(local_90,plVar29);
            local_80 = 0;
            lVar21 = plVar29[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*plVar29 + 0x20))(plVar29);
            }
          }
          if (plVar28 != (long *)0x0) {
            lVar21 = plVar28[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*plVar28 + 0x20))(plVar28);
            }
          }
          if (plVar27 != (long *)0x0) {
            lVar21 = plVar27[0xb];
            piVar1 = (int *)(lVar21 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar21 + 0x18) = 0;
              (**(code **)(*plVar27 + 0x20))(plVar27);
            }
          }
          FUN_0192d1e0(&local_138,&local_d0);
          local_70[0] = (long *)&DAT_cbf29ce484222645;
          FUN_01930d68(&local_138,local_70);
          *(undefined2 *)(param_1 + 0x70) = 0;
          *(undefined4 *)(param_1 + 0x88) = 0;
          *(long *)(param_1 + 0x90) = 0;
          *(undefined8 *)(param_1 + 0x98) = 0;
          local_138 = (undefined8 *)(PTR_DAT_04380730 + 0x10);
          if (local_f0 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_f0 + 1);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              local_f0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_70[0] = (long *)*local_f0;
              FUN_02a44274(lVar21 + 0xd8,local_70);
            }
          }
          if (local_100 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_100 + 1);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              local_100[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_70[0] = (long *)*local_100;
              FUN_02a44274(lVar21 + 0xd8,local_70);
            }
          }
          if (local_110 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_110 + 1);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              local_110[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_70[0] = (long *)*local_110;
              FUN_02a44274(lVar21 + 0xd8,local_70);
            }
          }
          if (local_120 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_120 + 1);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              local_120[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_70[0] = (long *)*local_120;
              FUN_02a44274(lVar21 + 0xd8,local_70);
            }
          }
          puVar10 = local_130;
          if (local_130 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_130 + 1);
            do {
              iVar15 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 + -1 == 0) {
              local_130[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_70[0] = (long *)*puVar10;
              FUN_02a44274(lVar21 + 0xd8,local_70);
            }
          }
          if (local_90[0] != (long *)0x0) {
            plVar27 = local_90[0] + 1;
            do {
              iVar15 = (int)*plVar27 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar6) {
                *(int *)plVar27 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              local_90[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_138 = (undefined8 *)*local_90[0];
              FUN_02a44274(lVar21 + 0xd8,&local_138);
            }
          }
          plVar27 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar28 = local_a0 + 1;
            do {
              iVar15 = (int)*plVar28 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_138 = (undefined8 *)*plVar27;
              FUN_02a44274(lVar21 + 0xd8,&local_138);
            }
          }
          if (local_b0[0] != (long *)0x0) {
            plVar27 = local_b0[0] + 1;
            do {
              iVar15 = (int)*plVar27 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar6) {
                *(int *)plVar27 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              local_b0[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_138 = (undefined8 *)*local_b0[0];
              FUN_02a44274(lVar21 + 0xd8,&local_138);
            }
          }
          plVar27 = local_c0;
          if (local_c0 != (long *)0x0) {
            plVar28 = local_c0 + 1;
            do {
              iVar15 = (int)*plVar28 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              local_c0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_138 = (undefined8 *)*plVar27;
              FUN_02a44274(lVar21 + 0xd8,&local_138);
            }
          }
          plVar27 = local_d0;
          if (local_d0 != (long *)0x0) {
            plVar28 = local_d0 + 1;
            do {
              iVar15 = (int)*plVar28 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *(int *)plVar28 = iVar15;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar15 == 0) {
              local_d0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar21 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar21;
              local_138 = (undefined8 *)*plVar27;
              FUN_02a44274(lVar21 + 0xd8,&local_138);
            }
          }
          goto LAB_01f5a700;
        }
      }
      iVar15 = *(int *)(param_1 + 0x88);
LAB_01f5a6ec:
      FUN_02599658(plVar31,iVar15);
      FUN_0259a0f8(plVar31,*(undefined4 *)(param_1 + 0x88));
LAB_01f5a700:
      lVar20 = *(long *)(lVar20 + 8);
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*plVar31 + 0x20))(plVar31);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar15 = iVar16;
  if (iVar16 == 0) {
    return;
  }
  goto LAB_01f59ed4;
}


