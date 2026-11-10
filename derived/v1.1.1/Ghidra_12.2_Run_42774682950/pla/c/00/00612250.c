/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00612250; name: _INIT_92
 */


void _INIT_92(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04375400;
  nn::os::InitializeSemaphore((SemaphoreType *)PTR_DAT_04375400,1,1);
  FUN_00100250(PTR_LAB_04375418,puVar1,&PTR_LOOP_0411a000);
  return;
}


