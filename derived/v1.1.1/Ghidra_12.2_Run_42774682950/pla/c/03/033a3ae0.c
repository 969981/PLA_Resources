/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a3ae0; name: pthread_rwlock_init
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_init(pthread_rwlock_t *__rwlock,pthread_rwlockattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_init_04371438)((int)__rwlock);
  return iVar1;
}


