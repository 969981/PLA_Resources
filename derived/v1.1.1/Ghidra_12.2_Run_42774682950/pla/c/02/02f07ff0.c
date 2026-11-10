/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07ff0; name: _INIT_480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_480(void)

{
  DAT_0440ab10 = 0;
  _DAT_0440ab18 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_0440ab20,true,0);
  FUN_00100250(PTR_LAB_04388788,&DAT_0440ab20,&PTR_LOOP_0411a000);
  DAT_0440ab40 = 0;
  _DAT_0440ab48 = 0;
  return;
}


