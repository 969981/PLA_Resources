/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a26d0; name: fseeko
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko(FILE *__stream,__off_t __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseeko_04370a30)((int)__stream,__off,__whence);
  return iVar1;
}


