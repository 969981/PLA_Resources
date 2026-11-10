/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b0dce0; name: FUN_01b0dce0
 */


void FUN_01b0dce0(long param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = 1L << ((long)*param_2 & 0x3fU);
  if ((param_3 & 1) == 0) {
    *(ulong *)(param_1 + 0xc38) = *(ulong *)(param_1 + 0xc38) & (uVar1 ^ 0xffffffffffffffff);
    return;
  }
  *(ulong *)(param_1 + 0xc38) = *(ulong *)(param_1 + 0xc38) | uVar1;
  return;
}


