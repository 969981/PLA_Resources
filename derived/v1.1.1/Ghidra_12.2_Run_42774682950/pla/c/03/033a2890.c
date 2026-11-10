/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2890; name: clock
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

clock_t clock(void)

{
  clock_t cVar1;
  
  cVar1 = (*(code *)PTR_clock_04370b10)();
  return cVar1;
}


