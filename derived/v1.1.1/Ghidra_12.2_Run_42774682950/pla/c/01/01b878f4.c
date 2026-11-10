/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b878f4; name: FUN_01b878f4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b878f4(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_130;
  undefined8 uStack_128;
  long *local_120;
  long *local_118;
  long *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 *local_b8 [2];
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  FUN_009c69bc(&local_110,*param_2);
  plVar11 = (long *)FUN_01b88cd0(local_110,local_110[1],param_1);
  if (local_110 != (long *)0x0) {
    lVar15 = local_110[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_110 + 0x20))();
    }
  }
  local_110 = (long *)0x0;
  local_108 = (undefined8 *)0x0;
  FUN_008802f0(&local_110,*param_2 + 0x58);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00b5f91c(&local_a0,&local_110);
  plVar17 = local_110;
  if (local_110 != (long *)0x0) {
    plVar18 = local_110 + 1;
    do {
      iVar10 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_80 = (long *)*plVar17;
      FUN_02a44274(lVar15 + 0xd8,&local_80);
    }
  }
  FUN_01b68c40(plVar11,&local_a0);
  puVar13 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_110 = (long *)*puVar13;
      FUN_02a44274(lVar15 + 0xd8,&local_110);
    }
  }
  (**(code **)(*plVar11 + 0xf0))(plVar11);
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar17 = *(long **)(lVar15 + 0xc0);
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b88a6c;
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
  local_80 = (long *)plVar17[0x18];
  local_90 = local_80 + plVar17[0x19];
  FUN_01b84fc0(&local_110,&local_80,&local_90);
  if (local_110 != (long *)(plVar17[0x18] + plVar17[0x19] * 8)) {
    plVar18 = (long *)*local_110;
    puVar13 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar12;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar13 != (undefined8 *)0x0) {
LAB_01b87b30:
      if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01b87c30;
      lVar15 = plVar18[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
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
          plVar16 = plVar18;
        } while (cVar4 != '\0');
        goto joined_r0x01b87b74;
      }
      goto LAB_01b88a6c;
    }
  }
  plVar16 = (long *)0x0;
joined_r0x01b87b74:
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (plVar16 != (long *)0x0) {
    FUN_01e564f8(&local_110,plVar16);
    plVar17 = local_110;
    puVar8 = PTR_DAT_0437c670;
    puVar7 = PTR_DAT_0437c668;
    puVar6 = PTR_DAT_043794d0;
    if (local_110 != (long *)0x0) {
      if (*(int *)((long)local_110 + 0xc) != 0) {
        piVar1 = (int *)((long)local_110 + 0xc);
        iVar10 = *(int *)((long)local_110 + 0xc);
        do {
          plVar18 = (long *)plVar17[2];
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar12;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar8 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar18 == (long *)0x0) goto LAB_01b8849c;
            if (plVar18 == (long *)puVar8) break;
            plVar18 = (long *)*plVar18;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar15 = plVar17[3];
              plVar17 = (long *)0x0;
              plVar18 = local_110;
              if (lVar15 != 0) {
                plVar17 = (long *)(lVar15 + -0x50);
              }
              goto joined_r0x01b87dac;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar9;
        } while (iVar9 != 0);
      }
LAB_01b8849c:
      plVar17 = (long *)0x0;
      plVar18 = local_110;
joined_r0x01b87dac:
      local_110 = plVar18;
      if (plVar18 != (long *)0x0) {
        plVar14 = plVar18 + 1;
        do {
          iVar10 = (int)*plVar14 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(int *)plVar14 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          plVar18[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_80 = (long *)*plVar18;
          FUN_02a44274(lVar15 + 0xd8,&local_80);
        }
      }
      if (plVar17 != (long *)0x0) {
        plVar18 = (long *)plVar17[0xe];
        if (plVar18 != (long *)0x0) {
          lVar15 = plVar18[0xb];
          if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01b88a6c:
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
          FUN_0199d60c(&local_110,plVar18);
          if (local_110 == (long *)0x0) {
            local_a8 = (long *)0x0;
          }
          else {
            FUN_011a5e18(&local_a8);
            plVar14 = local_110;
            if (local_110 != (long *)0x0) {
              plVar3 = local_110 + 1;
              do {
                iVar10 = (int)*plVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar5) {
                  *(int *)plVar3 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_110[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*plVar14;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
          }
          if (local_a8 != (long *)0x0) {
            uVar12 = FUN_019189f0(local_a8,*(undefined4 *)(param_1 + 0x30));
            FUN_009c69bc(&local_80,*param_2);
            if (local_80 != (long *)0x0) {
              lVar15 = FUN_01b85098(local_80 + 0x1e,&local_110);
              if (lVar15 != 0) {
                FUN_01b83be4(local_b8);
                FUN_01918af0(uVar12,local_b8);
                if (local_b8[0] != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_b8[0] + 1);
                  do {
                    iVar10 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar10 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar10 + -1 == 0) {
                    local_b8[0][2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_110 = (long *)*local_b8[0];
                    FUN_02a44274(lVar15 + 0xd8,&local_110);
                  }
                }
              }
              if (local_80 != (long *)0x0) {
                lVar15 = local_80[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_80 + 0x20))();
                }
              }
            }
            FUN_009c69bc(&local_110,*param_2);
            plVar14 = (long *)FUN_00c60148(local_110 + 0x1e,&local_80);
            if (local_110 != (long *)0x0) {
              lVar15 = local_110[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_110 + 0x20))();
              }
            }
            local_110 = (long *)CONCAT44(local_110._4_4_,0xd);
            local_c0 = 0;
            local_108 = (undefined8 *)0x0;
            local_d0 = (undefined8 *)0x0;
            uStack_c8 = 0;
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = 0;
            local_e8 = (undefined8 *)0x0;
            local_100 = 0;
            local_f8 = (undefined8 *)0x0;
            FUN_01b88bf0(&local_80,plVar11);
            FUN_01b89354(&local_f8,&local_80);
            plVar3 = local_80;
            if (local_80 != (long *)0x0) {
              plVar2 = local_80 + 1;
              do {
                iVar10 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_90 = (long *)*plVar3;
                FUN_02a44274(lVar15 + 0xd8,&local_90);
              }
            }
            local_80 = (long *)0x0;
            uStack_78 = 0;
            FUN_008802f0(&local_80,*param_2 + 0x58);
            local_90 = (long *)0x0;
            uStack_88 = 0;
            FUN_00880560(&local_90,&local_80);
            plVar3 = local_80;
            if (local_80 != (long *)0x0) {
              plVar2 = local_80 + 1;
              do {
                iVar10 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_70[0] = *plVar3;
                FUN_02a44274(lVar15 + 0xd8,local_70);
              }
            }
            local_80 = (long *)0x0;
            uStack_78 = 0;
            FUN_00b5f91c(&local_80,&local_90);
            plVar3 = local_90;
            if (local_90 != (long *)0x0) {
              plVar2 = local_90 + 1;
              do {
                iVar10 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_70[0] = *plVar3;
                FUN_02a44274(lVar15 + 0xd8,local_70);
              }
            }
            FUN_00b5fc1c(&local_108,&local_80);
            plVar3 = local_80;
            if (local_80 != (long *)0x0) {
              plVar2 = local_80 + 1;
              do {
                iVar10 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_90 = (long *)*plVar3;
                FUN_02a44274(lVar15 + 0xd8,&local_90);
              }
            }
            local_118 = plVar14;
            if (plVar14 != (long *)0x0) {
              lVar15 = plVar14[0xb];
              if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b88a6c;
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
            FUN_01e4b6a0(&local_118,&local_110);
            puVar13 = local_d0;
            if (local_118 != (long *)0x0) {
              lVar15 = local_118[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_118 + 0x20))();
                puVar13 = local_d0;
              }
            }
            local_d0 = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar13 + 1);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                puVar13[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*puVar13;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            puVar13 = local_e8;
            if (local_e8 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_e8 + 1);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                local_e8[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*puVar13;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            puVar13 = local_f8;
            if (local_f8 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_f8 + 1);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                local_f8[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*puVar13;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            puVar13 = local_108;
            if (local_108 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_108 + 1);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                local_108[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*puVar13;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            if (local_a8 != (long *)0x0) {
              lVar15 = local_a8[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_a8 + 0x20))();
              }
            }
          }
          FUN_0199c220(&local_110,plVar18);
          plVar14 = local_110;
          puVar6 = PTR_DAT_0437a0f0;
          if (local_110 != (long *)0x0) {
            if (*(int *)((long)local_110 + 0xc) != 0) {
              piVar1 = (int *)((long)local_110 + 0xc);
              iVar10 = *(int *)((long)local_110 + 0xc);
              do {
                puVar13 = (undefined8 *)plVar14[2];
                if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar9 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                    uVar12 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)puVar6 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_0437a0e8);
                }
                plVar3 = (long *)0x0;
                plVar2 = local_110;
                if (puVar13 == (undefined8 *)0x0) goto joined_r0x01b8884c;
                while (puVar13 != (undefined8 *)puVar6) {
                  puVar13 = (undefined8 *)*puVar13;
                  if (puVar13 == (undefined8 *)0x0) {
                    plVar3 = (long *)0x0;
                    goto joined_r0x01b8884c;
                  }
                }
                iVar9 = *piVar1;
                if (iVar9 == iVar10) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar15 = plVar14[3];
                    plVar3 = (long *)0x0;
                    if (lVar15 != 0) {
                      plVar3 = (long *)(lVar15 + -0x50);
                    }
                    goto joined_r0x01b8884c;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar10 = iVar9;
              } while (iVar9 != 0);
            }
            plVar3 = (long *)0x0;
            plVar2 = local_110;
joined_r0x01b8884c:
            local_110 = plVar2;
            if (plVar2 != (long *)0x0) {
              plVar14 = plVar2 + 1;
              do {
                iVar10 = (int)*plVar14 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar5) {
                  *(int *)plVar14 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 == 0) {
                plVar2[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*plVar2;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            if (plVar3 != (long *)0x0) {
              FUN_01847290(&local_90,plVar3);
              plVar14 = local_90;
              local_120 = plVar11;
              if (plVar11 != (long *)0x0) {
                lVar15 = plVar11[0xb];
                if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b88a6c;
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
              local_110 = (long *)0x0;
              local_108 = (undefined8 *)0x0;
              FUN_008802f0(&local_110,*param_2 + 0x58);
              local_130 = (undefined8 *)0x0;
              uStack_128 = 0;
              FUN_00b5f91c(&local_130,&local_110);
              plVar11 = local_110;
              if (local_110 != (long *)0x0) {
                plVar2 = local_110 + 1;
                do {
                  iVar10 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 == 0) {
                  local_110[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_80 = (long *)*plVar11;
                  FUN_02a44274(lVar15 + 0xd8,&local_80);
                }
              }
              FUN_01b83cc4(plVar14,&local_120,&local_130);
              puVar13 = local_130;
              if (local_130 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_130 + 1);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  local_130[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_110 = (long *)*puVar13;
                  FUN_02a44274(lVar15 + 0xd8,&local_110);
                }
              }
              if (local_120 != (long *)0x0) {
                lVar15 = local_120[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_120 + 0x20))();
                }
              }
              if (local_90 != (long *)0x0) {
                lVar15 = local_90[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar10 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar10 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_90 + 0x20))();
                }
              }
              lVar15 = plVar3[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar10 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*plVar3 + 0x20))(plVar3);
              }
            }
          }
          lVar15 = plVar18[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar18 + 0x20))(plVar18);
          }
        }
        lVar15 = plVar17[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return;
LAB_01b87c30:
  puVar13 = (undefined8 *)*puVar13;
  plVar16 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto joined_r0x01b87b74;
  goto LAB_01b87b30;
}


