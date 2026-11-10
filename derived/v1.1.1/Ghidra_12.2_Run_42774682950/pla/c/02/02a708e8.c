/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a708e8; name: FUN_02a708e8
 */


void FUN_02a708e8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x208);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1fc));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a70950;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a70950:
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  lVar5 = param_1 + 0x68;
  for (puVar7 = *(undefined8 **)(param_1 + 0xe8); puVar7 != puVar2; puVar7 = puVar7 + 1) {
    FUN_02a711c0(lVar5,*puVar7);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x120);
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  if (puVar7 != puVar2) {
    do {
      puVar6 = puVar7 + 1;
      FUN_02a71624(lVar5,*puVar7);
      puVar7 = puVar6;
    } while (puVar2 != puVar6);
    puVar7 = *(undefined8 **)(param_1 + 0x120);
  }
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 **)(param_1 + 0x128) = puVar7;
  if ((*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) && (param_1 != param_2)) {
    FUN_02a711c0(lVar5,param_2);
  }
  if (((*(long *)(param_1 + 0xa8) == *(long *)(param_1 + 0xb0)) && (param_1 != param_3)) &&
     (*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128))) {
    FUN_02a71624(lVar5,param_3);
  }
  *(ulong *)(param_1 + 0x1e0) = *(ulong *)(param_1 + 0x1e0) & 0xfffffffffffffffc | 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1fc));
  return;
}


