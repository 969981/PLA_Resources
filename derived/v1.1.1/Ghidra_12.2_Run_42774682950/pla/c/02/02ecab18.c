/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecab18; name: FUN_02ecab18
 */


void FUN_02ecab18(void)

{
  long lVar1;
  
  for (lVar1 = DAT_0440a7e0; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    if (*(int *)(lVar1 + 0x160) != 1) {
      FUN_02ec7d7c(lVar1,2);
    }
  }
  FUN_02ec98a8(1);
  return;
}


