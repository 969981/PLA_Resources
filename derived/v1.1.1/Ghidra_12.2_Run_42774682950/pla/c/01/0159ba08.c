/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159ba08; name: FUN_0159ba08
 */


void FUN_0159ba08(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 local_4c;
  undefined8 local_48;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&DAT_0421e468;
  param_1[1] = lVar5;
  param_1[9] = (long)&PTR_LAB_0421e4a0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar1 = PTR_DAT_0437a508 + 0x10;
  param_1[0x10] = 0;
  param_1[0xb] = (long)puVar1;
  param_1[0x1f] = param_4;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_00938764(param_1 + 0xb,0,param_3,0,param_2,param_5);
  lVar4 = *(long *)(param_1[0xc] + 0x250);
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x11] = lVar4;
  param_1[0x12] = lVar4;
  lVar4 = param_1[0x12];
  param_1[0x12] = lVar4 + 4;
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(lVar4 + 4);
  param_1[0x12] = lVar4 + 0xc;
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(lVar4 + 0xc);
  param_1[0x12] = lVar4 + 0x10;
  uVar2 = *(undefined4 *)(lVar4 + 0x10);
  param_1[0x12] = lVar4 + 0x14;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  FUN_0159bd70(&local_48,param_2,(long)register0x00000008 + -0x28);
  lVar4 = local_48;
  local_48 = 0;
  lVar5 = param_1[0x16];
  param_1[0x16] = lVar4;
  if (lVar5 == 0) {
    param_1[0x18] = unaff_x23;
    param_1[0x19] = unaff_x22;
  }
  else {
    FUN_0159c924(param_1 + 0x17);
    param_1[0x18] = unaff_x23;
    param_1[0x19] = unaff_x22;
    lVar4 = param_1[0x16];
  }
  param_1[0x17] = unaff_x24;
  FUN_0159ce04(lVar4,(long)((float)(ulong)(long)(int)param_1[0x15] / *(float *)(lVar4 + 0x60)));
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)param_1[0x12];
  param_1[0x12] = (long)((undefined4 *)param_1[0x12] + 1);
  FUN_0159bd70(&local_48,param_2,(long)register0x00000008 + -0x28);
  lVar4 = local_48;
  local_48 = 0;
  lVar5 = param_1[0x1b];
  param_1[0x1b] = lVar4;
  if (lVar5 == 0) {
    param_1[0x1d] = unaff_x23;
    param_1[0x1e] = unaff_x22;
  }
  else {
    FUN_0159c924(param_1 + 0x1c);
    param_1[0x1d] = unaff_x23;
    param_1[0x1e] = unaff_x22;
    lVar4 = param_1[0x1b];
  }
  param_1[0x1c] = unaff_x24;
  FUN_0159ce04(lVar4,(long)((float)(ulong)(long)(int)param_1[0x1a] / *(float *)(lVar4 + 0x60)));
  if (0 < (int)param_1[0x1a]) {
    iVar3 = 0;
    do {
      puVar6 = (undefined8 *)param_1[0x12];
      local_48 = *puVar6;
      param_1[0x12] = (long)(puVar6 + 1);
      local_4c = *(undefined4 *)(puVar6 + 1);
      param_1[0x12] = (long)puVar6 + 0xc;
      FUN_0159bec0(param_1[0x1b],&local_48,&local_4c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x1a]);
  }
  return;
}


