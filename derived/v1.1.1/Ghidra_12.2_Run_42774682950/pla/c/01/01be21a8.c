/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01be21a8; name: FUN_01be21a8
 */


void FUN_01be21a8(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *local_170;
  long *plStack_168;
  long *local_160;
  long *plStack_158;
  long *local_150;
  undefined4 local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  undefined4 local_118;
  undefined1 *local_110;
  char *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined4 local_d0 [2];
  long *local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  
  local_d0[0] = *param_2;
  local_c8 = *(long **)(param_2 + 2);
  if (local_c8 != (long *)0x0) {
    lVar20 = local_c8[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_00b645bc(&local_c0,param_2 + 4);
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_01a0372c(&local_b0,param_2 + 8);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_0095aa3c(&local_a0,param_2 + 0xc);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_01a02354(&local_88,param_2 + 0x12);
  uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x5e) >> 0x10);
  uStack_78 = (undefined6)*(undefined8 *)(param_2 + 0x16);
  local_72 = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x30);
  FUN_019fbd44(param_1,local_d0);
  puVar3 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
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
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_140 = (long *)*puVar3;
      FUN_02a44274(lVar20 + 0xd8,&local_140);
    }
  }
  puVar3 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0 + 1);
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
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_140 = (long *)*puVar3;
      FUN_02a44274(lVar20 + 0xd8,&local_140);
    }
  }
  puVar3 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
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
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_140 = (long *)*puVar3;
      FUN_02a44274(lVar20 + 0xd8,&local_140);
    }
  }
  puVar3 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
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
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_140 = (long *)*puVar3;
      FUN_02a44274(lVar20 + 0xd8,&local_140);
    }
  }
  if (local_c8 != (long *)0x0) {
    lVar20 = local_c8[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
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
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  *param_1 = &PTR_LAB_04246710;
  param_1[0x85] = 0;
  param_1[9] = &PTR_LAB_04246880;
  param_1[10] = &PTR_LAB_04246960;
  param_1[0x58] = &PTR_LAB_04246988;
  param_1[0x70] = &PTR_LAB_042469c8;
  puVar6 = PTR_DAT_04379520;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  if ((*puVar6 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar7 = PTR_DAT_04379528;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar15 = DAT_043f1798;
  lVar20 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar20 + 0x20), *(long *)(lVar20 + 0x20) == 0)) {
    *(long *)(lVar20 + 0x20) = DAT_043f1798;
    lVar11 = lVar15;
  }
  param_1[0x88] = lVar11;
  param_1[0x89] = 0x276276276276276;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  if ((*puVar6 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar8 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  lVar15 = DAT_043f1798;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar20 + 0x20), *(long *)(lVar20 + 0x20) == 0)) {
    *(long *)(lVar20 + 0x20) = DAT_043f1798;
    lVar11 = lVar15;
  }
  param_1[0x8f] = lVar11;
  param_1[0x90] = 0x555555555555555;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  if ((*puVar6 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar9 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  lVar15 = DAT_043f1798;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar20 + 0x20), *(long *)(lVar20 + 0x20) == 0)) {
    *(long *)(lVar20 + 0x20) = DAT_043f1798;
    lVar11 = lVar15;
  }
  param_1[0x97] = lVar11;
  param_1[0x98] = 0x333333333333333;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  FUN_018310a4(param_1 + 0x9b,param_2 + 0x1a);
  param_1[0x9d] = 0;
  param_1[0x9e] = &DAT_cbf29ce484222645;
  param_1[0x9f] = &DAT_03996322;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  FUN_00b18558(&local_140);
  plVar12 = (long *)param_1[0xa3];
  param_1[0xa3] = 0;
  if (plVar12 != (long *)0x0) {
    lVar15 = plVar12[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
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
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  param_1[0xa3] = local_140;
  lVar15 = *(long *)(param_2 + 0x1e);
  if (*(long *)(lVar15 + 0x80) != *(long *)(lVar15 + 0x78)) {
    lVar11 = 0;
    uVar21 = 0;
    do {
      local_140 = (long *)0x0;
      local_138 = (long *)&DAT_cbf29ce484222645;
      local_130 = (long *)&DAT_03996322;
      local_118 = 0;
      local_128 = (long *)0x0;
      local_120 = (long *)0x0;
      local_110 = &DAT_cbf29ce484222645;
      local_108 = "";
      local_100 = 0;
      local_f8 = (long *)0x0;
      local_f0 = &DAT_cbf29ce484222645;
      local_e8 = &DAT_03996322;
      local_e0 = 0;
      local_d8 = (long *)0x0;
      FUN_00adcc04(&local_170,*(long *)(lVar15 + 0xb0) + lVar11);
      plVar12 = local_140;
      local_140 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar13 = local_120;
      plVar12 = local_150;
      local_140 = local_170;
      local_170 = (long *)0x0;
      local_138 = plStack_168;
      local_130 = local_160;
      local_128 = plStack_158;
      local_120 = (long *)0x0;
      if (plVar13 == (long *)0x0) {
        local_150 = (long *)0x0;
        local_120 = plVar12;
        local_118 = local_148;
      }
      else {
        (**(code **)(*plVar13 + 0x20))();
        local_120 = local_150;
        local_150 = (long *)0x0;
        local_118 = local_148;
        if (local_170 != (long *)0x0) {
          (**(code **)(*local_170 + 0x20))();
        }
      }
      puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x78) + lVar11);
      local_110 = (undefined1 *)*puVar3;
      local_108 = (char *)puVar3[1];
      local_100 = puVar3[2];
      plVar12 = (long *)puVar3[3];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (local_f8 != (long *)0x0) {
        lVar16 = *local_f8;
        local_f8 = plVar12;
        (**(code **)(lVar16 + 0x20))();
        plVar12 = local_f8;
      }
      local_f8 = plVar12;
      puVar3 = (undefined8 *)(*(long *)(lVar15 + 0xe8) + lVar11);
      local_f0 = (undefined1 *)*puVar3;
      local_e8 = (undefined1 *)puVar3[1];
      local_e0 = puVar3[2];
      plVar12 = (long *)puVar3[3];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (local_d8 != (long *)0x0) {
        lVar16 = *local_d8;
        local_d8 = plVar12;
        (**(code **)(lVar16 + 0x20))();
        plVar12 = local_d8;
      }
      local_d8 = plVar12;
      FUN_01be3864(param_1[0xa3] + 0xd8,&local_140);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      uVar21 = uVar21 + 1;
      lVar11 = lVar11 + 0x20;
    } while (uVar21 < (ulong)(*(long *)(lVar15 + 0x80) - *(long *)(lVar15 + 0x78) >> 5));
  }
  if (*(long *)(lVar15 + 0x10) != *(long *)(lVar15 + 8)) {
    lVar11 = 0;
    uVar21 = 0;
    do {
      local_140 = (long *)0x0;
      local_138 = (long *)&DAT_cbf29ce484222645;
      local_130 = (long *)&DAT_03996322;
      local_118 = 0;
      local_128 = (long *)0x0;
      local_120 = (long *)0x0;
      local_110 = &DAT_cbf29ce484222645;
      local_108 = "";
      local_100 = 0;
      local_f8 = (long *)0x0;
      local_f0 = &DAT_cbf29ce484222645;
      local_e8 = &DAT_03996322;
      local_e0 = 0;
      local_d8 = (long *)0x0;
      FUN_00adcc04(&local_170,*(long *)(lVar15 + 0x40) + lVar11);
      plVar12 = local_140;
      local_140 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar13 = local_120;
      plVar12 = local_150;
      local_140 = local_170;
      local_170 = (long *)0x0;
      local_138 = plStack_168;
      local_130 = local_160;
      local_128 = plStack_158;
      local_120 = (long *)0x0;
      if (plVar13 == (long *)0x0) {
        local_150 = (long *)0x0;
        local_120 = plVar12;
        local_118 = local_148;
      }
      else {
        (**(code **)(*plVar13 + 0x20))();
        local_120 = local_150;
        local_150 = (long *)0x0;
        local_118 = local_148;
        if (local_170 != (long *)0x0) {
          (**(code **)(*local_170 + 0x20))();
        }
      }
      puVar3 = (undefined8 *)(*(long *)(lVar15 + 8) + lVar11);
      local_110 = (undefined1 *)*puVar3;
      local_108 = (char *)puVar3[1];
      local_100 = puVar3[2];
      plVar12 = (long *)puVar3[3];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (local_f8 != (long *)0x0) {
        lVar16 = *local_f8;
        local_f8 = plVar12;
        (**(code **)(lVar16 + 0x20))();
        plVar12 = local_f8;
      }
      local_f8 = plVar12;
      FUN_01be3864(param_1[0xa3] + 0x110,&local_140);
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      if (local_140 != (long *)0x0) {
        (**(code **)(*local_140 + 0x20))();
      }
      uVar21 = uVar21 + 1;
      lVar11 = lVar11 + 0x20;
    } while (uVar21 < (ulong)(*(long *)(lVar15 + 0x10) - *(long *)(lVar15 + 8) >> 5));
  }
  lVar11 = *(long *)(lVar15 + 0x120);
  if (*(long *)(lVar15 + 0x128) != lVar11) {
    uVar21 = 0;
    puVar3 = param_1 + 0x88;
    do {
      puVar17 = (undefined8 *)(lVar11 + uVar21 * 0x60);
      local_128 = (long *)0x0;
      local_e0 = 0;
      local_140 = (long *)*puVar17;
      local_138 = (long *)puVar17[1];
      local_130 = (long *)puVar17[2];
      plVar12 = (long *)puVar17[3];
      if (plVar12 == (long *)0x0) {
      }
      else {
        (**(code **)(*plVar12 + 0x18))(plVar12);
        if (local_128 != (long *)0x0) {
          lVar11 = *local_128;
          local_128 = plVar12;
          (**(code **)(lVar11 + 0x20))();
          plVar12 = local_128;
        }
      }
      local_128 = plVar12;
      lVar11 = *(long *)(lVar15 + 0x120) + uVar21 * 0x60;
      local_120 = *(long **)(lVar11 + 0x20);
      local_118 = (undefined4)*(undefined8 *)(lVar11 + 0x28);
      local_110 = *(undefined1 **)(lVar11 + 0x30);
      local_108 = *(char **)(lVar11 + 0x38);
      local_100 = *(undefined8 *)(lVar11 + 0x40);
      local_f8 = *(long **)(lVar11 + 0x48);
      local_f0 = *(undefined1 **)(lVar11 + 0x50);
      local_e8 = *(undefined1 **)(lVar11 + 0x58);
      lVar11 = param_1[0x86];
      if (lVar11 == param_1[0x87]) {
        uVar19 = param_1[0x89];
        lVar11 = lVar11 - param_1[0x85] >> 3;
        if (0x7ffffffffffffffe < uVar19) {
          uVar19 = 0x7fffffffffffffff;
        }
        uVar2 = lVar11 * 0x4ec4ec4ec4ec4ec5 + 1;
        if (uVar19 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = (long)(param_1[0x87] - param_1[0x85]) >> 3;
        if ((ulong)(lVar16 * 0x4ec4ec4ec4ec4ec5) < uVar19 >> 1) {
          uVar18 = lVar16 * -0x6276276276276276;
          uVar19 = uVar2;
          if (uVar2 <= uVar18) {
            uVar19 = uVar18;
          }
        }
        if (uVar19 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar19 * 0x68,8);
          if (lVar16 == 0) {
            (**(code **)(*(long *)*puVar3 + 0xb8))();
          }
        }
        lVar26 = lVar16 + lVar11 * 8;
        FUN_00b1c958(puVar3,lVar26,&local_140);
        lVar22 = param_1[0x85];
        lVar11 = lVar26 + 0x68;
        lVar24 = param_1[0x86];
        if (lVar24 == lVar22) {
          lVar24 = lVar22;
        }
        else {
          do {
            lVar26 = lVar26 + -0x68;
            lVar24 = lVar24 + -0x68;
            FUN_00b1c958(puVar3,lVar26,lVar24);
          } while (lVar22 != lVar24);
          lVar22 = param_1[0x86];
          lVar24 = param_1[0x85];
        }
        param_1[0x85] = lVar26;
        lVar26 = param_1[0x87];
        param_1[0x86] = lVar11;
        param_1[0x87] = lVar16 + uVar19 * 0x68;
        while (lVar22 != lVar24) {
          plVar12 = (long *)(lVar22 + -0x50);
          lVar22 = lVar22 + -0x68;
          if ((long *)*plVar12 != (long *)0x0) {
            (**(code **)(*(long *)*plVar12 + 0x20))();
          }
        }
        if (lVar24 != 0) {
          plVar12 = (long *)*puVar3;
          uVar19 = (**(code **)(*plVar12 + 0xc0))(plVar12);
          if ((uVar19 & 1) != 0) {
            if (*(char *)(lVar20 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar20 + 0x38d488) = 1;
              *(undefined8 *)(lVar20 + 0x38d478) = 0;
              *(undefined8 *)(lVar20 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar20 + 0x38d480)) {
              FUN_02bcc824(plVar12,lVar24,lVar26 - lVar24,8);
              goto joined_r0x01be3294;
            }
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar24,lVar26 - lVar24,8);
        }
      }
      else {
        FUN_00b1c958(puVar3,lVar11,&local_140);
        param_1[0x86] = param_1[0x86] + 0x68;
      }
joined_r0x01be3294:
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      lVar11 = *(long *)(lVar15 + 0x120);
      uVar21 = uVar21 + 1;
    } while (uVar21 < (ulong)((*(long *)(lVar15 + 0x128) - lVar11 >> 5) * -0x5555555555555555));
  }
  lVar11 = *(long *)(lVar15 + 0x158);
  if (*(long *)(lVar15 + 0x160) != lVar11) {
    uVar21 = 0;
    plVar12 = param_1 + 0x8f;
    do {
      lVar11 = lVar11 + uVar21 * 0x30;
      lVar16 = param_1[0x8d];
      if (lVar16 == param_1[0x8e]) {
        lVar16 = lVar16 - param_1[0x8c] >> 4;
        uVar19 = param_1[0x90];
        if (0x7ffffffffffffffe < uVar19) {
          uVar19 = 0x7fffffffffffffff;
        }
        uVar2 = lVar16 * -0x5555555555555555 + 1;
        if (uVar19 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar22 = (long)(param_1[0x8e] - param_1[0x8c]) >> 4;
        local_128 = (long *)0x0;
        uVar18 = lVar22 * 0x5555555555555556;
        if (uVar2 <= uVar18) {
          uVar2 = uVar18;
        }
        if ((ulong)(lVar22 * -0x5555555555555555) < uVar19 >> 1) {
          uVar19 = uVar2;
        }
        local_120 = plVar12;
        if (uVar19 == 0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = (long *)(**(code **)(*(long *)*plVar12 + 0x10))
                                      ((long *)*plVar12,uVar19 * 0x30,8);
          if (plVar13 == (long *)0x0) {
            (**(code **)(*(long *)*plVar12 + 0xb8))();
          }
        }
        plVar27 = plVar13 + lVar16 * 2;
        local_140 = plVar13;
        local_138 = plVar27;
        local_128 = plVar13 + uVar19 * 6;
        FUN_00b14ae4(plVar12,plVar27,lVar11);
        plVar28 = plVar27 + 6;
        plVar23 = (long *)param_1[0x8c];
        plVar25 = (long *)param_1[0x8d];
        local_130 = plVar28;
        if (plVar25 == plVar23) {
          local_130 = plVar23;
        }
        else {
          do {
            plVar27 = plVar27 + -6;
            plVar25 = plVar25 + -6;
            FUN_00b14ae4(plVar12,plVar27,plVar25);
          } while (plVar23 != plVar25);
          plVar23 = (long *)param_1[0x8c];
          local_130 = (long *)param_1[0x8d];
        }
        param_1[0x8c] = plVar27;
        local_128 = (long *)param_1[0x8e];
        param_1[0x8d] = plVar28;
        param_1[0x8e] = plVar13 + uVar19 * 6;
        local_140 = plVar23;
        local_138 = plVar23;
        FUN_01be7158(&local_140);
        plVar13 = local_140;
        if (local_140 != (long *)0x0) {
          lVar11 = (long)local_128 - (long)local_140;
          plVar28 = (long *)*local_120;
          uVar19 = (**(code **)(*plVar28 + 0xc0))(plVar28);
          if ((uVar19 & 1) != 0) {
            if (*(char *)(lVar20 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar20 + 0x38d488) = 1;
              *(undefined8 *)(lVar20 + 0x38d478) = 0;
              *(undefined8 *)(lVar20 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar20 + 0x38d480)) {
              FUN_02bcc824(plVar28,plVar13,lVar11,8);
              goto LAB_01be2ddc;
            }
          }
          (**(code **)(*plVar28 + 0x18))(plVar28,plVar13,lVar11,8);
        }
      }
      else {
        FUN_00b14ae4(plVar12,lVar16,lVar11);
        param_1[0x8d] = param_1[0x8d] + 0x30;
      }
LAB_01be2ddc:
      lVar11 = *(long *)(lVar15 + 0x158);
      uVar21 = uVar21 + 1;
    } while (uVar21 < (ulong)((*(long *)(lVar15 + 0x160) - lVar11 >> 4) * -0x5555555555555555));
  }
  puVar3 = param_1 + 0x94;
  if (**(char **)(lVar15 + 0x208) != '\0') {
    local_120 = (long *)0x0;
    local_140 = (long *)0x0;
    local_138 = (long *)&DAT_cbf29ce484222645;
    local_118 = 0;
    local_130 = (long *)&DAT_03996322;
    local_128 = (long *)0x0;
    local_110 = &DAT_cbf29ce484222645;
    local_108 = "";
    local_100 = 0;
    local_f8 = (long *)0x0;
    FUN_00adcc04(&local_170,lVar15 + 0x200);
    plVar12 = local_140;
    local_140 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = local_120;
    local_140 = local_170;
    local_170 = (long *)0x0;
    local_138 = plStack_168;
    local_130 = local_160;
    local_128 = plStack_158;
    local_120 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    local_120 = local_150;
    local_150 = (long *)0x0;
    local_118 = local_148;
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    plVar12 = local_f8;
    local_110 = (undefined1 *)0xedbae97e9d531fe1;
    local_108 = "right_attach_on";
    local_100 = 0xf;
    local_f8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    local_f8 = (long *)0x0;
    FUN_01be3b00(puVar3,&local_140);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
  }
  if (**(char **)(lVar15 + 0x1e8) != '\0') {
    local_120 = (long *)0x0;
    local_140 = (long *)0x0;
    local_138 = (long *)&DAT_cbf29ce484222645;
    local_118 = 0;
    local_130 = (long *)&DAT_03996322;
    local_128 = (long *)0x0;
    local_110 = &DAT_cbf29ce484222645;
    local_108 = "";
    local_100 = 0;
    local_f8 = (long *)0x0;
    FUN_00adcc04(&local_170,lVar15 + 0x1e0);
    plVar12 = local_140;
    local_140 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = local_120;
    local_140 = local_170;
    local_170 = (long *)0x0;
    local_138 = plStack_168;
    local_130 = local_160;
    local_128 = plStack_158;
    local_120 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    local_120 = local_150;
    local_150 = (long *)0x0;
    local_118 = local_148;
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    plVar12 = local_f8;
    local_110 = (undefined1 *)0x5127f371e63bf8b4;
    local_108 = "left_attach_on";
    local_100 = 0xe;
    local_f8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    local_f8 = (long *)0x0;
    FUN_01be3b00(puVar3,&local_140);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
  }
  if (**(char **)(lVar15 + 0x1c8) != '\0') {
    FUN_00adcc04(&local_170,lVar15 + 0x1c0);
    local_140 = local_170;
    local_138 = plStack_168;
    local_130 = local_160;
    local_128 = plStack_158;
    local_118 = local_148;
    local_110 = (undefined1 *)0xdb04e7ac50386fe0;
    local_108 = "spine_03";
    local_120 = local_150;
    local_100 = 8;
    local_f8 = (long *)0x0;
    FUN_01be3b00(puVar3,&local_140);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x93) = 0xe;
  lVar20 = *(long *)(lVar15 + 0x220);
  if (lVar20 < 0x12575b07bd8a141a) {
    if (lVar20 < 0xb0a9f27429b9846) {
      if (lVar20 < 0xb00bf2742937a21) {
        if (lVar20 == -0x509940b379f92bbb) {
          uVar14 = 1;
        }
        else if (lVar20 == -0x509943b379f930d4) {
          uVar14 = 0;
        }
        else {
          if (lVar20 != 0xb00b42742936770) goto LAB_01be2ed0;
          uVar14 = 10;
        }
      }
      else if (lVar20 == 0xb039b27429572cc) {
        uVar14 = 9;
      }
      else if (lVar20 == 0xb03a6274295857d) {
        uVar14 = 8;
      }
      else {
        if (lVar20 != 0xb00bf2742937a21) goto LAB_01be2ed0;
        uVar14 = 0xb;
      }
    }
    else if (lVar20 == 0x12575207bd8a04cf) {
      uVar14 = 4;
    }
    else if (lVar20 == 0xb0a9f27429b9846) {
      uVar14 = 0xd;
    }
    else {
      if (lVar20 != 0xb0aa627429ba42b) goto LAB_01be2ed0;
      uVar14 = 0xc;
    }
  }
  else if (lVar20 < 0x12685b07bd98874d) {
    if (lVar20 == 0x12575b07bd8a141a) {
      uVar14 = 5;
    }
    else {
      if (lVar20 != 0x12685007bd98749c) goto LAB_01be2ed0;
      uVar14 = 2;
    }
  }
  else if (lVar20 == 0x12685b07bd98874d) {
    uVar14 = 3;
  }
  else if (lVar20 == 0x129b3b07bdc3aa86) {
    uVar14 = 7;
  }
  else {
    if (lVar20 != 0x129b4207bdc3b66b) goto LAB_01be2ed0;
    uVar14 = 6;
  }
  *(undefined4 *)(param_1 + 0x93) = uVar14;
LAB_01be2ed0:
  param_1[0x46] = lVar15 + 0x248;
  plVar12 = *(long **)(lVar15 + 400);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar13 = (long *)param_1[0x9d];
  param_1[0x9d] = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  param_1[0x9e] = *(undefined8 *)(lVar15 + 0x198);
  param_1[0x9f] = *(undefined8 *)(lVar15 + 0x1a0);
  param_1[0xa0] = *(undefined8 *)(lVar15 + 0x1a8);
  plVar12 = *(long **)(lVar15 + 0x1b0);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar13 = (long *)param_1[0xa1];
  param_1[0xa1] = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0xa2) = *(undefined4 *)(lVar15 + 0x1b8);
  return;
}


