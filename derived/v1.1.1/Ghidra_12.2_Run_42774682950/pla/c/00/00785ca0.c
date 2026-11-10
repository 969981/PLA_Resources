/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00785ca0; name: FUN_00785ca0
 */


void FUN_00785ca0(undefined4 *param_1)

{
  *param_1 = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 10));
  return;
}


