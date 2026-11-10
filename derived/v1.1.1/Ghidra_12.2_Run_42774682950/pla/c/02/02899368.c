/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02899368; name: FUN_02899368
 */


void FUN_02899368(long *param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  long *local_80;
  undefined1 auStack_78 [24];
  
  puVar8 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar8 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar22 = (undefined4 *)PTR_DAT_04379528;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar11 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar17 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_04272000;
  param_1[1] = lVar17;
  param_1[9] = (long)&PTR_LAB_04272030;
  if (((*PTR_DAT_0437b578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04382970,PTR_DAT_0437b580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b578);
  }
  PTR_DAT_0437b580[8] = 1;
  *param_1 = (long)&PTR_LAB_04271fb0;
  param_1[9] = (long)&PTR_LAB_04271fe0;
  plVar16 = param_1 + 10;
  *plVar16 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar9 = PTR_DAT_0437a648;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar11 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar11;
  plVar19 = (long *)param_1[1];
  puVar12 = (undefined4 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x1a8,8);
  if (puVar12 == (undefined4 *)0x0) {
    plVar19 = (long *)0x0;
    lVar18 = 0;
    lVar17 = 0;
  }
  else {
    if (((*puVar8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar17 = nn::os::GetTlsValue(*puVar22);
    if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02899ae8;
    *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar19;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    *puVar12 = *param_3;
    *(undefined8 *)(puVar12 + 2) = 0;
    *(undefined8 *)(puVar12 + 4) = 0;
    FUN_02893464(puVar12 + 6);
    *(undefined8 *)(puVar12 + 0x18) = 0;
    *(undefined8 *)(puVar12 + 0x1a) = 0;
    *(undefined8 *)(puVar12 + 0x14) = 0;
    *(undefined8 *)(puVar12 + 0x16) = 0;
    *(undefined8 *)(puVar12 + 0x1c) = 0x1f00000000;
    *(undefined8 *)(puVar12 + 0x1e) = 0;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    *(undefined8 *)(puVar12 + 0x42) = 0;
    nn::os::InitializeLightEvent(puVar12 + 0x45,0,1);
    *(undefined1 *)(puVar12 + 0x54) = 0;
    *(undefined8 *)(puVar12 + 0x50) = 0;
    *(undefined8 *)(puVar12 + 0x52) = 0;
    *(undefined8 *)(puVar12 + 0x4c) = 0;
    *(undefined8 *)(puVar12 + 0x4e) = 0;
    *(undefined8 *)(puVar12 + 0x48) = 0;
    *(undefined8 *)(puVar12 + 0x4a) = 0;
    nn::os::InitializeMutex((MutexType *)(puVar12 + 0x56),false,0);
    nn::os::InitializeMutex((MutexType *)(puVar12 + 0x5e),true,0);
    *(undefined8 *)(puVar12 + 0x66) = 0;
    *(undefined8 *)(puVar12 + 0x68) = 0xbf80000000000000;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    lVar17 = 8;
    lVar18 = 0x1a8;
  }
  lVar20 = *plVar16;
  *plVar16 = (long)puVar12;
  if (lVar20 != 0) {
    FUN_02bcbe58(auStack_78,0);
    FUN_02893558(lVar20);
    plVar3 = (long *)param_1[0xb];
    lVar4 = param_1[0xc];
    lVar21 = param_1[0xd];
    uVar13 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    lVar7 = tpidr_el0;
    if ((uVar13 & 1) == 0) {
LAB_028995d4:
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar20,lVar4,lVar21);
    }
    else {
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_028995d4;
      FUN_02bcc824(plVar3,lVar20,lVar4,lVar21);
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar10 = *(int *)(lVar7 + 0x38d480) + -1;
    *(int *)(lVar7 + 0x38d480) = iVar10;
    if (iVar10 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar7 + 0x38d484) = 0;
    }
    puVar12 = (undefined4 *)*plVar16;
    puVar22 = (undefined4 *)PTR_DAT_04379528;
  }
  param_1[0xb] = (long)plVar19;
  param_1[0xc] = lVar18;
  param_1[0xd] = lVar17;
  local_80 = *(long **)(lVar11 + 0x280);
  if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
    plVar16 = local_80 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  iVar10 = (**(code **)(**(long **)(lVar11 + 0x288) + 0x50))();
  FUN_02893840(puVar12,param_2,&local_80,iVar10 + 1);
  if ((local_80 == (long *)0x0) || (local_80[1] == 0)) {
LAB_028996e4:
    bVar2 = *puVar8;
  }
  else {
    plVar16 = local_80 + 2;
    do {
      lVar11 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 + -1 != 0) goto LAB_028996e4;
    (**(code **)(*local_80 + 0x18))();
    bVar2 = *puVar8;
  }
  if (((bVar2 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*puVar22);
  if (*(ulong *)(lVar11 + 0x80) < 0x10) {
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    puVar14 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x3a8,8);
    if (puVar14 == (undefined8 *)0x0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_02a6f65c(puVar14,DAT_043eef30);
    *(undefined4 *)(puVar14 + 0x73) = 1;
    *puVar14 = &DAT_04272050;
    puVar14[1] = param_2;
    puVar14[2] = puVar14;
    puVar14[3] = 0x3a8;
    puVar14[0x72] = 0;
    puVar14[0x71] = 0;
    *(undefined1 *)((long)puVar14 + 0x39c) = 0;
    puVar14[0x74] = param_1;
    puVar14[4] = 8;
    puVar14[9] = &PTR_LAB_042720d8;
    puVar14[10] = &PTR_LAB_04272120;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    puVar14[0x3c] = puVar14[0x3c] | 8;
    if (puVar14 != (undefined8 *)0x0) {
      lVar11 = puVar14[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar15;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar16 = (long *)param_1[0xe];
    param_1[0xe] = 0;
    if (plVar16 != (long *)0x0) {
      lVar11 = plVar16[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))();
      }
    }
    param_1[0xe] = (long)puVar14;
    FUN_02899b18(puVar14);
    return;
  }
LAB_02899ae8:
                    /* WARNING: Subroutine does not return */
  abort();
}


