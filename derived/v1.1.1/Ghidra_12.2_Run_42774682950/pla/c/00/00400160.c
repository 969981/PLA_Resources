/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00400160; name: FUN_00400160
 */


bool FUN_00400160(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1 == 0;
}


