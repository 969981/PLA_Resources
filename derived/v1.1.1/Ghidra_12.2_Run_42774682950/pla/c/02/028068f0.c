/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028068f0; name: FUN_028068f0
 */


void FUN_028068f0(long param_1,int param_2,ulong param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte local_a0 [64];
  undefined1 *local_60;
  undefined1 *puStack_58;
  size_t local_50;
  undefined8 uStack_48;
  
  local_a0[0x30] = 0;
  local_a0[0x31] = 0;
  local_a0[0x32] = 0;
  local_a0[0x33] = 0;
  local_a0[0x34] = 0;
  local_a0[0x35] = 0;
  local_a0[0x36] = 0;
  local_a0[0x37] = 0;
  local_a0[0x38] = 0;
  local_a0[0x39] = 0;
  local_a0[0x3a] = 0;
  local_a0[0x3b] = 0;
  local_a0[0x3c] = 0;
  local_a0[0x3d] = 0;
  local_a0[0x3e] = 0;
  local_a0[0x3f] = 0;
  local_a0[0x20] = 0;
  local_a0[0x21] = 0;
  local_a0[0x22] = 0;
  local_a0[0x23] = 0;
  local_a0[0x24] = 0;
  local_a0[0x25] = 0;
  local_a0[0x26] = 0;
  local_a0[0x27] = 0;
  local_a0[0x28] = 0;
  local_a0[0x29] = 0;
  local_a0[0x2a] = 0;
  local_a0[0x2b] = 0;
  local_a0[0x2c] = 0;
  local_a0[0x2d] = 0;
  local_a0[0x2e] = 0;
  local_a0[0x2f] = 0;
  puVar3 = &DAT_cbf29ce484222645;
  local_a0[0x10] = 0;
  local_a0[0x11] = 0;
  local_a0[0x12] = 0;
  local_a0[0x13] = 0;
  local_a0[0x14] = 0;
  local_a0[0x15] = 0;
  local_a0[0x16] = 0;
  local_a0[0x17] = 0;
  local_a0[0x18] = 0;
  local_a0[0x19] = 0;
  local_a0[0x1a] = 0;
  local_a0[0x1b] = 0;
  local_a0[0x1c] = 0;
  local_a0[0x1d] = 0;
  local_a0[0x1e] = 0;
  local_a0[0x1f] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  snprintf((char *)local_a0,0x40,"anime_L_menu_%02d_new_on_off",param_2);
  uVar4 = 0x3f800000;
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
  }
  local_50 = strlen((char *)local_a0);
  if (local_a0[0] != 0) {
    pbVar2 = (byte *)((ulong)local_a0 | 1);
    bVar1 = local_a0[0];
    do {
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  uStack_48 = 0;
  local_60 = puVar3;
  puStack_58 = local_a0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    puStack_58 = local_a0;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
  }
  FUN_00d2e2f0(uVar4,param_1 + 0x180,local_a0);
  return;
}


