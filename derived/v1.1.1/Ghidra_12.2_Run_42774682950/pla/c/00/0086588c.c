/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086588c; name: FUN_0086588c
 */


void FUN_0086588c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04378270 + 0x10);
  FUN_0086be28(param_1 + 0x28b);
  FUN_007e5c20(param_1 + 0x284);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x27d));
  FUN_0085a6a8(param_1);
  return;
}


