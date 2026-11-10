/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bba328; name: FUN_00bba328
 */


ulong FUN_00bba328(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x7fffffffffffffff;
  if (*(ulong *)(param_1 + 0x20) < 0x1ffffffffffffff) {
    uVar1 = *(ulong *)(param_1 + 0x20) << 6;
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar3 = param_2 + 0x3f & 0xffffffffffffffc0;
  uVar2 = *(long *)(param_1 + 0x10) << 7;
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  if ((ulong)(*(long *)(param_1 + 0x10) << 6) < uVar1 >> 1) {
    uVar1 = uVar3;
  }
  return uVar1;
}


