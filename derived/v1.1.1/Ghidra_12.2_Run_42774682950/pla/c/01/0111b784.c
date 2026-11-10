/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111b784; name: FUN_0111b784
 */


undefined8 FUN_0111b784(long param_1,byte param_2)

{
  if (0xb < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x68);
}


