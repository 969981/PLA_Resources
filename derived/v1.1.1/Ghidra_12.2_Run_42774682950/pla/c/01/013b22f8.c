/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b22f8; name: FUN_013b22f8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013b22f8(code *param_1)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 local_128 [2];
  long local_120;
  long *local_118;
  code *local_110 [2];
  long *local_100;
  undefined8 uStack_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if ((*(int *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0x90) == 0)) goto LAB_013b2328;
  iVar9 = *(int *)(param_1 + 0x78);
  if (iVar9 == 2) {
    local_e0 = param_1;
    FUN_013b3710(local_110,*(long *)(param_1 + 8),&local_e0);
    puVar11 = (undefined8 *)FUN_013b2b18();
    uVar10 = *puVar11;
    *(undefined8 *)PTR_DAT_0437b480 = uVar10;
    FUN_013b1c3c(&local_e0,param_1);
    if (local_e0 == (code *)0x0) {
      local_38 = (code *)0x0;
    }
    else {
      FUN_013b20c8(&local_38);
      pcVar4 = local_e0;
      if (local_e0 != (code *)0x0) {
        pcVar2 = local_e0 + 8;
        do {
          iVar9 = *(int *)pcVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar6) {
            *(int *)pcVar2 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(long *)(local_e0 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_f0 = *(code **)pcVar4;
          FUN_02a44274(lVar13 + 0xd8,&local_f0);
        }
      }
    }
    local_128[0] = *(undefined4 *)(param_1 + 0x78);
    local_120 = *(long *)(param_1 + 0x80);
    local_e0 = local_38;
    if (local_38 != (code *)0x0) {
      lVar13 = *(long *)(local_38 + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_013b2b00;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_d8 = local_110[0];
    if (local_110[0] != (code *)0x0) {
      lVar13 = *(long *)(local_110[0] + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_013b2b00:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_013b39c4(&local_118,uVar10,local_128,&local_e0);
    if (local_118 != (long *)0x0) {
      lVar13 = local_118[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_118 + 0x20))();
      }
    }
    if (local_d8 != (code *)0x0) {
      lVar13 = *(long *)(local_d8 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_d8 + 0x20))();
      }
    }
    if (local_e0 != (code *)0x0) {
      lVar13 = *(long *)(local_e0 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_e0 + 0x20))();
      }
    }
    if (local_38 != (code *)0x0) {
      lVar13 = *(long *)(local_38 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_38 + 0x20))();
      }
    }
    if (local_110[0] == (code *)0x0) goto LAB_013b2328;
    lVar13 = *(long *)(local_110[0] + 0x58);
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      bVar8 = *piVar1 + -1 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else if (iVar9 == 1) {
    local_e0 = param_1;
    FUN_013b3710(&local_50,*(long *)(param_1 + 8),&local_e0);
    puVar11 = (undefined8 *)FUN_013b2b18();
    uVar10 = *puVar11;
    *(undefined8 *)PTR_DAT_0437b480 = uVar10;
    FUN_013b1c3c(&local_e0,param_1);
    if (local_e0 == (code *)0x0) {
      local_58 = (code *)0x0;
    }
    else {
      FUN_013b20c8(&local_58);
      pcVar4 = local_e0;
      if (local_e0 != (code *)0x0) {
        pcVar2 = local_e0 + 8;
        do {
          iVar9 = *(int *)pcVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar6) {
            *(int *)pcVar2 = iVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 + -1 == 0) {
          *(long *)(local_e0 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_f0 = *(code **)pcVar4;
          FUN_02a44274(lVar13 + 0xd8,&local_f0);
        }
      }
    }
    local_f0 = local_58;
    if (local_58 != (code *)0x0) {
      lVar13 = *(long *)(local_58 + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_013b2b00;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_e8 = local_50;
    if (local_50 != (code *)0x0) {
      lVar13 = *(long *)(local_50 + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_013b2b00;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    FUN_013b4c88(&local_e0,&local_f0);
    FUN_013b1c3c(local_110,param_1);
    local_100 = (long *)0x0;
    uStack_f8 = 0;
    FUN_013b8954(&local_100,local_110);
    FUN_013b385c(uVar10,&local_e0,&local_100);
    plVar7 = local_100;
    if (local_100 != (long *)0x0) {
      plVar3 = local_100 + 1;
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_38 = (code *)*plVar7;
        FUN_02a44274(lVar13 + 0xd8,&local_38);
      }
    }
    if (local_110[0] != (code *)0x0) {
      pcVar4 = local_110[0] + 8;
      do {
        iVar9 = *(int *)pcVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar6) {
          *(int *)pcVar4 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(long *)(local_110[0] + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_38 = *(code **)local_110[0];
        FUN_02a44274(lVar13 + 0xd8,&local_38);
      }
    }
    pcVar4 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar4)(auStack_c0);
    }
    if (local_e8 != (code *)0x0) {
      lVar13 = *(long *)(local_e8 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_e8 + 0x20))();
      }
    }
    if (local_f0 != (code *)0x0) {
      lVar13 = *(long *)(local_f0 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_f0 + 0x20))();
      }
    }
    local_110[0] = local_50;
    if (local_58 != (code *)0x0) {
      lVar13 = *(long *)(local_58 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_58 + 0x20))();
        local_110[0] = local_50;
      }
    }
    if (local_110[0] == (code *)0x0) goto LAB_013b2328;
    lVar13 = *(long *)(local_110[0] + 0x58);
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      bVar8 = *piVar1 + -1 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if (iVar9 != 0) goto LAB_013b2328;
    local_f0 = param_1;
    FUN_013b3710(&local_e0,*(long *)(param_1 + 8),&local_f0);
    local_48 = local_e0;
    if (local_e0 != (code *)0x0) {
      lVar13 = *(long *)(local_e0 + 0x58);
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_013b2b00;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_013b3794(param_1 + 0x90,&local_48);
    local_110[0] = local_e0;
    if (local_48 != (code *)0x0) {
      lVar13 = *(long *)(local_48 + 0x58);
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*(long *)local_48 + 0x20))();
        local_110[0] = local_e0;
      }
    }
    local_e0 = local_110[0];
    if (local_110[0] == (code *)0x0) goto LAB_013b2328;
    lVar13 = *(long *)(local_110[0] + 0x58);
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      bVar8 = *piVar1 + -1 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (bVar8) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*(long *)local_110[0] + 0x20))();
  }
LAB_013b2328:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


