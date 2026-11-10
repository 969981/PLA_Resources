/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a34c0; name: pthread_condattr_init
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_condattr_init(pthread_condattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_condattr_init_04371128)((int)__attr);
  return iVar1;
}


