/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e68e40; name: FUN_02e68e40
 */


void FUN_02e68e40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a63c8;
  FUN_02e6d2bc(param_1 + 0x55);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x51));
  FUN_02e71700(param_1);
  return;
}


