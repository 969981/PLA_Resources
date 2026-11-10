/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082494c; name: FUN_0082494c
 */


void FUN_0082494c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377c70 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 4));
  FUN_0081e8a8(param_1);
  operator_delete(param_1);
  return;
}


