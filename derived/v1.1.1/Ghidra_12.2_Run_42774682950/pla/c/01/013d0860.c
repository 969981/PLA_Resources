/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d0860; name: FUN_013d0860
 */


long FUN_013d0860(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_0");
  if (lVar1 == 0) {
LAB_013d08c8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((*(byte *)(lVar1 + 0x5d0) & 1) != 0) {
    FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_0");
    lVar1 = FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_1");
    if (lVar1 == 0) goto LAB_013d08c8;
    if ((*(byte *)(lVar1 + 0x5d0) & 1) != 0) {
      lVar1 = 0;
    }
  }
  return lVar1;
}


