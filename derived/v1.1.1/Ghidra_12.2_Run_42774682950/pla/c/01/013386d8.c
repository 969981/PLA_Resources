/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013386d8; name: FUN_013386d8
 */


void FUN_013386d8(long param_1)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  char local_94 [4];
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_48;
  
  puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar9 = (long *)(**(code **)*puVar13)(puVar13);
  puVar7 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar8 != 0))
  {
    uVar11 = FUN_009311a8();
    *(undefined8 *)puVar7 = uVar11;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar9 != (long *)puVar7) {
    for (plVar9 = (long *)*plVar9; plVar9 != (long *)puVar7; plVar9 = (long *)*plVar9) {
    }
  }
  local_70 = &DAT_72837ff1f1cec6a2;
  pcStack_68 = "common/map.dat";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_00d37bb4(&local_48,puVar13[0x15],&local_70,10);
  plVar9 = (long *)local_48[0xd];
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (local_48 != (long *)0x0) {
    lVar12 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar12 = FUN_0130abe8(param_1);
  if (lVar12 == 0) goto joined_r0x01338a24;
  if (*(uint *)(lVar12 + 0xe4) < 2) {
    if (*(uint *)(lVar12 + 0xe4) != 1) goto joined_r0x01338a24;
    local_94[0] = '\0';
    local_70 = (undefined1 *)FUN_0131e8f0(*(undefined4 *)(lVar12 + 0xe8),local_94,1);
    if (local_94[0] == '\0') {
      FUN_02c2e7d0(plVar9,&local_70,*(undefined8 *)(param_1 + 0x98));
      FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
    }
    else {
      FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_70);
    }
    local_48 = (long *)0xe3b4968e6294f7de;
    FUN_02c2e7d0(plVar9,&local_48,*(undefined8 *)(param_1 + 0x98));
    FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
                 *(undefined8 *)(param_1 + 0x98));
    local_b0 = *(long **)(param_1 + 0xa8);
    if (local_b0 != (long *)0x0) {
      plVar14 = local_b0 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar9 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = plVar9;
    }
    local_48 = (long *)0xe3b49b8e6295005d;
    local_b8 = plVar9;
    FUN_013390e8(param_1,&local_b0,&local_b8,&local_48);
    if (plVar14 != (long *)0x0) {
      plVar6 = plVar14 + 10;
      do {
        iVar8 = (int)*plVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *(int *)plVar6 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_b0 != (long *)0x0) {
      plVar14 = local_b0 + 10;
      do {
        iVar8 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    local_c0 = *(long **)(param_1 + 0xb0);
    if (local_c0 != (long *)0x0) {
      plVar14 = local_c0 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar9 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = plVar9;
    }
    local_48 = (long *)0xe3b49a8e6294feaa;
    local_c8 = plVar9;
    FUN_013390e8(param_1,&local_c0,&local_c8,&local_48);
    if (plVar14 != (long *)0x0) {
      plVar6 = plVar14 + 10;
      do {
        iVar8 = (int)*plVar6 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *(int *)plVar6 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_c0 == (long *)0x0) goto joined_r0x01338a24;
    plVar14 = local_c0 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar6 = local_c0;
    } while (cVar4 != '\0');
  }
  else {
    uVar10 = FUN_0131c07c(*(undefined4 *)(lVar12 + 0x88));
    if ((uVar10 & 1) == 0) {
      local_88 = *(long **)(param_1 + 0xa0);
      if (local_88 != (long *)0x0) {
        plVar14 = local_88 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar9 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = plVar9 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar14 = plVar9;
      }
      local_70 = (undefined1 *)0xe3b4948e6294f478;
      local_90 = plVar9;
      FUN_013390e8(param_1,&local_88,&local_90,&local_70);
      if (plVar14 != (long *)0x0) {
        plVar6 = plVar14 + 10;
        do {
          iVar8 = (int)*plVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *(int *)plVar6 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if (local_88 != (long *)0x0) {
        plVar14 = local_88 + 10;
        do {
          iVar8 = (int)*plVar14 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(int *)plVar14 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar6 = local_88;
        } while (cVar4 != '\0');
        goto joined_r0x01338d34;
      }
LAB_013388a8:
      if (*(int *)(lVar12 + 0xe4) != 0) goto LAB_013388b0;
LAB_01338d4c:
      uVar10 = 0;
    }
    else {
      local_78 = *(long **)(param_1 + 0xa0);
      if (local_78 != (long *)0x0) {
        plVar14 = local_78 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (plVar9 == (long *)0x0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = plVar9 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar5) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar14 = plVar9;
      }
      local_70 = (undefined1 *)0xe3b4958e6294f62b;
      local_80 = plVar9;
      FUN_013390e8(param_1,&local_78,&local_80,&local_70);
      if (plVar14 != (long *)0x0) {
        plVar6 = plVar14 + 10;
        do {
          iVar8 = (int)*plVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *(int *)plVar6 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if (local_78 == (long *)0x0) goto LAB_013388a8;
      plVar14 = local_78 + 10;
      do {
        iVar8 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar6 = local_78;
      } while (cVar4 != '\0');
joined_r0x01338d34:
      if (iVar8 != 0) goto LAB_013388a8;
      (**(code **)(*plVar6 + 0x10))();
      if (*(int *)(lVar12 + 0xe4) == 0) goto LAB_01338d4c;
LAB_013388b0:
      local_94[0] = '\0';
      local_70 = (undefined1 *)FUN_0131e8f0(*(undefined4 *)(lVar12 + 0xe8),local_94,0);
      if (local_94[0] == '\0') {
        FUN_02c2e7d0(plVar9,&local_70,*(undefined8 *)(param_1 + 0x98));
        FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
      }
      else {
        FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_70);
      }
      local_48 = (long *)0xf2bc4a147075733;
      FUN_02c2e7d0(plVar9,&local_48,*(undefined8 *)(param_1 + 0x98));
      FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa8),
                   *(undefined8 *)(param_1 + 0x98));
      uVar10 = (ulong)*(uint *)(lVar12 + 0xe4);
      if (1 < *(uint *)(lVar12 + 0xe4)) {
        local_94[0] = '\0';
        local_70 = (undefined1 *)FUN_0131e8f0(*(undefined4 *)(lVar12 + 0xec),local_94,0);
        if (local_94[0] == '\0') {
          FUN_02c2e7d0(plVar9,&local_70,*(undefined8 *)(param_1 + 0x98));
          FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
        }
        else {
          FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_70);
        }
        local_48 = (long *)0xf2bc4a147075733;
        FUN_02c2e7d0(plVar9,&local_48,*(undefined8 *)(param_1 + 0x98));
        FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xb0),
                     *(undefined8 *)(param_1 + 0x98));
        uVar10 = (ulong)*(uint *)(lVar12 + 0xe4);
        if (2 < *(uint *)(lVar12 + 0xe4)) {
          lVar15 = 0;
          do {
            local_94[0] = '\0';
            local_70 = (undefined1 *)
                       FUN_0131e8f0(*(undefined4 *)(lVar12 + 0xf0 + lVar15 * 4),local_94,0);
            if (local_94[0] == '\0') {
              FUN_02c2e7d0(plVar9,&local_70,*(undefined8 *)(param_1 + 0x98));
              FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
            }
            else {
              FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_70);
            }
            local_48 = (long *)0xf2bc4a147075733;
            FUN_02c2e7d0(plVar9,&local_48,*(undefined8 *)(param_1 + 0x98));
            FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),
                         *(undefined8 *)(param_1 + 0xb8 + lVar15 * 8),
                         *(undefined8 *)(param_1 + 0x98));
            uVar10 = (ulong)*(uint *)(lVar12 + 0xe4);
            uVar3 = lVar15 + 3;
            lVar15 = lVar15 + 1;
          } while (uVar3 < uVar10);
        }
      }
    }
    local_a0 = *(long **)(param_1 + uVar10 * 8 + 0xa8);
    if (local_a0 != (long *)0x0) {
      plVar14 = local_a0 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar9 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = plVar9;
    }
    local_70 = (undefined1 *)0xe3b4988e6294fb44;
    local_a8 = plVar9;
    FUN_013390e8(param_1,&local_a0,&local_a8,&local_70);
    plVar6 = local_a0;
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        plVar6 = local_a0;
      }
    }
    local_a0 = plVar6;
    if (plVar6 == (long *)0x0) goto joined_r0x01338a24;
    plVar14 = plVar6 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
joined_r0x01338a24:
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return;
}


