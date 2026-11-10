/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2fe0; name: strnlen
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_04370eb8)();
  return sVar1;
}


