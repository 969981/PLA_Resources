/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cdf174; name: FUN_01cdf174
 */


void FUN_01cdf174(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (!(param_2 >= uVar3 && param_2 != uVar3)) {
    if (param_2 < uVar3) {
      uVar1 = (ulong)((float)*(ulong *)(param_1 + 0x58) / *(float *)(param_1 + 0x60));
      if ((uVar3 < 3) ||
         (uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555),
         uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333),
         1 < (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar1 = std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
      }
      if (uVar1 <= param_2) {
        uVar1 = param_2;
      }
      if (uVar1 < uVar3) goto LAB_01cdf1a8;
    }
    return;
  }
  uVar1 = param_2;
LAB_01cdf1a8:
  FUN_01cdf3b4(param_1,uVar1);
  return;
}


