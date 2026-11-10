/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01150638; name: FUN_01150638
 */


undefined4 FUN_01150638(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x450));
  uVar1 = *(undefined4 *)(param_1 + 0x448);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x450));
  return uVar1;
}


