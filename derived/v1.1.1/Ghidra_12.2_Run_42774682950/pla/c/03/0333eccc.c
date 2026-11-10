/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333eccc; name: FUN_0333eccc
 */


void FUN_0333eccc(long *param_1)

{
  *param_1 = (long)&PTR_LAB_04351108;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  FUN_0333efd8(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


