/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d37d4; name: FUN_032d37d4
 */


void FUN_032d37d4(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x440));
  *(long *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x30) = param_1 + 0x40;
  *(undefined8 *)(param_1 + 0x38) = 0x8000004000000000;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (long)param_3;
  }
  *(long *)(param_1 + 0x10) = param_2 + lVar1;
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x440));
  return;
}


