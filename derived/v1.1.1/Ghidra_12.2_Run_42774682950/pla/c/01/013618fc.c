/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013618fc; name: FUN_013618fc
 */


void FUN_013618fc(long *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 param_5,
                 byte param_6)

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
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = (long)&PTR_LAB_04206df8;
  param_1[1] = lVar4;
  param_1[0xe] = -0x100000000;
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  *(byte *)((long)param_1 + 0xc2) = param_6 & 1;
  *(undefined2 *)((long)param_1 + 0xc3) = 0;
  *(undefined4 *)(param_1 + 0x19) = param_4;
  *(undefined4 *)((long)param_1 + 0xcc) = param_5;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[9] = (long)&PTR_LAB_04206e30;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 2;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined1 *)((long)param_1 + 0x164) = 1;
  param_1[0x11] = -0x100000000;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar3 = param_3[1];
  param_1[0x2d] = *param_3;
  param_1[0x2e] = lVar3;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3f80000000000000;
  param_1[0x35] = 0x4487000044f00000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_01361aa0(param_1);
  FUN_01361de0(param_1);
  return;
}


