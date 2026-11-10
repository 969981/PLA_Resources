/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b89bb0; name: FUN_01b89bb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b89bb0(long param_1,long *param_2)

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
  undefined8 *local_140;
  undefined8 uStack_138;
  long *local_130;
  long *local_128;
  long *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 *local_c8 [2];
  long *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  if (*param_2 != 0) {
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (FUN_01b6ada8(&local_120), plVar11 = local_120, local_120 != (long *)0x0)) {
      FUN_009c69bc(&local_90,*param_2);
      plVar17 = local_90;
      plVar18 = (long *)FUN_01b8b3d4(&local_120,local_90[1]);
      if (plVar18 != (long *)0x0) {
        lVar15 = plVar18[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b8b170;
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
      plVar16 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        plVar16 = plVar18 + 9;
      }
      (**(code **)(*plVar16 + 0xb8))(plVar16,plVar17);
      local_120 = (long *)0x0;
      local_118 = (undefined8 *)0x0;
      FUN_009ad580(&local_120,plVar17 + 99);
      (**(code **)(*plVar16 + 0xc0))(plVar16,&local_120);
      plVar14 = local_120;
      if (local_120 != (long *)0x0) {
        plVar2 = local_120 + 1;
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
          local_120[2] = 0;
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
      (**(code **)(*plVar16 + 200))(plVar16,*(undefined1 *)((long)plVar17 + 0x33b));
      (**(code **)(*plVar16 + 0x90))(plVar16);
      local_80 = plVar18;
      FUN_02a4dad4(plVar17 + 0x1e,&local_80);
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
      FUN_009c69bc(&local_90,plVar11);
      (**(code **)(*local_90 + 0x18))(&local_120);
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_0087f944(&local_a0,&local_120);
      plVar17 = local_120;
      if (local_120 != (long *)0x0) {
        plVar16 = local_120 + 1;
        do {
          iVar10 = (int)*plVar16 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *(int *)plVar16 = iVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 == 0) {
          local_120[2] = 0;
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
      FUN_00d804f8(plVar18,&local_a0,1);
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
          local_120 = (long *)*puVar13;
          FUN_02a44274(lVar15 + 0xd8,&local_120);
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
      FUN_009c69bc(&local_120,*param_2);
      *(undefined1 *)(local_120 + 0x1c) = 1;
      local_120[0x1a] = 0;
      local_120[0x1b] = 0;
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
      lVar15 = plVar11[0xb];
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
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    FUN_009c69bc(&local_120,*param_2);
    plVar11 = (long *)FUN_01b8b558(local_120,local_120[1],param_1);
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
    local_120 = (long *)0x0;
    local_118 = (undefined8 *)0x0;
    FUN_008802f0(&local_120,*param_2 + 0x58);
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_00b5f91c(&local_b0,&local_120);
    plVar17 = local_120;
    if (local_120 != (long *)0x0) {
      plVar18 = local_120 + 1;
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
        local_120[2] = 0;
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
    FUN_01b68c40(plVar11,&local_b0);
    puVar13 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_b0 + 1);
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
        local_b0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_120 = (long *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_120);
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
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b8b170;
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
    FUN_01b84fc0(&local_120,&local_80,&local_90);
    if (local_120 != (long *)(plVar17[0x18] + plVar17[0x19] * 8)) {
      plVar18 = (long *)*local_120;
      puVar13 = (undefined8 *)(**(code **)plVar18[10])(plVar18 + 10);
      if (((*PTR_DAT_0437c678 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar10 != 0)) {
        uVar12 = FUN_009311a8();
        *(undefined8 *)PTR_DAT_0437c680 = uVar12;
        __cxa_guard_release(PTR_DAT_0437c678);
      }
      if (puVar13 != (undefined8 *)0x0) {
LAB_01b89dfc:
        if (puVar13 != (undefined8 *)PTR_DAT_0437c680) goto LAB_01b89efc;
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
          goto joined_r0x01b89e40;
        }
        goto LAB_01b8b170;
      }
    }
    plVar16 = (long *)0x0;
joined_r0x01b89e40:
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
      FUN_01e564f8(&local_120,plVar16);
      plVar17 = local_120;
      puVar8 = PTR_DAT_0437c670;
      puVar7 = PTR_DAT_0437c668;
      puVar6 = PTR_DAT_043794d0;
      if (local_120 != (long *)0x0) {
        if (*(int *)((long)local_120 + 0xc) != 0) {
          piVar1 = (int *)((long)local_120 + 0xc);
          iVar10 = *(int *)((long)local_120 + 0xc);
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
              if (plVar18 == (long *)0x0) goto LAB_01b8aba0;
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
                plVar18 = local_120;
                if (lVar15 != 0) {
                  plVar17 = (long *)(lVar15 + -0x50);
                }
                goto joined_r0x01b8a4b0;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01b8aba0:
        plVar17 = (long *)0x0;
        plVar18 = local_120;
joined_r0x01b8a4b0:
        local_120 = plVar18;
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
LAB_01b8b170:
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
            FUN_0199d60c(&local_120,plVar18);
            if (local_120 == (long *)0x0) {
              local_b8 = (long *)0x0;
            }
            else {
              FUN_011a5e18(&local_b8);
              plVar14 = local_120;
              if (local_120 != (long *)0x0) {
                plVar2 = local_120 + 1;
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
                  local_120[2] = 0;
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
            if (local_b8 != (long *)0x0) {
              uVar12 = FUN_019189f0(local_b8,*(undefined4 *)(param_1 + 0x30));
              FUN_009c69bc(&local_80,*param_2);
              if (local_80 != (long *)0x0) {
                lVar15 = FUN_01b85098(local_80 + 0x1e,&local_120);
                if (lVar15 != 0) {
                  FUN_01b83be4(local_c8);
                  FUN_01918af0(uVar12,local_c8);
                  if (local_c8[0] != (undefined8 *)0x0) {
                    piVar1 = (int *)(local_c8[0] + 1);
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
                      local_c8[0][2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar15 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar15;
                      local_120 = (long *)*local_c8[0];
                      FUN_02a44274(lVar15 + 0xd8,&local_120);
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
              FUN_009c69bc(&local_120,*param_2);
              plVar14 = (long *)FUN_00c60148(local_120 + 0x1e,&local_80);
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
              local_120 = (long *)CONCAT44(local_120._4_4_,0xe);
              local_d0 = 0;
              local_118 = (undefined8 *)0x0;
              local_e0 = (undefined8 *)0x0;
              uStack_d8 = 0;
              local_f0 = 0;
              uStack_e8 = 0;
              local_100 = 0;
              local_f8 = (undefined8 *)0x0;
              local_110 = 0;
              local_108 = (undefined8 *)0x0;
              FUN_01b8b2f4(&local_80,plVar11);
              FUN_01b8bbdc(&local_108,&local_80);
              plVar2 = local_80;
              if (local_80 != (long *)0x0) {
                plVar3 = local_80 + 1;
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
                  local_80[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_90 = (long *)*plVar2;
                  FUN_02a44274(lVar15 + 0xd8,&local_90);
                }
              }
              local_80 = (long *)0x0;
              uStack_78 = 0;
              FUN_008802f0(&local_80,*param_2 + 0x58);
              local_90 = (long *)0x0;
              uStack_88 = 0;
              FUN_00880560(&local_90,&local_80);
              plVar2 = local_80;
              if (local_80 != (long *)0x0) {
                plVar3 = local_80 + 1;
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
                  local_80[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_70[0] = *plVar2;
                  FUN_02a44274(lVar15 + 0xd8,local_70);
                }
              }
              local_80 = (long *)0x0;
              uStack_78 = 0;
              FUN_00b5f91c(&local_80,&local_90);
              plVar2 = local_90;
              if (local_90 != (long *)0x0) {
                plVar3 = local_90 + 1;
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
                  local_90[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_70[0] = *plVar2;
                  FUN_02a44274(lVar15 + 0xd8,local_70);
                }
              }
              FUN_00b5fc1c(&local_118,&local_80);
              plVar2 = local_80;
              if (local_80 != (long *)0x0) {
                plVar3 = local_80 + 1;
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
                  local_80[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_90 = (long *)*plVar2;
                  FUN_02a44274(lVar15 + 0xd8,&local_90);
                }
              }
              local_128 = plVar14;
              if (plVar14 != (long *)0x0) {
                lVar15 = plVar14[0xb];
                if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b8b170;
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
              FUN_01e4b6a0(&local_128,&local_120);
              puVar13 = local_e0;
              if (local_128 != (long *)0x0) {
                lVar15 = local_128[0xb];
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
                  (**(code **)(*local_128 + 0x20))();
                  puVar13 = local_e0;
                }
              }
              local_e0 = puVar13;
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
              puVar13 = local_118;
              if (local_118 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_118 + 1);
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
                  local_118[2] = 0;
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
              if (local_b8 != (long *)0x0) {
                lVar15 = local_b8[0xb];
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
                  (**(code **)(*local_b8 + 0x20))();
                }
              }
            }
            FUN_0199c220(&local_120,plVar18);
            plVar14 = local_120;
            puVar6 = PTR_DAT_0437a0f0;
            if (local_120 != (long *)0x0) {
              if (*(int *)((long)local_120 + 0xc) != 0) {
                piVar1 = (int *)((long)local_120 + 0xc);
                iVar10 = *(int *)((long)local_120 + 0xc);
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
                  plVar2 = (long *)0x0;
                  plVar3 = local_120;
                  if (puVar13 == (undefined8 *)0x0) goto joined_r0x01b8af50;
                  while (puVar13 != (undefined8 *)puVar6) {
                    puVar13 = (undefined8 *)*puVar13;
                    if (puVar13 == (undefined8 *)0x0) {
                      plVar2 = (long *)0x0;
                      goto joined_r0x01b8af50;
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
                      plVar2 = (long *)0x0;
                      if (lVar15 != 0) {
                        plVar2 = (long *)(lVar15 + -0x50);
                      }
                      goto joined_r0x01b8af50;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar10 = iVar9;
                } while (iVar9 != 0);
              }
              plVar2 = (long *)0x0;
              plVar3 = local_120;
joined_r0x01b8af50:
              local_120 = plVar3;
              if (plVar3 != (long *)0x0) {
                plVar14 = plVar3 + 1;
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
                  plVar3[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_80 = (long *)*plVar3;
                  FUN_02a44274(lVar15 + 0xd8,&local_80);
                }
              }
              if (plVar2 != (long *)0x0) {
                FUN_01847290(&local_90,plVar2);
                plVar14 = local_90;
                local_130 = plVar11;
                if (plVar11 != (long *)0x0) {
                  lVar15 = plVar11[0xb];
                  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01b8b170;
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
                local_120 = (long *)0x0;
                local_118 = (undefined8 *)0x0;
                FUN_008802f0(&local_120,*param_2 + 0x58);
                local_140 = (undefined8 *)0x0;
                uStack_138 = 0;
                FUN_00b5f91c(&local_140,&local_120);
                plVar11 = local_120;
                if (local_120 != (long *)0x0) {
                  plVar3 = local_120 + 1;
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
                    local_120[2] = 0;
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
                FUN_01b83cc4(plVar14,&local_130,&local_140);
                puVar13 = local_140;
                if (local_140 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_140 + 1);
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
                    local_140[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar15 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar15;
                    local_120 = (long *)*puVar13;
                    FUN_02a44274(lVar15 + 0xd8,&local_120);
                  }
                }
                if (local_130 != (long *)0x0) {
                  lVar15 = local_130[0xb];
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
                    (**(code **)(*local_130 + 0x20))();
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
                lVar15 = plVar2[0xb];
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
                  (**(code **)(*plVar2 + 0x20))(plVar2);
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
  }
  return;
LAB_01b89efc:
  puVar13 = (undefined8 *)*puVar13;
  plVar16 = (long *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto joined_r0x01b89e40;
  goto LAB_01b89dfc;
}


