/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2540; name: freopen
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * freopen(char *__filename,char *__modes,FILE *__stream)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_freopen_04370968)();
  return pFVar1;
}


