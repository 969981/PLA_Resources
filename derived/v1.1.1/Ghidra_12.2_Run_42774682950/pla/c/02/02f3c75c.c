/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3c75c; name: FUN_02f3c75c
 */


long FUN_02f3c75c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = FUN_02f3c75c();
    lVar2 = lVar1 + lVar2;
  }
  return lVar2;
}


