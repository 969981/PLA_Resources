/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00611910; name: FUN_00611910
 */


void FUN_00611910(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  TimerEventType aTStack_70 [64];
  
  lVar1 = std::chrono::steady_clock::now();
  lVar4 = *param_1;
  uVar2 = FUN_00783cf4(param_2);
  if ((uVar2 & 1) == 0) {
    do {
      lVar3 = std::chrono::steady_clock::now();
      lVar3 = (lVar4 + lVar1) - lVar3;
      if (lVar3 < 1) {
        return;
      }
      if (lVar3 < *param_3) {
        nn::os::InitializeTimerEvent(aTStack_70,0);
        nn::os::StartOneShotTimerEvent(aTStack_70,lVar3);
        FUN_00783c10(aTStack_70);
        nn::os::FinalizeTimerEvent(aTStack_70);
        return;
      }
      nn::os::InitializeTimerEvent(aTStack_70,0);
      nn::os::StartOneShotTimerEvent(aTStack_70,*param_3);
      FUN_00783c10(aTStack_70);
      nn::os::FinalizeTimerEvent(aTStack_70);
      uVar2 = FUN_00783cf4(param_2);
    } while ((uVar2 & 1) == 0);
  }
  return;
}


