/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824760; name: FUN_00824760
 */


void FUN_00824760(long *param_1)

{
  FUN_0081e7d0();
  *param_1 = (long)(PTR_DAT_04377c60 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}


