/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080f398; name: FUN_0080f398
 */


void FUN_0080f398(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377970 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x241));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x23d));
  FUN_007f4abc(param_1);
  return;
}


