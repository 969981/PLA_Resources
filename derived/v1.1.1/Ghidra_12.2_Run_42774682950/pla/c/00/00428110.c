/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00428110; name: FUN_00428110
 */


void FUN_00428110(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  pthread_t local_30;
  ulong local_28;
  timespec local_20;
  
  local_28 = 0;
  local_30 = pthread_self();
  uVar1 = FUN_00404e80();
  if (uVar1 == 0) {
    iVar2 = clock_gettime(7,&local_20);
    if (iVar2 == 0) {
      local_20.tv_sec = local_20.tv_nsec + (local_20.tv_sec << 0x20);
    }
    else {
      FUN_00428290(&local_20);
    }
  }
  else {
    local_20.tv_sec = (__time_t)uVar1;
  }
  local_28 = local_20.tv_sec;
  FUN_004278d0(param_1,&local_30,0x10,0);
  return;
}


