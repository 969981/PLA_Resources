/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080d800; name: FUN_0080d800
 */


void FUN_0080d800(int *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_38;
  undefined4 local_30;
  int local_28 [2];
  
  FUN_007f7c0c();
  if (*param_1 != 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x1f8));
  plVar2 = *(long **)(param_2 + 0x218);
  uVar1 = nn::ldn::GetNetworkInfo((NetworkInfo *)(plVar2 + 0x17));
  local_28[0] = (int)uVar1;
  if (local_28[0] != 0) {
    FUN_0080a2bc(&local_38,uVar1,local_28);
    FUN_007ee660(param_1,&local_38);
  }
  local_30 = 0;
  local_38 = 0x10;
  (**(code **)(*plVar2 + 0x50))(plVar2,&local_38);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f8));
  return;
}


