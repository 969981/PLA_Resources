/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c34180; name: _INIT_328
 */


void _INIT_328(void)

{
  nn::os::InitializeMutex((MutexType *)&DAT_043d30c8,false,0);
  FUN_00100250(PTR__Mutex_04373970,&DAT_043d30c8,&PTR_LOOP_0411a000);
  return;
}


