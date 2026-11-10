/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e4570; name: FUN_013e4570
 */


void FUN_013e4570(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long *local_1a8;
  undefined8 *local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long *local_188;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long alStack_160 [12];
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  long *local_e8;
  long alStack_e0 [12];
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  uVar18 = *(undefined8 *)(DAT_043c2a98 + 8);
  local_100 = &DAT_753f74378b49da9c;
  local_f8 = (code *)0x3928c5c;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  lVar8 = FUN_013eabd4(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (undefined1 *)0x751d66378b2cdc6c;
  local_f8 = (code *)0x38feb3e;
  local_f0 = (undefined1 *)0x8;
  local_e8 = (long *)0x0;
  lVar9 = FUN_013eadac(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (undefined1 *)0xb7bb79e53203acd4;
  local_f8 = (code *)0x39884d4;
  local_f0 = (undefined1 *)0xb;
  local_e8 = (long *)0x0;
  lVar10 = FUN_013eaef0(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (undefined1 *)0xc3ea7ae1fd807b8c;
  local_f8 = (code *)0x3957918;
  local_f0 = (undefined1 *)0xd;
  local_e8 = (long *)0x0;
  lVar11 = FUN_013eb034(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = &DAT_982ac928c78c196b;
  local_f8 = (code *)0x39be8dd;
  local_f0 = (undefined1 *)0x11;
  local_e8 = (long *)0x0;
  lVar12 = FUN_013eb178(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (undefined1 *)0xfa952fdab035bcf1;
  local_f8 = (code *)0x39a4843;
  local_f0 = (undefined1 *)0xb;
  local_e8 = (long *)0x0;
  lVar13 = FUN_013eb2bc(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = &DAT_e2c06acab97c29c2;
  local_f8 = (code *)0x388e1b1;
  local_f0 = (undefined1 *)0xf;
  local_e8 = (long *)0x0;
  lVar14 = FUN_0118c80c(*(undefined8 *)(param_1 + 0x4c8),&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if ((*(long *)(lVar10 + 0x440) != 0) && (*(long *)(lVar14 + 0x440) != 0)) {
    FUN_02831644();
  }
  plVar15 = *(long **)(lVar10 + 0x2c8);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  FUN_00d2f768(lVar10 + 0x180,0x80,0);
  FUN_00d2f768(lVar8 + 0x180,0x80,0);
  FUN_00d2f768(lVar13 + 0x180,0x80,0);
  FUN_00d2f768(lVar9 + 0x180,0x81,0);
  FUN_00d2f768(lVar11 + 0x180,0x82,0);
  FUN_00d2f768(lVar12 + 0x180,0x83,0);
  local_100 = &LAB_013eb400;
  local_f8 = FUN_013eb664;
  local_f0 = &LAB_013eb668;
  local_e8 = (long *)&LAB_013eb674;
  alStack_e0[0] = param_1;
  FUN_014008f0(lVar10,&local_100);
  local_180 = &LAB_013eb680;
  local_178 = FUN_013eb688;
  local_170 = &LAB_013eb764;
  local_168 = &LAB_013eb770;
  alStack_160[0] = param_1;
  FUN_01400958(lVar10,&local_180);
  FUN_02a4754c(&local_1a0,PTR_DAT_0437eae8);
  uVar16 = FUN_00d6adf4(lVar10 + 0x180,&local_1a0);
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  local_1a0 = (undefined8 *)&DAT_304928236d5bcabe;
  pcStack_198 = "common/pokedex.dat";
  local_190 = 0x12;
  local_188 = (long *)0x0;
  FUN_00d37bb4(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x4c8) + 0xb0),&local_1a0,10);
  plVar15 = (long *)local_80[0xd];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_80 != (long *)0x0) {
    lVar14 = local_80[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  FUN_013d911c(*(undefined8 *)(param_1 + 0x738),uVar18,uVar16,plVar15);
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar15 = *(long **)(lVar14 + 0xd0);
  if (plVar15 == (long *)0x0) {
    FUN_00d855e0(&local_1a8,0);
  }
  else {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_00d855e0(&local_1a8,plVar15);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  uVar18 = FUN_013e2450(local_1a8);
  uVar16 = FUN_013e245c(local_1a8);
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_1a0);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01160f90(&local_80,&local_1a0);
  puVar6 = local_1a0;
  if (local_1a0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_1a0 + 1);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_1a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_70[0] = *puVar6;
      FUN_02a44274(lVar14 + 0xd8,local_70);
    }
  }
  lVar14 = FUN_013e86c0(&local_80);
  plVar15 = local_80;
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 1;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_1a0 = (undefined8 *)*plVar15;
      FUN_02a44274(lVar17 + 0xd8,&local_1a0);
    }
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_013eda28(lVar14,*(undefined8 *)(param_1 + 0x730));
  *(undefined8 *)(lVar14 + 0xef0) = *(undefined8 *)(param_1 + 0x738);
  *(undefined8 *)(lVar14 + 0xef8) = uVar18;
  *(undefined8 *)(lVar14 + 0xf00) = uVar16;
  *(undefined8 *)(lVar14 + 0xf08) = *(undefined8 *)(param_1 + 0x758);
  FUN_013e4d68(param_1);
  FUN_013e4ff8(param_1);
  FUN_01411228(lVar9,lVar14);
  FUN_0140c404(lVar11,lVar14);
  FUN_01407c2c(lVar12,lVar14);
  FUN_0141221c(lVar8,lVar14);
  FUN_013fc234(lVar10,lVar14);
  FUN_0140f820(lVar13,lVar14);
  pcVar5 = local_178;
  if (local_1a8 != (long *)0x0) {
    plVar15 = local_1a8 + 10;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_1a8 + 0x10))();
      pcVar5 = local_178;
    }
  }
  local_178 = pcVar5;
  if (pcVar5 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar5)(alStack_160);
  }
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (long *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar5)(alStack_e0);
  }
  return;
}


