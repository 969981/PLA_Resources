/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00861cf8; name: FUN_00861cf8
 */


void FUN_00861cf8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_043781b0 + 0x10);
  FUN_00861d38(param_1 + 0xf);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb));
  thunk_FUN_007e5dd4(param_1);
  return;
}


