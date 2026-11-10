/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ef8a0; name: FUN_002ef8a0
 */


bool FUN_002ef8a0(pthread_cond_t *param_1,pthread_mutex_t *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  timespec local_40;
  
  auVar3 = FUN_002eefd0(param_4 >> 0x20);
  iVar1 = FUN_002eef40(param_3,param_4,auVar3._0_8_,auVar3._8_8_);
  if (iVar1 == 0) {
    iVar1 = pthread_cond_wait(param_1,param_2);
  }
  else {
    auVar2 = FUN_002ef4e0(param_3,param_4,1);
    local_40.tv_sec = auVar2._0_8_;
    local_40.tv_nsec = (long)auVar2._8_4_;
    iVar1 = pthread_cond_timedwait(param_1,param_2,&local_40);
  }
  if (((iVar1 != 0) && (iVar1 != 0xb)) && (iVar1 != 0x6e)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/sync_posix.cc",0x95,2,
                 "assertion failed: %s","err == 0 || err == ETIMEDOUT || err == EAGAIN");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return iVar1 == 0x6e;
}


