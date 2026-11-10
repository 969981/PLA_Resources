/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0078271c; name: FUN_0078271c
 */


int FUN_0078271c(int *param_1)

{
  undefined4 local_8 [2];
  
  if (*param_1 != 0) {
    local_8[0] = 0x80541;
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)local_8,"");
  }
  return param_1[1];
}


