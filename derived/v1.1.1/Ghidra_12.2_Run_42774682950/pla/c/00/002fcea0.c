/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fcea0; name: FUN_002fcea0
 */


void FUN_002fcea0(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (((DAT_04399840 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04399840), iVar3 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_04399858,false,0);
    FUN_00100250(PTR__Mutex_04373970,&DAT_04399858,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_04399840);
  }
  if (((DAT_04399848 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04399848), iVar3 != 0)) {
    DAT_04399850 = 0;
    __cxa_guard_release(&DAT_04399848);
  }
  nn::os::LockMutex((MutexType *)&DAT_04399858);
  iVar3 = DAT_04399838 + 1;
  uVar2 = DAT_04399838 & 0xff;
  DAT_04399838 = iVar3;
  if (uVar2 == 0xff) {
    lVar4 = nn::os::GetSystemTick();
    uVar5 = nn::os::ConvertToTimeSpan(lVar4 - DAT_04399850);
    uVar1 = ((long)uVar5 >> 0x20) * 0xd7b634db + ((uVar5 & 0xffffffff) * 0xd7b634db >> 0x20);
    if (((long)(((long)uVar5 >> 0x20) * 0x431bde82 + ((long)uVar1 >> 0x20) +
               ((uVar5 & 0xffffffff) * 0x431bde82 + (uVar1 & 0xffffffff) >> 0x20)) >> 0x12) -
        ((long)uVar5 >> 0x3f) < 100) {
      nn::os::UnlockMutex((MutexType *)&DAT_04399858);
      *(int *)PTR_DAT_04373968 = *(int *)PTR_DAT_04373968 + 1;
      nn::os::SleepThread(20000000);
      goto LAB_002fcfc4;
    }
LAB_002fcf80:
    nn::os::UnlockMutex((MutexType *)&DAT_04399858);
  }
  else {
    if (uVar2 != 0) goto LAB_002fcf80;
    DAT_04399850 = nn::os::GetSystemTick();
    nn::os::UnlockMutex((MutexType *)&DAT_04399858);
  }
  if (param_3 == 0) {
    nn::os::YieldThread();
  }
LAB_002fcfc4:
  nnsocketPoll(param_1,param_2,param_3);
  return;
}


