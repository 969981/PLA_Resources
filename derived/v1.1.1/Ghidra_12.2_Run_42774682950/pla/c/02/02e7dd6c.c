/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7dd6c; name: FUN_02e7dd6c
 */


undefined8 FUN_02e7dd6c(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if (lVar4 != lVar5) {
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
      uVar6 = 0;
      do {
        nn::os::SleepThread((uVar6 >> 7) * 1000000);
        uVar6 = (ulong)((int)uVar6 + 1);
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
  }
  if ((DAT_0440a1c8._5_1_ == '\0') && ((param_2 & 1) != 0)) {
    FUN_02e7e250(param_1);
  }
  else if (lVar4 != lVar5) {
    nn::os::SignalEvent((EventType *)&DAT_0440b270);
  }
  return 1;
}


