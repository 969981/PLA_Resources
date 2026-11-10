/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01246450; name: FUN_01246450
 */


void FUN_01246450(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = (uint)(*(int *)(param_1 + 2) - *(int *)(param_1 + 1)) >> 2 & 0xff;
  if (uVar1 != 0) {
    for (lVar2 = 0; FUN_0283b1e8(*param_1), (ulong)uVar1 - 1 != lVar2; lVar2 = lVar2 + 1) {
    }
  }
  return;
}


