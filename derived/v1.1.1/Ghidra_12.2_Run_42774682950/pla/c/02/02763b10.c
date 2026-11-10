/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02763b10; name: FUN_02763b10
 */


void FUN_02763b10(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1[4];
  if (0x7ffffffffffffffe < uVar2) {
    uVar2 = 0x7fffffffffffffff;
  }
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x18,1);
  if (lVar1 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  param_1[2] = lVar1 + param_2 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar1;
  return;
}


