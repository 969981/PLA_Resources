/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114484c; name: FUN_0114484c
 */


undefined4 FUN_0114484c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x60);
  uVar1 = 0;
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x450));
    uVar1 = *(undefined4 *)(lVar2 + 0x440);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x450));
  }
  return uVar1;
}


