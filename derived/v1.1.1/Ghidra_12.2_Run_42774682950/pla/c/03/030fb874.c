/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fb874; name: FUN_030fb874
 */


void FUN_030fb874(long param_1)

{
  MutexType *pMVar1;
  
  pMVar1 = *(MutexType **)(param_1 + 8);
  if (pMVar1 == (MutexType *)0x0) {
    return;
  }
  nn::os::FinalizeMutex(pMVar1);
  FUN_032cf640(pMVar1,0x20);
  return;
}


