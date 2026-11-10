/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fb800; name: FUN_030fb800
 */


void FUN_030fb800(undefined4 *param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 1;
  pMVar1 = (MutexType *)FUN_032cf5b0(0x20);
  nn::os::InitializeMutex(pMVar1,true,0);
  pMVar2 = *(MutexType **)(param_1 + 2);
  *(MutexType **)(param_1 + 2) = pMVar1;
  if (pMVar2 == (MutexType *)0x0) {
    return;
  }
  nn::os::FinalizeMutex(pMVar2);
  FUN_032cf640(pMVar2,0x20);
  return;
}


