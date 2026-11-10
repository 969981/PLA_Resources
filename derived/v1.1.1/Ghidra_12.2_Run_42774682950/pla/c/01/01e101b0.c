/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e101b0; name: FUN_01e101b0
 */


int FUN_01e101b0(int *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar3 = *param_1;
  if (param_1[1] - iVar3 == 0) {
    return iVar3;
  }
  uVar1 = (param_1[1] - iVar3) + 1;
  if (uVar1 == 0) {
    uVar8 = *param_2;
    uVar6 = param_2[1];
    uVar9 = uVar6 ^ uVar8;
    *param_2 = uVar9 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar9 << 0x10;
    param_2[1] = uVar9 >> 0x1b | uVar9 << 0x25;
    return (int)uVar6 + (int)uVar8 + iVar3;
  }
  lVar2 = 0x1f;
  if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & uVar1) != 0) {
    lVar2 = 0x20;
  }
  uVar6 = lVar2 - LZCOUNT(uVar1);
  uVar8 = uVar6 >> 6;
  if ((uVar6 & 0x3f) != 0) {
    uVar8 = uVar8 + 1;
  }
  if (uVar6 < uVar8) {
    uVar5 = 0;
  }
  else {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar6 / uVar8;
    }
    uVar5 = (uint)(0xffffffffffffffff >> (-uVar9 & 0x3f));
  }
  uVar8 = *param_2;
  uVar6 = param_2[1];
  do {
    uVar9 = uVar8 ^ uVar6;
    iVar4 = (int)uVar6;
    uVar6 = uVar9 >> 0x1b | uVar9 << 0x25;
    uVar7 = (int)uVar8 + iVar4 & uVar5;
    uVar8 = uVar9 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar9 << 0x10;
  } while (uVar1 <= uVar7);
  *param_2 = uVar8;
  param_2[1] = uVar6;
  return uVar7 + iVar3;
}


