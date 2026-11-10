/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d08e0; name: FUN_013d08e0
 */


bool FUN_013d08e0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_0");
  if (lVar2 == 0) {
LAB_013d0950:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((*(byte *)(lVar2 + 0x5d0) & 1) == 0) {
    FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_0");
    lVar2 = FUN_013d0f3c(*(undefined8 *)(param_1 + 0x4c8),"ViwSlot_1");
    if (lVar2 == 0) goto LAB_013d0950;
    bVar1 = (*(byte *)(lVar2 + 0x5d0) & 1) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


