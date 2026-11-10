/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01317b74; name: FUN_01317b74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01317b74(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4,ulong param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_48;
  
  if (*(char *)(param_4 + 3) != '\x01') {
    return;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar3 = *(uint *)(lVar10 + 400);
  if (uVar3 != 0) {
    uVar13 = 0;
    piVar11 = (int *)(lVar10 + 0x20);
LAB_01317be0:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar11 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar11 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_72837ff1f1cec6a2) || (*piVar11 != 10)) goto LAB_01317fd4;
    if (((uint)uVar13 < 0x10) && (plVar8 = *(long **)(piVar11 + -2), plVar8 != (long *)0x0)) {
      lVar10 = plVar8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar11 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar6 = (long *)plVar8[0xd];
      goto joined_r0x01318150;
    }
  }
LAB_01317c10:
  plVar8 = (long *)0x0;
  plVar6 = _DAT_00000068;
joined_r0x01318150:
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar8 == (long *)0x0) {
LAB_01317c50:
    plVar8 = *(long **)(param_1 + 0x2c8);
  }
  else {
    lVar10 = plVar8[0xb];
    piVar11 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01317c50;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar8 != (long *)0x0) {
    plVar14 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_3 = 1;
  if ((param_5 & 1) == 0) {
    local_78 = *(long **)(param_3 + 4);
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
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar6 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar6 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = plVar6;
    }
    local_48 = *(long **)(param_4 + 0x20);
    local_88 = plVar6;
    local_80 = plVar8;
    FUN_01318810(&local_78,&local_80,&local_88,&local_48);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_80 != (long *)0x0) {
      plVar14 = local_80 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_78 == (long *)0x0) goto LAB_01317d4c;
    plVar14 = local_78 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 != 0) goto LAB_01317d4c;
    pcVar12 = *(code **)(*local_78 + 0x10);
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148cdc(&local_48);
    local_58 = *(long **)(param_3 + 4);
    if (local_58 != (long *)0x0) {
      plVar14 = local_58 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar6 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar6 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = plVar6;
    }
    local_70 = *(undefined8 *)(param_4 + 0x20);
    local_68 = plVar6;
    local_60 = plVar8;
    FUN_013184fc(&local_58,&local_60,&local_68,&local_70,local_48);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_60 != (long *)0x0) {
      plVar14 = local_60 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      plVar14 = local_58 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (local_48 == (long *)0x0) goto LAB_01317d4c;
    lVar10 = local_48[0xb];
    piVar11 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01317d4c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    pcVar12 = *(code **)(*local_48 + 0x20);
  }
  (*pcVar12)();
LAB_01317d4c:
  if (*(undefined1 **)(param_4 + 0x28) != &DAT_cbf29ce484222645) {
    local_90 = *(long **)(param_3 + 6);
    if (local_90 != (long *)0x0) {
      plVar14 = local_90 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar8 != (long *)0x0) {
      plVar14 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (plVar6 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = plVar6 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = plVar6;
    }
    local_48 = *(long **)(param_4 + 0x28);
    local_a0 = plVar6;
    local_98 = plVar8;
    FUN_01318810(&local_90,&local_98,&local_a0,&local_48);
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (local_98 != (long *)0x0) {
      plVar14 = local_98 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
    if (local_90 != (long *)0x0) {
      plVar14 = local_90 + 10;
      do {
        iVar7 = (int)*plVar14 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  *param_2 = 2;
  if (plVar8 != (long *)0x0) {
    plVar14 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
LAB_01317fd4:
  uVar13 = uVar13 + 1;
  piVar11 = piVar11 + 6;
  if (uVar3 == uVar13) goto LAB_01317c10;
  goto LAB_01317be0;
}


