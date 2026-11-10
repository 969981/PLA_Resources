/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b59918; name: FUN_02b59918
 */


void FUN_02b59918(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  param_1[7] = 0;
  puVar4 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_042852d0;
  param_1[1] = (long)plVar11;
  param_1[9] = (long)&PTR_LAB_04285308;
  lVar8 = *param_2;
  param_1[0xb] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar11 = (long *)param_1[1];
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x238,8);
  if (plVar9 == (long *)0x0) {
    plVar11 = (long *)0x0;
    lVar12 = 0;
    lVar8 = 0;
  }
  else {
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02b59d60;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar8 = *param_2;
    *plVar9 = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(plVar9 + 1) = 0;
    lVar8 = 8;
    lVar12 = 0x238;
    *(undefined1 *)(plVar9 + 3) = 0;
    *(undefined1 *)(plVar9 + 5) = 0;
    *(undefined1 *)(plVar9 + 7) = 0;
    *(undefined1 *)(plVar9 + 9) = 0;
    *(undefined1 *)(plVar9 + 0xb) = 0;
    *(undefined1 *)(plVar9 + 0xd) = 0;
    *(undefined1 *)(plVar9 + 0xf) = 0;
    *(undefined1 *)(plVar9 + 0x11) = 0;
    *(undefined1 *)(plVar9 + 0x13) = 0;
    *(undefined1 *)(plVar9 + 0x15) = 0;
    *(undefined1 *)(plVar9 + 0x17) = 0;
    *(undefined1 *)(plVar9 + 0x19) = 0;
    *(undefined1 *)(plVar9 + 0x1b) = 0;
    *(undefined1 *)(plVar9 + 0x1d) = 0;
    *(undefined1 *)(plVar9 + 0x1f) = 0;
    *(undefined1 *)(plVar9 + 0x21) = 0;
    *(undefined1 *)(plVar9 + 0x23) = 0;
    *(undefined1 *)(plVar9 + 0x25) = 0;
    *(undefined1 *)(plVar9 + 0x27) = 0;
    *(undefined1 *)(plVar9 + 0x29) = 0;
    *(undefined1 *)(plVar9 + 0x2b) = 0;
    *(undefined1 *)(plVar9 + 0x2d) = 0;
    *(undefined1 *)(plVar9 + 0x2f) = 0;
    *(undefined1 *)(plVar9 + 0x31) = 0;
    *(undefined1 *)(plVar9 + 0x33) = 0;
    *(undefined1 *)(plVar9 + 0x35) = 0;
    *(undefined1 *)(plVar9 + 0x37) = 0;
    *(undefined1 *)(plVar9 + 0x39) = 0;
    *(undefined1 *)(plVar9 + 0x3b) = 0;
    *(undefined1 *)(plVar9 + 0x3d) = 0;
    *(undefined1 *)(plVar9 + 0x3f) = 0;
    *(undefined1 *)(plVar9 + 0x41) = 0;
    *(undefined1 *)(plVar9 + 0x43) = 0;
    *(undefined1 *)(plVar9 + 0x45) = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  FUN_02b5a330(param_1 + 0xc,plVar9);
  param_1[0xd] = (long)plVar11;
  param_1[0xe] = lVar12;
  plVar9 = (long *)param_1[1];
  param_1[0xf] = lVar8;
  plVar11 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x2a8,8);
  if (plVar11 == (long *)0x0) {
    plVar9 = (long *)0x0;
    lVar12 = 0;
    lVar8 = 0;
  }
  else {
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_02b59d60:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar8 = *param_2;
    *plVar11 = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(plVar11 + 1) = 0;
    lVar8 = 8;
    lVar12 = 0x2a8;
    *(undefined1 *)(plVar11 + 3) = 0;
    *(undefined1 *)(plVar11 + 5) = 0;
    *(undefined1 *)(plVar11 + 7) = 0;
    *(undefined1 *)(plVar11 + 9) = 0;
    *(undefined1 *)(plVar11 + 0xb) = 0;
    *(undefined1 *)(plVar11 + 0xd) = 0;
    *(undefined1 *)(plVar11 + 0xf) = 0;
    *(undefined1 *)(plVar11 + 0x11) = 0;
    *(undefined1 *)(plVar11 + 0x13) = 0;
    *(undefined1 *)(plVar11 + 0x15) = 0;
    *(undefined1 *)(plVar11 + 0x17) = 0;
    *(undefined1 *)(plVar11 + 0x19) = 0;
    *(undefined1 *)(plVar11 + 0x1b) = 0;
    *(undefined1 *)(plVar11 + 0x1d) = 0;
    *(undefined1 *)(plVar11 + 0x1f) = 0;
    *(undefined1 *)(plVar11 + 0x21) = 0;
    *(undefined1 *)(plVar11 + 0x23) = 0;
    *(undefined1 *)(plVar11 + 0x25) = 0;
    *(undefined1 *)(plVar11 + 0x27) = 0;
    *(undefined1 *)(plVar11 + 0x29) = 0;
    *(undefined1 *)(plVar11 + 0x2b) = 0;
    *(undefined1 *)(plVar11 + 0x2d) = 0;
    *(undefined1 *)(plVar11 + 0x2f) = 0;
    *(undefined1 *)(plVar11 + 0x31) = 0;
    *(undefined1 *)(plVar11 + 0x33) = 0;
    *(undefined1 *)(plVar11 + 0x35) = 0;
    *(undefined1 *)(plVar11 + 0x37) = 0;
    *(undefined1 *)(plVar11 + 0x39) = 0;
    *(undefined1 *)(plVar11 + 0x3b) = 0;
    *(undefined1 *)(plVar11 + 0x3d) = 0;
    *(undefined1 *)(plVar11 + 0x3f) = 0;
    *(undefined1 *)(plVar11 + 0x41) = 0;
    *(undefined1 *)(plVar11 + 0x43) = 0;
    *(undefined1 *)(plVar11 + 0x45) = 0;
    *(undefined1 *)(plVar11 + 0x47) = 0;
    *(undefined1 *)(plVar11 + 0x49) = 0;
    *(undefined1 *)(plVar11 + 0x4b) = 0;
    *(undefined1 *)(plVar11 + 0x4d) = 0;
    *(undefined1 *)(plVar11 + 0x4f) = 0;
    *(undefined1 *)(plVar11 + 0x51) = 0;
    *(undefined1 *)(plVar11 + 0x53) = 0;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  FUN_02b5a5bc(param_1 + 0x10,plVar11);
  param_1[0x11] = (long)plVar9;
  param_1[0x12] = lVar12;
  param_1[0x13] = lVar8;
  return;
}


