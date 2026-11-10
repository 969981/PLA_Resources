/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a2400; name: at_quick_exit
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int at_quick_exit(__func *__func)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_at_quick_exit_043708c8)((int)__func);
  return iVar1;
}


