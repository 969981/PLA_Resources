/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01536e98; name: FUN_01536e98
 */


undefined8 FUN_01536e98(long param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  plVar19 = *(long **)(param_1 + 0x450);
  if (plVar19 != (long *)0x0) {
    lVar20 = plVar19[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_01537dd8;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar11;
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
  local_d8 = *(long **)(param_1 + 0x480);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x18))();
  }
  local_d0 = *(undefined8 *)(param_1 + 0x488);
  local_c8 = *(undefined8 *)(param_1 + 0x490);
  local_c0 = *(undefined8 *)(param_1 + 0x498);
  local_b8 = *(long **)(param_1 + 0x4a0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x18))();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x4a8);
  uVar12 = FUN_00ad3ac4(param_1 + 0x4c0,1,&local_d8,0,*(undefined8 *)(param_1 + 8),0);
  if (((uVar12 & 1) != 0) && (plVar21 = *(long **)(param_1 + 0x4e8), plVar21 != (long *)0x0)) {
    lVar20 = plVar21[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
LAB_01537dd8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar11;
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
    lVar20 = plVar21[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  plVar21 = (long *)plVar19[1];
  puVar13 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x48,8);
  puVar6 = PTR_DAT_04379520;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar10 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar7 = PTR_DAT_04379528;
  lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_01537dcc;
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar21;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  *puVar13 = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  local_98 = 0x48;
  local_90 = 8;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  *(undefined1 *)puVar13 = 0;
  plVar22 = (long *)plVar19[1];
  local_a8 = puVar13;
  local_a0 = plVar21;
  puVar13 = (undefined8 *)(**(code **)(*plVar22 + 0x10))(plVar22,0x80,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    plVar22 = (long *)0x0;
    uVar26 = 0;
    uVar11 = 0;
  }
  else {
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar8 = PTR_DAT_04379528;
      if (iVar10 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_01537dcc;
    *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar22;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
    uVar11 = 0x10;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    uVar26 = 0x80;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  }
  puVar9 = local_a8;
  puVar24 = (undefined8 *)local_a8[1];
  local_a8[1] = puVar13;
  if (puVar24 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_88,0);
    pcVar15 = (code *)puVar24[1];
    if (pcVar15 != (code *)0x0) {
      puVar24[2] = 0;
      puVar24[3] = 0;
      *puVar24 = 0;
      puVar24[1] = 0;
      (*pcVar15)(puVar24 + 4);
    }
    plVar21 = (long *)puVar9[2];
    uVar3 = puVar9[3];
    uVar25 = puVar9[4];
    uVar12 = (**(code **)(*plVar21 + 0xc0))(plVar21);
    lVar20 = tpidr_el0;
    if ((uVar12 & 1) == 0) {
LAB_0153760c:
      (**(code **)(*plVar21 + 0x18))(plVar21,puVar24,uVar3,uVar25);
    }
    else {
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar20 + 0x38d480) < 1) goto LAB_0153760c;
      FUN_02bcc824(plVar21,puVar24,uVar3,uVar25);
    }
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar20 + 0x38d480) + -1;
    *(int *)(lVar20 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar20 + 0x38d484) = 0;
    }
  }
  puVar9[2] = plVar22;
  puVar9[3] = uVar26;
  puVar9[4] = uVar11;
  puVar13 = (undefined8 *)local_a8[1];
  pcVar15 = (code *)puVar13[1];
  if (pcVar15 != (code *)0x0) {
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    (*pcVar15)(puVar13 + 4);
  }
  *puVar13 = &LAB_0153846c;
  puVar13[1] = &LAB_01538490;
  puVar13[2] = &LAB_01538494;
  puVar13[3] = &LAB_015384a0;
  puVar13[4] = param_1 + 0x4c0;
  plVar21 = (long *)plVar19[1];
  puVar13 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x80,0x10);
  puVar7 = PTR_DAT_04379528;
  if (puVar13 == (undefined8 *)0x0) {
    plVar21 = (long *)0x0;
    uVar26 = 0;
    uVar11 = 0;
  }
  else {
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar6 = PTR_DAT_04379528;
      if (iVar10 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
    if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_01537dcc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar21;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
    uVar11 = 0x10;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    uVar26 = 0x80;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  }
  puVar9 = local_a8;
  puVar24 = (undefined8 *)local_a8[5];
  local_a8[5] = puVar13;
  if (puVar24 != (undefined8 *)0x0) {
    FUN_02bcbe58(&local_88,0);
    pcVar15 = (code *)puVar24[1];
    if (pcVar15 != (code *)0x0) {
      puVar24[2] = 0;
      puVar24[3] = 0;
      *puVar24 = 0;
      puVar24[1] = 0;
      (*pcVar15)(puVar24 + 4);
    }
    plVar22 = (long *)puVar9[6];
    uVar3 = puVar9[7];
    uVar25 = puVar9[8];
    uVar12 = (**(code **)(*plVar22 + 0xc0))(plVar22);
    if ((uVar12 & 1) == 0) {
LAB_01537700:
      (**(code **)(*plVar22 + 0x18))(plVar22,puVar24,uVar3,uVar25);
    }
    else {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar20 + 0x38d480) < 1) goto LAB_01537700;
      FUN_02bcc824(plVar22,puVar24,uVar3,uVar25);
    }
    lVar20 = tpidr_el0;
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar20 + 0x38d480) + -1;
    *(int *)(lVar20 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar20 + 0x38d484) = 0;
    }
  }
  puVar9[6] = plVar21;
  puVar9[7] = uVar26;
  puVar9[8] = uVar11;
  puVar13 = (undefined8 *)local_a8[5];
  pcVar15 = (code *)puVar13[1];
  if (pcVar15 != (code *)0x0) {
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    (*pcVar15)(puVar13 + 4);
  }
  *puVar13 = &LAB_015384ac;
  puVar13[1] = &LAB_0153879c;
  puVar13[2] = &LAB_015387a0;
  puVar13[3] = &LAB_015387ac;
  puVar13[4] = param_1;
  plVar21 = plVar19 + 0x10;
  uVar12 = plVar19[0xe];
  if (uVar12 < (ulong)plVar19[0xf]) {
    FUN_00d2739c(plVar21,uVar12,&local_a8);
    plVar19[0xe] = plVar19[0xe] + 0x20;
  }
  else {
    uVar18 = plVar19[0x11];
    lVar20 = (long)(uVar12 - plVar19[0xd]) >> 5;
    uVar12 = lVar20 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar16 = plVar19[0xf] - plVar19[0xd];
    if ((ulong)(lVar16 >> 5) < uVar18 >> 1) {
      uVar17 = lVar16 >> 4;
      uVar18 = uVar12;
      if (uVar12 <= uVar17) {
        uVar18 = uVar17;
      }
    }
    local_70 = 0;
    plStack_68 = plVar21;
    if (uVar18 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar18 << 5,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar21 + 0xb8))();
      }
    }
    lVar16 = local_88 + lVar20 * 0x20;
    lVar2 = local_88 + uVar18 * 0x20;
    local_80 = lVar16;
    local_70 = lVar2;
    FUN_00d2739c(plVar21,lVar16,&local_a8);
    lVar20 = lVar16 + 0x20;
    lVar14 = plVar19[0xd];
    lVar23 = plVar19[0xe];
    local_78 = lVar20;
    if (lVar23 == lVar14) {
      local_78 = lVar14;
    }
    else {
      do {
        lVar16 = lVar16 + -0x20;
        lVar23 = lVar23 + -0x20;
        FUN_00d2739c(plVar21,lVar16,lVar23);
      } while (lVar14 != lVar23);
      lVar14 = plVar19[0xd];
      local_78 = plVar19[0xe];
    }
    plVar19[0xd] = lVar16;
    plVar19[0xe] = lVar20;
    local_70 = plVar19[0xf];
    plVar19[0xf] = lVar2;
    local_88 = lVar14;
    local_80 = lVar14;
    FUN_015387b8(&local_88);
    lVar20 = local_88;
    if (local_88 != 0) {
      lVar16 = local_70 - local_88;
      plVar21 = (long *)*plStack_68;
      uVar12 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar12 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar21,lVar20,lVar16,8);
          goto LAB_015372bc;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,lVar20,lVar16,8);
    }
  }
LAB_015372bc:
  puVar13 = local_a8;
  local_a8 = (undefined8 *)0x0;
  if (puVar13 == (undefined8 *)0x0) goto joined_r0x01537574;
  FUN_02bcbe58(&local_88,0);
  FUN_00d27480(puVar13);
  uVar26 = local_90;
  uVar11 = local_98;
  plVar21 = local_a0;
  uVar12 = (**(code **)(*local_a0 + 0xc0))(local_a0);
  if ((uVar12 & 1) == 0) {
LAB_015374d0:
    (**(code **)(*plVar21 + 0x18))(plVar21,puVar13,uVar11,uVar26);
  }
  else {
    lVar20 = tpidr_el0;
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar20 + 0x38d480) < 1) goto LAB_015374d0;
    FUN_02bcc824(plVar21,puVar13,uVar11,uVar26);
  }
  lVar20 = tpidr_el0;
  if (*(char *)(lVar20 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar20 + 0x38d488) = 1;
    *(undefined8 *)(lVar20 + 0x38d478) = 0;
    *(undefined8 *)(lVar20 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar10 = *(int *)(lVar20 + 0x38d480) + -1;
  *(int *)(lVar20 + 0x38d480) = iVar10;
  if (iVar10 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar20 + 0x38d484) = 0;
  }
joined_r0x01537574:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  lVar20 = plVar19[0xb];
  piVar1 = (int *)(lVar20 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
    pcVar15 = *(code **)(param_1 + 0xd8);
  }
  else {
    pcVar15 = *(code **)(param_1 + 0xd8);
  }
  if (pcVar15 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar15)(param_1 + 0xf0);
  }
  *(code **)(param_1 + 0xd0) = FUN_01538a3c;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01538bd0;
  pcVar15 = *(code **)(param_1 + 0x358);
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01538bd4;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01538be0;
  *(long *)(param_1 + 0xf0) = param_1;
  if (pcVar15 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    (*pcVar15)(param_1 + 0x370);
  }
  *(undefined1 **)(param_1 + 0x350) = &LAB_01538bec;
  *(undefined1 **)(param_1 + 0x360) = &LAB_01538c24;
  pcVar15 = *(code **)(param_1 + 0x3d8);
  *(undefined1 **)(param_1 + 0x358) = &LAB_01538c20;
  *(long *)(param_1 + 0x370) = param_1;
  *(undefined1 **)(param_1 + 0x368) = &LAB_01538c30;
  if (pcVar15 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    (*pcVar15)(param_1 + 0x3f0);
  }
  *(undefined1 **)(param_1 + 0x3d0) = &LAB_01538c3c;
  *(undefined1 **)(param_1 + 0x3d8) = &LAB_01538c74;
  *(long *)(param_1 + 0x3f0) = param_1;
  *(undefined1 **)(param_1 + 0x3e0) = &LAB_01538c78;
  *(undefined1 **)(param_1 + 1000) = &LAB_01538c84;
  return 1;
}


