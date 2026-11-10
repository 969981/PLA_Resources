/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080fcf8; name: FUN_0080fcf8
 */


void FUN_0080fcf8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_007ec500(lVar1,2);
    FUN_00810298(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x14c) = 0;
  return;
}


