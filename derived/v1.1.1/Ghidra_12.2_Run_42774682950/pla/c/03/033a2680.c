/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2680; name: localeconv
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = (lconv *)(*(code *)PTR_localeconv_04370a08)();
  return plVar1;
}


