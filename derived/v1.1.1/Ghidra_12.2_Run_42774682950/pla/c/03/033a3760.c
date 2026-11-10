/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3760; name: strtoull
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_04371278)(__nptr,__endptr,__base);
  return uVar1;
}


