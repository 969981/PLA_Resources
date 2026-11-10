/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027973ec; name: FUN_027973ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_027973ec(code *param_1)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
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
  if ((*(int *)(param_1 + 0x70) != 0) || (pcVar13 = param_1 + 0x90, *(long *)pcVar13 == 0))
  goto LAB_0279741c;
  iVar8 = *(int *)(param_1 + 0x78);
  if (iVar8 == 2) {
    local_e0 = param_1;
    FUN_02798350(local_110,*(long *)(param_1 + 8),&local_e0);
    puVar10 = (undefined8 *)FUN_013b2b18();
    uVar9 = *puVar10;
    *(undefined8 *)PTR_DAT_0437b480 = uVar9;
    FUN_02798490(&local_e0,param_1);
    if (local_e0 == (code *)0x0) {
      local_38 = (code *)0x0;
    }
    else {
      FUN_02798e50(&local_38);
      pcVar13 = local_e0;
      if (local_e0 != (code *)0x0) {
        pcVar2 = local_e0 + 8;
        do {
          iVar8 = *(int *)pcVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar5) {
            *(int *)pcVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(long *)(local_e0 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_f0 = *(code **)pcVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_f0);
        }
      }
    }
    local_128[0] = *(undefined4 *)(param_1 + 0x78);
    local_120 = *(long *)(param_1 + 0x80);
    local_e0 = local_38;
    if (local_38 != (code *)0x0) {
      lVar12 = *(long *)(local_38 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02797c08;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_d8 = local_110[0];
    if (local_110[0] != (code *)0x0) {
      lVar12 = *(long *)(local_110[0] + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_02797c08:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_02798570(&local_118,uVar9,local_128,&local_e0);
    if (local_118 != (long *)0x0) {
      lVar12 = local_118[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_118 + 0x20))();
      }
    }
    if (local_d8 != (code *)0x0) {
      lVar12 = *(long *)(local_d8 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)local_d8 + 0x20))();
      }
    }
    if (local_e0 != (code *)0x0) {
      lVar12 = *(long *)(local_e0 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)local_e0 + 0x20))();
      }
    }
    if (local_38 != (code *)0x0) {
      lVar12 = *(long *)(local_38 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)local_38 + 0x20))();
      }
    }
    if (local_110[0] == (code *)0x0) goto LAB_0279741c;
    lVar12 = *(long *)(local_110[0] + 0x58);
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      bVar7 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else if (iVar8 == 1) {
    local_e0 = param_1;
    FUN_02798350(&local_50,*(long *)(param_1 + 8),&local_e0);
    puVar10 = (undefined8 *)FUN_013b2b18();
    uVar9 = *puVar10;
    *(undefined8 *)PTR_DAT_0437b480 = uVar9;
    FUN_02798490(&local_e0,param_1);
    if (local_e0 == (code *)0x0) {
      local_58 = (code *)0x0;
    }
    else {
      FUN_02798e50(&local_58);
      pcVar13 = local_e0;
      if (local_e0 != (code *)0x0) {
        pcVar2 = local_e0 + 8;
        do {
          iVar8 = *(int *)pcVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar5) {
            *(int *)pcVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(long *)(local_e0 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_f0 = *(code **)pcVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_f0);
        }
      }
    }
    local_f0 = local_58;
    if (local_58 != (code *)0x0) {
      lVar12 = *(long *)(local_58 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02797c08;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e8 = local_50;
    if (local_50 != (code *)0x0) {
      lVar12 = *(long *)(local_50 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02797c08;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    FUN_02798ef8(&local_e0,&local_f0);
    FUN_02798490(local_110,param_1);
    local_100 = (long *)0x0;
    uStack_f8 = 0;
    FUN_02799308(&local_100,local_110);
    FUN_013b385c(uVar9,&local_e0,&local_100);
    plVar6 = local_100;
    if (local_100 != (long *)0x0) {
      plVar3 = local_100 + 1;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_38 = (code *)*plVar6;
        FUN_02a44274(lVar12 + 0xd8,&local_38);
      }
    }
    if (local_110[0] != (code *)0x0) {
      pcVar13 = local_110[0] + 8;
      do {
        iVar8 = *(int *)pcVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
        if (bVar5) {
          *(int *)pcVar13 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(long *)(local_110[0] + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_38 = *(code **)local_110[0];
        FUN_02a44274(lVar12 + 0xd8,&local_38);
      }
    }
    pcVar13 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar13)(auStack_c0);
    }
    if (local_e8 != (code *)0x0) {
      lVar12 = *(long *)(local_e8 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)local_e8 + 0x20))();
      }
    }
    if (local_f0 != (code *)0x0) {
      lVar12 = *(long *)(local_f0 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)local_f0 + 0x20))();
      }
    }
    local_110[0] = local_50;
    if (local_58 != (code *)0x0) {
      lVar12 = *(long *)(local_58 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)local_58 + 0x20))();
        local_110[0] = local_50;
      }
    }
    if (local_110[0] == (code *)0x0) goto LAB_0279741c;
    lVar12 = *(long *)(local_110[0] + 0x58);
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      bVar7 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (iVar8 != 0) goto LAB_0279741c;
    local_f0 = param_1;
    FUN_02798350(&local_e0,*(long *)(param_1 + 8),&local_f0);
    local_48 = local_e0;
    if (local_e0 == (code *)0x0) {
      FUN_027983c8(pcVar13,&local_48);
      goto LAB_0279741c;
    }
    lVar12 = *(long *)(local_e0 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02797c08;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    pcVar2 = local_48;
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_027983c8(pcVar13,&local_48);
    local_110[0] = local_e0;
    if (pcVar2 != (code *)0x0) {
      lVar12 = *(long *)(pcVar2 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*(long *)pcVar2 + 0x20))(pcVar2);
        local_110[0] = local_e0;
      }
    }
    local_e0 = local_110[0];
    if (local_110[0] == (code *)0x0) goto LAB_0279741c;
    lVar12 = *(long *)(local_110[0] + 0x58);
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      bVar7 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (bVar7) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*(long *)local_110[0] + 0x20))();
  }
LAB_0279741c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


