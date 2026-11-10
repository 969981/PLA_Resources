/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ff7c0; name: FUN_025ff7c0
 */


void FUN_025ff7c0(long param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = 1L << ((ulong)*param_2 & 0x3f);
  if ((param_3 & 1) == 0) {
    *(ulong *)(param_1 + 0x3b0) = *(ulong *)(param_1 + 0x3b0) & (uVar1 ^ 0xffffffffffffffff);
    return;
  }
  *(ulong *)(param_1 + 0x3b0) = *(ulong *)(param_1 + 0x3b0) | uVar1;
  return;
}


