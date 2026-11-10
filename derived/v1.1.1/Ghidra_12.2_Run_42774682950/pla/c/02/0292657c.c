/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292657c; name: FUN_0292657c
 */


void FUN_0292657c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar2 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_04275c58;
  param_1[1] = lVar7;
  param_1[9] = (long)&PTR_LAB_04275c88;
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  PTR_DAT_04379e48[8] = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)&PTR_FUN_04275bc8;
  param_1[9] = (long)&PTR_LAB_04275bf8;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  lVar5 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xf] = lVar6;
  param_1[0x10] = 0x12f684bda12f684;
  param_1[0x13] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  param_1[0x14] = lVar6;
  param_1[0x15] = 0x12f684bda12f684;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  param_1[0x1d] = lVar6;
  param_1[0x1e] = 0x1fffffffffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar6 = DAT_03a7e9bc;
  lVar7 = DAT_03a7e9ac;
  param_1[0x23] = DAT_03a7e9b4;
  param_1[0x24] = lVar6;
  param_1[0x21] = 0;
  param_1[0x22] = lVar7;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  param_1[0x27] = lVar6;
  param_1[0x28] = 0x7ffffffffffffff;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar7 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar7;
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0x7ffffffffffffff;
  param_1[0x2e] = 0;
  param_1[0x2c] = lVar6;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  lVar6 = DAT_03a7e9dc;
  lVar7 = DAT_03a7e9cc;
  lVar5 = DAT_03a7e9c4;
  param_1[0x34] = DAT_03a7e9d4;
  param_1[0x35] = lVar6;
  param_1[0x32] = lVar5;
  param_1[0x33] = lVar7;
  FUN_02929d7c(param_1 + 0x36);
  FUN_02929d7c(param_1 + 0x43);
  FUN_02929ba8(param_1 + 0x50);
  FUN_02929ba8(param_1 + 0x5d);
  param_1[0x6a] = (long)&PTR_LAB_04275c18;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x70] = (long)&PTR_LAB_04275c38;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x76),false,0);
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0x3f800000;
  return;
}


