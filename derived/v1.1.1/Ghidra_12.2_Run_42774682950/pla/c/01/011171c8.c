/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011171c8; name: FUN_011171c8
 */


uint FUN_011171c8(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 9999999;
  if ((param_2 < 10000000) && (uVar1 = *(int *)(param_1 + 0x6c) + param_2, 0x98967e < uVar1)) {
    uVar1 = 9999999;
  }
  *(uint *)(param_1 + 0x6c) = uVar1;
  return uVar1;
}


