/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029122c0; name: FUN_029122c0
 */


void FUN_029122c0(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  char *pcStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  puVar16 = *(undefined8 **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x58) = 0;
  puVar7 = PTR_PTR_04379d00;
  puVar6 = PTR_DAT_04379c88;
  if (puVar16 != puVar1) {
    plVar17 = (long *)*puVar16;
    if (plVar17 != (long *)0x0) goto LAB_02912334;
LAB_02912404:
    local_90 = *(undefined8 **)puVar6;
    if (plVar17 != (long *)0x0) goto LAB_02912340;
LAB_02912410:
    pcVar18 = *(char **)puVar7;
    if (plVar17 != (long *)0x0) goto LAB_0291234c;
    do {
      local_80 = 0;
      pcStack_88 = pcVar18;
      while( true ) {
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = (code *)0x0;
        local_78 = plVar17;
        uVar9 = FUN_029180dc(*(undefined8 *)(param_1 + 0x198),&local_90,0,&local_110,0);
        pcVar5 = local_108;
        if ((uVar9 & 1) != 0) {
          plVar10 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
          (**(code **)(*plVar10 + 0x100))(plVar10,pcVar18,0);
          pcVar5 = local_108;
        }
        local_108 = (code *)0x0;
        if (pcVar5 != (code *)0x0) {
          local_100 = 0;
          uStack_f8 = 0;
          local_110 = (undefined8 *)0x0;
          local_108 = (code *)0x0;
          (*pcVar5)(&local_f0);
        }
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
        puVar16 = puVar16 + 1;
        if (puVar1 == puVar16) goto LAB_02912428;
        plVar17 = (long *)*puVar16;
        if (plVar17 == (long *)0x0) goto LAB_02912404;
LAB_02912334:
        local_90 = (undefined8 *)plVar17[0xb];
        if (plVar17 == (long *)0x0) goto LAB_02912410;
LAB_02912340:
        pcVar18 = (char *)plVar17[0xc];
        if (plVar17 == (long *)0x0) break;
LAB_0291234c:
        local_80 = plVar17[0xd];
        local_78 = (long *)0x0;
        pcStack_88 = pcVar18;
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    } while( true );
  }
LAB_02912428:
  plVar17 = *(long **)(param_1 + 0xe8);
  if ((plVar17 != (long *)0x0) && (pcVar18 = (char *)plVar17[0xc], *pcVar18 != '\0')) {
    local_90 = (undefined8 *)plVar17[0xb];
    local_80 = plVar17[0xd];
    pcStack_88 = pcVar18;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    local_78 = plVar17;
    uVar9 = FUN_029180dc(*(undefined8 *)(param_1 + 0x198),&local_90,0,&local_110,0);
    if ((uVar9 & 1) != 0) {
      plVar10 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
      (**(code **)(*plVar10 + 0x100))(plVar10,pcVar18,0);
    }
    pcVar5 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = (undefined8 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar5)(&local_f0);
    }
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb8);
  for (puVar14 = *(undefined4 **)(param_1 + 0xb0); puVar14 != puVar2; puVar14 = puVar14 + 1) {
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x158) + 0x18))
              ((long *)**(undefined8 **)(param_1 + 0x158),*puVar14);
  }
  plVar17 = *(long **)(param_1 + 0x78);
  plVar10 = *(long **)(param_1 + 0x80);
  while (plVar10 != plVar17) {
    plVar10 = plVar10 + -1;
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x80) = plVar17;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
  puVar6 = PTR_DAT_0437a7c0;
  if (((*PTR_DAT_0437a7c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar8 != 0))
  {
    local_110 = (undefined8 *)FUN_00938550();
    puVar7 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_110);
    FUN_00100250(PTR_LAB_0437a8d8,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
  }
  puVar7 = PTR_DAT_0437a7d0;
  plVar17 = *(long **)PTR_DAT_0437a7d0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar10 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar17;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar8 != 0)) {
    local_110 = (undefined8 *)FUN_00938550();
    puVar6 = PTR_DAT_0437a7d0;
    FUN_00b0fde8(PTR_DAT_0437a7d0,&local_110);
    FUN_00100250(PTR_LAB_0437a8d8,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a7c0);
    plVar17 = *(long **)puVar7;
  }
  else {
    plVar17 = *(long **)puVar7;
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar10 = *(long **)(param_1 + 0xf0);
  *(long **)(param_1 + 0xf0) = plVar17;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  if (*(long **)(param_1 + 0x68) == (long *)0x0) {
    uVar15 = 0xffffffffffffffff;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(&local_110);
    local_90 = (undefined8 *)0x0;
    pcStack_88 = (char *)0x0;
    FUN_02913eb8(&local_90,&local_110);
    puVar16 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      piVar12 = (int *)(local_110 + 1);
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_70[0] = *puVar16;
        FUN_02a44274(lVar11 + 0xd8,local_70);
      }
    }
    puVar16 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      piVar12 = (int *)(local_90 + 1);
      uVar15 = *local_90;
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_110 = (undefined8 *)*puVar16;
        FUN_02a44274(lVar11 + 0xd8,&local_110);
      }
    }
  }
  plVar17 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
  (**(code **)(*plVar17 + 0x58))(plVar17,uVar15);
  lVar11 = *(long *)(param_1 + 0x158);
  if (*(long **)(param_1 + 0x60) == (long *)0x0) {
    uVar15 = 0xffffffffffffffff;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(&local_110);
    local_90 = (undefined8 *)0x0;
    pcStack_88 = (char *)0x0;
    FUN_02913eb8(&local_90,&local_110);
    puVar16 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      piVar12 = (int *)(local_110 + 1);
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_70[0] = *puVar16;
        FUN_02a44274(lVar13 + 0xd8,local_70);
      }
    }
    puVar16 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      uVar15 = 0;
    }
    else {
      piVar12 = (int *)(local_90 + 1);
      uVar15 = *local_90;
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_110 = (undefined8 *)*puVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_110);
      }
    }
  }
  plVar17 = *(long **)(lVar11 + 0x60);
  iVar8 = (**(code **)(*plVar17 + 0x58))(plVar17,uVar15);
  if (iVar8 == 1) {
    plVar17 = *(long **)(lVar11 + 0x80);
    (**(code **)(*plVar17 + 0x20))(plVar17,uVar15);
  }
  plVar17 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[0xb];
    piVar12 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  plVar17 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[0xb];
    piVar12 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  plVar17 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[0xb];
    piVar12 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  lVar13 = *(long *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  lVar11 = tpidr_el0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (lVar13 != 0) {
    FUN_02bcbe58(&local_110,0);
    FUN_02915698(lVar13);
    plVar17 = *(long **)(param_1 + 0x180);
    uVar15 = *(undefined8 *)(param_1 + 0x188);
    uVar19 = *(undefined8 *)(param_1 + 400);
    uVar9 = (**(code **)(*plVar17 + 0xc0))(plVar17);
    if ((uVar9 & 1) == 0) {
LAB_029128e4:
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,uVar15,uVar19);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_029128e4;
      FUN_02bcc824(plVar17,lVar13,uVar15,uVar19);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar8;
    if (iVar8 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  lVar13 = *(long *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (lVar13 != 0) {
    FUN_02915944(param_1 + 0x1a0);
  }
  lVar13 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (lVar13 != 0) {
    FUN_02915e1c(param_1 + 0x1c0);
  }
  puVar16 = *(undefined8 **)(param_1 + 0x158);
  if (*(char *)(puVar16 + 0x1c) != '\0') {
    (**(code **)(*(long *)puVar16[8] + 0x28))();
    *(undefined1 *)(puVar16 + 0x1c) = 0;
  }
  uVar9 = (**(code **)(*(long *)puVar16[0xc] + 0x18))();
  if ((uVar9 & 1) != 0) {
    (**(code **)(*(long *)puVar16[0xc] + 0x38))();
  }
  if (*(char *)((long)puVar16 + 0xe2) != '\0') {
    (**(code **)(*(long *)*puVar16 + 0x28))();
    (*(code *)**(undefined8 **)puVar16[0x14])();
    *(undefined1 *)((long)puVar16 + 0xe2) = 0;
  }
  uVar9 = (**(code **)(*(long *)puVar16[4] + 0x10))();
  if ((uVar9 & 1) != 0) {
    (**(code **)(*(long *)puVar16[4] + 0x18))();
  }
  lVar13 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar13 == 0) goto LAB_02912b54;
  FUN_02bcbe58(&local_110,0);
  FUN_02932978(lVar13);
  plVar17 = *(long **)(param_1 + 0x160);
  uVar15 = *(undefined8 *)(param_1 + 0x168);
  uVar19 = *(undefined8 *)(param_1 + 0x170);
  uVar9 = (**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((uVar9 & 1) == 0) {
LAB_02912ab8:
    (**(code **)(*plVar17 + 0x18))(plVar17,lVar13,uVar15,uVar19);
  }
  else {
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02912ab8;
    FUN_02bcc824(plVar17,lVar13,uVar15,uVar19);
  }
  if (*(char *)(lVar11 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar11 + 0x38d488) = 1;
    *(undefined8 *)(lVar11 + 0x38d478) = 0;
    *(undefined8 *)(lVar11 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
  *(int *)(lVar11 + 0x38d480) = iVar8;
  if (iVar8 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar11 + 0x38d484) = 0;
  }
LAB_02912b54:
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


