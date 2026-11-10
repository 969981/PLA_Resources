/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cf61c; name: FUN_013cf61c
 */


undefined8 FUN_013cf61c(undefined8 param_1,byte param_2)

{
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return *(undefined8 *)(&DAT_03888960 + (long)(char)param_2 * 8);
}


