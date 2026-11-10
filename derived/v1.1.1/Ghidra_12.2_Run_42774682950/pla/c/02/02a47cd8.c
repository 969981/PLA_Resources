/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a47cd8; name: FUN_02a47cd8
 */


void FUN_02a47cd8(long *param_1,long param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  undefined1 *local_50;
  byte *local_48;
  undefined1 auStack_38 [8];
  
  local_50 = &DAT_cbf29ce484222645;
  bVar1 = *param_3;
  pbVar7 = param_3;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar7;
  }
  local_48 = param_3;
  lVar4 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_2 + 0x60);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x54));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a47d7c;
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
LAB_02a47d7c:
  plVar5 = (long *)FUN_02a47e0c(param_2 + 0x68,&local_50);
  plVar5 = (long *)*plVar5;
  *param_1 = (long)plVar5;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)FUN_02a489b8(auStack_38,*(undefined8 *)(param_2 + 8),&local_48);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    *param_1 = (long)plVar5;
    plVar6 = (long *)FUN_02a47e0c(param_2 + 0x68,&local_50);
    *plVar6 = (long)plVar5;
  }
  else {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x54));
  return;
}


