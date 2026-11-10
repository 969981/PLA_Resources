/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006118d0; name: FUN_006118d0
 */


void FUN_006118d0(undefined8 *param_1)

{
  TimerEventType aTStack_50 [64];
  
  nn::os::InitializeTimerEvent(aTStack_50,0);
  nn::os::StartOneShotTimerEvent(aTStack_50,*param_1);
  FUN_00783c10(aTStack_50);
  nn::os::FinalizeTimerEvent(aTStack_50);
  return;
}


