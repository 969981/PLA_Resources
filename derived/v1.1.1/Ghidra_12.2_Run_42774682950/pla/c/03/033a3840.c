/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3840; name: pthread_mutexattr_destroy
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_043712e8)((int)__attr);
  return iVar1;
}


