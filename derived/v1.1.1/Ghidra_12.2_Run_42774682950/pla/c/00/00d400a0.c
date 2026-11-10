/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d400a0; name: FUN_00d400a0
 */


bool FUN_00d400a0(long param_1)

{
  if (*(long *)(param_1 + 0x560) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return *(long *)(*(long *)(param_1 + 0x560) + 0x168) == 0;
}


