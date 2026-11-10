/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71690; name: FUN_02e71690
 */


void FUN_02e71690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042a6fb0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3d),true,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x41));
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x44),true,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x48));
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


