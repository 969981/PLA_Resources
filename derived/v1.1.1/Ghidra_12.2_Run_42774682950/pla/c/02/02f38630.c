/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f38630; name: _INIT_484
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_484(void)

{
  DAT_0442c000 = 0;
  DAT_0442c008 = 0;
  DAT_0442c010 = 0;
  _DAT_0442c018 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_0442c020,true,0);
  FUN_00100250(&LAB_02f52a98,&DAT_0442c010,&PTR_LOOP_0411a000);
  DAT_0442c040 = 0;
  DAT_0442c048 = 0;
  DAT_0442c050 = 0;
  DAT_0442c058 = 0;
  _DAT_0442c060 = 0;
  return;
}


