/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d17c1c; name: FUN_00d17c1c
 */


void FUN_00d17c1c(long param_1)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *local_98;
  long *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long *local_58;
  
  puVar10 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar12 = PTR_DAT_04379688;
  puVar11 = PTR_DAT_04379680;
  lVar16 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar16;
  plVar17 = *(long **)(lVar16 + 0xd0);
  if (plVar17 != (long *)0x0) {
    plVar6 = plVar17 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  puVar7 = PTR_DAT_04379558;
  iVar13 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 8) | 1) == 3 || iVar13 != 1) {
    if (iVar13 != 1) {
      if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      bVar3 = *PTR_DAT_04379558;
      goto joined_r0x00d17ea0;
    }
    FUN_00d850a8(plVar17);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    bVar3 = *puVar7;
joined_r0x00d17ea0:
    if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    uVar15 = *(undefined8 *)puVar8;
    local_88 = 0;
    *(undefined8 *)puVar9 = uVar15;
    FUN_0114877c(uVar15,&local_88);
    FUN_00d84fb8(plVar17);
  }
  FUN_00d18030();
  FUN_027dcc4c(&local_88,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x368));
  uVar14 = FUN_027dcc74(&local_88);
  while ((uVar14 & 1) != 0) {
    nn::os::SleepThread(10000000);
    uVar14 = FUN_027dcc74(&local_88);
  }
  FUN_027dcc5c(&local_88);
  if (((*(uint *)(param_1 + 8) | 1) != 3) || (uVar14 = FUN_01143dc4(), (uVar14 & 1) == 0))
  goto joined_r0x00d17e10;
  if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
  FUN_00d8c950(&local_98);
  FUN_016b6208(&local_90,local_98);
  FUN_0165dc5c(&local_58,local_90);
  FUN_016afe80(&local_88,local_58);
  if (local_58 != (long *)0x0) {
    plVar6 = local_58 + 10;
    do {
      iVar13 = (int)*plVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar6 = local_90 + 10;
    do {
      iVar13 = (int)*plVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (local_98 != (long *)0x0) {
    plVar6 = local_98 + 10;
    do {
      iVar13 = (int)*plVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  FUN_016a91e8(CONCAT44(uStack_84,local_88));
  if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
  FUN_01148dc4(&local_58);
  FUN_0113d3c0(local_58);
  if (local_58 == (long *)0x0) {
LAB_00d17df0:
    plVar6 = (long *)CONCAT44(uStack_84,local_88);
  }
  else {
    lVar16 = local_58[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 != 0) goto LAB_00d17df0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_58 + 0x20))();
    plVar6 = (long *)CONCAT44(uStack_84,local_88);
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
joined_r0x00d17e10:
  if (plVar17 != (long *)0x0) {
    plVar6 = plVar17 + 10;
    do {
      iVar13 = (int)*plVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *(int *)plVar6 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  return;
}


