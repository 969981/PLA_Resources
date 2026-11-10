/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b63990; name: FUN_02b63990
 */


void FUN_02b63990(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04285640;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_04285678;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = lVar8;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0xf] = 0xfffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x1d] = 0x7fffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x24] = 0x7fffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x43] = 0x3fffffffffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = lVar8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = lVar8;
  param_1[0x16] = 0x3ffffffffffffff;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = lVar8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = lVar8;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = lVar8;
  param_1[0x2b] = 0x3fffffffffffffff;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = lVar8;
  param_1[0x33] = 0x3fffffffffffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = lVar8;
  param_1[0x3b] = 0x3fffffffffffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_028ccb68(param_1 + 0x47);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0x3ffffffffffffff;
  param_1[0x51] = param_1[1];
  param_1[0x52] = 0x555555555555555;
  param_1[0x58] = param_1[1];
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar8 = DAT_043f1798;
  lVar6 = tpidr_el0;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar6 + 0x20), *(long *)(lVar6 + 0x20) == 0)) {
    *(long *)(lVar6 + 0x20) = DAT_043f1798;
    lVar7 = lVar8;
  }
  param_1[0x5f] = lVar7;
  param_1[0x60] = 0x7fffffffffffffff;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar8 = DAT_043f1798;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar6 + 0x20), *(long *)(lVar6 + 0x20) == 0)) {
    *(long *)(lVar6 + 0x20) = DAT_043f1798;
    lVar7 = lVar8;
  }
  param_1[0x66] = lVar7;
  param_1[0x67] = 0x13b13b13b13b13b;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = param_1[1];
  param_1[0x6e] = 0x7fffffffffffffff;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_02b63de0(param_1 + 0x71);
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0x7fffffffffffffff;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7d] = param_1[1];
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x464,0,1);
  puVar2 = PTR_DAT_043880b8;
  lVar6 = *(long *)(PTR_DAT_043880b8 + 0x20);
  param_1[0x87] = *(long *)(PTR_DAT_043880b8 + 0x28);
  lVar8 = *(long *)(puVar2 + 0x30);
  param_1[0x89] = *(long *)(puVar2 + 0x38);
  lVar7 = *(long *)puVar2;
  param_1[0x83] = *(long *)(puVar2 + 8);
  lVar1 = *(long *)(puVar2 + 0x10);
  param_1[0x85] = *(long *)(puVar2 + 0x18);
  param_1[0x84] = lVar1;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x82] = lVar7;
  param_1[0x88] = lVar8;
  param_1[0x86] = lVar6;
  return;
}


