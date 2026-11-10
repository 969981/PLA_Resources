/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02764488; name: FUN_02764488
 */


void FUN_02764488(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x20,8);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + param_2 * 0x20;
  return;
}


