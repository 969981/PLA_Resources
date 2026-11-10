/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b8264; name: FUN_032b8264
 */


void FUN_032b8264(undefined8 *param_1)

{
  MutexType *pMVar1;
  
  FUN_032b60ac();
  *param_1 = &PTR_LAB_04348930;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  pMVar1 = (MutexType *)FUN_032cf5b0(0x20);
  nn::os::InitializeMutex(pMVar1,true,0);
  param_1[5] = pMVar1;
  return;
}


