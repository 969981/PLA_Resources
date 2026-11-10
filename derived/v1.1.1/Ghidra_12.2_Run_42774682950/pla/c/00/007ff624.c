/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff624; name: FUN_007ff624
 */


void FUN_007ff624(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043776b0 + 0x48;
  *param_1 = (long)(PTR_DAT_043776b0 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[0xb] = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xc));
  FUN_007f0220(param_1 + 1);
  return;
}


