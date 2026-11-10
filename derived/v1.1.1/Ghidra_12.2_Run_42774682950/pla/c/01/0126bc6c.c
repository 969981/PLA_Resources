/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126bc6c; name: FUN_0126bc6c
 */


void FUN_0126bc6c(long *param_1,long param_2,long param_3)

{
  *param_1 = param_2;
  if ((param_2 == 0) || (param_1[1] = param_3, param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


