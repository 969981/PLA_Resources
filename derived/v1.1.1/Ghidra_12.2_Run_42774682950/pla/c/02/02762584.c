/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762584; name: FUN_02762584
 */


ulong FUN_02762584(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if (0x1ffffffffffffffe < (ulong)(param_1[2] - *param_1 >> 2)) {
    return 0x3fffffffffffffff;
  }
  uVar1 = param_1[2] - *param_1 >> 1;
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  return param_2;
}


