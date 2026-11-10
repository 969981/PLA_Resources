/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f37e8; name: FUN_012f37e8
 */


void FUN_012f37e8(long param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x1648) = param_2;
  if (*(long *)(param_1 + 0x1730) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0280779c(*(long *)(param_1 + 0x1730),~param_3 & 1);
  return;
}


