/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01396524; name: FUN_01396524
 */


ulong FUN_01396524(long *param_1,ulong param_2)

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
  lVar1 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar1 * -0x50295fad40a57eb5) < uVar3 >> 1) {
    uVar2 = lVar1 * 0x5fad40a57eb50296;
    uVar3 = param_2;
    if (param_2 <= uVar2) {
      uVar3 = uVar2;
    }
  }
  return uVar3;
}


