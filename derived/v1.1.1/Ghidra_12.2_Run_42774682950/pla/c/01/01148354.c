/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01148354; name: FUN_01148354
 */


bool FUN_01148354(long param_1,undefined4 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_24;
  
  local_24 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  if (*(long *)(param_1 + 0x160) == 0) {
    FUN_01148430(&local_50,*(undefined8 *)(param_1 + 0x98),param_1 + 0xa0,&local_24,param_1 + 0xa8);
    lVar1 = local_50;
    local_50 = 0;
    lVar3 = *(long *)(param_1 + 0x160);
    *(long *)(param_1 + 0x160) = lVar1;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x170) = local_40;
      *(undefined8 *)(param_1 + 0x178) = local_38;
      *(undefined8 *)(param_1 + 0x168) = local_48;
      local_50 = 0;
    }
    else {
      FUN_0114e450(param_1 + 0x168);
      lVar1 = local_50;
      *(undefined8 *)(param_1 + 0x168) = local_48;
      *(undefined8 *)(param_1 + 0x170) = local_40;
      *(undefined8 *)(param_1 + 0x178) = local_38;
      local_50 = 0;
      if (lVar1 != 0) {
        FUN_0114e450(&local_48);
      }
    }
    bVar2 = *(long *)(param_1 + 0x160) != 0;
  }
  else {
    bVar2 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  return bVar2;
}


