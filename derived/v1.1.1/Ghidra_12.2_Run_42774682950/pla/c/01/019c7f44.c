/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c7f44; name: FUN_019c7f44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019c7f44(long param_1)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  char local_120 [16];
  undefined1 *local_110 [6];
  undefined1 *local_e0;
  undefined1 *local_b0;
  int local_7c;
  
  puVar7 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar9 = PTR_DAT_04379688;
  puVar8 = PTR_DAT_04379680;
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar23 = *(long **)(lVar14 + 0x100);
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar24 = (long *)plVar23[0x20];
  if (plVar24 != (long *)0x0) {
    plVar11 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)plVar24[0xe];
  if (plVar11 != (long *)0x0) {
    plVar22 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar22 = (long *)plVar11[0xb];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar1 = plVar11 + 10;
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  plVar11 = plVar24 + 10;
  do {
    iVar10 = (int)*plVar11 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  plVar24 = plVar23 + 10;
  do {
    iVar10 = (int)*plVar24 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
    bVar3 = *puVar7;
  }
  else {
    bVar3 = *puVar7;
  }
  if (((bVar3 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)puVar8;
  *(long *)puVar9 = lVar14;
  plVar23 = *(long **)(lVar14 + 0xd0);
  if (plVar23 == (long *)0x0) {
    lVar14 = _DAT_000001a8;
  }
  else {
    plVar24 = plVar23 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar14 = plVar23[0x35];
    do {
      iVar10 = (int)*plVar24 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  pcVar15 = *(char **)(param_1 + 0x80);
  pcVar18 = *(char **)(param_1 + 0x88);
  if ((long)pcVar18 - (long)pcVar15 != 0) {
    uVar21 = ((long)pcVar18 - (long)pcVar15) - 0x180;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar21;
    if (((SUB164(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 8 & 1) == 0) &&
       (pcVar18 = pcVar18 + -0x180, *pcVar18 != '\0')) {
      *pcVar18 = '\0';
    }
    if (0x17f < uVar21) {
      do {
        if (pcVar18[-0x180] != '\0') {
          pcVar18[-0x180] = '\0';
        }
        pcVar18 = pcVar18 + -0x300;
        if (*pcVar18 != '\0') {
          *pcVar18 = '\0';
        }
      } while (pcVar15 != pcVar18);
    }
  }
  *(char **)(param_1 + 0x88) = pcVar15;
  FUN_019c5d84(*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 0x80),param_1 + 0x70,
               *(undefined8 *)(param_1 + 0x68),0);
  FUN_016aa648(local_120,plVar22);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (local_120[0] != '\0') {
      memcpy((void *)(param_1 + 0xd0),local_110,0xa0);
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
  }
  else if (local_120[0] == '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  else {
    memcpy((void *)(param_1 + 0xd0),local_110,0x98);
  }
  puVar7 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  lVar16 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar16;
  plVar23 = *(long **)(lVar16 + 0x290);
  if (plVar23 == (long *)0x0) {
    lVar16 = _DAT_000000d0;
  }
  else {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_019c86a4;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar12;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar17 = plVar23[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    lVar16 = plVar23[0x1a];
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  *(long *)(param_1 + 0x170) = lVar16;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined1 **)(param_1 + 400) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1f0) = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 **)(param_1 + 0x1b0) = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined1 **)(param_1 + 0x210) = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined1 **)(param_1 + 0x1d0) = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined1 **)(param_1 + 0x230) = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  local_170 = 0;
  local_130 = 0;
  local_150 = 0;
  local_1d0 = 0;
  local_190 = 0;
  local_1b0 = 0;
  uVar12 = *(undefined8 *)(param_1 + 8);
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar16 = *(long *)puVar8;
  *(long *)puVar9 = lVar16;
  plVar23 = *(long **)(lVar16 + 0x290);
  if (plVar23 == (long *)0x0) {
    lVar16 = _DAT_000000d0;
  }
  else {
    lVar16 = plVar23[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_019c86a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar17 = plVar23[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    lVar16 = plVar23[0x1a];
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  uVar21 = FUN_019c13d0(uVar12,lVar16,local_120,param_1 + 0x70,*(undefined8 *)(param_1 + 0x68),
                        &local_180,&local_1e0,1);
  if ((uVar21 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x240) = 0;
    *(undefined1 *)(lVar14 + 0x30) = 0;
    *(undefined4 *)(lVar14 + 0x34) = 0;
    *(undefined4 *)(lVar14 + 0x54) = 0;
    *(undefined4 *)(lVar14 + 0x74) = 0;
    *(undefined1 *)(lVar14 + 0x50) = 0;
    *(undefined1 *)(lVar14 + 0x70) = 0;
    *(undefined8 *)(lVar14 + 0x80) = 0;
    *(undefined8 *)(lVar14 + 0x88) = 0;
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined8 *)(lVar14 + 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    *(undefined8 *)(lVar14 + 0x68) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x240) = 1;
    *(undefined4 *)(param_1 + 0x198) = local_168;
    *(undefined8 *)(param_1 + 0x180) = local_180;
    *(undefined8 *)(param_1 + 0x188) = local_178;
    *(undefined8 *)(param_1 + 400) = local_170;
    *(undefined8 *)(param_1 + 0x1e0) = local_1e0;
    *(undefined8 *)(param_1 + 0x1e8) = uStack_1d8;
    *(undefined4 *)(param_1 + 0x1f8) = local_1c8;
    *(undefined8 *)(param_1 + 0x1f0) = local_1d0;
    *(undefined4 *)(param_1 + 0x1b8) = local_148;
    *(undefined8 *)(param_1 + 0x1a8) = local_158;
    *(undefined8 *)(param_1 + 0x1b0) = local_150;
    *(undefined8 *)(param_1 + 0x1a0) = local_160;
    *(undefined4 *)(param_1 + 0x218) = local_1a8;
    *(undefined8 *)(param_1 + 0x208) = uStack_1b8;
    *(undefined8 *)(param_1 + 0x210) = local_1b0;
    *(undefined8 *)(param_1 + 0x200) = local_1c0;
    *(undefined4 *)(param_1 + 0x1d8) = local_128;
    *(undefined8 *)(param_1 + 0x1c8) = local_138;
    *(undefined8 *)(param_1 + 0x1d0) = local_130;
    *(undefined8 *)(param_1 + 0x1c0) = local_140;
    *(undefined4 *)(param_1 + 0x238) = local_188;
    *(undefined8 *)(param_1 + 0x228) = uStack_198;
    *(undefined8 *)(param_1 + 0x230) = local_190;
    *(undefined8 *)(param_1 + 0x220) = local_1a0;
    if (local_110[0] != &DAT_cbf29ce484222645) {
      *(undefined8 *)(lVar14 + 0x48) = local_178;
      *(undefined8 *)(lVar14 + 0x40) = local_180;
      uVar19 = (uint)(local_7c == 1);
    }
    else {
      uVar19 = 0;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(undefined8 *)(lVar14 + 0x48) = 0;
    }
    *(bool *)(lVar14 + 0x30) = local_110[0] != &DAT_cbf29ce484222645;
    *(uint *)(lVar14 + 0x34) = uVar19;
    uVar19 = (uint)(local_7c == 1);
    if (local_e0 != &DAT_cbf29ce484222645) {
      *(undefined8 *)(lVar14 + 0x68) = local_158;
      *(undefined8 *)(lVar14 + 0x60) = local_160;
      uVar20 = uVar19;
    }
    else {
      *(undefined8 *)(lVar14 + 0x60) = 0;
      *(undefined8 *)(lVar14 + 0x68) = 0;
      uVar20 = 0;
    }
    *(bool *)(lVar14 + 0x50) = local_e0 != &DAT_cbf29ce484222645;
    *(uint *)(lVar14 + 0x54) = uVar20;
    if (local_b0 == &DAT_cbf29ce484222645) {
      *(undefined1 *)(lVar14 + 0x70) = 0;
      *(undefined4 *)(lVar14 + 0x74) = 0;
      *(undefined8 *)(lVar14 + 0x80) = 0;
      *(undefined8 *)(lVar14 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(lVar14 + 0x88) = local_138;
      *(uint *)(lVar14 + 0x74) = uVar19;
      *(undefined1 *)(lVar14 + 0x70) = 1;
      *(undefined8 *)(lVar14 + 0x80) = local_140;
    }
  }
  if (local_120[0] != '\0') {
    local_120[0] = '\0';
  }
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 10;
    do {
      iVar10 = (int)*plVar23 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *(int *)plVar23 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  return;
}


