/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e75fe0; name: FUN_02e75fe0
 */


undefined8 FUN_02e75fe0(ulong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  plVar4 = DAT_0440a128;
  lVar5 = *DAT_0440a128;
  lVar6 = DAT_0440a128[1];
  if (lVar5 != lVar6) {
    FUN_02e7de5c(DAT_0440a128,0,4);
    piVar1 = (int *)((long)plVar4 + 0x9c);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (0 < *piVar1) {
      uVar7 = 0;
      do {
        nn::os::SleepThread((uVar7 >> 7) * 1000000);
        uVar7 = (ulong)((int)uVar7 + 1);
      } while (0 < *piVar1);
    }
    piVar1 = (int *)((long)plVar4 + 0x7c);
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
  if ((DAT_0440a1c8._5_1_ == '\0') && ((param_1 & 1) != 0)) {
    FUN_02e7e250(plVar4);
  }
  else if (lVar5 != lVar6) {
    nn::os::SignalEvent((EventType *)&DAT_0440b270);
  }
  return 1;
}


