/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004280a0; name: FUN_004280a0
 */


void FUN_004280a0(undefined8 param_1)

{
  __pid_t _Var1;
  int iVar2;
  undefined8 local_38;
  pthread_t local_30;
  long local_28;
  timespec local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  _Var1 = getpid();
  local_38 = CONCAT44(local_38._4_4_,_Var1);
  local_30 = pthread_self();
  iVar2 = clock_gettime(0,&local_20);
  if (iVar2 == 0) {
    local_20.tv_sec = local_20.tv_nsec + (local_20.tv_sec << 0x20);
  }
  else {
    FUN_00428290(&local_20);
  }
  local_28 = local_20.tv_sec;
  FUN_004278d0(param_1,&local_38,0x18,0);
  return;
}


