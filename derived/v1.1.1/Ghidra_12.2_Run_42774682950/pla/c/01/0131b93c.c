/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131b93c; name: FUN_0131b93c
 */


long FUN_0131b93c(long param_1,uint param_2)

{
  if (6 < (int)param_2) {
    return 0;
  }
  if (6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0131bd90();
  }
  return param_1 + (long)(int)param_2 * 0x400 + 0xa4;
}


