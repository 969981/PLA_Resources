/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2d20; name: vsnprintf
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_04370d58)((int)__s);
  return iVar1;
}


