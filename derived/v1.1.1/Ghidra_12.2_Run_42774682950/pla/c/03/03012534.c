/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012534; name: FUN_03012534
 */


long FUN_03012534(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + param_1 + 0x28;
  }
  return lVar1;
}


