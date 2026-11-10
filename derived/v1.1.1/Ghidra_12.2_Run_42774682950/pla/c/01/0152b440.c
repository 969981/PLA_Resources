/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152b440; name: FUN_0152b440
 */


ulong FUN_0152b440(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1[4];
  if (0x7ffffffffffffffe < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar1 * -0x3333333333333333) < uVar3 >> 1) {
    uVar2 = lVar1 * -0x6666666666666666;
    uVar3 = param_2;
    if (param_2 <= uVar2) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}


