/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c96868; name: FUN_02c96868
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c96868(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
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
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_04295428;
  param_1[1] = lVar6;
  param_1[9] = (long)&PTR_LAB_04295458;
  if (((*PTR_DAT_0437b6f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  PTR_DAT_0437b6f8[8] = 1;
  *param_1 = (long)&PTR_LAB_042953d8;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[9] = (long)&PTR_LAB_04295408;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar5 = DAT_043f1798;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar1 = tpidr_el0;
    lVar6 = *(long *)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(long *)(lVar1 + 0x20) = DAT_043f1798;
      lVar6 = lVar5;
    }
  }
  lVar1 = _UNK_0388a0d8;
  lVar5 = _DAT_0388a0d0;
  param_1[0x8f] = lVar6;
  param_1[0x90] = 0xae4c415c9882b9;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0x95] = lVar1;
  param_1[0x94] = lVar5;
  *(undefined8 *)((long)param_1 + 0x53c) = 0xff;
  *(undefined4 *)((long)param_1 + 0x544) = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x974,0,1);
  param_1[0x130] = 0;
  param_1[0x151] = -1;
  param_1[0x150] = -1;
  param_1[0x152] = -1;
  param_1[0x153] = -1;
  param_1[0x154] = -1;
  param_1[0x155] = -1;
  *(undefined4 *)(param_1 + 0x156) = 0;
  return;
}


