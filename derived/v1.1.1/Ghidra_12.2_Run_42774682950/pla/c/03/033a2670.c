/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2670; name: ungetc
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ungetc_04370a00)(__c);
  return iVar1;
}


