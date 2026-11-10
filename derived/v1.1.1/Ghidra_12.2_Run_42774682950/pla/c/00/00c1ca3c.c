/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c1ca3c; name: FUN_00c1ca3c
 */


void FUN_00c1ca3c(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_FUN_041ddb08;
  param_1[1] = param_2;
  lVar12 = *param_3;
  param_1[2] = lVar12;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    param_2 = (long *)param_1[1];
  }
  puVar15 = param_1 + 3;
  *puVar15 = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar10 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  puVar17 = (undefined4 *)PTR_DAT_04379528;
  puVar7 = PTR_DAT_04379520;
  if (puVar10 == (undefined8 *)0x0) {
    param_2 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*puVar17);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00c1d130;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *puVar10 = &PTR_LAB_041e7c60;
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = 0;
    uVar18 = 8;
    uVar19 = 0x18;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  puVar14 = (undefined8 *)*puVar15;
  *puVar15 = puVar10;
  if (puVar14 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    plVar13 = (long *)puVar14[2];
    *puVar14 = &PTR_LAB_041e7c60;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    plVar13 = (long *)param_1[4];
    uVar3 = param_1[5];
    uVar16 = param_1[6];
    uVar11 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    lVar12 = tpidr_el0;
    if ((uVar11 & 1) == 0) {
LAB_00c1cc8c:
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar14,uVar3,uVar16);
    }
    else {
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_00c1cc8c;
      FUN_02bcc824(plVar13,puVar14,uVar3,uVar16);
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
    puVar17 = (undefined4 *)PTR_DAT_04379528;
  }
  param_1[4] = param_2;
  param_1[5] = uVar19;
  plVar13 = (long *)param_1[1];
  param_1[6] = uVar18;
  puVar10 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x10,8);
  if (puVar10 == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((*puVar7 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*puVar17);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00c1d130:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    uVar18 = 8;
    *puVar10 = &PTR_LAB_041e7c18;
    puVar10[1] = &DAT_cbf29ce484222645;
    uVar19 = 0x10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  lVar12 = param_1[7];
  param_1[7] = puVar10;
  if (lVar12 == 0) goto LAB_00c1cbd4;
  FUN_02bcbe58(auStack_78,0);
  plVar2 = (long *)param_1[8];
  uVar3 = param_1[9];
  uVar16 = param_1[10];
  uVar11 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar11 & 1) == 0) {
LAB_00c1cd64:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar12,uVar3,uVar16);
  }
  else {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00c1cd64;
    FUN_02bcc824(plVar2,lVar12,uVar3,uVar16);
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
LAB_00c1cbd4:
  param_1[8] = plVar13;
  param_1[9] = uVar19;
  param_1[10] = uVar18;
  return;
}


