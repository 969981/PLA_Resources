/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb5864; name: FUN_02cb5864
 */


void FUN_02cb5864(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(*(long **)(param_1 + 0x68),param_2,8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


