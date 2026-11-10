/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97ac0; name: _INIT_473
 */


void _INIT_473(void)

{
  nn::os::InitializeMutex((MutexType *)&DAT_0440a350,true,0);
  FUN_00100250(PTR_LAB_04388788,&DAT_0440a350,&PTR_LOOP_0411a000);
  return;
}


