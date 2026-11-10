/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027631a0; name: FUN_027631a0
 */


ulong FUN_027631a0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0x111111111111111;
  if (0x111111111111111 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar2 * -0x1111111111111111) < 0x88888888888888) {
    uVar3 = lVar2 * -0x2222222222222222;
    uVar1 = param_2;
    if (param_2 <= uVar3) {
      uVar1 = uVar3;
    }
  }
  return uVar1;
}


