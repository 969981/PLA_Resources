/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011482f0; name: FUN_011482f0
 */


void FUN_011482f0(long param_1,int param_2)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x140));
  if ((*(int **)(param_1 + 0x120) != (int *)0x0) && (**(int **)(param_1 + 0x120) == param_2)) {
    FUN_0114ec60();
    lVar1 = *(long *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (lVar1 != 0) {
      FUN_0114e1c0(param_1 + 0x128);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x140));
  return;
}


