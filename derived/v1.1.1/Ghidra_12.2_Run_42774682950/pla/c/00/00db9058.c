/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db9058; name: FUN_00db9058
 */


void FUN_00db9058(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_80 [3];
  undefined8 *local_68;
  
  puVar11 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x120,8);
  if (puVar11 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar15 = 0;
    uVar18 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    puVar11[6] = 0;
    *(undefined4 *)(puVar11 + 7) = 0;
    *(undefined8 *)((long)puVar11 + 0x6c) = 0;
    puVar11[4] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    uVar18 = 8;
    uVar15 = 0x120;
    *(undefined4 *)((long)puVar11 + 0x27) = 0;
    puVar11[0xc] = 0;
    *(undefined1 *)(puVar11 + 0xd) = 0;
    puVar11[0x23] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x16] = 0;
    puVar11[0x17] = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    puVar11[0x1d] = 0;
    puVar11[0x1e] = 0;
    puVar11[0x1f] = 0;
    puVar11[0x20] = 0;
    puVar11[0x21] = 0;
    puVar11[0x22] = 0;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  lVar12 = *(long *)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x68) = puVar11;
  if (lVar12 == 0) goto LAB_00db9160;
  FUN_02bcbe58(local_80,0);
  FUN_00dbcb24(lVar12);
  plVar2 = *(long **)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  uVar13 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  lVar6 = tpidr_el0;
  if ((uVar13 & 1) == 0) {
LAB_00db9308:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar12,uVar3,uVar17);
  }
  else {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00db9308;
    FUN_02bcc824(plVar2,lVar12,uVar3,uVar17);
  }
  if (*(char *)(lVar6 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar6 + 0x38d488) = 1;
    *(undefined8 *)(lVar6 + 0x38d478) = 0;
    *(undefined8 *)(lVar6 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar10 = *(int *)(lVar6 + 0x38d480) + -1;
  *(int *)(lVar6 + 0x38d480) = iVar10;
  if (iVar10 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar6 + 0x38d484) = 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x68);
LAB_00db9160:
  *(long **)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = uVar15;
  *(undefined8 *)(param_1 + 0x80) = uVar18;
  puVar7 = PTR_DAT_04379498;
  uVar15 = *(undefined8 *)(param_3 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  uVar18 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar18;
  FUN_02a44e0c(&local_68,uVar18,uVar15);
  puVar16 = (undefined8 *)*puVar11;
  *puVar11 = 0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar16 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar16 + 1);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 1) {
        puVar16[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar8;
        *(long *)puVar9 = lVar12;
        local_80[0] = *puVar16;
        FUN_02a44274(lVar12 + 0xd8,local_80);
      }
    }
    uVar15 = 0;
  }
  else {
    puVar14 = local_68;
    if (puVar16 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar16 + 1);
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
        puVar16[2] = 0;
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar8;
        *(long *)puVar9 = lVar12;
        local_80[0] = *puVar16;
        FUN_02a44274(lVar12 + 0xd8,local_80);
      }
      puVar14 = local_68;
    }
    local_68 = (undefined8 *)0x0;
    *puVar11 = puVar14;
  }
  puVar16 = local_68;
  puVar11[1] = uVar15;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
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
      local_68[2] = 0;
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)puVar8;
      *(long *)puVar9 = lVar12;
      local_80[0] = *puVar16;
      FUN_02a44274(lVar12 + 0xd8,local_80);
    }
  }
  FUN_00dbd4ac(*(long *)(param_1 + 0x68) + 0x10,param_4);
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20) = *param_5;
  return;
}


