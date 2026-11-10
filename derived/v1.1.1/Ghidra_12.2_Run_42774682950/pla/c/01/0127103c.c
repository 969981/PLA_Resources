/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127103c; name: FUN_0127103c
 */


long FUN_0127103c(long param_1)

{
  if (2 < (ulong)*(byte *)(param_1 + 0x904)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return param_1 + (ulong)*(uint *)(param_1 + (ulong)*(byte *)(param_1 + 0x904) * 4 + 0x8f8) * 8 +
         0x90c;
}


