/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012554ec; name: FUN_012554ec
 */


long FUN_012554ec(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x13e0) + (ulong)*(byte *)(param_1 + 0x1418) * 4);
  if (8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return param_1 + (long)iVar1 * 8 + 0x1448;
}


