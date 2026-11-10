/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c517d0; name: FUN_02c517d0
 */


void FUN_02c517d0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auStack_78 [24];
  
  FUN_02c528f8();
  FUN_02c561a8(param_1);
  FUN_02c535f8(param_1);
  FUN_02c538d8(param_1);
  lVar10 = (**(code **)(*param_1 + 0x10))(param_1,0x60,8);
  if (lVar10 == 0) {
    plVar15 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_1;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    FUN_02c54454(lVar10,param_1);
    uVar13 = 8;
    uVar14 = 0x60;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    plVar15 = param_1;
  }
  puVar6 = DAT_043f2380;
  bVar3 = DAT_043f2380 == (undefined8 *)0x0;
  DAT_043f2380 = (undefined8 *)lVar10;
  if (bVar3) goto LAB_02c519d4;
  FUN_02bcbe58(auStack_78,0);
  (**(code **)*puVar6)(puVar6);
  uVar8 = DAT_043f2398;
  uVar7 = DAT_043f2390;
  plVar2 = DAT_043f2388;
  uVar12 = (**(code **)(*DAT_043f2388 + 0xc0))(DAT_043f2388);
  lVar10 = tpidr_el0;
  if ((uVar12 & 1) == 0) {
LAB_02c51938:
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,uVar7,uVar8);
  }
  else {
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02c51938;
    FUN_02bcc824(plVar2,puVar6,uVar7,uVar8);
  }
  if (*(char *)(lVar10 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar10 + 0x38d488) = 1;
    *(undefined8 *)(lVar10 + 0x38d478) = 0;
    *(undefined8 *)(lVar10 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar10 + 0x38d480) + -1;
  *(int *)(lVar10 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar10 + 0x38d484) = 0;
  }
LAB_02c519d4:
  DAT_043f2388 = plVar15;
  DAT_043f2390 = uVar14;
  DAT_043f2398 = uVar13;
  lVar10 = FUN_00d48784(auStack_78,param_1,&DAT_03a84b18);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar15 = DAT_043f2378;
  DAT_043f2378 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar3) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
  }
  DAT_043f2378 = (long *)lVar10;
  return;
}


