/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b2e18; name: FUN_011b2e18
 */


undefined8 FUN_011b2e18(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_011b2bb4();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x98) + 0x5b0) + 0x80) == 7) {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 0xa8) == '\0') {
    if (*(char *)(lVar1 + 0x208) == '\0') {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x98) + 0x5b0) + 0x80) == 7) {
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
    }
    else {
      FUN_00d68088(*(long *)(param_1 + 0x98),1);
      *(undefined1 *)(param_1 + 0xa8) = 1;
    }
  }
  return 0;
}


