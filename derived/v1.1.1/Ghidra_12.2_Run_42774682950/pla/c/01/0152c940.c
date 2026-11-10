/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152c940; name: FUN_0152c940
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0152c940(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long local_110 [3];
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long *plStack_d0;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  long *local_38;
  
  puVar6 = PTR_DAT_04379558;
  local_60 = 0;
  local_58 = 0;
  local_a8 = (undefined8 *)0x0;
  local_50 = 1;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_4c = 0;
  local_48 = 0;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_38);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  FUN_0114907c(&local_b0);
  FUN_00aae1c0(&local_e8,*(undefined8 *)(param_1 + 0x488));
  FUN_00ab196c(&local_a8,&local_e8);
  plVar12 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar1 = local_e8 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_110[0] = *plVar12;
      FUN_02a44274(lVar14 + 0xd8,local_110);
    }
  }
  FUN_00a9ecd4(&local_e8,*(undefined8 *)(param_1 + 0x490));
  FUN_00ab166c(&local_98,&local_e8);
  plVar12 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar1 = local_e8 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_110[0] = *plVar12;
      FUN_02a44274(lVar14 + 0xd8,local_110);
    }
  }
  FUN_0152d920(&local_e8,*(undefined8 *)(param_1 + 0x498));
  FUN_0152def0(&local_68,&local_e8);
  plVar12 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar1 = local_e8 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_110[0] = *plVar12;
      FUN_02a44274(lVar14 + 0xd8,local_110);
    }
  }
  local_58 = FUN_0111b7c0(local_b0,0xb);
  local_50 = FUN_01123ce8(local_38);
  local_4c = 1;
  local_48 = (undefined1)*(undefined4 *)(param_1 + 0x480);
  FUN_015129f4(&local_e8,param_1,0xffffffff);
  lVar14 = FUN_01353354(local_e8,*(undefined8 *)(param_1 + 0x4c0),&local_a8);
  if (lVar14 != 0) {
    lVar16 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar11;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x4b0);
  *(long *)(param_1 + 0x4b0) = lVar14;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  if (local_e8 != (long *)0x0) {
    lVar14 = local_e8[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  FUN_0135f3b4(&local_e8,*(undefined8 *)(param_1 + 8));
  plVar15 = local_e0;
  plVar1 = local_e8;
  for (plVar12 = local_e8; local_e8 = plVar1, plVar12 != plVar15; plVar12 = plVar12 + 1) {
    local_f0 = (long *)*plVar12;
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x18))();
    }
    uVar11 = *(undefined8 *)(param_1 + 0x4b0);
    FUN_02a47560(local_110,&local_f0);
    FUN_01b2b778(uVar11,local_110,0);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    plVar1 = local_e8;
  }
  plVar12 = plVar1;
  plVar15 = local_e0;
  plVar5 = plStack_d0;
  if (plVar1 != (long *)0x0) {
    while (local_e8 = plVar12, plVar15 != plVar1) {
      plVar15 = plVar15 + -1;
      if ((long *)*plVar15 != (long *)0x0) {
        plStack_d0 = plVar5;
        (**(code **)(*(long *)*plVar15 + 0x20))();
        plVar12 = local_e8;
        plVar5 = plStack_d0;
      }
    }
    uVar13 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar13 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar5,plVar12,local_d8 - (long)plVar12,8);
        goto joined_r0x0152cce4;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar12,local_d8 - (long)plVar12,8);
  }
joined_r0x0152cce4:
  if (local_b0 != (long *)0x0) {
    lVar14 = local_b0[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  plVar12 = local_68;
  if (local_38 != (long *)0x0) {
    lVar14 = local_38[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      plVar12 = local_68;
    }
  }
  local_68 = plVar12;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_e8 = (long *)*plVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_e8);
    }
  }
  plVar12 = local_78;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_e8 = (long *)*plVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_e8);
    }
  }
  plVar12 = local_88;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_e8 = (long *)*plVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_e8);
    }
  }
  plVar12 = local_98;
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_e8 = (long *)*plVar12;
      FUN_02a44274(lVar14 + 0xd8,&local_e8);
    }
  }
  puVar9 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_a8 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_e8 = (long *)*puVar9;
      FUN_02a44274(lVar14 + 0xd8,&local_e8);
    }
  }
  return;
}


