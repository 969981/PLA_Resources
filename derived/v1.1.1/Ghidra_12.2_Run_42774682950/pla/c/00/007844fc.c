/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007844fc; name: FUN_007844fc
 */


void FUN_007844fc(long *param_1)

{
  ulong uVar1;
  
  *param_1 = (long)(PTR_DAT_04376ce0 + 0x10);
  uVar1 = FUN_00784ad0(param_1 + 1);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x24));
  FUN_007849dc(param_1 + 1);
  operator_delete(param_1);
  return;
}


