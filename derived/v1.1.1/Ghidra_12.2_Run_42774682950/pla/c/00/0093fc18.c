/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093fc18; name: FUN_0093fc18
 */


void FUN_0093fc18(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
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
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_041c27e0;
  param_1[1] = lVar3;
  param_1[9] = (long)&PTR_LAB_041c2818;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_38 = lVar3;
  FUN_0093fe80(&local_58,lVar3);
  lVar5 = local_58;
  local_58 = 0;
  lVar4 = param_1[0x10];
  param_1[0x10] = lVar5;
  if (lVar4 != 0) {
    FUN_00940880(param_1 + 0x11);
  }
  param_1[0x12] = lStack_48;
  param_1[0x13] = local_40;
  param_1[0x11] = local_50;
  FUN_0093ff80(&local_58,lVar3);
  lVar5 = local_58;
  local_58 = 0;
  lVar4 = param_1[0x14];
  param_1[0x14] = lVar5;
  if (lVar4 != 0) {
    FUN_00940ae8(param_1 + 0x15);
  }
  param_1[0x16] = lStack_48;
  param_1[0x17] = local_40;
  param_1[0x15] = local_50;
  FUN_00940080(&local_58,lVar3);
  lVar5 = local_58;
  local_58 = 0;
  lVar4 = param_1[0x18];
  param_1[0x18] = lVar5;
  if (lVar4 != 0) {
    FUN_00940d50(param_1 + 0x19);
  }
  param_1[0x1a] = lStack_48;
  param_1[0x1b] = local_40;
  param_1[0x19] = local_50;
  FUN_00940180(&local_58,lVar3,&local_38);
  lVar3 = local_58;
  local_58 = 0;
  lVar5 = param_1[0x1c];
  param_1[0x1c] = lVar3;
  if (lVar5 != 0) {
    FUN_00940fb8(param_1 + 0x1d);
  }
  param_1[0x1e] = lStack_48;
  param_1[0x1f] = local_40;
  param_1[0x1d] = local_50;
  return;
}


