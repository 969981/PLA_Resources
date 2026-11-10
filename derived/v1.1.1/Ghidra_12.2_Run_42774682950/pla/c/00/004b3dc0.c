/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b3dc0; name: FUN_004b3dc0
 */


undefined8 FUN_004b3dc0(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint local_10 [4];
  
  uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_10[0] = (uVar3 >> 0x10 | uVar3 << 0x10) ^ 0xa3b1bac6;
  uVar3 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  local_10[1] = (uVar3 >> 0x10 | uVar3 << 0x10) ^ 0x56aa3350;
  uVar3 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar4 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  local_10[2] = (uVar3 >> 0x10 | uVar3 << 0x10) ^ 0x677d9197;
  local_10[3] = (uVar4 >> 0x10 | uVar4 << 0x10) ^ 0xb27022dc;
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    uVar2 = local_10[(ulong)((int)uVar5 + 2) & 3] ^ local_10[uVar1 & 3] ^
            local_10[(ulong)((int)uVar5 - 1) & 3] ^ (&DAT_03a223d0)[uVar5];
    uVar3 = (uint)(byte)(&DAT_03a22450)[uVar2 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_03a22450)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10;
    uVar4 = uVar3 | (uint)(byte)(&DAT_03a22450)[(ulong)(uVar2 >> 8) & 0xff] << 8;
    uVar2 = uVar4 | (byte)(&DAT_03a22450)[(ulong)uVar2 & 0xff];
    uVar3 = uVar2 ^ local_10[uVar5 & 3] ^ (uint)(CONCAT44(uVar2,uVar3) >> 0x13) ^
            (uint)(CONCAT44(uVar2,uVar4) >> 9);
    local_10[uVar5 & 3] = uVar3;
    *(uint *)(param_2 + uVar5 * 4) = uVar3;
    uVar5 = uVar1;
  } while (uVar1 != 0x20);
  return 1;
}


