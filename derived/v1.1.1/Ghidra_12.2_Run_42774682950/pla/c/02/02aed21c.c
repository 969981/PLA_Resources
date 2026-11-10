/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aed21c; name: FUN_02aed21c
 */


void FUN_02aed21c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_042832c8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0x666666666666666;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0x555555555555555;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0x555555555555555;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  param_1[0x1e] = 0x555555555555555;
  param_1[0x21] = 0;
  param_1[0x22] = param_2;
  param_1[0x23] = 0x555555555555555;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_2;
  param_1[0x2b] = 0x2aaaaaaaaaaaaaa;
  param_1[0x2e] = 0;
  param_1[0x2f] = param_2;
  param_1[0x30] = 0x2aaaaaaaaaaaaaa;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = param_2;
  param_1[0x38] = 0x666666666666666;
  param_1[0x3b] = 0;
  param_1[0x3c] = param_2;
  param_1[0x3d] = 0x666666666666666;
  param_1[0x3e] = 0;
  puVar2 = PTR_DAT_04379520;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar4 = DAT_043f1798;
  lVar1 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar6 = lVar4;
  }
  param_1[0x44] = lVar6;
  param_1[0x45] = 0x555555555555555;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar4 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar6 = lVar4;
  }
  param_1[0x49] = lVar6;
  param_1[0x4a] = 0x555555555555555;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  nn::os::InitializeLightEvent((long)param_1 + 0x284,0,1);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  return;
}


