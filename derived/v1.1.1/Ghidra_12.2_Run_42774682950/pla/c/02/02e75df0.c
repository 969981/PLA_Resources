/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e75df0; name: FUN_02e75df0
 */


void FUN_02e75df0(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_02ea5470(param_1 + 0x60);
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x38));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x18));
  FUN_02f59e60(0x10,param_1);
  return;
}


