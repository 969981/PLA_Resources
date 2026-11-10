/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f4abc; name: FUN_007f4abc
 */


void FUN_007f4abc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377588 + 0x10);
  FUN_007e5c20(param_1 + 0x223);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4a));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3f));
  FUN_007e5c20(param_1 + 0x39);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1f));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1b));
  FUN_00847210(param_1);
  return;
}


