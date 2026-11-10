/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028de930; name: FUN_028de930
 */


void FUN_028de930(long param_1,undefined8 param_2,long param_3)

{
  if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 5) <=
      (ulong)*(uint *)(param_3 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
                    /* WARNING: Could not recover jumptable at 0x028de964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0xa0) + (ulong)*(uint *)(param_3 + 4) * 0x20) + 0x90)
  )();
  return;
}


