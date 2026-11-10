/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02954744; name: FUN_02954744
 */


ulong FUN_02954744(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar5 = uVar2 ^ uVar4;
    *(ulong *)(param_1 + 8) = uVar5 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar5 << 0x10;
    *(ulong *)(param_1 + 0x10) = uVar5 >> 0x1b | uVar5 << 0x25;
    return uVar2 + uVar4;
  }
  if (param_2 == 1) {
    return 0;
  }
  lVar1 = 0x3f;
  if ((0x7fffffffffffffffU >> (LZCOUNT(param_2) & 0x3fU) & param_2) != 0) {
    lVar1 = 0x40;
  }
  uVar2 = lVar1 - LZCOUNT(param_2);
  uVar4 = uVar2 >> 6;
  if ((uVar2 & 0x3f) != 0) {
    uVar4 = uVar4 + 1;
  }
  if (uVar2 < uVar4) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar2 / uVar4;
    }
    uVar4 = 0xffffffffffffffff >> (-uVar5 & 0x3f);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar5 = *(ulong *)(param_1 + 0x10);
  do {
    uVar6 = uVar2 ^ uVar5;
    uVar3 = uVar2 + uVar5;
    uVar5 = uVar6 >> 0x1b | uVar6 << 0x25;
    uVar3 = uVar3 & uVar4;
    uVar2 = uVar6 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar6 << 0x10;
  } while (param_2 <= uVar3);
  *(ulong *)(param_1 + 8) = uVar2;
  *(ulong *)(param_1 + 0x10) = uVar5;
  return uVar3;
}


