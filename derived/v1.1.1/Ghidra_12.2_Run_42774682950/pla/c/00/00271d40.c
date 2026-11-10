/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271d40; name: _INIT_26
 */


void _INIT_26(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372e98;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_04372e98,false,0);
  FUN_00100250(PTR_LAB_04372ec0,puVar1,&PTR_LOOP_0411a000);
  return;
}


