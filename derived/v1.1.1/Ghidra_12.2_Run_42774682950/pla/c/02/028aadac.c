/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028aadac; name: FUN_028aadac
 */


ulong FUN_028aadac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3a0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x394));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028aae14;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028aae14:
  plVar1 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  plVar7 = plVar1;
  if ((plVar1 != plVar3) && (*plVar1 != *param_3)) {
    do {
      plVar7 = plVar7 + 0xb;
      if (plVar3 == plVar7) {
        plVar7 = plVar3;
        goto LAB_028aae60;
      }
    } while (*plVar7 != *param_3);
  }
LAB_028aae60:
  uVar2 = 0;
  if (plVar3 != plVar7) {
    uVar2 = (ulong)(uint)((int)((ulong)((long)plVar7 - (long)plVar1) >> 3) * -0x45d1745d) << 0x20;
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x394));
  return uVar2 | plVar3 != plVar7;
}


