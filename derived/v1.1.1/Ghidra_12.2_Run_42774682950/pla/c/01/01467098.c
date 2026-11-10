/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01467098; name: FUN_01467098
 */


void FUN_01467098(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_01468650(*(undefined8 *)(param_1 + 0x4c8),"PlaceNameView");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0147f9a0(lVar1,param_2 & 1);
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x6a2) = 0;
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6b0) = 0;
    *(undefined8 *)(param_1 + 0x6b8) = 0;
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    *(undefined4 *)(param_1 + 0x6c8) = 0;
  }
  return;
}


