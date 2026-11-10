/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcde30; name: FUN_02bcde30
 */


byte FUN_02bcde30(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  return DAT_043f17ac & *(char *)(lVar1 + 0x28) == '\0';
}


