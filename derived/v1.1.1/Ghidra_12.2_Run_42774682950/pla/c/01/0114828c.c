/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114828c; name: FUN_0114828c
 */


undefined4 FUN_0114828c(long param_1,int param_2)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x140));
  if ((*(int **)(param_1 + 0x120) == (int *)0x0) || (**(int **)(param_1 + 0x120) != param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0114ec24();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x140));
  return uVar1;
}


