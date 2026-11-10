/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bd2fd0; name: FUN_01bd2fd0
 */


void FUN_01bd2fd0(undefined8 *param_1,undefined1 *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
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
  
  uVar3 = *(undefined4 *)(param_2 + 0xe0);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00b645bc(&local_78,param_2 + 0x10);
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_01a0372c(&local_88,param_2 + 0x20);
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  FUN_0095aa3c(&local_a0,param_2 + 0x30);
  local_90 = *(undefined8 *)(param_2 + 0x40);
  FUN_01c342d8(param_1,uVar3,&local_78,&local_88,&local_a0,*param_2,0);
  plVar13 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar20 = local_a0 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  plVar13 = local_88;
  if (local_88 != (long *)0x0) {
    plVar20 = local_88 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  plVar13 = local_78;
  if (local_78 != (long *)0x0) {
    plVar20 = local_78 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_68 = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_68);
    }
  }
  puVar7 = PTR_DAT_043827f8;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = puVar7 + 0x10;
  param_1[0x5b] = 0;
  puVar7 = PTR_DAT_04379520;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar11 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar8 = PTR_DAT_04379528;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar18 = DAT_043f1798;
  lVar17 = tpidr_el0;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar17 + 0x20), *(long *)(lVar17 + 0x20) == 0)) {
    *(long *)(lVar17 + 0x20) = DAT_043f1798;
    lVar12 = lVar18;
  }
  param_1[0x5c] = lVar12;
  param_1[0x5d] = 0x1ffffffffffffff;
  *param_1 = &PTR_LAB_04245990;
  param_1[9] = &PTR_LAB_04245ae0;
  param_1[10] = &PTR_LAB_04245bc0;
  param_1[0x70] = &PTR_LAB_04245c28;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x58] = &PTR_LAB_04245be8;
  param_1[0x71] = &DAT_cbf29ce484222645;
  param_1[0x72] = &DAT_03996322;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = &DAT_cbf29ce484222645;
  param_1[0x76] = &DAT_03996322;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  plVar13 = *(long **)(param_2 + 0x88);
  param_1[0x79] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  param_1[0x7a] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x7b] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x7c] = *(undefined8 *)(param_2 + 0xa0);
  plVar13 = *(long **)(param_2 + 0xa8);
  param_1[0x7d] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  if ((*puVar7 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar9 = PTR_DAT_04379528;
    if (iVar11 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  lVar18 = DAT_043f1798;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar17 + 0x20), *(long *)(lVar17 + 0x20) == 0)) {
    *(long *)(lVar17 + 0x20) = DAT_043f1798;
    lVar12 = lVar18;
  }
  param_1[0x82] = lVar12;
  param_1[0x83] = 0x7ffffffffffffff;
  param_1[0x8c] = 0x500000002;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 1;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  lVar18 = *(long *)(param_2 + 0xb8);
  param_1[0x92] = lVar18;
  if (lVar18 != 0) {
    lVar18 = *(long *)(lVar18 + 0x58);
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[0x94] = 0;
  plVar13 = (long *)param_1[1];
  param_1[0x93] = 0;
  *(undefined1 *)(param_1 + 0x95) = param_2[0xe4];
  *(undefined1 *)((long)param_1 + 0x4a9) = param_2[0xe5];
  *(undefined2 *)((long)param_1 + 0x4aa) = 0x100;
  *(undefined4 *)((long)param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0xd8);
  param_1[0x96] = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x97] = 0;
  param_1[0x71] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x72] = *(undefined8 *)(param_2 + 0x50);
  param_1[0x73] = *(undefined8 *)(param_2 + 0x58);
  plVar20 = *(long **)(param_2 + 0x60);
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  plVar15 = (long *)param_1[0x74];
  param_1[0x74] = plVar20;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  lVar18 = *(long *)(param_2 + 8);
  if ((*puVar7 & 1) == 0) {
    iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar11 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  plVar20 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x250,0x10);
  if (plVar20 == (long *)0x0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  uVar4 = param_2[1];
  FUN_01bdae70(plVar20);
  *plVar20 = (long)&PTR_LAB_04245c70;
  plVar20[9] = (long)&PTR_LAB_04245d78;
  plVar20[10] = (long)&PTR_LAB_04245e58;
  plVar20[0x42] = 0;
  *(undefined1 *)(plVar20 + 0x43) = uVar4;
  *(undefined2 *)((long)plVar20 + 0x219) = 0;
  *(undefined4 *)((long)plVar20 + 0x22c) = 0x3f800000;
  *(undefined8 *)((long)plVar20 + 0x21c) = 0;
  *(undefined8 *)((long)plVar20 + 0x224) = 0x3f80000000000000;
  *(undefined1 *)(plVar20 + 0x46) = 1;
  plVar20[0x47] = 0;
  plVar20[0x48] = 0;
  plVar20[1] = (long)plVar13;
  plVar20[2] = (long)plVar20;
  plVar20[3] = 0x250;
  plVar20[4] = 0x10;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  if (plVar20 != (long *)0x0) {
    lVar12 = plVar20[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar15 = plVar20 + 9;
  }
  (**(code **)(*plVar15 + 0xb8))(plVar15,lVar18);
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  FUN_009ad580(&local_a0,lVar18 + 0x318);
  (**(code **)(*plVar15 + 0xc0))(plVar15,&local_a0);
  plVar21 = local_a0;
  if (local_a0 != (long *)0x0) {
    plVar2 = local_a0 + 1;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_78 = (long *)*plVar21;
      FUN_02a44274(lVar12 + 0xd8,&local_78);
    }
  }
  (**(code **)(*plVar15 + 200))(plVar15,*(undefined1 *)(lVar18 + 0x33b));
  (**(code **)(*plVar15 + 0x90))(plVar15);
  local_78 = plVar20;
  FUN_02a4dad4(lVar18 + 0xf0,&local_78);
  if (local_78 != (long *)0x0) {
    lVar18 = local_78[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar18 = plVar20[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = (long *)param_1[0x88];
  param_1[0x88] = plVar20;
  if (plVar15 != (long *)0x0) {
    lVar18 = plVar15[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
    }
  }
  if (**(char **)(param_2 + 0x70) != '\0') {
    param_1[0x75] = *(undefined8 *)(param_2 + 0x68);
    param_1[0x76] = *(undefined8 *)(param_2 + 0x70);
    param_1[0x77] = *(undefined8 *)(param_2 + 0x78);
    plVar20 = *(long **)(param_2 + 0x80);
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    plVar15 = (long *)param_1[0x78];
    param_1[0x78] = plVar20;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    lVar18 = FUN_0135c050(*(undefined8 *)(param_2 + 8),plVar13);
    if (lVar18 != 0) {
      lVar12 = *(long *)(lVar18 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar20 = (long *)param_1[0x89];
    param_1[0x89] = lVar18;
    if (plVar20 == (long *)0x0) {
LAB_01bd37d8:
      lVar18 = *(long *)(param_2 + 0xc0);
    }
    else {
      lVar18 = plVar20[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 != 0) goto LAB_01bd37d8;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))();
      lVar18 = *(long *)(param_2 + 0xc0);
    }
    if (lVar18 != 0) {
      lVar12 = *(long *)(lVar18 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar20 = (long *)param_1[0x90];
      param_1[0x90] = lVar18;
      if (plVar20 != (long *)0x0) {
        lVar18 = plVar20[0xb];
        piVar1 = (int *)(lVar18 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar18 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))();
        }
      }
    }
  }
  if (*(char *)((long)param_1 + 0x4a9) == '\0') {
LAB_01bd3624:
    plVar20 = *(long **)(param_2 + 0xd0);
  }
  else {
    lVar18 = FUN_0152f590(*(undefined8 *)(param_2 + 8),plVar13);
    if (lVar18 != 0) {
      lVar12 = *(long *)(lVar18 + 0x58);
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar20 = (long *)param_1[0x8a];
    param_1[0x8a] = lVar18;
    if (plVar20 == (long *)0x0) goto LAB_01bd3624;
    lVar18 = plVar20[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01bd3624;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))();
    plVar20 = *(long **)(param_2 + 0xd0);
  }
  if (((plVar20 != (long *)0x0) && (plVar20[1] != *plVar20)) &&
     (plVar15 = param_1 + 0x7f, plVar15 != plVar20)) {
    plVar21 = (long *)param_1[0x82];
    if (plVar21 != (long *)plVar20[3]) {
      lVar12 = param_1[0x7f];
      lVar18 = param_1[0x80];
      if (lVar18 == lVar12) {
        lVar18 = lVar12;
      }
      else {
        do {
          plVar21 = (long *)(lVar18 + -8);
          lVar18 = lVar18 + -0x20;
          if ((long *)*plVar21 != (long *)0x0) {
            (**(code **)(*(long *)*plVar21 + 0x20))();
          }
        } while (lVar12 != lVar18);
        lVar18 = *plVar15;
        plVar21 = (long *)param_1[0x82];
      }
      lVar19 = param_1[0x81];
      param_1[0x80] = lVar12;
      uVar16 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar16 & 1) == 0) {
LAB_01bd3990:
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar18,lVar19 - lVar18,8);
      }
      else {
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_01bd3990;
        FUN_02bcc824(plVar21,lVar18,lVar19 - lVar18,8);
      }
      param_1[0x80] = 0;
      param_1[0x81] = 0;
      *plVar15 = 0;
    }
    lVar17 = plVar20[3];
    lVar18 = plVar20[4];
    lVar12 = plVar20[5];
    *(int *)(param_1 + 0x85) = (int)plVar20[6];
    param_1[0x83] = lVar18;
    param_1[0x84] = lVar12;
    param_1[0x82] = lVar17;
    FUN_01bda36c(plVar15,*plVar20,plVar20[1]);
  }
  param_1[0x8d] = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(param_2 + 0xdc);
  lVar17 = *(long *)(param_2 + 0xb8);
  plVar20 = param_1 + 0x8f;
  if (lVar17 == 0) {
    lVar17 = *(long *)(param_2 + 0x88);
    if ((lVar17 == 0) || (**(char **)(lVar17 + 0x60) == '\0')) goto LAB_01bd36a4;
    lVar17 = FUN_00d0dbb4(&local_a0,plVar13);
    if (lVar17 != 0) {
      lVar18 = *(long *)(lVar17 + 0x58);
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = (long *)*plVar20;
    *plVar20 = 0;
    if (plVar13 != (long *)0x0) {
      lVar18 = plVar13[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    *plVar20 = lVar17;
    lVar17 = *(long *)(param_2 + 200);
  }
  else {
    lVar18 = *(long *)(lVar17 + 0x58);
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01bd3fa0;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar13 = (long *)*plVar20;
    *plVar20 = lVar17;
    if (plVar13 != (long *)0x0) {
      lVar17 = plVar13[0xb];
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
        lVar17 = *(long *)(param_2 + 200);
        goto joined_r0x01bd375c;
      }
    }
LAB_01bd36a4:
    lVar17 = *(long *)(param_2 + 200);
  }
joined_r0x01bd375c:
  if (lVar17 != 0) {
    lVar18 = *(long *)(lVar17 + 0x58);
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_01bd3fa0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)param_1[0x91];
  param_1[0x91] = lVar17;
  if (plVar13 != (long *)0x0) {
    lVar17 = plVar13[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
      lVar17 = param_1[0x41];
      goto joined_r0x01bd36d8;
    }
  }
  lVar17 = param_1[0x41];
joined_r0x01bd36d8:
  if (lVar17 != 0) {
    FUN_01a0408c(&local_88);
    plVar13 = local_88;
    if (local_88 != (long *)0x0) {
      plVar20 = param_1 + 0x70;
      (**(code **)(*plVar20 + 0x20))(&local_a0,plVar20);
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      FUN_01800100(&local_b8,&local_a0);
      plVar15 = local_a0;
      if (local_a0 != (long *)0x0) {
        plVar21 = local_a0 + 1;
        do {
          iVar11 = (int)*plVar21 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar6) {
            *(int *)plVar21 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          local_a0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_78 = (long *)*plVar15;
          FUN_02a44274(lVar17 + 0xd8,&local_78);
        }
      }
      local_a8 = plVar20;
      FUN_01f38820(plVar13,&local_b8);
      puVar10 = local_b8;
      if (local_b8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_b8 + 1);
        do {
          iVar11 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
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
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
  return;
}


