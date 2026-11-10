/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019337cc; name: FUN_019337cc
 */


int FUN_019337cc(int *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((0xc < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar4 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar4 != 0)) {
    uVar2 = *(uint *)((long)param_1 + uVar4);
    if (uVar2 == 1) {
      return 1;
    }
    if (uVar2 != 0) {
      lVar1 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar2) & 0x1f) & uVar2) != 0) {
        lVar1 = 0x20;
      }
      uVar7 = lVar1 - LZCOUNT(uVar2);
      uVar4 = uVar7 >> 6;
      if ((uVar7 & 0x3f) != 0) {
        uVar4 = uVar4 + 1;
      }
      if (uVar7 < uVar4) {
        uVar5 = 0;
      }
      else {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar7 / uVar4;
        }
        uVar5 = (uint)(0xffffffffffffffff >> (-uVar6 & 0x3f));
      }
      uVar4 = *param_2;
      uVar7 = param_2[1];
      do {
        uVar6 = uVar4 ^ uVar7;
        iVar3 = (int)uVar7;
        uVar7 = uVar6 >> 0x1b | uVar6 << 0x25;
        uVar8 = (int)uVar4 + iVar3 & uVar5;
        uVar4 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
      } while (uVar2 <= uVar8);
      *param_2 = uVar4;
      param_2[1] = uVar7;
      return uVar8 + 1;
    }
  }
  uVar4 = *param_2;
  uVar7 = param_2[1];
  uVar6 = uVar7 ^ uVar4;
  *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
  param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
  return (int)uVar7 + (int)uVar4 + 1;
}


