/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f3a0; name: _INIT_814
 */


void _INIT_814(void)

{
  DAT_04434b68 = 0xff00;
  nn::os::InitializeMutex((MutexType *)&DAT_04434b70,true,0);
  FUN_00100250(&LAB_0315cd40,&DAT_04434b70,&PTR_LOOP_0411a000);
  return;
}


