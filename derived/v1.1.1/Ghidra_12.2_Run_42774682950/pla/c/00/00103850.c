/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00103850; name: _FINI_0
 */


int _FINI_0(void)

{
  int iVar1;
  
  FUN_001037f0(1,1);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0411a0b8);
  FUN_001037f0(1,0);
  DAT_0438e110 = 1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0411a0b8);
  pthread_cond_broadcast((pthread_cond_t *)&DAT_0411a0d8);
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_0411a0f8);
  return iVar1;
}


