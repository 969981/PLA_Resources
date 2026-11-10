/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081477c; name: FUN_0081477c
 */


void FUN_0081477c(long param_1,undefined8 param_2)

{
  long *plVar1;
  int local_40 [4];
  undefined4 local_24;
  
  FUN_007f7bb0();
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  plVar1 = (long *)FUN_00815508(*(undefined8 *)(param_1 + 0x218));
  (**(code **)(*plVar1 + 0x10))(local_40,plVar1,param_1 + 0xc40,&local_24,0x4d8);
  if (local_40[0] == 0) {
    FUN_007fd760(param_2,param_1 + 0xc40,local_24);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


