/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01148228; name: FUN_01148228
 */


undefined8 FUN_01148228(long param_1,int param_2)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x140));
  if ((*(int **)(param_1 + 0x120) == (int *)0x0) || (**(int **)(param_1 + 0x120) != param_2)) {
    uVar1 = 0;
  }
  else {
    FUN_0114ec04();
    uVar1 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x140));
  return uVar1;
}


