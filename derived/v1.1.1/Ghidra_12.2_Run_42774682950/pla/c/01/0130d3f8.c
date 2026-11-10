/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130d3f8; name: FUN_0130d3f8
 */


void FUN_0130d3f8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
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
  
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar7 = (long *)(**(code **)*puVar12)(puVar12);
  puVar5 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar6 != 0))
  {
    uVar9 = FUN_009311a8();
    *(undefined8 *)puVar5 = uVar9;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar7 != (long *)puVar5) {
    for (plVar7 = (long *)*plVar7; plVar7 != (long *)puVar5; plVar7 = (long *)*plVar7) {
    }
  }
  local_70 = &DAT_72837ff1f1cec6a2;
  pcStack_68 = "common/map.dat";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_00d37bb4(&local_48,puVar12[0x15],&local_70,10);
  plVar7 = (long *)local_48[0xd];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar10 = FUN_0130abe8(param_1);
  if (lVar10 == 0) goto joined_r0x0130d9b8;
  if (*(uint *)(lVar10 + 0xe4) < 2) {
    if (*(uint *)(lVar10 + 0xe4) != 1) goto joined_r0x0130d9b8;
    local_94[0] = '\0';
    local_70 = (undefined1 *)FUN_0131e8f0(*(undefined4 *)(lVar10 + 0xe8),local_94,1);
    if (local_94[0] == '\0') {
      FUN_02c2e7d0(plVar7,&local_70,*(undefined8 *)(param_1 + 0x98));
      FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
    }
    else {
      FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_70);
    }
    local_48 = (long *)0xe3b4968e6294f7de;
    FUN_02c2e7d0(plVar7,&local_48,*(undefined8 *)(param_1 + 0x98));
    FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xe8),
                 *(undefined8 *)(param_1 + 0x98));
    local_b0 = *(long **)(param_1 + 0xb8);
    if (local_b0 != (long *)0x0) {
      plVar13 = local_b0 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plVar7 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar13 = plVar7;
    }
    local_48 = (long *)0xe3b49b8e6295005d;
    local_b8 = plVar7;
    FUN_0130d3c0(param_1,&local_b0,&local_b8,&local_48);
    if (plVar13 != (long *)0x0) {
      plVar8 = plVar13 + 10;
      do {
        iVar6 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    if (local_b0 != (long *)0x0) {
      plVar13 = local_b0 + 10;
      do {
        iVar6 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    local_c0 = *(long **)(param_1 + 0xc0);
    if (local_c0 != (long *)0x0) {
      plVar13 = local_c0 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plVar7 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar13 = plVar7;
    }
    local_48 = (long *)0xe3b49a8e6294feaa;
    local_c8 = plVar7;
    FUN_0130d3c0(param_1,&local_c0,&local_c8,&local_48);
    plVar8 = local_c0;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        plVar8 = local_c0;
      }
    }
    local_c0 = plVar8;
    if (plVar8 == (long *)0x0) goto joined_r0x0130d9b8;
    plVar13 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if ((long)*(int *)(lVar10 + 0x84) - 5U < 2) {
      local_88 = *(long **)(param_1 + 0xe8);
      if (local_88 != (long *)0x0) {
        plVar13 = local_88 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (plVar7 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar7 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar13 = plVar7;
      }
      local_70 = (undefined1 *)0xe3b4948e6294f478;
      local_90 = plVar7;
      FUN_0130d3c0(param_1,&local_88,&local_90,&local_70);
      plVar8 = local_88;
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          plVar8 = local_88;
        }
      }
      local_88 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar13 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar13 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_0130d81c;
      }
LAB_0130d820:
      if (*(int *)(lVar10 + 0xe4) != 0) goto LAB_0130d828;
LAB_0130d90c:
      uVar11 = 0;
    }
    else {
      local_78 = *(long **)(param_1 + 0xe8);
      if (local_78 != (long *)0x0) {
        plVar13 = local_78 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (plVar7 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar7 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = (int)*plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar13 = plVar7;
      }
      local_70 = (undefined1 *)0xe3b4958e6294f62b;
      local_80 = plVar7;
      FUN_0130d3c0(param_1,&local_78,&local_80,&local_70);
      plVar8 = local_78;
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          plVar8 = local_78;
        }
      }
      local_78 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0130d820;
      plVar13 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar13 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0130d81c:
      if (iVar6 != 0) goto LAB_0130d820;
      (**(code **)(*plVar8 + 0x10))();
      if (*(int *)(lVar10 + 0xe4) == 0) goto LAB_0130d90c;
LAB_0130d828:
      uVar14 = 0;
      do {
        local_94[0] = '\0';
        local_70 = (undefined1 *)
                   FUN_0131e8f0(*(undefined4 *)(lVar10 + 0xe8 + uVar14 * 4),local_94,0);
        if (local_94[0] == '\0') {
          FUN_02c2e7d0(plVar7,&local_70,*(undefined8 *)(param_1 + 0x98));
          FUN_02c36128(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_1 + 0x98),0,0);
        }
        else {
          FUN_010c7198(*(undefined8 *)(param_1 + 0x90),0,local_70);
        }
        local_48 = (long *)0xf2bc4a147075733;
        FUN_02c2e7d0(plVar7,&local_48,*(undefined8 *)(param_1 + 0x98));
        FUN_02c333a8(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xb8 + uVar14 * 8),
                     *(undefined8 *)(param_1 + 0x98));
        uVar11 = (ulong)*(uint *)(lVar10 + 0xe4);
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar11);
    }
    local_a0 = *(long **)(param_1 + uVar11 * 8 + 0xb8);
    if (local_a0 != (long *)0x0) {
      plVar13 = local_a0 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plVar7 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar13 = plVar7;
    }
    local_70 = (undefined1 *)0xe3b4988e6294fb44;
    local_a8 = plVar7;
    FUN_0130d3c0(param_1,&local_a0,&local_a8,&local_70);
    plVar8 = local_a0;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        plVar8 = local_a0;
      }
    }
    local_a0 = plVar8;
    if (plVar8 == (long *)0x0) goto joined_r0x0130d9b8;
    plVar13 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))();
  }
joined_r0x0130d9b8:
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return;
}


