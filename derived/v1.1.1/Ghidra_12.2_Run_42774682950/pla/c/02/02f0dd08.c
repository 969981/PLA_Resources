/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0dd08; name: FUN_02f0dd08
 */


void FUN_02f0dd08(undefined8 *param_1)

{
  FUN_02e8ecf4();
  *param_1 = &PTR_LAB_042abda8;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x30),true,0);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x34] = 0;
  param_1[0x2e] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  DAT_0440ab98 = 0;
  return;
}


