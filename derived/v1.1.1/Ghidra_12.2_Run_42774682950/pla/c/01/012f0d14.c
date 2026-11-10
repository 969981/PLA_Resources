/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f0d14; name: FUN_012f0d14
 */


void FUN_012f0d14(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_012f064c(param_2,param_3);
    FUN_012f0bbc(param_2,uVar1);
    return;
  }
  if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_012f064c(param_2,param_3);
  return;
}


