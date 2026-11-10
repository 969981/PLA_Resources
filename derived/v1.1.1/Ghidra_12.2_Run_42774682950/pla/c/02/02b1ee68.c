/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1ee68; name: FUN_02b1ee68
 */


void FUN_02b1ee68(long *param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long local_48;
  
  param_1[7] = 0;
  puVar5 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar5 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04284220;
  param_1[1] = lVar11;
  param_1[9] = (long)&PTR_LAB_04284258;
  lVar9 = *param_2;
  param_1[0xb] = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0xc] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar11 = DAT_043f1798;
  lVar9 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar11;
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x10] = lVar10;
  param_1[0x11] = 0x12f684bda12f684;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar11 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar11;
  }
  param_1[0x18] = 0;
  param_1[0x16] = lVar10;
  param_1[0x17] = 0x12f684bda12f684;
  *(undefined4 *)(param_1 + 0x19) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0xe4,0,1);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar11 = DAT_043f1798;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar11;
  }
  param_1[0x23] = lVar10;
  param_1[0x24] = 0x1fffffffffffffff;
  local_48 = param_1[1];
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  lVar9 = param_1[0xd];
  lVar11 = param_1[0xe];
  uVar2 = 0;
  if (lVar11 - lVar9 != 0) {
    uVar2 = (lVar11 - lVar9 >> 3) * 0x12 - 1;
  }
  uVar12 = param_1[0x15] + param_1[0x14];
  if (uVar2 == uVar12) {
    FUN_02b23154(param_1 + 0xc);
    uVar12 = param_1[0x14] + param_1[0x15];
    lVar9 = param_1[0xd];
    lVar11 = param_1[0xe];
  }
  if (lVar11 == lVar9) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + (uVar12 / 0x12) * 8) + (uVar12 % 0x12) * 0xd8;
  }
  FUN_02b23f6c(param_1 + 0x16,lVar9,&local_48);
  param_1[0x15] = param_1[0x15] + 1;
  return;
}


