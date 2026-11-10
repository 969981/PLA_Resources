/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a34d0; name: pthread_cond_init
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_04371130)((int)__cond);
  return iVar1;
}


