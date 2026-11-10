/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016966ac; name: FUN_016966ac
 */


ulong FUN_016966ac(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[4];
  if (0x7ffffffffffffffe < uVar1) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar2 = param_1[2] - *param_1 >> 2;
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  if ((ulong)(param_1[2] - *param_1 >> 3) < uVar1 >> 1) {
    uVar1 = param_2;
  }
  return uVar1;
}


