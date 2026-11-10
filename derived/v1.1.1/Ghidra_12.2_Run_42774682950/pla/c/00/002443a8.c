/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002443a8; name: FUN_002443a8
 */


long FUN_002443a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      return lVar1 + 0xc;
    }
    if (*(short *)(lVar1 + 8) != 1) {
      return lVar1 + 0x18;
    }
  }
  return 0;
}


