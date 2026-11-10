/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fb880; name: FUN_012fb880
 */


void FUN_012fb880(long *param_1,long param_2,long param_3,long param_4)

{
  *param_1 = param_2;
  if ((param_2 == 0) || (param_1[1] = param_3, param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  param_1[2] = param_4;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0280779c(param_4,0);
  return;
}


