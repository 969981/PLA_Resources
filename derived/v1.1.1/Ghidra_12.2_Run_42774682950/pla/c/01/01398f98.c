/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01398f98; name: FUN_01398f98
 */


uint FUN_01398f98(ushort *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_28;
  uint local_24;
  
  iVar3 = (uint)param_1[1] - (uint)*param_1;
  uVar4 = (uint)*param_1;
  if (iVar3 != 0) {
    uVar4 = iVar3 + 1;
    if (uVar4 == 0) {
      nn::crypto::GenerateCryptographicallyRandomBytes(&local_24,4);
      uVar4 = local_24;
    }
    else {
      lVar1 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar4) & 0x1f) & uVar4) != 0) {
        lVar1 = 0x20;
      }
      uVar5 = lVar1 - LZCOUNT(uVar4);
      uVar6 = uVar5 >> 5;
      if ((uVar5 & 0x1f) != 0) {
        uVar6 = uVar6 + 1;
      }
      iVar3 = 0;
      if (uVar6 != 0) {
        iVar3 = (int)(uVar5 / uVar6);
      }
      uVar2 = 0;
      if (uVar6 <= uVar5) {
        uVar2 = 0xffffffff >> (ulong)(-iVar3 & 0x1f);
      }
      do {
        nn::crypto::GenerateCryptographicallyRandomBytes(&local_28,4);
      } while (uVar4 <= (local_28 & uVar2));
      uVar4 = (uint)*param_1 + (local_28 & uVar2);
    }
  }
  return uVar4;
}


