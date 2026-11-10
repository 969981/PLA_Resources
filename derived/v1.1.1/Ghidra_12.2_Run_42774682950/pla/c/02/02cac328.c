/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cac328; name: FUN_02cac328
 */


void FUN_02cac328(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_028837c8();
  DAT_04407c50 = *plVar1;
  if (*(long *)(DAT_04407c50 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined1 *)(DAT_04407c50 + 0x108) = 1;
  return;
}


