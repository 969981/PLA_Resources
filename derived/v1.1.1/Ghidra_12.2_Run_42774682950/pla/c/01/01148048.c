/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01148048; name: FUN_01148048
 */


bool FUN_01148048(long param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_24;
  
  local_24 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x140));
  if (*(long *)(param_1 + 0x120) == 0) {
    FUN_01148100(&local_48,*(undefined8 *)(param_1 + 0x98),param_1 + 0xa0,&local_24,param_1 + 0xa8);
    lVar3 = local_48;
    local_48 = 0;
    lVar2 = *(long *)(param_1 + 0x120);
    *(long *)(param_1 + 0x120) = lVar3;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x130) = uStack_38;
      *(undefined8 *)(param_1 + 0x138) = local_30;
      *(undefined8 *)(param_1 + 0x128) = local_40;
    }
    else {
      FUN_0114e1c0(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = local_40;
      lVar3 = *(long *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x130) = uStack_38;
      *(undefined8 *)(param_1 + 0x138) = local_30;
    }
    bVar1 = lVar3 != 0;
  }
  else {
    bVar1 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x140));
  return bVar1;
}


