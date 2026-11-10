/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004358c0; name: FUN_004358c0
 */


void FUN_004358c0(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_20 [4];
  uint local_10;
  uint uStack_c;
  uint local_8;
  uint uStack_4;
  
  local_20[1] = param_3 & 0x3fffffff;
  local_20[2] = local_20[1] << 1;
  local_10 = param_3 << 2;
  local_20[0] = 0;
  local_20[3] = local_20[2] ^ local_20[1];
  uStack_c = local_20[1] ^ local_10;
  local_8 = local_20[2] ^ local_10;
  uStack_4 = local_20[2] ^ local_20[1] ^ local_10;
  uVar1 = local_20[param_4 & 7] ^ local_20[param_4 >> 3 & 7] << 3 ^ local_20[param_4 >> 6 & 7] << 6
          ^ local_20[param_4 >> 9 & 7] << 9 ^ local_20[param_4 >> 0xc & 7] << 0xc ^
          local_20[param_4 >> 0xf & 7] << 0xf ^ local_20[param_4 >> 0x12 & 7] << 0x12 ^
          local_20[param_4 >> 0x15 & 7] << 0x15 ^ local_20[param_4 >> 0x18 & 7] << 0x18 ^
          local_20[param_4 >> 0x1b & 7] << 0x1b ^ local_20[param_4 >> 0x1e] << 0x1e;
  uVar2 = local_20[param_4 >> 6 & 7] >> 0x1a ^ local_20[param_4 >> 3 & 7] >> 0x1d ^
          local_20[param_4 >> 9 & 7] >> 0x17 ^ local_20[param_4 >> 0xc & 7] >> 0x14 ^
          local_20[param_4 >> 0xf & 7] >> 0x11 ^ local_20[param_4 >> 0x12 & 7] >> 0xe ^
          local_20[param_4 >> 0x15 & 7] >> 0xb ^ local_20[param_4 >> 0x18 & 7] >> 8 ^
          local_20[param_4 >> 0x1b & 7] >> 5 ^ local_20[param_4 >> 0x1e] >> 2;
  if ((param_3 & 0x40000000) != 0) {
    uVar2 = uVar2 ^ param_4 >> 2;
    uVar1 = uVar1 ^ param_4 << 0x1e;
  }
  if ((param_3 & 0x80000000) != 0) {
    uVar1 = uVar1 ^ param_4 << 0x1f;
    uVar2 = uVar2 ^ param_4 >> 1;
  }
  *param_1 = uVar2;
  *param_2 = uVar1;
  return;
}


