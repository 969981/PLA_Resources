/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5520c; name: FUN_02e5520c
 */


void FUN_02e5520c(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x40); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x48)) {
    FUN_02e4c220(lVar1);
  }
  return;
}


