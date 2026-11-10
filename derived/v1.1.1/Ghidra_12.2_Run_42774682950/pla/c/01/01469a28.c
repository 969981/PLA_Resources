/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01469a28; name: FUN_01469a28
 */


bool FUN_01469a28(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_01468650(*(undefined8 *)(param_1 + 0x4c8),"PlaceNameView");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return (*(byte *)(lVar1 + 0x5b0) & 1) == 0;
}


