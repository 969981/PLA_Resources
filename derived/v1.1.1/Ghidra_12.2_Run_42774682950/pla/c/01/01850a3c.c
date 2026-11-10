/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01850a3c; name: FUN_01850a3c
 */


void FUN_01850a3c(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_1 + 0x280);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x274));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01850aa0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01850aa0:
  iVar1 = *(int *)(*param_2 + 0x260);
  *(undefined1 *)(param_1 + iVar1 + 0x68) = 1;
  plVar7 = *(long **)(param_1 + (long)iVar1 * 0x20 + 0x70);
  plVar6 = plVar7 + 3;
  plVar5 = (long *)(**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,0x18,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)*plVar6 + 0xb8))();
  }
  *plVar5 = 0;
  FUN_01852c48(plVar6,plVar5 + 2,param_2);
  plVar5[1] = (long)plVar7;
  lVar4 = *plVar7;
  *plVar5 = lVar4;
  *(long **)(lVar4 + 8) = plVar5;
  *plVar7 = (long)plVar5;
  plVar7[2] = plVar7[2] + 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x274));
  return;
}


