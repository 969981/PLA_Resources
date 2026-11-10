/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a26a0; name: getc_unlocked
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getc_unlocked(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getc_unlocked_04370a18)((int)__stream);
  return iVar1;
}


