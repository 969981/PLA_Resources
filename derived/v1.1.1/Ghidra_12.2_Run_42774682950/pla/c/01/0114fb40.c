/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114fb40; name: FUN_0114fb40
 */


undefined4 FUN_0114fb40(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (lVar2 != 0) {
    nn::os::LockMutex((MutexType *)(lVar2 + 0x478));
    uVar1 = *(undefined4 *)(lVar2 + 0x470);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x478));
  }
  return uVar1;
}


