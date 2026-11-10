/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065a6ac; name: FUN_0065a6ac
 */


void FUN_0065a6ac(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(long *)(param_1 + 0x60) != param_1) goto LAB_0065a71c;
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_00783064(*(long *)(param_1 + 0x68),param_1);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    if (*(long *)(param_1 + 0xb0) != param_1) {
LAB_0065a71c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_00783064(*(long *)(param_1 + 0xb8),param_1);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


