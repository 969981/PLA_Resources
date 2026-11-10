/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0151b050; name: FUN_0151b050
 */


void FUN_0151b050(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  uVar10 = FUN_00938764(param_2,1,param_3,0,param_4,0);
  if (((uVar10 & 1) != 0) && (plVar14 = *(long **)(param_2 + 0x28), plVar14 != (long *)0x0)) {
    lVar12 = plVar14[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar18;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  plVar14 = *(long **)(param_1 + 8);
  puVar11 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x48,8);
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0151b974;
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar14;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  *puVar11 = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  local_88 = 0x48;
  uStack_80 = 8;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  *(undefined1 *)puVar11 = 0;
  plVar15 = *(long **)(param_1 + 8);
  local_98 = puVar11;
  plStack_90 = plVar14;
  puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x80,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0151b974;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar15;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    uVar19 = 0x10;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    uVar18 = 0x80;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar8 = local_98;
  puVar16 = (undefined8 *)local_98[1];
  local_98[1] = puVar11;
  if (puVar16 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    pcVar13 = (code *)puVar16[1];
    if (pcVar13 != (code *)0x0) {
      puVar16[2] = 0;
      puVar16[3] = 0;
      *puVar16 = 0;
      puVar16[1] = 0;
      (*pcVar13)(puVar16 + 4);
    }
    plVar14 = (long *)puVar8[2];
    uVar2 = puVar8[3];
    uVar17 = puVar8[4];
    uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
    lVar12 = tpidr_el0;
    if ((uVar10 & 1) == 0) {
LAB_0151b470:
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar16,uVar2,uVar17);
    }
    else {
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_0151b470;
      FUN_02bcc824(plVar14,puVar16,uVar2,uVar17);
    }
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar9 = *(int *)(lVar12 + 0x38d480) + -1;
    *(int *)(lVar12 + 0x38d480) = iVar9;
    if (iVar9 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar12 + 0x38d484) = 0;
    }
  }
  puVar8[2] = plVar15;
  puVar8[3] = uVar18;
  puVar8[4] = uVar19;
  puVar11 = (undefined8 *)local_98[1];
  pcVar13 = (code *)puVar11[1];
  if (pcVar13 != (code *)0x0) {
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    (*pcVar13)(puVar11 + 4);
  }
  *puVar11 = &LAB_0151b9cc;
  puVar11[1] = &LAB_0151b9f0;
  puVar11[2] = &LAB_0151b9f4;
  puVar11[3] = &LAB_0151ba00;
  puVar11[4] = param_2;
  plVar14 = *(long **)(param_1 + 8);
  puVar11 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x80,0x10);
  if (puVar11 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_0151b974:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar14;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    uVar18 = 0x10;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    uVar19 = 0x80;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar8 = local_98;
  puVar16 = (undefined8 *)local_98[5];
  local_98[5] = puVar11;
  if (puVar16 == (undefined8 *)0x0) goto LAB_0151b360;
  FUN_02bcbe58(auStack_78,0);
  pcVar13 = (code *)puVar16[1];
  if (pcVar13 != (code *)0x0) {
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    (*pcVar13)(puVar16 + 4);
  }
  plVar15 = (long *)puVar8[6];
  uVar2 = puVar8[7];
  uVar17 = puVar8[8];
  uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar10 & 1) == 0) {
LAB_0151b55c:
    (**(code **)(*plVar15 + 0x18))(plVar15,puVar16,uVar2,uVar17);
  }
  else {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_0151b55c;
    FUN_02bcc824(plVar15,puVar16,uVar2,uVar17);
  }
  lVar12 = tpidr_el0;
  if (*(char *)(lVar12 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar12 + 0x38d488) = 1;
    *(undefined8 *)(lVar12 + 0x38d478) = 0;
    *(undefined8 *)(lVar12 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar12 + 0x38d480) + -1;
  *(int *)(lVar12 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar12 + 0x38d484) = 0;
  }
LAB_0151b360:
  puVar8[6] = plVar14;
  puVar8[7] = uVar19;
  puVar8[8] = uVar18;
  puVar11 = (undefined8 *)local_98[5];
  pcVar13 = (code *)puVar11[1];
  if (pcVar13 != (code *)0x0) {
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    (*pcVar13)(puVar11 + 4);
  }
  *puVar11 = &LAB_0151ba0c;
  puVar11[1] = &LAB_0151ba10;
  puVar11[2] = &LAB_0151ba14;
  puVar11[3] = &LAB_0151ba18;
  FUN_0151b978(param_1 + 0x68,&local_98);
  FUN_0151bc98(&local_98);
  return;
}


