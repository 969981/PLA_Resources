/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004024e0; name: FUN_004024e0
 */


void FUN_004024e0(uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004015a0();
  if (lVar1 != 0) {
    lVar2 = (long)*(int *)(lVar1 + 0x240) * 4;
    *(uint *)(lVar1 + lVar2) =
         *(uint *)(lVar1 + lVar2) |
         ((param_1 - 1 & (param_1 ^ 0xffffffff)) >> 0x1e ^ 0xffffffff) & 2;
  }
  return;
}


