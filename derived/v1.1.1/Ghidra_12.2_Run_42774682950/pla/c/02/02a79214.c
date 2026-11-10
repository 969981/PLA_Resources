/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a79214; name: FUN_02a79214
 */


void FUN_02a79214(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
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
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar8 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_0427f0e0;
  param_1[1] = lVar8;
  param_1[9] = (long)&PTR_LAB_0427f110;
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  PTR_DAT_04379d38[8] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = (long)&PTR_LAB_0427f070;
  param_1[9] = (long)&PTR_LAB_0427f0a0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar8 = DAT_043f1798;
  lVar5 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x10] = lVar6;
  param_1[0x11] = 0x38e38e38e38e38e;
  param_1[0x14] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x15] = lVar6;
  param_1[0x16] = 0x38e38e38e38e38e;
  uVar9 = param_1[0xf];
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  if (uVar9 < 8) {
    uVar7 = 8;
  }
  else {
    if (uVar9 == 8) goto LAB_02a793b4;
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar7 = 8;
      if (uVar9 < 9) goto LAB_02a793b4;
    }
    else {
      uVar7 = std::__next_prime(0);
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      if (uVar9 <= uVar7) goto LAB_02a793b4;
    }
  }
  FUN_0093b7fc(param_1 + 0xe,uVar7);
LAB_02a793b4:
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x1f] = 0;
  param_1[0x1d] = lVar6;
  param_1[0x1e] = 0x555555555555555;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar5 + 0x20), *(long *)(lVar5 + 0x20) == 0)) {
    *(long *)(lVar5 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x22] = lVar6;
  param_1[0x23] = 0x555555555555555;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  nn::os::InitializeLightEvent((long)param_1 + 0x144,0,1);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0x100000003;
  param_1[0x33] = 0x900000000;
  param_1[0x34] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x1e4,0,1);
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return;
}


