/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ecf4; name: FUN_02e8ecf4
 */


void FUN_02e8ecf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a7dc8;
  FUN_02e9b284(param_1 + 1);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd),true,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_02e97ef4(param_1 + 0x1f);
  return;
}


