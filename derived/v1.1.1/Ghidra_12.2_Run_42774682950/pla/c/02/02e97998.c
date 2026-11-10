/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97998; name: FUN_02e97998
 */


void FUN_02e97998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  FUN_02e979e0(param_1,&local_30);
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  return;
}


