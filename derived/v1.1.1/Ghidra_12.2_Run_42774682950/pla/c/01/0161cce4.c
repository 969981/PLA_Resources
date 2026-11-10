/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161cce4; name: FUN_0161cce4
 */


void FUN_0161cce4(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  long *plVar14;
  long *plVar15;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  local_48 = *(long **)(param_1 + 8);
  lVar10 = FUN_0161dc70(&local_58,local_48,&local_48);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)(param_1 + 0xb0);
  plVar11 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar11 != (long *)0x0) {
    plVar15 = plVar11 + 10;
    do {
      iVar9 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(long *)(param_1 + 0xb0) = lVar10;
  puVar8 = PTR_DAT_04379688;
  puVar7 = PTR_DAT_04379680;
  puVar6 = PTR_DAT_04379678;
  if (*(int *)(param_1 + 0xb8) == -1) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar10 = *(long *)puVar7;
    *(long *)puVar8 = lVar10;
    plVar11 = *(long **)(lVar10 + 0xd0);
    if (plVar11 != (long *)0x0) {
      plVar15 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar15 = (long *)plVar11[0xb];
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar2 = plVar11 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    uVar12 = (**(code **)(*plVar15 + 0x50))(plVar15,*(undefined4 *)(param_1 + 0xbc));
    FUN_02c653d0(*(undefined8 *)(param_1 + 0xb0),uVar12);
    if (plVar15 != (long *)0x0) {
      plVar11 = plVar15 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        pcVar13 = *(code **)(*plVar15 + 0x10);
        goto LAB_0161cf78;
      }
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b80(&local_48);
    local_50 = (long *)*plVar14;
    if (local_50 != (long *)0x0) {
      plVar11 = local_50 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_010e0448(local_48,&local_50,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc))
    ;
    plVar15 = local_48;
    if (local_50 != (long *)0x0) {
      plVar11 = local_50 + 10;
      do {
        iVar9 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_50 + 0x10))();
        plVar15 = local_48;
      }
    }
    local_48 = plVar15;
    if (plVar15 != (long *)0x0) {
      lVar10 = plVar15[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        pcVar13 = *(code **)(*plVar15 + 0x20);
LAB_0161cf78:
        (*pcVar13)(plVar15);
        bVar3 = *puVar6;
        goto joined_r0x0161cf80;
      }
    }
  }
  bVar3 = *puVar6;
joined_r0x0161cf80:
  if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  FUN_00d8c950(&local_60);
  FUN_016b6208(&local_58,local_60);
  FUN_0165dd84(&local_48,local_58);
  if (local_58 != (long *)0x0) {
    plVar11 = local_58 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_60 != (long *)0x0) {
    plVar11 = local_60 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_016189c0(local_48,param_1 + 0x78,plVar14,*(undefined4 *)(param_1 + 0xb8),
               *(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
  if (local_48 != (long *)0x0) {
    plVar11 = local_48 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return;
}


