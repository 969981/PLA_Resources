/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01467db8; name: FUN_01467db8
 */


void FUN_01467db8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_01467df4(*(undefined8 *)(param_1 + 0x4c8),"WalletView");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


