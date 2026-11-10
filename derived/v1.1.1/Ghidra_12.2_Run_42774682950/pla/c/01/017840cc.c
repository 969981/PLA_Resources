/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017840cc; name: FUN_017840cc
 */


void FUN_017840cc(uint *param_1,uint *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  puVar1 = param_1 + 0x412;
  do {
    if (*(long *)puVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40f));
        while (*(long *)puVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *(undefined8 *)puVar1 = uVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01784154;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *(undefined8 *)puVar1 = uVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01784154:
  uVar4 = *param_2 - *param_1;
  if ((1L << ((ulong)uVar4 & 0x3f) &
      *(ulong *)((long)param_1 + ((ulong)(uVar4 >> 3) & 0x1ffffff8) + 0xfb8)) != 0) {
    if (999 < *(ulong *)(param_1 + 0x3ec)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x3ec) + 4] = *param_2;
    *(long *)(param_1 + 0x3ec) = *(long *)(param_1 + 0x3ec) + 1;
    uVar6 = (ulong)(*param_2 - *param_1 >> 3) & 0x1ffffff8;
    *(ulong *)((long)param_1 + uVar6 + 0xfb8) =
         *(ulong *)((long)param_1 + uVar6 + 0xfb8) &
         (1L << ((ulong)(*param_2 - *param_1) & 0x3f) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] - 1;
  }
  param_1[0x412] = 0;
  param_1[0x413] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40f));
  return;
}


