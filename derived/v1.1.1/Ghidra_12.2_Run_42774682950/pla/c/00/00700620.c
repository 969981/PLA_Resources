/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00700620; name: _INIT_95
 */


void _INIT_95(void)

{
  undefined *puVar1;
  
  FUN_00100250(PTR_FUN_04376448,PTR_DAT_04376408,&PTR_LOOP_0411a000);
  puVar1 = PTR_DAT_043763f0;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_043763f0,false,0);
  FUN_00100250(PTR__Mutex_04373970,puVar1,&PTR_LOOP_0411a000);
  return;
}


