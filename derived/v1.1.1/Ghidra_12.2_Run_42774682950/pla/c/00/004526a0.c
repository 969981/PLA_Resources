/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004526a0; name: FUN_004526a0
 */


void FUN_004526a0(long param_1)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  *(pthread_t *)(param_1 + 0x20) = pVar1;
  return;
}


