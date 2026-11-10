/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a23f0; name: pthread_once
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_043708c0)((int)__once_control);
  return iVar1;
}


