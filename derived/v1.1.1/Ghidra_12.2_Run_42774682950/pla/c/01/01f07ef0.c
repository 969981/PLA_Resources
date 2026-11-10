/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f07ef0; name: FUN_01f07ef0
 */


void FUN_01f07ef0(long param_1,uint param_2,byte param_3)

{
  if (param_2 == 3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08330();
  }
  param_1 = param_1 + (long)(int)param_2 * 8;
  *(byte *)(*(long *)(param_1 + 0x68) + 0xb0) = param_3 & 1;
  *(byte *)(*(long *)(param_1 + 0x68) + 0x6c) = ~param_3 & 1;
  return;
}


