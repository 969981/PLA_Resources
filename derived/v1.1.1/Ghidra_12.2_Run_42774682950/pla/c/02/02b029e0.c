/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b029e0; name: FUN_02b029e0
 */


void FUN_02b029e0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04283660;
  param_1[1] = lVar4;
  param_1[9] = (long)&PTR_LAB_04283698;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2c] = 0;
  param_1[0x11] = lVar4;
  param_1[0x12] = 0x1fffffffffffffff;
  *(undefined1 *)((long)param_1 + 0xc4) = 1;
  param_1[0x19] = (long)&PTR_LAB_04283730;
  param_1[0x1a] = (long)(param_1 + 0x1a);
  param_1[0x1b] = (long)(param_1 + 0x1a);
  param_1[0x1c] = 0;
  param_1[0x1d] = lVar4;
  param_1[0x1e] = 0x7ffffffffffffff;
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)&PTR_LAB_04283700;
  param_1[0x25] = 0;
  param_1[0x26] = lVar4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x23] = (long)(param_1 + 0x23);
  param_1[0x24] = (long)(param_1 + 0x23);
  param_1[0x27] = 0x7ffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)&PTR_LAB_042836c8;
  return;
}


