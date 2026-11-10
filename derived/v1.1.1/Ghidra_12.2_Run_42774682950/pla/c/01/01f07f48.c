/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f07f48; name: FUN_01f07f48
 */


void FUN_01f07f48(long param_1,uint param_2)

{
  if (param_2 == 3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08330();
  }
  FUN_02c8fa3c(*(undefined8 *)(param_1 + (long)(int)param_2 * 8 + 0x68));
  return;
}


