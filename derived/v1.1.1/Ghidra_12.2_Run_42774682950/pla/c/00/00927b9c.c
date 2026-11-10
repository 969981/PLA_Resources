/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00927b9c; name: FUN_00927b9c
 */


void FUN_00927b9c(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_0091cdf4(param_1 + 0x18);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    return;
  }
  FUN_009284d0(param_1,param_2);
  return;
}


