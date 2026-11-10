/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02decf80; name: _INIT_441
 */


void _INIT_441(void)

{
  DAT_04408fb8 = 0;
  DAT_04408fa8 = 0;
  DAT_04408fb0 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_04408fc0,true,0);
  FUN_00100250(&LAB_02dec6f0,&DAT_04408fa8,&PTR_LOOP_0411a000);
  return;
}


