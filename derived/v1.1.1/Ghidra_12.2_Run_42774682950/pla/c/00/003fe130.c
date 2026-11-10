/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fe130; name: FUN_003fe130
 */


long FUN_003fe130(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = FUN_003fe130(*(undefined8 *)(param_1 + 0x18));
    lVar2 = FUN_003fe130(*(undefined8 *)(param_1 + 0x20));
    if (lVar1 <= lVar2) {
      lVar1 = lVar2;
    }
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


