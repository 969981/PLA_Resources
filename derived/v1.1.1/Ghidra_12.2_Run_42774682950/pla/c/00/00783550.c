/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783550; name: thunk_FUN_00784130
 */


uint thunk_FUN_00784130(undefined8 *param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined4 uVar3;
  
  pMVar1 = (MutexType *)(param_1 + 1);
  nn::os::LockMutex(pMVar1);
  *(undefined4 *)(param_1 + 5) = 1;
  nn::os::UnlockMutex(pMVar1);
  uVar2 = (**(code **)*param_1)(param_1,param_2);
  nn::os::LockMutex(pMVar1);
  uVar3 = 2;
  if ((uVar2 & 1) != 0) {
    uVar3 = 3;
  }
  *(undefined4 *)(param_1 + 5) = uVar3;
  nn::os::UnlockMutex(pMVar1);
  return uVar2 & 1;
}


