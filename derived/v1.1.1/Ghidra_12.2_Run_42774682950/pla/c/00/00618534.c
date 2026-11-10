/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00618534; name: FUN_00618534
 */


void FUN_00618534(undefined8 param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_2 + 8));
  FUN_00783fac(param_1,param_2 + 0x28);
  nn::os::UnlockMutex((MutexType *)(param_2 + 8));
  return;
}


