/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc0d58; name: FUN_02dc0d58
 */


void FUN_02dc0d58(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pMVar1 = (MutexType *)(lVar2 + 0x260);
  nn::os::LockMutex(pMVar1);
  *(undefined1 *)(lVar2 + 0x280) = 1;
  nn::os::UnlockMutex(pMVar1);
  return;
}


