/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9d028; name: FUN_02c9d028
 */


void FUN_02c9d028(int *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*param_2 < *param_1) || (param_1[1] < *param_2)) {
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x112);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10f));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c9d0bc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c9d0bc:
  uVar5 = (long)*param_2 - (long)*param_1;
  if ((1L << (uVar5 & 0x3f) & *(ulong *)((long)param_1 + (uVar5 >> 3 & 0x1ffffffffffffff8) + 0x418))
      != 0) {
    if (0xff < *(ulong *)(param_1 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1[*(ulong *)(param_1 + 0x104) + 4] = *param_2;
    *(long *)(param_1 + 0x104) = *(long *)(param_1 + 0x104) + 1;
    uVar5 = (ulong)((long)*param_2 - (long)*param_1) >> 3 & 0x1ffffffffffffff8;
    *(ulong *)((long)param_1 + uVar5 + 0x418) =
         *(ulong *)((long)param_1 + uVar5 + 0x418) &
         (1L << ((long)*param_2 - (long)*param_1 & 0x3fU) ^ 0xffffffffffffffffU);
    param_1[3] = param_1[3] + -1;
  }
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10f));
  return;
}


