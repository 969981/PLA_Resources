/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00878414; name: FUN_00878414
 */


void FUN_00878414(long param_1,long *param_2,int param_3)

{
  if (*(byte *)(param_1 + 1) - 1 < 2) {
    *param_2 = (long)param_3;
    return;
  }
  if (*(byte *)(param_1 + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl("","",0);
  }
  *param_2 = *(long *)(param_1 + 0x10) + (long)param_3 * 0x10;
  return;
}


