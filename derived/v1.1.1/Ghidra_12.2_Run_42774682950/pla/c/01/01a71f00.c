/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a71f00; name: FUN_01a71f00
 */


void FUN_01a71f00(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long alStack_180 [12];
  undefined1 *local_120;
  code *local_118;
  code *local_110;
  undefined1 *local_108;
  long alStack_100 [12];
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90 [2];
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_58;
  
  if ((long *)*param_2 == (long *)0x0) {
    return;
  }
  (**(code **)(*(long *)*param_2 + 0x10))(&local_70);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_009cca14(&local_80,&local_70);
  plVar5 = local_70;
  if (local_70 != (long *)0x0) {
    plVar14 = local_70 + 1;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_a0 = (undefined8 *)*plVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_a0);
    }
  }
  FUN_00ac3ca4(param_1 + 0x248,&local_80);
  puVar8 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70 = (long *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_70);
    }
  }
  (**(code **)(*(long *)*param_2 + 0x10))(&local_70);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_009cca14(&local_80,&local_70);
  plVar5 = local_70;
  if (local_70 != (long *)0x0) {
    plVar14 = local_70 + 1;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_a0 = (undefined8 *)*plVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_a0);
    }
  }
  FUN_00ac3ca4(param_1 + 0x268,&local_80);
  puVar8 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70 = (long *)*puVar8;
      FUN_02a44274(lVar12 + 0xd8,&local_70);
    }
  }
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00af7e30(&local_70,*param_2 + 0x230);
  plVar5 = local_70;
  puVar7 = PTR_DAT_0437a558;
  puVar6 = PTR_DAT_0437a550;
  if (local_70 != (long *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar10 = *(int *)((long)local_70 + 0xc);
      do {
        plVar14 = (long *)plVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar11 = FUN_00aa0310();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01a727f8;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = plVar5[3];
            plVar5 = (long *)0x0;
            plVar14 = local_70;
            if (lVar12 != 0) {
              plVar5 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x01a724a4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01a727f8:
    plVar5 = (long *)0x0;
    plVar14 = local_70;
joined_r0x01a724a4:
    local_70 = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 1;
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        plVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_80 = (undefined8 *)*plVar14;
        FUN_02a44274(lVar12 + 0xd8,&local_80);
      }
    }
    if (plVar5 != (long *)0x0) {
      if ((plVar5[0x3e] != 0) && (*(int *)(plVar5[0x3e] + 0xc) != 0)) {
        plVar14 = *(long **)(param_1 + 0x588);
        FUN_00a9ecd4(local_90,plVar5);
        (**(code **)(*plVar14 + 0x40))(plVar14,local_90);
        if (local_90[0] != (long *)0x0) {
          plVar14 = local_90[0] + 1;
          do {
            iVar10 = (int)*plVar14 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *(int *)plVar14 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            local_90[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_70 = (long *)*local_90[0];
            FUN_02a44274(lVar12 + 0xd8,&local_70);
          }
        }
      }
      (**(code **)(*(long *)plVar5[0x40] + 0x18))(&local_70);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_01a78fc0(&local_80,&local_70);
      plVar14 = local_70;
      if (local_70 != (long *)0x0) {
        plVar2 = local_70 + 1;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_58 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_01a792c0(&local_a0,&local_80);
      puVar8 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70 = (long *)*puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_70);
        }
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_01a795c0(&local_70);
        plVar14 = local_70;
        puVar8 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_a0 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_a0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_70 = (long *)*puVar8;
            FUN_02a44274(lVar12 + 0xd8,&local_70);
          }
        }
        if (plVar14 != (long *)0x0) {
          lVar12 = 0;
          if (*(long *)(param_1 + 0x588) != 0) {
            lVar12 = *(long *)(param_1 + 0x588) + 0x68;
          }
          FUN_01a72b60(plVar14,lVar12);
          lVar12 = plVar14[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      (**(code **)(*(long *)plVar5[0x41] + 0x18))(&local_70);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_01a78fc0(&local_80,&local_70);
      plVar14 = local_70;
      if (local_70 != (long *)0x0) {
        plVar2 = local_70 + 1;
        do {
          iVar10 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_58 = *plVar14;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_01a792c0(&local_a0,&local_80);
      puVar8 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          local_80[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_70 = (long *)*puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_70);
        }
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_01a795c0(&local_70);
        plVar14 = local_70;
        puVar8 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_a0 + 1);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            local_a0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_70 = (long *)*puVar8;
            FUN_02a44274(lVar12 + 0xd8,&local_70);
          }
        }
        if (plVar14 != (long *)0x0) {
          lVar12 = 0;
          if (*(long *)(param_1 + 0x590) != 0) {
            lVar12 = *(long *)(param_1 + 0x590) + 0x68;
          }
          FUN_01a72b60(plVar14,lVar12);
          lVar12 = plVar14[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
      }
      lVar12 = plVar5[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_01a0703c(&local_70,*param_2 + 0xad0);
  plVar5 = local_70;
  if (local_70 == (long *)0x0) {
    return;
  }
  iVar10 = *(int *)((long)local_70 + 0xc);
  if (local_70 != (long *)0x0) {
    plVar14 = local_70 + 1;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_80 = (undefined8 *)*plVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_80);
    }
  }
  if (iVar10 == 0) {
    return;
  }
  local_120 = &LAB_01a79dc4;
  local_118 = FUN_01a79e5c;
  local_110 = FUN_01a79e60;
  local_108 = &LAB_01a79e6c;
  pcVar13 = *(code **)(param_1 + 0x288);
  alStack_100[0] = param_1;
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    (*pcVar13)(param_1 + 0x2a0);
    if (local_110 == (code *)0x0) goto LAB_01a72234;
  }
  (*local_110)(alStack_100,param_1 + 0x2a0);
  *(code **)(param_1 + 0x288) = local_118;
  *(undefined1 **)(param_1 + 0x298) = local_108;
  *(code **)(param_1 + 0x290) = local_110;
  *(undefined8 *)(param_1 + 0x280) = local_120;
LAB_01a72234:
  pcVar13 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (undefined1 *)0x0;
    local_120 = (undefined1 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar13)(alStack_100);
  }
  pcVar13 = *(code **)(param_1 + 0x308);
  alStack_180[0] = param_1;
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    (*pcVar13)(param_1 + 800);
  }
  FUN_01a79fd0(alStack_180,param_1 + 800);
  *(code **)(param_1 + 0x308) = FUN_01a79fcc;
  *(undefined1 **)(param_1 + 0x318) = &LAB_01a79fdc;
  *(code **)(param_1 + 0x310) = FUN_01a79fd0;
  *(undefined8 *)(param_1 + 0x300) = &LAB_01a79e78;
  FUN_01a79fcc(alStack_180);
  return;
}


