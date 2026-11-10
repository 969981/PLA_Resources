/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4165c; name: FUN_02c4165c
 */


void FUN_02c4165c(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined2 uVar12;
  size_t sVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  undefined4 uVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined1 *puVar34;
  undefined8 *puVar35;
  long *plVar36;
  long *plVar37;
  undefined8 uVar38;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  byte *local_e0;
  size_t local_d8;
  long *local_d0;
  undefined8 local_c8;
  code *local_c0;
  long local_b8;
  ulong local_b0;
  long *local_a8;
  undefined4 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_010b6d94();
  FUN_02c3e35c(&local_e8);
  puVar8 = PTR_DAT_04379498;
  do {
    pbVar31 = local_e0;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(&local_e0,0x10);
    if (bVar7) {
      local_e0 = (byte *)0x0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar10 = PTR_DAT_043794a8;
  puVar9 = PTR_DAT_043794a0;
  uVar16 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar16;
  FUN_02a44e0c(&local_a8,uVar16,pbVar31);
  plVar36 = local_e8;
  local_e8 = (long *)0x0;
  if (plVar36 != (long *)0x0) {
    plVar37 = plVar36 + 1;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      plVar36[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)puVar9;
      *(long *)puVar10 = lVar24;
      local_88 = *plVar36;
      FUN_02a44274(lVar24 + 0xd8,&local_88);
    }
  }
  plVar36 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (local_a8 == (long *)0x0) {
    if (plVar36 != (long *)0x0) {
      plVar37 = plVar36 + 1;
      do {
        lVar24 = *plVar37;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar7) {
          *(int *)plVar37 = (int)lVar24 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar24 == 1) {
        plVar36[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar24 = *(long *)puVar9;
        *(long *)puVar10 = lVar24;
        local_88 = *plVar36;
        FUN_02a44274(lVar24 + 0xd8,&local_88);
      }
    }
    pbVar31 = (byte *)0x0;
  }
  else {
    plVar37 = local_a8;
    if (plVar36 != (long *)0x0) {
      plVar37 = plVar36 + 1;
      do {
        iVar15 = (int)*plVar37 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar7) {
          *(int *)plVar37 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 == 0) {
        plVar36[2] = 0;
        if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar24 = *(long *)puVar9;
        *(long *)puVar10 = lVar24;
        local_88 = *plVar36;
        FUN_02a44274(lVar24 + 0xd8,&local_88);
      }
      plVar37 = local_a8;
    }
    local_a8 = (long *)0x0;
    *(long **)(param_1 + 0x70) = plVar37;
  }
  plVar36 = local_a8;
  *(byte **)(param_1 + 0x78) = pbVar31;
  if (local_a8 != (long *)0x0) {
    plVar37 = local_a8 + 1;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      local_a8[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)puVar9;
      *(long *)puVar10 = lVar24;
      local_88 = *plVar36;
      FUN_02a44274(lVar24 + 0xd8,&local_88);
    }
  }
  plVar36 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar37 = local_e8 + 1;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      local_e8[2] = 0;
      if (((*puVar8 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar24 = *(long *)puVar9;
      *(long *)puVar10 = lVar24;
      local_88 = *plVar36;
      FUN_02a44274(lVar24 + 0xd8,&local_88);
    }
  }
  lVar24 = FUN_02c45e30(&local_e8,*(undefined8 *)(param_1 + 8),param_1 + 0x68);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar36 = *(long **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (plVar36 != (long *)0x0) {
    plVar37 = plVar36 + 10;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x360) = lVar24;
  lVar24 = FUN_02c45fc4(&local_e8,*(undefined8 *)(param_1 + 8),param_1 + 0x68);
  if (lVar24 != 0) {
    piVar1 = (int *)(lVar24 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar36 = *(long **)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x368) = 0;
  if (plVar36 != (long *)0x0) {
    plVar37 = plVar36 + 10;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  plVar36 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 0x368) = lVar24;
  lVar24 = (**(code **)(*plVar36 + 0x10))(plVar36,0x60,8);
  if (lVar24 == 0) {
    plVar36 = (long *)0x0;
    uVar33 = 0;
    uVar16 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar8 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02c43300;
    *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar36;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    FUN_002326c4(lVar24);
    uVar16 = 8;
    uVar33 = 0x60;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  }
  plVar37 = *(long **)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar24;
  lVar24 = tpidr_el0;
  if (plVar37 != (long *)0x0) {
    FUN_02bcbe58(&local_e8,0);
    (**(code **)(*plVar37 + 8))(plVar37);
    plVar19 = *(long **)(param_1 + 0x90);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar38 = *(undefined8 *)(param_1 + 0xa0);
    uVar18 = (**(code **)(*plVar19 + 0xc0))(plVar19);
    if ((uVar18 & 1) == 0) {
LAB_02c41a38:
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar37,uVar4,uVar38);
    }
    else {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_02c41a38;
      FUN_02bcc824(plVar19,plVar37,uVar4,uVar38);
    }
    if (*(char *)(lVar24 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar24 + 0x38d488) = 1;
      *(undefined8 *)(lVar24 + 0x38d478) = 0;
      *(undefined8 *)(lVar24 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar15 = *(int *)(lVar24 + 0x38d480) + -1;
    *(int *)(lVar24 + 0x38d480) = iVar15;
    if (iVar15 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar24 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0x90) = plVar36;
  *(undefined8 *)(param_1 + 0x98) = uVar33;
  *(undefined8 *)(param_1 + 0xa0) = uVar16;
  lVar17 = DAT_043ef598;
  lVar29 = *(long *)(*(long *)(param_1 + 0x68) + 0xe0);
  pbVar31 = (byte *)param_2[2];
  if (pbVar31 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar15 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_e8 = *(long **)PTR_DAT_0437a0d8;
    local_e0 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_d8 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_d0 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_d0 == (long *)0x0) {
      lVar22 = *(long *)(param_1 + 8);
    }
    else {
      (**(code **)(*local_d0 + 0x18))();
      lVar22 = *(long *)(param_1 + 8);
    }
  }
  else {
    puVar34 = &DAT_cbf29ce484222645;
    local_d8 = strlen((char *)pbVar31);
    bVar3 = *pbVar31;
    pbVar25 = pbVar31;
    while (bVar3 != 0) {
      pbVar25 = pbVar25 + 1;
      puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar25;
    }
    local_d0 = (long *)0x0;
    lVar22 = *(long *)(param_1 + 8);
    local_e8 = (long *)puVar34;
    local_e0 = pbVar31;
  }
  if (lVar22 == 0) {
    lVar22 = *(long *)(lVar17 + 8);
  }
  local_88 = lVar17;
  lVar17 = FUN_02b5a848(&local_a8,lVar22,&local_88,&local_e8);
  if (lVar17 != 0) {
    piVar1 = (int *)(lVar17 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (**(char **)(lVar29 + 0x68) != '\0') {
    FUN_02bba5e0(&local_88,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x58) + 0x58) + 0x78),
                 lVar29 + 0x60);
    plVar36 = *(long **)(lVar17 + 0x68);
    *(undefined8 *)(lVar17 + 0x68) = 0;
    if (plVar36 != (long *)0x0) {
      plVar37 = plVar36 + 10;
      do {
        iVar15 = (int)*plVar37 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
        if (bVar7) {
          *(int *)plVar37 = iVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*plVar36 + 0x10))();
      }
    }
    *(ulong *)(lVar17 + 0x68) = local_88;
  }
  plVar36 = *(long **)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  if (plVar36 != (long *)0x0) {
    plVar37 = plVar36 + 10;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x3d8) = lVar17;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
    lVar17 = *(long *)(param_1 + 0x3d8);
  }
  local_e8 = (long *)&DAT_121d7307bd58c49b;
  local_e0 = &DAT_03a81ce8;
  local_d8 = 0x1f;
  local_d0 = (long *)0x0;
  FUN_02bba5e0(&local_88,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x58) + 0x58) + 0x78),
               &local_e8);
  plVar36 = *(long **)(lVar17 + 0x68);
  *(undefined8 *)(lVar17 + 0x68) = 0;
  if (plVar36 != (long *)0x0) {
    plVar37 = plVar36 + 10;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  *(ulong *)(lVar17 + 0x68) = local_88;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (*(long *)(param_1 + 0x3d8) != 0) {
    *(uint *)(*(long *)(param_1 + 0x3d8) + 0x90) =
         (uint)CONCAT11(*(undefined1 *)(param_1 + 0x3d1),*(undefined1 *)(param_1 + 0x3d2));
  }
  FUN_0022ce04(&local_f8);
  lVar17 = param_2[4];
  if (lVar17 == 0) {
    plVar36 = *(long **)(param_1 + 8);
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar8 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (*(ulong *)(lVar24 + 0x80) < 0x10) {
      *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar36;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
      lVar24 = (**(code **)(*plVar36 + 0x10))(plVar36,0xd8,8);
      if (lVar24 == 0) {
        (**(code **)(*plVar36 + 0xb8))(plVar36);
                    /* WARNING: Subroutine does not return */
        FUN_008a93d8(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8();
    }
LAB_02c43300:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_e8 = (long *)0x0;
  local_e0 = (byte *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x10000;
  local_c8 = 1;
  lVar29 = param_2[3];
  lVar22 = *(long *)(*(long *)(param_1 + 0x68) + 0x58);
  plVar36 = *(long **)(*param_2 + 0x60);
  uVar33 = *(undefined8 *)(param_1 + 0x88);
  uVar16 = (**(code **)(*plVar36 + 0x50))(plVar36,0x626c7974,param_2[2]);
  FUN_002328a0(uVar33,&local_f8,lVar22 + 0x3010,plVar36,lVar17,lVar29,uVar16,&local_e8,0);
  local_f0 = local_f0 + param_2[6];
  local_e8 = (long *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_e0 = (byte *)0x0;
  local_c8 = 0;
  local_c0 = (code *)0x0;
  local_f8 = local_f8 + param_2[5];
  local_d8 = 0;
  local_d0 = (long *)0x0;
  FUN_00876d0c(&local_e8);
  local_e8 = (long *)((ulong)local_e8 & 0xfffffffcffffffff);
  FUN_0087e204(*(long *)(param_1 + 0x360) + 0xa8,
               *(long *)(*(long *)(*(long *)(param_1 + 0x360) + 0x58) + 0x58) + 0x3010,&local_e8);
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = (code *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  local_e8 = (long *)0x0;
  local_e0 = (byte *)0x0;
  FUN_00876c68(&local_e8);
  uVar16 = local_e8;
  uVar12 = local_e8._4_2_;
  local_e8._0_3_ = (uint3)(ushort)local_e8;
  uVar33 = local_e8;
  local_e8._6_2_ = SUB82(uVar16,6);
  local_e8._0_4_ = (undefined4)uVar33;
  local_e8 = (long *)(CONCAT26(local_e8._6_2_,CONCAT24(uVar12,(undefined4)local_e8)) | 0xc00000000);
  FUN_0087dddc(*(long *)(param_1 + 0x360) + 0xc4,
               *(long *)(*(long *)(*(long *)(param_1 + 0x360) + 0x58) + 0x58) + 0x3010,&local_e8);
  local_c8 = 0;
  local_c0 = (code *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  local_e8 = (long *)0x0;
  local_e0 = (byte *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_00876cd4(&local_e8);
  FUN_00876cac(&local_88);
  uVar16 = local_88;
  local_88 = CONCAT17(0xf,(undefined7)local_88);
  uVar33 = local_88;
  local_e8 = (long *)CONCAT71(local_e8._1_7_,1);
  local_88._0_3_ = CONCAT21(0x706,(byte)uVar16 | 1);
  local_88 = CONCAT53((int5)((ulong)uVar33 >> 0x18),(undefined3)local_88) & 0xffffffff00ffffff;
  local_d0 = &local_88;
  FUN_02c4772c(*(undefined8 *)(param_1 + 0x360),&local_e8);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_00876bb0(&local_88);
  local_88 = CONCAT44(local_88._4_4_,0x22);
  pbVar31 = (byte *)(local_f0 + local_f8);
  lVar17 = FUN_00878470(*(long *)(*(long *)(param_1 + 0x68) + 0x58) + 0x3010,&local_88);
  uStack_90 = FUN_00878468(*(long *)(*(long *)(param_1 + 0x68) + 0x58) + 0x3010,&local_88);
  local_a8 = *(long **)(*(long *)PTR_DAT_04388100 + 0x10);
  local_a0 = 0;
  local_98 = (lVar17 + (long)pbVar31 * 2) - 1U & -lVar17;
  FUN_02c49a3c(*(undefined8 *)(param_1 + 0x368),&local_a8);
  lVar17 = param_1 + 0x370;
  local_e8 = (long *)CONCAT44(local_e8._4_4_,0x10);
  local_d0 = (long *)(*(long *)(param_1 + 0x368) + 0x80);
  local_c8 = *(undefined8 *)(*(long *)(param_1 + 0x368) + 0x70);
  local_b0 = local_b0 & 0xffffffffffff0000;
  local_d8 = CONCAT44(local_d8._4_4_,2);
  local_c0 = FUN_02c444f4;
  local_e0 = pbVar31;
  local_b8 = param_1;
  FUN_0021cec8(lVar17,*(long *)(*(long *)(param_1 + 0x68) + 0x58) + 0x3010,&local_e8);
  lVar29 = *(long *)(param_1 + 0x70);
  *(byte *)(param_1 + 0x23e) = *(byte *)(param_1 + 0x23e) | 8;
  puVar11 = PTR_DAT_043882c8;
  puVar10 = PTR_DAT_043882c0;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  if ((lVar29 != 0) && (*(int *)(lVar29 + 0xc) != 0)) {
    piVar1 = (int *)(lVar29 + 0xc);
    iVar15 = *(int *)(lVar29 + 0xc);
LAB_02c42054:
    do {
      plVar36 = *(long **)(lVar29 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar10), iVar14 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar36 == (long *)0x0) goto LAB_02c421c4;
        if (plVar36 == (long *)puVar11) break;
        plVar36 = (long *)*plVar36;
      }
      iVar14 = *piVar1;
      if (iVar14 != iVar15) goto LAB_02c4209c;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar29 = *(long *)(lVar29 + 0x18);
        if (lVar29 != 0) {
          *(long *)(param_1 + 0x168) = lVar29 + 0x20;
          lVar22 = *(long *)(lVar29 + 8);
          piVar1 = (int *)(lVar22 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar22 + 0x18) = 0;
            (**(code **)(*(long *)(lVar29 + -0x50) + 0x20))();
          }
          goto LAB_02c421cc;
        }
        break;
      }
      iVar15 = iVar14;
    } while (iVar14 != 0);
  }
LAB_02c421c4:
  *(undefined8 *)(param_1 + 0x168) = 0x70;
LAB_02c421cc:
  *(long *)(param_1 + 0x178) = lVar17;
  *(long *)(param_1 + 0x180) = lVar17;
  iVar15 = FUN_02c41510(*(undefined8 *)(param_1 + 0x88));
  if (0 < iVar15) {
    plVar36 = *(long **)(param_1 + 8);
    lVar17 = FUN_010b6d94();
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar8 = PTR_DAT_04379528;
      if (iVar15 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar29 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar29 + 0x80)) goto LAB_02c43300;
    *(long **)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = plVar36;
    *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
    lVar22 = (**(code **)(*plVar36 + 0x10))(plVar36,0x180,8);
    if (lVar22 == 0) {
      (**(code **)(*plVar36 + 0xb8))(plVar36);
    }
    FUN_02c46630(lVar22,plVar36,lVar17 + 0xd0);
    *(long **)(lVar22 + 8) = plVar36;
    *(long *)(lVar22 + 0x10) = lVar22;
    *(undefined8 *)(lVar22 + 0x18) = 0x180;
    *(undefined8 *)(lVar22 + 0x20) = 8;
    *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
    if (lVar22 != 0) {
      lVar17 = *(long *)(lVar22 + 0x58);
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar16;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar36 = *(long **)(param_1 + 0x660);
    *(undefined8 *)(param_1 + 0x660) = 0;
    if (plVar36 != (long *)0x0) {
      lVar17 = plVar36[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar36 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x660) = lVar22;
    *(undefined1 **)(param_1 + 0x228) = &LAB_02c46488;
    *(long *)(param_1 + 0x230) = lVar22;
  }
  uVar5 = *(uint *)(param_2 + 1);
  if (uVar5 == 0) {
    uVar23 = 0;
  }
  else {
    plVar36 = *(long **)(param_1 + 8);
    lVar29 = (ulong)uVar5 * 0x48;
    lVar17 = (**(code **)(*plVar36 + 0x10))(plVar36,lVar29,8);
    if (lVar17 == 0) {
      plVar36 = (long *)0x0;
      lVar29 = 0;
      uVar16 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar8 = PTR_DAT_04379528;
        if (iVar15 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_02c43300;
      *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar36;
      uVar18 = 0;
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
      do {
        plVar37 = (long *)(lVar17 + uVar18 * 0x48);
        plVar37[2] = 0;
        *plVar37 = 0;
        *(undefined8 *)((long)plVar37 + 5) = 0;
        FUN_00229db8(plVar37 + 3);
        *(undefined4 *)(plVar37 + 7) = 0x3f800000;
        plVar37[8] = 0;
        (*DAT_043ef6c0)(&local_e8,&DAT_043ef6e0);
        if (local_e8 != (long *)0x0) {
          plVar19 = local_e8 + 10;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *(int *)plVar19 = (int)*plVar19 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        plVar19 = (long *)*plVar37;
        *plVar37 = (long)local_e8;
        if (plVar19 != (long *)0x0) {
          plVar37 = plVar19 + 10;
          do {
            iVar15 = (int)*plVar37 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar7) {
              *(int *)plVar37 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar19 + 0x10))();
          }
        }
        if (local_e8 != (long *)0x0) {
          plVar37 = local_e8 + 10;
          do {
            iVar15 = (int)*plVar37 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
            if (bVar7) {
              *(int *)plVar37 = iVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*local_e8 + 0x10))();
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar5);
      *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
      uVar16 = 8;
    }
    lVar22 = *(long *)(param_1 + 600);
    *(long *)(param_1 + 600) = lVar17;
    if (lVar22 != 0) {
      FUN_02c459b4(param_1 + 0x260);
    }
    *(long **)(param_1 + 0x260) = plVar36;
    *(long *)(param_1 + 0x268) = lVar29;
    *(undefined8 *)(param_1 + 0x270) = uVar16;
    uVar23 = (undefined4)param_2[1];
  }
  *(undefined4 *)(param_1 + 0x278) = uVar23;
  lVar17 = *param_2;
  if (lVar17 != 0) {
    piVar1 = (int *)(lVar17 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar36 = *(long **)(param_1 + 0x358);
  *(long *)(param_1 + 0x358) = lVar17;
  if (plVar36 != (long *)0x0) {
    plVar37 = plVar36 + 10;
    do {
      iVar15 = (int)*plVar37 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar7) {
        *(int *)plVar37 = iVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar36 + 0x10))();
    }
  }
  plVar36 = *(long **)(*(long *)(param_1 + 0x88) + 0x18);
  pbVar31 = PTR_DAT_043729d8;
  if (plVar36 == (long *)0x0) {
LAB_02c42dc0:
    puVar8 = PTR_DAT_043729e0;
    if (*(long *)(param_1 + 0x668) != 0) {
      for (plVar36 = *(long **)(*(long *)(param_1 + 0x668) + 0xa0); plVar36 != (long *)0x0;
          plVar36 = (long *)*plVar36) {
        lVar17 = plVar36[7];
        for (lVar24 = plVar36[6]; lVar24 != lVar17; lVar24 = lVar24 + 0x68) {
          plVar37 = (long *)FUN_02c47aa8(lVar24);
          if (((*pbVar31 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar31), iVar15 != 0)) {
            if (((*PTR_DAT_043729e8 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar15 != 0)) {
              *(undefined8 *)PTR_DAT_043729f0 = 0;
              __cxa_guard_release(PTR_DAT_043729e8);
            }
            *(undefined **)puVar8 = PTR_DAT_043729f0;
            __cxa_guard_release(pbVar31);
          }
          if (plVar37 != (long *)0x0) {
            for (plVar19 = (long *)(**(code **)(*plVar37 + 0x10))(plVar37); plVar19 != (long *)0x0;
                plVar19 = (long *)*plVar19) {
              if (plVar19 == (long *)puVar8) {
                lVar29 = FUN_00242728(plVar37,0x14);
                *(long *)(*(long *)(lVar29 + 8) + 0x70) = lVar24;
                break;
              }
            }
          }
        }
      }
    }
    *(undefined2 *)(param_1 + 0x80) = 0x101;
    *(undefined1 *)(param_1 + 0x671) = 1;
    return;
  }
  puVar2 = (undefined8 *)(param_1 + 0x338);
  bVar3 = *PTR_DAT_043729d8;
  do {
    if (((bVar3 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar31), iVar15 != 0)) {
      if (((*PTR_DAT_043729e8 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar15 != 0)) {
        *(undefined8 *)PTR_DAT_043729f0 = 0;
        __cxa_guard_release(PTR_DAT_043729e8);
      }
      *(undefined **)PTR_DAT_043729e0 = PTR_DAT_043729f0;
      pbVar31 = PTR_DAT_043729d8;
      __cxa_guard_release(PTR_DAT_043729d8);
    }
    puVar20 = (undefined8 *)(**(code **)(*plVar36 + 0x10))(plVar36);
    if (puVar20 != (undefined8 *)0x0) {
LAB_02c4256c:
      if (puVar20 != (undefined8 *)PTR_DAT_043729e0) goto code_r0x02c4257c;
      puVar21 = (undefined4 *)FUN_00242728(plVar36,0x14);
      *puVar21 = 1;
      pbVar31 = *(byte **)(param_1 + 8);
      puVar20 = (undefined8 *)(**(code **)(*(long *)pbVar31 + 0x10))(pbVar31,0x78,8);
      if (puVar20 == (undefined8 *)0x0) {
        pbVar31 = (byte *)0x0;
        local_d8 = 0;
        local_d0 = (long *)0x0;
      }
      else {
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar8 = PTR_DAT_04379528;
          if (iVar15 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02c43300;
        *(byte **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = pbVar31;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        puVar20[0xd] = 0;
        puVar20[0xe] = 0;
        puVar20[0xb] = 0;
        puVar20[0xc] = 0;
        puVar20[9] = 0;
        puVar20[10] = 0;
        puVar20[2] = 0;
        puVar20[7] = 0;
        puVar20[8] = 0;
        puVar20[5] = 0;
        puVar20[6] = 0;
        puVar20[3] = 0;
        puVar20[4] = 0;
        puVar20[1] = 0;
        *puVar20 = &PTR_FUN_0428a5b8;
        FUN_02c4010c();
        puVar20[0xe] = 0;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        local_d8 = 0x78;
        local_d0 = (long *)&DAT_00000008;
      }
      *(undefined8 **)(puVar21 + 2) = puVar20;
      uVar18 = *(ulong *)(param_1 + 0x328);
      local_e8 = puVar20;
      local_e0 = pbVar31;
      if (uVar18 < *(ulong *)(param_1 + 0x330)) {
        FUN_02c462bc(puVar2,uVar18,&local_e8);
        *(long *)(param_1 + 0x328) = *(long *)(param_1 + 0x328) + 0x20;
      }
      else {
        uVar28 = *(ulong *)(param_1 + 0x340);
        lVar17 = (long)(uVar18 - *(long *)(param_1 + 800)) >> 5;
        uVar18 = lVar17 + 1;
        if (0x7ffffffffffffffe < uVar28) {
          uVar28 = 0x7fffffffffffffff;
        }
        if (uVar28 < uVar18) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar29 = *(ulong *)(param_1 + 0x330) - *(long *)(param_1 + 800);
        if ((ulong)(lVar29 >> 5) < uVar28 >> 1) {
          uVar26 = lVar29 >> 4;
          uVar28 = uVar18;
          if (uVar18 <= uVar26) {
            uVar28 = uVar26;
          }
        }
        if (uVar28 == 0) {
          lVar29 = 0;
        }
        else {
          lVar29 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar28 << 5,8);
          if (lVar29 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xb8))();
          }
        }
        lVar22 = lVar29 + lVar17 * 0x20;
        FUN_02c462bc(puVar2,lVar22,&local_e8);
        puVar20 = *(undefined8 **)(param_1 + 800);
        lVar17 = lVar22 + 0x20;
        puVar32 = *(undefined8 **)(param_1 + 0x328);
        if (puVar32 == puVar20) {
          puVar32 = puVar20;
        }
        else {
          do {
            lVar22 = lVar22 + -0x20;
            puVar32 = puVar32 + -4;
            FUN_02c462bc(puVar2,lVar22,puVar32);
          } while (puVar20 != puVar32);
          puVar20 = *(undefined8 **)(param_1 + 0x328);
          puVar32 = *(undefined8 **)(param_1 + 800);
        }
        lVar27 = *(long *)(param_1 + 0x330);
        *(long *)(param_1 + 800) = lVar22;
        *(long *)(param_1 + 0x328) = lVar17;
        *(ulong *)(param_1 + 0x330) = lVar29 + uVar28 * 0x20;
        if (puVar20 != puVar32) {
          do {
            puVar30 = puVar20 + -4;
            puVar35 = (undefined8 *)*puVar30;
            *puVar30 = 0;
            if (puVar35 != (undefined8 *)0x0) {
              FUN_02bcbe58(&local_88,0);
              (**(code **)*puVar35)(puVar35);
              plVar37 = (long *)puVar20[-3];
              uVar16 = puVar20[-2];
              uVar33 = puVar20[-1];
              uVar18 = (**(code **)(*plVar37 + 0xc0))(plVar37);
              if ((uVar18 & 1) == 0) {
LAB_02c42854:
                (**(code **)(*plVar37 + 0x18))(plVar37,puVar35,uVar16,uVar33);
              }
              else {
                if (*(char *)(lVar24 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar24 + 0x38d488) = 1;
                  *(undefined8 *)(lVar24 + 0x38d478) = 0;
                  *(undefined8 *)(lVar24 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_02c42854;
                FUN_02bcc824(plVar37,puVar35,uVar16,uVar33);
              }
              if (*(char *)(lVar24 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar24 + 0x38d488) = 1;
                *(undefined8 *)(lVar24 + 0x38d478) = 0;
                *(undefined8 *)(lVar24 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
              }
              iVar15 = *(int *)(lVar24 + 0x38d480) + -1;
              *(int *)(lVar24 + 0x38d480) = iVar15;
              if (iVar15 == 0) {
                FUN_02bcc320();
                if (*(char *)(lVar24 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar24 + 0x38d488) = 1;
                  *(undefined8 *)(lVar24 + 0x38d478) = 0;
                  *(undefined8 *)(lVar24 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
                }
                *(undefined4 *)(lVar24 + 0x38d484) = 0;
              }
            }
            puVar20 = puVar30;
          } while (puVar32 != puVar30);
        }
        if (puVar32 != (undefined8 *)0x0) {
          lVar27 = lVar27 - (long)puVar32;
          plVar37 = (long *)*puVar2;
          uVar18 = (**(code **)(*plVar37 + 0xc0))(plVar37);
          if ((uVar18 & 1) != 0) {
            if (*(char *)(lVar24 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar24 + 0x38d488) = 1;
              *(undefined8 *)(lVar24 + 0x38d478) = 0;
              *(undefined8 *)(lVar24 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar24 + 0x38d480)) {
              FUN_02bcc824(plVar37,puVar32,lVar27,8);
              goto LAB_02c42a70;
            }
          }
          (**(code **)(*plVar37 + 0x18))(plVar37,puVar32,lVar27,8);
        }
      }
LAB_02c42a70:
      puVar20 = local_e8;
      pbVar31 = PTR_DAT_043729d8;
      local_e8 = (long *)0x0;
      if (puVar20 != (undefined8 *)0x0) {
        FUN_02bcbe58(&local_88,0);
        (**(code **)*puVar20)(puVar20);
        plVar37 = local_d0;
        sVar13 = local_d8;
        pbVar25 = local_e0;
        uVar18 = (**(code **)(*(long *)local_e0 + 0xc0))(local_e0);
        if ((uVar18 & 1) == 0) {
LAB_02c42afc:
          (**(code **)(*(long *)pbVar25 + 0x18))(pbVar25,puVar20,sVar13,plVar37);
        }
        else {
          if (*(char *)(lVar24 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar24 + 0x38d488) = 1;
            *(undefined8 *)(lVar24 + 0x38d478) = 0;
            *(undefined8 *)(lVar24 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_02c42afc;
          FUN_02bcc824(pbVar25,puVar20,sVar13,plVar37);
        }
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar15 = *(int *)(lVar24 + 0x38d480) + -1;
        *(int *)(lVar24 + 0x38d480) = iVar15;
        if (iVar15 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar24 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar24 + 0x38d488) = 1;
            *(undefined8 *)(lVar24 + 0x38d478) = 0;
            *(undefined8 *)(lVar24 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar24 + 0x38d484) = 0;
        }
      }
    }
LAB_02c42540:
    plVar36 = (long *)FUN_00250790(plVar36);
    if (plVar36 == (long *)0x0) goto LAB_02c42dc0;
    bVar3 = *pbVar31;
  } while( true );
LAB_02c4209c:
  ClearExclusiveLocal();
  iVar15 = iVar14;
  if (iVar14 == 0) goto LAB_02c421c4;
  goto LAB_02c42054;
code_r0x02c4257c:
  puVar20 = (undefined8 *)*puVar20;
  if (puVar20 == (undefined8 *)0x0) goto LAB_02c42540;
  goto LAB_02c4256c;
}


