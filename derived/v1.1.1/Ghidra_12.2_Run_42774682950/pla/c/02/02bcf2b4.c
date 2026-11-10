/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcf2b4; name: FUN_02bcf2b4
 */


long FUN_02bcf2b4(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_02bceb68();
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1 - (ulong)*(byte *)((long)plVar1 + 0xd);
  }
  return lVar2;
}


