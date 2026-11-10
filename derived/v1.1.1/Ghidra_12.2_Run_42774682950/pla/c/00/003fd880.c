/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd880; name: FUN_003fd880
 */


long FUN_003fd880(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = 0;
  do {
    lVar1 = FUN_003fd880(*(undefined8 *)(param_1 + 0x18));
    param_1 = *(long *)(param_1 + 0x20);
    lVar2 = lVar2 + lVar1 + 1;
  } while (param_1 != 0);
  return lVar2;
}


