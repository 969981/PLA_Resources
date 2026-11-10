/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130052c; name: FUN_0130052c
 */


void FUN_0130052c(long param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  int param3;
  char local_e0 [64];
  ulong local_a0 [9];
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  puVar2 = (ulong *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38 + 0x1650) +
                    (ulong)*(uint *)(param_1 + 0x1f80) * 0x30);
  local_50 = puVar2[2];
  local_48 = puVar2[3];
  local_40 = puVar2[4];
  local_38 = puVar2[5];
  local_a0[8] = *puVar2;
  local_58 = puVar2[1];
  FUN_012f92f0(param_1 + 0x1d48,local_a0 + 8,param_2);
  local_a0[0] = local_58;
  if ((local_58 & 0xffff) != 0) {
    FUN_012fb82c(param_1 + 0x1758,local_a0,param_2);
  }
  local_a0[0] = local_50;
  if ((local_50 & 0xffff) != 0) {
    FUN_012fb82c(param_1 + 0x1888,local_a0,param_2);
  }
  local_a0[0] = local_48;
  if ((local_48 & 0xffff) != 0) {
    FUN_012fb82c(param_1 + 0x19b8,local_a0,param_2);
  }
  local_a0[0] = local_40;
  if ((local_40 & 0xffff) != 0) {
    FUN_012fb82c(param_1 + 0x1ae8,local_a0,param_2);
  }
  local_a0[0] = local_38;
  if ((local_38 & 0xffff) != 0) {
    FUN_012fb82c(param_1 + 0x1c18,local_a0,param_2);
  }
  local_a0[6] = 0;
  local_a0[7] = 0;
  param3 = 1;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_e0[0x30] = '\0';
  local_e0[0x31] = '\0';
  local_e0[0x32] = '\0';
  local_e0[0x33] = '\0';
  local_e0[0x34] = '\0';
  local_e0[0x35] = '\0';
  local_e0[0x36] = '\0';
  local_e0[0x37] = '\0';
  local_e0[0x38] = '\0';
  local_e0[0x39] = '\0';
  local_e0[0x3a] = '\0';
  local_e0[0x3b] = '\0';
  local_e0[0x3c] = '\0';
  local_e0[0x3d] = '\0';
  local_e0[0x3e] = '\0';
  local_e0[0x3f] = '\0';
  local_e0[0x20] = '\0';
  local_e0[0x21] = '\0';
  local_e0[0x22] = '\0';
  local_e0[0x23] = '\0';
  local_e0[0x24] = '\0';
  local_e0[0x25] = '\0';
  local_e0[0x26] = '\0';
  local_e0[0x27] = '\0';
  local_e0[0x28] = '\0';
  local_e0[0x29] = '\0';
  local_e0[0x2a] = '\0';
  local_e0[0x2b] = '\0';
  local_e0[0x2c] = '\0';
  local_e0[0x2d] = '\0';
  local_e0[0x2e] = '\0';
  local_e0[0x2f] = '\0';
  local_e0[0x10] = '\0';
  local_e0[0x11] = '\0';
  local_e0[0x12] = '\0';
  local_e0[0x13] = '\0';
  local_e0[0x14] = '\0';
  local_e0[0x15] = '\0';
  local_e0[0x16] = '\0';
  local_e0[0x17] = '\0';
  local_e0[0x18] = '\0';
  local_e0[0x19] = '\0';
  local_e0[0x1a] = '\0';
  local_e0[0x1b] = '\0';
  local_e0[0x1c] = '\0';
  local_e0[0x1d] = '\0';
  local_e0[0x1e] = '\0';
  local_e0[0x1f] = '\0';
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  local_e0[2] = '\0';
  local_e0[3] = '\0';
  local_e0[4] = '\0';
  local_e0[5] = '\0';
  local_e0[6] = '\0';
  local_e0[7] = '\0';
  local_e0[8] = '\0';
  local_e0[9] = '\0';
  local_e0[10] = '\0';
  local_e0[0xb] = '\0';
  local_e0[0xc] = '\0';
  local_e0[0xd] = '\0';
  local_e0[0xe] = '\0';
  local_e0[0xf] = '\0';
  do {
    if (param3 == 0xb) {
      return;
    }
    snprintf((char *)local_a0,0x40,"itemid_craft_%d",param3);
    snprintf(local_e0,0x40,"itemid_craft_cnt_%d",param3);
    uVar1 = FUN_00db1088(local_a0);
  } while ((uVar1 != 0xffffffffffffffff) &&
          (param3 = param3 + 1, uVar1 != (local_a0[8] >> 0x10 & 0xffff)));
  FUN_00db0abc(local_a0);
  FUN_00db0d34(local_e0,param_2);
  return;
}


