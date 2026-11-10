/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca95c; name: FUN_02eca95c
 */


void FUN_02eca95c(void)

{
  long lVar1;
  
  for (lVar1 = DAT_0440a7e0; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_02ec7f60(lVar1);
  }
  if (DAT_0440a5a8 != 0) {
    FUN_02f59e60(0);
    DAT_0440a5a8 = 0;
  }
  return;
}


