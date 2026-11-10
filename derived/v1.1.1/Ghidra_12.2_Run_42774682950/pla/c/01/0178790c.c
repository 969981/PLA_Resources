/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0178790c; name: FUN_0178790c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0178790c(long param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long *local_60;
  long local_58;
  long *local_48;
  
  puVar5 = PTR_DAT_04379678;
  iVar9 = *(int *)(param_1 + 0x118);
  if (iVar9 == 0) {
    uVar13 = param_2;
    if (((param_4 & 1) == 0) || ((param_5 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x11c) = 0;
    }
    else if (*(char *)(param_1 + 0x11c) == '\0') {
      uVar13 = param_2 & 0xffffffff;
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48);
      local_58 = param_1 + 0x58;
      uVar10 = FUN_0258705c(local_48,&local_58);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if ((uVar10 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x11c) = 1;
        uVar13 = param_2;
      }
    }
    if ((uVar13 & 1) != 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
      FUN_00d8c950(&local_60);
      FUN_016b6250(&local_48,local_60);
      FUN_01782850(local_48);
      if (local_48 != (long *)0x0) {
        plVar12 = local_48 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (local_60 != (long *)0x0) {
        plVar12 = local_60 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      *(undefined4 *)(param_1 + 0x118) = 1;
      *(undefined1 *)(param_1 + 0x11c) = 0;
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    if ((param_4 & 1) == 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48,plVar12);
      local_70 = param_1 + 0xe8;
      FUN_0258705c(local_48,&local_70);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_017880a0;
      }
    }
    else {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48,plVar12);
      local_68 = param_1 + 0xb8;
      FUN_0258705c(local_48,&local_68);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_017880a0:
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    puVar5 = PTR_DAT_04379678;
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    puVar7 = PTR_DAT_04379688;
    puVar6 = PTR_DAT_04379680;
    *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
    FUN_00d8c950(&local_60);
    FUN_016b6250(&local_48,local_60);
    FUN_01782850(local_48);
    if (local_48 == (long *)0x0) {
LAB_01788108:
      if (local_60 == (long *)0x0) goto LAB_01788128;
LAB_01788110:
      plVar12 = local_60 + 10;
      do {
        iVar9 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 != 0) goto LAB_01788128;
      (**(code **)(*local_60 + 0x10))();
      bVar2 = *puVar5;
    }
    else {
      plVar12 = local_48 + 10;
      do {
        iVar9 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 != 0) goto LAB_01788108;
      (**(code **)(*local_48 + 0x10))();
      if (local_60 != (long *)0x0) goto LAB_01788110;
LAB_01788128:
      bVar2 = *puVar5;
    }
    if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
    FUN_00d8c950(&local_60);
    FUN_016b6250(&local_48,local_60);
    FUN_01782f68(local_48);
    if (local_48 != (long *)0x0) {
      plVar12 = local_48 + 10;
      do {
        iVar9 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (local_60 == (long *)0x0) goto LAB_017882b0;
    plVar12 = local_60 + 10;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (iVar9 != 1) {
      if (iVar9 != 2) {
        return;
      }
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      puVar7 = PTR_DAT_04379688;
      puVar6 = PTR_DAT_04379680;
      *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
      FUN_00d8c950(&local_60);
      FUN_016b6250(&local_48,local_60);
      uVar8 = FUN_0178300c(local_48);
      if (local_48 != (long *)0x0) {
        plVar12 = local_48 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (local_60 != (long *)0x0) {
        plVar12 = local_60 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (((uVar8 | param_3) & 1) != 0) {
        return;
      }
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
      FUN_00d8c950(&local_60);
      FUN_016b6250(&local_48,local_60);
      FUN_01782f70(local_48);
      if (local_48 != (long *)0x0) {
        plVar12 = local_48 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (local_60 != (long *)0x0) {
        plVar12 = (long *)((long)local_60 + 0x50);
        do {
          iVar9 = *(int *)plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          (**(code **)(*local_60 + 0x10))();
          bVar2 = *puVar5;
          goto joined_r0x01788498;
        }
      }
      bVar2 = *puVar5;
joined_r0x01788498:
      if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)puVar6;
      *(long *)puVar7 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48,plVar12);
      local_98 = 0;
      FUN_0258705c(local_48,&local_98);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(param_1 + 0x118) = 1;
      return;
    }
    if ((param_2 & 1) == 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      puVar6 = PTR_DAT_04379688;
      puVar5 = PTR_DAT_04379680;
      lVar11 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48);
      uVar13 = FUN_02585a30(local_48);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if ((uVar13 & 1) != 0) goto LAB_01787b0c;
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
      FUN_00d8c950(&local_60);
      FUN_016b6250(&local_48,local_60);
      uVar13 = FUN_01782c8c(local_48);
      if (local_48 != (long *)0x0) {
        plVar12 = local_48 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (local_60 != (long *)0x0) {
        plVar12 = local_60 + 10;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if ((uVar13 & 1) == 0) goto LAB_01787b0c;
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48);
      FUN_02587234(local_48);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(param_1 + 0x118) = 0;
      cVar3 = *(char *)(param_1 + 0x11c);
    }
    else {
LAB_01787b0c:
      cVar3 = *(char *)(param_1 + 0x11c);
    }
    if (cVar3 == '\0') {
      if ((param_4 & 1) == 0) {
        if (((*PTR_DAT_04379678 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar11 = *(long *)PTR_DAT_04379680;
        *(long *)PTR_DAT_04379688 = lVar11;
        plVar12 = *(long **)(lVar11 + 0xd0);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00d853bc(&local_48);
        local_80 = param_1 + 0x88;
        uVar13 = FUN_0258705c(local_48,&local_80);
        uVar13 = uVar13 & 0xffffffff;
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 10;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto joined_r0x0178835c;
        }
      }
      else {
        if (((*PTR_DAT_04379678 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379678);
        }
        lVar11 = *(long *)PTR_DAT_04379680;
        *(long *)PTR_DAT_04379688 = lVar11;
        plVar12 = *(long **)(lVar11 + 0xd0);
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_00d853bc(&local_48);
        local_78 = param_1 + 0x58;
        uVar13 = FUN_0258705c(local_48,&local_78);
        uVar13 = uVar13 & 0xffffffff;
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 10;
          do {
            iVar9 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
joined_r0x0178835c:
          if (iVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if ((uVar13 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x11c) = 1;
      }
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    if ((param_4 & 1) == 0) {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48,plVar12);
      local_90 = param_1 + 0xe8;
      FUN_0258705c(local_48,&local_90);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01788228;
      }
    }
    else {
      if (((*PTR_DAT_04379678 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379678);
      }
      lVar11 = *(long *)PTR_DAT_04379680;
      *(long *)PTR_DAT_04379688 = lVar11;
      plVar12 = *(long **)(lVar11 + 0xd0);
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_00d853bc(&local_48,plVar12);
      local_88 = param_1 + 0xb8;
      FUN_0258705c(local_48,&local_88);
      if (local_48 != (long *)0x0) {
        plVar1 = local_48 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_01788228:
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
    FUN_00d8c950(&local_60);
    FUN_016b6250(&local_48,local_60);
    FUN_01782f68(local_48);
    if (local_48 != (long *)0x0) {
      plVar12 = local_48 + 10;
      do {
        iVar9 = (int)*plVar12 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (local_60 == (long *)0x0) goto LAB_017882b0;
    plVar12 = local_60 + 10;
    do {
      iVar9 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar9 == 0) {
    (**(code **)(*local_60 + 0x10))();
  }
LAB_017882b0:
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined1 *)(param_1 + 0x11c) = 1;
  return;
}


