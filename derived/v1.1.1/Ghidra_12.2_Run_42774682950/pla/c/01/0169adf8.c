/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0169adf8; name: FUN_0169adf8
 */


void FUN_0169adf8(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *local_90 [4];
  long *local_70;
  
  plVar11 = *(long **)(param_1 + 8);
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,8);
  if (plVar8 == (long *)0x0) {
    plVar11 = (long *)0x0;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar11;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar8[4] = 0;
    plVar8[5] = 0;
    puVar6 = PTR_DAT_0437a508;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = (long)(puVar6 + 0x10);
    plVar8[1] = 0;
    uVar13 = 8;
    uVar14 = 0x30;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  lVar9 = *(long *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar8;
  if (lVar9 == 0) goto LAB_0169aeb8;
  FUN_02bcbe58(local_90,0);
  FUN_00936104(lVar9);
  plVar8 = *(long **)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  lVar5 = tpidr_el0;
  if ((uVar10 & 1) == 0) {
LAB_0169afac:
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar2,uVar12);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_0169afac;
    FUN_02bcc824(plVar8,lVar9,uVar2,uVar12);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar7 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar7;
  if (iVar7 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_0169aeb8:
  *(undefined8 *)(param_1 + 0x70) = uVar13;
  *(long **)(param_1 + 0x60) = plVar11;
  *(undefined8 *)(param_1 + 0x68) = uVar14;
  FUN_00adcc04(local_90,param_2);
  lVar9 = *(long *)(param_1 + 0x58);
  uVar10 = FUN_00938764(lVar9,1,local_90,0,*(undefined8 *)(param_1 + 8),0);
  if (((uVar10 & 1) != 0) && (plVar8 = *(long **)(lVar9 + 0x28), plVar8 != (long *)0x0)) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*local_90[0] + 0x20))();
  }
  return;
}


