/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcdde0; name: FUN_02bcdde0
 */


long FUN_02bcdde0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x20);
  if (*(long *)(lVar1 + 0x20) == 0) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar3 = lVar2;
  }
  return lVar3;
}


