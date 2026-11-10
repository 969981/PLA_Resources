/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009273d4; name: FUN_009273d4
 */


uint FUN_009273d4(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 < 2) {
    return 0;
  }
  lVar1 = 0x1f;
  if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(param_2) & 0x1f) & param_2) != 0) {
    lVar1 = 0x20;
  }
  uVar4 = lVar1 - LZCOUNT(param_2);
  uVar6 = uVar4 >> 6;
  if ((uVar4 & 0x3f) != 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar4 < uVar6) {
    uVar5 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = uVar4 / uVar6;
    }
    uVar5 = (uint)(0xffffffffffffffff >> (-uVar7 & 0x3f));
  }
  uVar6 = *(ulong *)(param_1 + 0x70);
  uVar4 = *(ulong *)(param_1 + 0x78);
  do {
    uVar7 = uVar6 ^ uVar4;
    iVar2 = (int)uVar4;
    uVar4 = uVar7 >> 0x1b | uVar7 << 0x25;
    uVar3 = (int)uVar6 + iVar2 & uVar5;
    uVar6 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
  } while (param_2 <= uVar3);
  *(ulong *)(param_1 + 0x70) = uVar6;
  *(ulong *)(param_1 + 0x78) = uVar4;
  return uVar3;
}


