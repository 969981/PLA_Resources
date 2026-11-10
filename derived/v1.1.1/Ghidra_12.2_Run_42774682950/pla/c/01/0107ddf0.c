/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107ddf0; name: FUN_0107ddf0
 */


void FUN_0107ddf0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 local_40;
  long local_38;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x50);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0107de48;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0107de48:
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar6 = tpidr_el0;
  if (*(long *)(lVar6 + 0x20) == 0) {
    *(undefined8 *)(lVar6 + 0x20) = DAT_043f1798;
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  uVar3 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x20) = uVar7;
  *(undefined2 *)(lVar6 + 0x28) = 1;
  local_38 = param_1 + 0x30;
  (*(code *)*param_2)(param_2 + 4,&local_38);
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_001530e0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8),5,0x14);
  }
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  local_40 = (undefined2)uVar3;
  *(undefined2 *)(lVar6 + 0x28) = local_40;
  *(undefined8 *)(param_1 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return;
}


