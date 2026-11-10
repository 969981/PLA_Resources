/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5abd8; name: FUN_02c5abd8
 */


void FUN_02c5abd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_5c [28];
  
  FUN_02c7b308(*(undefined8 *)(param_1 + 0x98),*(undefined1 *)(DAT_04407c08 + 600));
  FUN_02c5b610(param_1);
  uVar4 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  lVar7 = *(long *)(param_1 + 0x98);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar7 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c5ac6c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c5ac6c:
  uVar5 = FUN_02c69ba8(lVar7);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x24));
  FUN_02c51f70(auStack_5c,uVar4,uVar5);
  FUN_02c80efc(*(undefined8 *)(param_1 + 0x98),auStack_5c);
  FUN_02c7ead4(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02c5bb1c(param_1,1);
  uVar4 = FUN_02c66e84(*(undefined8 *)(param_1 + 0x98));
  FUN_02c788b4(*(undefined8 *)(param_1 + 0x98),uVar4);
  FUN_02c77f1c(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02c60328(param_1);
  return;
}


