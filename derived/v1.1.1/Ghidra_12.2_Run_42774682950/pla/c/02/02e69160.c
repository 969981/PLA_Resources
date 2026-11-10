/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e69160; name: FUN_02e69160
 */


void FUN_02e69160(long param_1,long param_2,byte param_3)

{
  long *plVar1;
  
  if (*(byte *)(param_2 + 100) == param_3) {
    return;
  }
  if (param_3 < 0x65) {
    *(byte *)(param_2 + 100) = param_3;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  for (plVar1 = *(long **)(param_1 + 0x280); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return;
}


