/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027ffd64; name: FUN_027ffd64
 */


void FUN_027ffd64(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong **ppuVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  ulong *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  ulong *local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  undefined8 *puStack_68;
  
  ppuVar15 = &local_c0;
  if (*(char *)(param_1 + 0x70) == '\x03') {
    *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 8;
    return;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar16 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar16;
  plVar21 = *(long **)(lVar16 + 0xc0);
  if (plVar21 != (long *)0x0) {
    lVar16 = plVar21[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_028003e4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_00e8b8e8(&local_90,plVar21);
  if (local_90 == (long *)0x0) goto joined_r0x027ffe64;
  if (local_90[0x1a] == 0) {
    local_88 = (ulong *)0x0;
    local_80 = (ulong *)0x0;
  }
  else {
    local_88 = (ulong *)0x0;
    local_80 = (ulong *)0x0;
    FUN_019d08dc(&local_88,local_90[0x1a] + 0x1c0);
    puVar14 = local_88;
    puVar10 = PTR_DAT_0437c670;
    puVar9 = PTR_DAT_0437c668;
    puVar8 = PTR_DAT_043794d8;
    puVar7 = PTR_DAT_043794d0;
    if (local_88 != (ulong *)0x0) {
      if (*(int *)((long)local_88 + 0xc) != 0) {
        piVar1 = (int *)((long)local_88 + 0xc);
        iVar12 = *(int *)((long)local_88 + 0xc);
        do {
          plVar24 = (long *)puVar14[2];
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)puVar8 = uVar13;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar24 == (long *)0x0) goto LAB_02800460;
            if (plVar24 == (long *)puVar10) break;
            plVar24 = (long *)*plVar24;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar12) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              uVar17 = puVar14[3];
              plVar24 = (long *)0x0;
              puVar14 = local_88;
              if (uVar17 != 0) {
                plVar24 = (long *)(uVar17 - 0x50);
              }
              goto joined_r0x027ffffc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar11;
        } while (iVar11 != 0);
      }
LAB_02800460:
      plVar24 = (long *)0x0;
      puVar14 = local_88;
joined_r0x027ffffc:
      local_88 = puVar14;
      if (puVar14 != (ulong *)0x0) {
        puVar2 = puVar14 + 1;
        do {
          iVar12 = (int)*puVar2 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *(int *)puVar2 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 == 0) {
          puVar14[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_c0 = (ulong *)*puVar14;
          FUN_02a44274(lVar16 + 0xd8,&local_c0);
        }
      }
      if (plVar24 != (long *)0x0) {
        plVar22 = (long *)plVar24[0xe];
        if (plVar22 != (long *)0x0) {
          lVar16 = plVar22[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_028003e4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar13;
          }
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar16 = plVar22[0xb];
          piVar1 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar22 + 0x20))(plVar22);
          }
          FUN_0199c048(&local_88,plVar22);
          if (local_88 == (ulong *)0x0) {
            local_98 = (long *)0x0;
          }
          else {
            FUN_00ccf754(&local_98);
            puVar14 = local_88;
            if (local_88 != (ulong *)0x0) {
              puVar2 = local_88 + 1;
              do {
                iVar12 = (int)*puVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *(int *)puVar2 = iVar12;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar12 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_c0 = (ulong *)*puVar14;
                FUN_02a44274(lVar16 + 0xd8,&local_c0);
              }
            }
          }
          if (local_98 != (long *)0x0) {
            FUN_019bbcc0(&local_88);
            if (local_88 == (ulong *)0x0) {
              local_a0 = (long *)0x0;
            }
            else {
              FUN_0165ce38(&local_a0);
              puVar14 = local_88;
              if (local_88 != (ulong *)0x0) {
                puVar2 = local_88 + 1;
                do {
                  iVar12 = (int)*puVar2 + -1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *(int *)puVar2 = iVar12;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar12 == 0) {
                  local_88[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_c0 = (ulong *)*puVar14;
                  FUN_02a44274(lVar16 + 0xd8,&local_c0);
                }
              }
            }
            if (local_a0 != (long *)0x0) {
              *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 8;
              cVar5 = *(char *)(param_1 + 0x70);
              if (cVar5 == '\x02') {
                local_78 = (ulong *)0x0;
                local_70 = (ulong *)0x0;
                local_80 = (ulong *)0x0;
                FUN_02801938(local_a0[0x15],&local_88);
                if (local_80 != (ulong *)0x0) {
                  puVar14 = local_80 + 1;
                  do {
                    iVar12 = (int)*puVar14 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                    if (bVar6) {
                      *(int *)puVar14 = iVar12;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
LAB_028001ac:
                  puVar14 = local_80;
                  if (iVar12 == 0) {
                    local_80[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar16 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar16;
                    local_c0 = (ulong *)*puVar14;
LAB_0280035c:
                    FUN_02a44274(lVar16 + 0xd8,ppuVar15);
                  }
                }
              }
              else if (cVar5 == '\x01') {
                local_78 = (ulong *)0x0;
                local_70 = (ulong *)0x0;
                local_80 = (ulong *)0x0;
                FUN_02801938(local_a0[0x16],&local_88);
                if (local_80 != (ulong *)0x0) {
                  puVar14 = local_80 + 1;
                  do {
                    iVar12 = (int)*puVar14 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                    if (bVar6) {
                      *(int *)puVar14 = iVar12;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  goto LAB_028001ac;
                }
              }
              else if (cVar5 == '\0') {
                local_c0 = (ulong *)((ulong)local_c0 & 0xffffffff00000000);
                local_a8 = 0;
                local_b8 = (long *)0x0;
                uStack_b0 = 0;
                lVar23 = local_a0[0x14];
                lVar16 = nn::os::GetCurrentThread();
                plVar22 = (long *)(lVar23 + 0x78);
                do {
                  if (*plVar22 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x6c));
                      while (*plVar22 == 0) {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                        if (bVar6) {
                          *plVar22 = lVar16;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_02800218;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar6) {
                    *plVar22 = lVar16;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_02800218:
                uVar17 = *(ulong *)(lVar23 + 0x88);
                puVar3 = (undefined8 *)(lVar23 + 0x98);
                if (uVar17 < *(ulong *)(lVar23 + 0x90)) {
                  FUN_02801dbc(puVar3,uVar17,&local_c0);
                  *(long *)(lVar23 + 0x88) = *(long *)(lVar23 + 0x88) + 0x20;
                }
                else {
                  uVar20 = *(ulong *)(lVar23 + 0xa0);
                  lVar16 = (long)(uVar17 - *(long *)(lVar23 + 0x80)) >> 5;
                  uVar17 = lVar16 + 1;
                  if (0x7ffffffffffffffe < uVar20) {
                    uVar20 = 0x7fffffffffffffff;
                  }
                  if (uVar20 < uVar17) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar18 = *(ulong *)(lVar23 + 0x90) - *(long *)(lVar23 + 0x80);
                  if ((ulong)(lVar18 >> 5) < uVar20 >> 1) {
                    uVar19 = lVar18 >> 4;
                    uVar20 = uVar17;
                    if (uVar17 <= uVar19) {
                      uVar20 = uVar19;
                    }
                  }
                  local_70 = (ulong *)0x0;
                  puStack_68 = puVar3;
                  if (uVar20 == 0) {
                    puVar14 = (ulong *)0x0;
                  }
                  else {
                    puVar14 = (ulong *)(**(code **)(*(long *)*puVar3 + 0x10))
                                                 ((long *)*puVar3,uVar20 << 5,8);
                    if (puVar14 == (ulong *)0x0) {
                      (**(code **)(*(long *)*puVar3 + 0xb8))();
                    }
                  }
                  puVar2 = puVar14 + lVar16 * 4;
                  local_70 = puVar14 + uVar20 * 4;
                  local_88 = puVar14;
                  local_80 = puVar2;
                  FUN_02801dbc(puVar3,puVar2,&local_c0);
                  local_78 = puVar2 + 4;
                  FUN_02801eac(lVar23 + 0x80,&local_88);
                  FUN_02801f54(&local_88);
                }
                *(undefined8 *)(lVar23 + 0x78) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x6c));
                plVar22 = local_b8;
                if (local_b8 != (long *)0x0) {
                  plVar4 = local_b8 + 1;
                  do {
                    iVar12 = (int)*plVar4 + -1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar6) {
                      *(int *)plVar4 = iVar12;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar12 == 0) {
                    local_b8[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar16 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar16;
                    local_88 = (ulong *)*plVar22;
                    ppuVar15 = &local_88;
                    goto LAB_0280035c;
                  }
                }
              }
              if (local_a0 != (long *)0x0) {
                lVar16 = local_a0[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar12 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*local_a0 + 0x20))();
                }
              }
            }
            if (local_98 != (long *)0x0) {
              lVar16 = local_98[0xb];
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_98 + 0x20))();
              }
            }
          }
        }
        lVar16 = plVar24[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))(plVar24);
        }
      }
    }
  }
  if (local_90 != (long *)0x0) {
    lVar16 = local_90[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
joined_r0x027ffe64:
  if (plVar21 != (long *)0x0) {
    lVar16 = plVar21[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  return;
}


