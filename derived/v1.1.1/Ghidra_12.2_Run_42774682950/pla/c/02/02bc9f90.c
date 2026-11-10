/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc9f90; name: _INIT_411
 */


void _INIT_411(void)

{
  nn::os::InitializeMutex((MutexType *)&DAT_043f1110,false,0);
  FUN_00100250(PTR__Mutex_04373970,&DAT_043f1110,&PTR_LOOP_0411a000);
  FUN_00100250(&LAB_02bc7d80,&DAT_043f1130,&PTR_LOOP_0411a000);
  return;
}


