/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01143e80; name: FUN_01143e80
 */


void FUN_01143e80(long param_1,long param_2)

{
  bool bVar1;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x450));
  bVar1 = *(int *)(param_2 + 0x440) == 2;
  if (bVar1) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x444);
  }
  *(bool *)param_1 = bVar1;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x450));
  return;
}


