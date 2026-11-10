/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019fbd44; name: FUN_019fbd44
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_019fbd44(undefined8 *param_1,undefined4 *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar4 = *param_2;
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00b645bc(&local_78,param_2 + 4);
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_01a0372c(&local_88,param_2 + 8);
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  FUN_0095aa3c(&local_a0,param_2 + 0xc);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  FUN_01c342d8(param_1,uVar4,&local_78,&local_88,&local_a0,*(undefined1 *)(param_2 + 0x19),
               *(undefined1 *)((long)param_2 + 0x65));
  plVar14 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar13 = local_a0 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  plVar14 = local_88;
  if (local_88 != (long *)0x0) {
    plVar13 = local_88 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  plVar14 = local_78;
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  param_1[0x58] = &PTR_FUN_04236268;
  FUN_01a0399c(param_1 + 0x59);
  *param_1 = &PTR_FUN_04235f68;
  param_1[99] = 0;
  param_1[9] = &PTR_LAB_042360d8;
  param_1[10] = &PTR_LAB_042361b8;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x58] = &PTR_LAB_042361e0;
  param_1[0x70] = &PTR_LAB_04236220;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_01a02354(param_1 + 0x7a,param_2 + 0x12);
  param_1[0x83] = 0;
  plVar18 = (long *)param_1[1];
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x84] = *(undefined8 *)(param_2 + 0x16);
  plVar13 = (long *)FUN_0135be64(*(undefined8 *)(param_2 + 2),plVar18);
  (**(code **)(*plVar13 + 0x10))(&local_a0);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00bd1f90(&local_78,&local_a0);
  plVar14 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 1;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_88 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_88);
    }
  }
  FUN_00ab3f84(param_1 + 0x72,&local_78);
  plVar14 = local_78;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_a0 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_a0);
    }
  }
  if (param_2[0x18] == 0) goto LAB_019fc0e4;
  uVar5 = *(uint *)((long)plVar13 + 0x214);
  uVar6 = uVar5 | param_2[0x18];
  bVar8 = (uVar5 != 0) != (uVar6 != 0);
  if ((((uVar6 == uVar5) || (uVar6 == 0)) || (*(int *)((long)plVar13 + 0x21c) == 0)) ||
     (*(int *)((long)plVar13 + 0x224) == 0)) {
    if (bVar8) goto LAB_019fc5f8;
  }
  else if (bVar8 || *(int *)((long)plVar13 + 0x21c) == 2) {
LAB_019fc5f8:
    *(undefined8 *)((long)plVar13 + 0x21c) = 0;
    *(undefined8 *)((long)plVar13 + 0x224) = 0;
    FUN_01bdb280(0,plVar13);
    if (*(uint *)(plVar13 + 0x42) != uVar6) {
      *(uint *)(plVar13 + 0x42) = uVar6;
      FUN_01bdb4e8(plVar13);
    }
    *(uint *)((long)plVar13 + 0x214) = uVar6;
    goto LAB_019fc0e4;
  }
  *(uint *)((long)plVar13 + 0x214) = uVar6;
  if ((*(uint *)(plVar13 + 0x42) != uVar6) && (*(int *)((long)plVar13 + 0x21c) == 0)) {
    *(uint *)(plVar13 + 0x42) = uVar6;
  }
LAB_019fc0e4:
  plVar14 = (long *)FUN_0135c050(*(undefined8 *)(param_2 + 2),plVar18);
  (**(code **)(*plVar14 + 0x10))(&local_a0);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_01355c20(&local_78,&local_a0);
  plVar14 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar13 = local_a0 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_88 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_88);
    }
  }
  FUN_00b67cfc(param_1 + 0x74,&local_78);
  plVar14 = local_78;
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_a0 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_a0);
    }
  }
  lVar17 = *(long *)(param_2 + 2);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar12 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar18;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x210,0x10);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
    FUN_01c31828(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_01c31828();
  *plVar14 = (long)&PTR_LAB_0424a060;
  plVar14[1] = (long)plVar18;
  plVar13 = plVar14 + 9;
  *plVar13 = (long)&PTR_LAB_0424a168;
  plVar14[10] = (long)&PTR_LAB_0424a248;
  plVar14[2] = (long)plVar14;
  plVar14[3] = 0x210;
  plVar14[4] = 0x10;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  lVar15 = plVar14[0xb];
  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar1 = param_1 + 0x70;
  if (*(long *)(lVar15 + 0x10) == 0) {
    uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
    *(undefined8 *)(lVar15 + 0x10) = uVar16;
  }
  piVar2 = (int *)(lVar15 + 0xc);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = *piVar2 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  (**(code **)(*plVar13 + 0xb8))(plVar13,lVar17);
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  FUN_009ad580(&local_a0,lVar17 + 0x318);
  (**(code **)(*plVar13 + 0xc0))(plVar13,&local_a0);
  plVar11 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar3 = local_a0 + 1;
    do {
      iVar12 = (int)*plVar3 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(int *)plVar3 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_78 = (long *)*plVar11;
      FUN_02a44274(lVar15 + 0xd8,&local_78);
    }
  }
  (**(code **)(plVar14[9] + 200))(plVar13,*(undefined1 *)(lVar17 + 0x33b));
  (**(code **)(plVar14[9] + 0x90))(plVar13);
  local_78 = plVar14;
  FUN_02a4dad4(lVar17 + 0xf0,&local_78);
  if (local_78 != (long *)0x0) {
    lVar17 = local_78[0xb];
    piVar2 = (int *)(lVar17 + 0xc);
    do {
      iVar12 = *piVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = iVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  (**(code **)(*plVar14 + 0x10))(&local_a0,plVar14);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_01a025c4(&local_78,&local_a0);
  plVar14 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar13 = local_a0 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_88 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_88);
    }
  }
  FUN_01a03a8c(param_1 + 0x76,&local_78);
  plVar14 = local_78;
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_a0 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_a0);
    }
  }
  plVar14 = (long *)FUN_0152f590(*(undefined8 *)(param_2 + 2),plVar18);
  (**(code **)(*plVar14 + 0x10))(&local_a0);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_01a028c4(&local_78,&local_a0);
  plVar14 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar13 = local_a0 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_88 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_88);
    }
  }
  FUN_01a03d8c(param_1 + 0x78,&local_78);
  plVar14 = local_78;
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 1;
    do {
      iVar12 = (int)*plVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *(int *)plVar13 = iVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar12 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_a0 = (long *)*plVar14;
      FUN_02a44274(lVar17 + 0xd8,&local_a0);
    }
  }
  if ((param_1[0x41] != 0) && (FUN_01a0408c(&local_88), plVar14 = local_88, local_88 != (long *)0x0)
     ) {
    (**(code **)(*plVar1 + 0x20))(&local_a0,plVar1);
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    FUN_01800100(&local_b8,&local_a0);
    plVar13 = local_a0;
    if (local_a0 != (long *)0x0) {
      plVar18 = local_a0 + 1;
      do {
        iVar12 = (int)*plVar18 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar8) {
          *(int *)plVar18 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_78 = (long *)*plVar13;
        FUN_02a44274(lVar17 + 0xd8,&local_78);
      }
    }
    local_a8 = plVar1;
    FUN_01f38820(plVar14,&local_b8);
    puVar10 = local_b8;
    if (local_b8 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_b8 + 1);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 + -1 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_a0 = (long *)*puVar10;
        FUN_02a44274(lVar17 + 0xd8,&local_a0);
      }
    }
    if (local_88 != (long *)0x0) {
      lVar17 = local_88[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = iVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
  }
  return;
}


