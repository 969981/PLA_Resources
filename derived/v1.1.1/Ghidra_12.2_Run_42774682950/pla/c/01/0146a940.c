/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146a940; name: FUN_0146a940
 */


void FUN_0146a940(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_01460b84(*(undefined8 *)(lVar1 + 0x3f50),param_2);
  return;
}


