/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026523b0; name: FUN_026523b0
 */


void FUN_026523b0(long param_1,byte param_2)

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
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 local_70 [16];
  long *local_58;
  
  if (*(byte *)(param_1 + 0xcb0) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0xcb0) = param_2 & 1;
  FUN_01a87684();
  FUN_01a9bc84(param_1,(param_2 ^ 1) & 1);
  if (*(char *)(param_1 + 0xcb0) == '\0') {
    FUN_01a9b458(param_1);
    FUN_02679ab0(&local_90,param_1);
    if (local_90 == (long *)0x0) {
      local_70._0_8_ = (long *)0x0;
LAB_02652424:
      auVar13._8_8_ = local_70._8_8_;
      auVar13._0_8_ = local_70._0_8_;
    }
    else {
      FUN_00cfac20(local_70);
      plVar11 = local_90;
      if (local_90 == (long *)0x0) goto LAB_02652424;
      plVar12 = local_90 + 1;
      do {
        iVar8 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != 0) goto LAB_02652424;
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_b0 = *plVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_b0);
      auVar13._8_8_ = local_70._8_8_;
      auVar13._0_8_ = local_70._0_8_;
    }
    if ((long *)local_70._0_8_ != (long *)0x0) {
      FUN_01aef878(&local_90);
      plVar11 = local_90;
      puVar6 = PTR_DAT_04382230;
      puVar5 = PTR_DAT_04382228;
      if (local_90 != (long *)0x0) {
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar8 = *(int *)((long)local_90 + 0xc);
          do {
            plVar12 = (long *)plVar11[2];
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar9 = FUN_018cf5f0();
              *(undefined8 *)puVar6 = uVar9;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_02652eb8;
              if (plVar12 == (long *)puVar6) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar11[3];
                plVar11 = (long *)0x0;
                plVar12 = local_90;
                if (lVar10 != 0) {
                  plVar11 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x02652de8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_02652eb8:
        plVar11 = (long *)0x0;
        plVar12 = local_90;
joined_r0x02652de8:
        local_90 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 1;
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
            plVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_b0 = *plVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_b0);
          }
        }
        if (plVar11 != (long *)0x0) {
          FUN_01bfcca8(plVar11,PTR_DAT_0437a330);
          lVar10 = plVar11[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      FUN_01aef868(&local_90,local_70._0_8_);
      plVar11 = local_90;
      puVar6 = PTR_DAT_04382218;
      puVar5 = PTR_DAT_04382210;
      if (local_90 != (long *)0x0) {
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar8 = *(int *)((long)local_90 + 0xc);
          do {
            plVar12 = (long *)plVar11[2];
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar9 = FUN_018cf5f0();
              *(undefined8 *)puVar6 = uVar9;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_02653000;
              if (plVar12 == (long *)puVar6) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar11[3];
                plVar11 = (long *)0x0;
                plVar12 = local_90;
                if (lVar10 != 0) {
                  plVar11 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x02652f54;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_02653000:
        plVar11 = (long *)0x0;
        plVar12 = local_90;
joined_r0x02652f54:
        local_90 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 1;
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
            plVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_b0 = *plVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_b0);
          }
        }
        if (plVar11 != (long *)0x0) {
          FUN_01bfcca8(plVar11,PTR_DAT_0437a330);
          lVar10 = plVar11[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      FUN_01aef888(&local_90,local_70._0_8_);
      plVar11 = local_90;
      puVar6 = PTR_DAT_04381ee0;
      puVar5 = PTR_DAT_04381ed8;
      if (local_90 == (long *)0x0) {
LAB_02652464:
        auVar13._8_8_ = local_70._8_8_;
        auVar13._0_8_ = local_70._0_8_;
        plVar11 = (long *)local_70._0_8_;
      }
      else {
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar8 = *(int *)((long)local_90 + 0xc);
          do {
            plVar12 = (long *)plVar11[2];
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar9 = FUN_018cf5f0();
              *(undefined8 *)puVar6 = uVar9;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_026531a4;
              if (plVar12 == (long *)puVar6) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar11[3];
                plVar11 = (long *)0x0;
                plVar12 = local_90;
                if (lVar10 != 0) {
                  plVar11 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x026530cc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_026531a4:
        plVar11 = (long *)0x0;
        plVar12 = local_90;
joined_r0x026530cc:
        local_90 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 1;
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
            plVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_b0 = *plVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_b0);
          }
        }
        if (plVar11 == (long *)0x0) goto LAB_02652464;
        FUN_01bfcca8(plVar11,PTR_DAT_0437a330);
        lVar10 = plVar11[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 != 0) goto LAB_02652464;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
        auVar13._8_8_ = local_70._8_8_;
        auVar13._0_8_ = local_70._0_8_;
        plVar11 = (long *)local_70._0_8_;
      }
      if (plVar11 != (long *)0x0) {
        auVar13._8_8_ = local_70._8_8_;
        auVar13._0_8_ = plVar11;
        lVar10 = plVar11[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_02652508;
      }
    }
  }
  else {
    FUN_01a9b44c(param_1);
    FUN_02679ab0(&local_90,param_1);
    if (local_90 == (long *)0x0) {
      local_58 = (long *)0x0;
LAB_026524a8:
      auVar13._8_8_ = local_70._8_8_;
      auVar13._0_8_ = local_70._0_8_;
    }
    else {
      FUN_00cfac20(&local_58);
      plVar11 = local_90;
      if (local_90 == (long *)0x0) goto LAB_026524a8;
      plVar12 = local_90 + 1;
      do {
        iVar8 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != 0) goto LAB_026524a8;
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_b0 = *plVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_b0);
      auVar13._8_8_ = local_70._8_8_;
      auVar13._0_8_ = local_70._0_8_;
    }
    if (local_58 != (long *)0x0) {
      FUN_01aef878(&local_90);
      plVar11 = local_90;
      puVar6 = PTR_DAT_04382230;
      puVar5 = PTR_DAT_04382228;
      if (local_90 != (long *)0x0) {
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar8 = *(int *)((long)local_90 + 0xc);
          do {
            plVar12 = (long *)plVar11[2];
            if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
              uVar9 = FUN_018cf5f0();
              *(undefined8 *)puVar6 = uVar9;
              __cxa_guard_release(puVar5);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_02652968;
              if (plVar12 == (long *)puVar6) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar11[3];
                plVar11 = (long *)0x0;
                plVar12 = local_90;
                if (lVar10 != 0) {
                  plVar11 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x0265281c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_02652968:
        plVar11 = (long *)0x0;
        plVar12 = local_90;
joined_r0x0265281c:
        local_90 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 1;
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
            plVar12[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_b0 = *plVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_b0);
          }
        }
        if (plVar11 != (long *)0x0) {
          local_90 = (long *)0x6a437d1436c47a27;
          pcStack_88 = "nyuura";
          local_80 = 6;
          local_78 = (long *)0x0;
          local_b0 = -0x33a9b1bb09b473b5;
          pcStack_a8 = "climbing_candidacy_offset";
          local_a0 = 0x19;
          local_98 = (long *)0x0;
          local_70 = FUN_00aee408(&local_90,&local_b0);
          FUN_01bfcca8(plVar11,local_70);
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          lVar10 = plVar11[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      FUN_01aef868(&local_90,local_58);
      plVar11 = local_90;
      puVar6 = PTR_DAT_04382218;
      puVar5 = PTR_DAT_04382210;
      if (local_90 != (long *)0x0) {
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar8 = *(int *)((long)local_90 + 0xc);
          do {
            plVar12 = (long *)plVar11[2];
            if ((*puVar5 & 1) == 0) {
              iVar7 = __cxa_guard_acquire(puVar5);
              if (iVar7 != 0) {
                uVar9 = FUN_018cf5f0();
                *(undefined8 *)puVar6 = uVar9;
                __cxa_guard_release(puVar5);
              }
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_02652b2c;
              if (plVar12 == (long *)puVar6) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar11[3];
                plVar11 = (long *)0x0;
                plVar12 = local_90;
                if (lVar10 != 0) {
                  plVar11 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x02652a04;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_02652b2c:
        plVar11 = (long *)0x0;
        plVar12 = local_90;
joined_r0x02652a04:
        local_90 = plVar12;
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 1;
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
            plVar12[2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar8 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_b0 = *plVar12;
            FUN_02a44274(lVar10 + 0xd8,&local_b0);
          }
        }
        if (plVar11 != (long *)0x0) {
          local_90 = (long *)0x6a437d1436c47a27;
          pcStack_88 = "nyuura";
          local_80 = 6;
          local_78 = (long *)0x0;
          local_b0 = -0x33a9b1bb09b473b5;
          pcStack_a8 = "climbing_candidacy_offset";
          local_a0 = 0x19;
          local_98 = (long *)0x0;
          auVar13 = FUN_00aee408(&local_90,&local_b0);
          local_70 = auVar13;
          FUN_01bfcca8(plVar11,local_70);
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          lVar10 = plVar11[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
        }
      }
      FUN_01aef888(&local_90,local_58);
      plVar12 = local_90;
      puVar6 = PTR_DAT_04381ee0;
      puVar5 = PTR_DAT_04381ed8;
      plVar11 = local_58;
      auVar13 = local_70;
      if (local_90 != (long *)0x0) {
        if (*(int *)((long)local_90 + 0xc) != 0) {
          piVar1 = (int *)((long)local_90 + 0xc);
          iVar8 = *(int *)((long)local_90 + 0xc);
          do {
            plVar11 = (long *)plVar12[2];
            if ((*puVar5 & 1) == 0) {
              iVar7 = __cxa_guard_acquire(puVar5);
              if (iVar7 != 0) {
                uVar9 = FUN_018cf5f0();
                *(undefined8 *)puVar6 = uVar9;
                __cxa_guard_release(puVar5);
              }
            }
            while( true ) {
              if (plVar11 == (long *)0x0) goto LAB_02652d4c;
              if (plVar11 == (long *)puVar6) break;
              plVar11 = (long *)*plVar11;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar10 = plVar12[3];
                plVar12 = (long *)0x0;
                plVar11 = local_90;
                if (lVar10 != 0) {
                  plVar12 = (long *)(lVar10 + -0x50);
                }
                goto joined_r0x02652bf8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_02652d4c:
        plVar12 = (long *)0x0;
        plVar11 = local_90;
joined_r0x02652bf8:
        local_90 = plVar11;
        if (plVar11 != (long *)0x0) {
          plVar2 = plVar11 + 1;
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
            plVar11[2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar8 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_b0 = *plVar11;
            FUN_02a44274(lVar10 + 0xd8,&local_b0);
          }
        }
        plVar11 = local_58;
        auVar13 = local_70;
        if (plVar12 != (long *)0x0) {
          local_90 = (long *)0x6a437d1436c47a27;
          pcStack_88 = "nyuura";
          local_80 = 6;
          local_78 = (long *)0x0;
          local_b0 = -0x33a9b1bb09b473b5;
          pcStack_a8 = "climbing_candidacy_offset";
          local_a0 = 0x19;
          local_98 = (long *)0x0;
          auVar13 = FUN_00aee408(&local_90,&local_b0);
          local_70 = auVar13;
          FUN_01bfcca8(plVar12,local_70);
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          lVar10 = plVar12[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar11 = local_58;
          auVar13 = local_70;
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            plVar11 = local_58;
            auVar13 = local_70;
          }
        }
      }
      local_58 = plVar11;
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_02652508:
        if (iVar8 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          local_70 = auVar13;
          (**(code **)(*plVar11 + 0x20))();
          lVar10 = *(long *)(param_1 + 0xc10);
          goto joined_r0x02652510;
        }
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0xc10);
  local_70 = auVar13;
joined_r0x02652510:
  if (lVar10 != 0) {
    FUN_009b8630(&local_90);
    if (local_90 != (long *)0x0) {
      FUN_01a3af64(local_90,(param_2 ^ 1) & 1);
      if (local_90 != (long *)0x0) {
        lVar10 = local_90[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_90 + 0x20))();
        }
      }
    }
  }
  return;
}


