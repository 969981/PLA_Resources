/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d403a8; name: FUN_00d403a8
 */


void FUN_00d403a8(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x560);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_008802f0(param_1,lVar1 + 0x1c8);
  return;
}


