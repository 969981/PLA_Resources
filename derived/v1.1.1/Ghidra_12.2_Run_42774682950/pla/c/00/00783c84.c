/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783c84; name: FUN_00783c84
 */


void FUN_00783c84(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04376cb8 + 0x10);
  if ((long *)param_1[2] != param_1 + 1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


