/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4ad9c; name: FUN_01a4ad9c
 */


void FUN_01a4ad9c(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar9 = (undefined8 *)param_1[0x60];
    param_1[0x60] = 0;
    if (puVar9 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar9 + 1);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar8 + 0xd8,&local_48);
      }
    }
    param_1[0x61] = 0;
    puVar9 = (undefined8 *)param_1[0x62];
    param_1[0x62] = 0;
    if (puVar9 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar9 + 1);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar8 + 0xd8,&local_48);
      }
    }
    param_1[99] = 0;
    puVar9 = (undefined8 *)param_1[100];
    param_1[100] = 0;
    if (puVar9 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar9 + 1);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = (undefined8 *)*puVar9;
        FUN_02a44274(lVar8 + 0xd8,&local_48);
      }
    }
    param_1[0x65] = 0;
    if (param_1[0x7a] == 0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_009e659c(&local_58);
      if (local_58 != (long *)0x0) {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_01c30264(local_58,&local_78);
        puVar9 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_78 + 1);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_48 = (undefined8 *)*puVar9;
            FUN_02a44274(lVar8 + 0xd8,&local_48);
          }
        }
        if (local_58 != (long *)0x0) {
          lVar8 = local_58[0xb];
          piVar2 = (int *)(lVar8 + 0xc);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
      }
    }
  }
  else {
    (**(code **)(*(long *)*param_2 + 0x10))(&local_48);
    local_58 = (long *)0x0;
    uStack_50 = 0;
    FUN_0087f944(&local_58,&local_48);
    puVar9 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_48 + 1);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = (long *)*puVar9;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
    FUN_0087fcf0(param_1 + 0x60,&local_58);
    plVar6 = local_58;
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 1;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = (undefined8 *)*plVar6;
        FUN_02a44274(lVar8 + 0xd8,&local_48);
      }
    }
    lVar8 = FUN_009aff90(*param_2 + 0xf0,&local_48);
    if (lVar8 != 0) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_008802f0(&local_48,lVar8 + 0x58);
      local_58 = (long *)0x0;
      uStack_50 = 0;
      FUN_00b5f91c(&local_58,&local_48);
      puVar9 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_48 + 1);
        do {
          iVar5 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = (long *)*puVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      FUN_00b5fc1c(param_1 + 0x62,&local_58);
      plVar6 = local_58;
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 1;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_48 = (undefined8 *)*plVar6;
          FUN_02a44274(lVar8 + 0xd8,&local_48);
        }
      }
    }
    plVar6 = (long *)FUN_00bd1b18(*param_2 + 0xf0,&local_48);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(&local_48);
      local_58 = (long *)0x0;
      uStack_50 = 0;
      FUN_00bd1f90(&local_58,&local_48);
      puVar9 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_48 + 1);
        do {
          iVar5 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = (long *)*puVar9;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      FUN_00ab3f84(param_1 + 100,&local_58);
      plVar6 = local_58;
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 1;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_48 = (undefined8 *)*plVar6;
          FUN_02a44274(lVar8 + 0xd8,&local_48);
        }
      }
    }
    if (param_1[0x7a] == 0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_009e659c(&local_38);
      plVar6 = local_38;
      if (local_38 != (long *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x10))(&local_48);
        local_68 = (undefined8 *)0x0;
        uStack_60 = 0;
        FUN_0087f944(&local_68,&local_48);
        puVar9 = local_48;
        if (local_48 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_48 + 1);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            local_48[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_58 = (long *)*puVar9;
            FUN_02a44274(lVar8 + 0xd8,&local_58);
          }
        }
        FUN_01c30264(plVar6,&local_68);
        puVar9 = local_68;
        if (local_68 != (undefined8 *)0x0) {
          piVar2 = (int *)(local_68 + 1);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            local_68[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar8;
            local_48 = (undefined8 *)*puVar9;
            FUN_02a44274(lVar8 + 0xd8,&local_48);
          }
        }
        if (local_38 != (long *)0x0) {
          lVar8 = local_38[0xb];
          piVar2 = (int *)(lVar8 + 0xc);
          do {
            iVar5 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
      }
    }
    param_1[0x67] = 0;
    param_1[0x66] = 0;
  }
  local_80 = (long *)*param_2;
  if (local_80 != (long *)0x0) {
    lVar8 = local_80[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_1 + 0x128))(param_1,&local_80);
  if (local_80 != (long *)0x0) {
    lVar8 = local_80[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return;
}


