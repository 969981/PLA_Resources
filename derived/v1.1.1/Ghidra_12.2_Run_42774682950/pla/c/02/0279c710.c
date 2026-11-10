/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0279c710; name: FUN_0279c710
 */


void FUN_0279c710(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  FUN_0279c9c4(param_1 + 0x130,param_2);
  if (*(int *)(param_1 + 0x70) - 1U < 3) {
    FUN_0279a83c(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


