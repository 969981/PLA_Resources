/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c9484; name: FUN_008c9484
 */


void FUN_008c9484(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_54;
  undefined1 auStack_50 [16];
  undefined8 local_38;
  
  local_38 = param_5;
  FUN_02bcde80(auStack_50,*(undefined8 *)(param_1 + 0x150),0);
  uStack_78 = *(undefined8 *)(param_2 + 8);
  local_80 = param_1 + 0x158;
  local_70 = *(undefined8 *)(param_3 + 8);
  uStack_68 = *(undefined8 *)(param_4 + 8);
  FUN_008c95b0(&local_60,&local_80,&local_38,param_6);
  FUN_0014ff10(local_60,~local_54);
  FUN_02bcdf00(auStack_50);
  if (*(char *)(param_1 + 0x192) == '\0') {
    lVar4 = FUN_0107dd34(param_1);
    lVar5 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar4 + 0x50);
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x44));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_008c9558;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_008c9558:
    FUN_02bcde80(&local_80,*(undefined8 *)(lVar4 + 8),0);
    *(undefined1 *)(lVar4 + 0x58) = 0;
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 8),5,0x14);
    FUN_02bcdf00(&local_80);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x44));
  }
  return;
}


