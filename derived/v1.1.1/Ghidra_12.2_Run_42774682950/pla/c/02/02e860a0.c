/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e860a0; name: FUN_02e860a0
 */


undefined4 FUN_02e860a0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  FUN_02e74de0(0);
  if (DAT_0440a1c8._5_1_ == '\0') {
    FUN_02eb3260();
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_02f3314c(param_1 + 0x10);
  }
  if (*param_1 != param_1[1]) {
    FUN_02e7de5c(param_1,0,4);
    piVar1 = (int *)((long)param_1 + 0x9c);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (0 < *piVar1) {
      uVar5 = 0;
      do {
        nn::os::SleepThread((uVar5 >> 7) * 1000000);
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (0 < *piVar1);
    }
    piVar1 = (int *)((long)param_1 + 0x7c);
    DataMemoryBarrier(2,3);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalEvent((EventType *)&DAT_0440b270);
  }
  return uVar4;
}


