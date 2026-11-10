/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c65650; name: FUN_02c65650
 */


void FUN_02c65650(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x98);
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c656b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c656b8:
  FUN_02c661d4(lVar6,param_2,0);
  *(undefined8 *)(lVar6 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x24));
  FUN_02c5acfc(param_1);
  lVar5 = *(long *)(param_1 + 0x98);
  bVar3 = *(char *)(lVar5 + 0x19) == '\0';
  if (bVar3) {
    FUN_02c66480();
    lVar5 = *(long *)(param_1 + 0x98);
  }
  FUN_02c65bf0(lVar5);
  FUN_02c5bb1c(param_1,1);
  uVar4 = FUN_02c66e84(*(undefined8 *)(param_1 + 0x98));
  FUN_02c788b4(*(undefined8 *)(param_1 + 0x98),uVar4);
  FUN_02c77f1c(*(undefined8 *)(param_1 + 0x98),0);
  FUN_02c60328(param_1);
  if ((bVar3) && (*(char *)(*(long *)(param_1 + 0x98) + 0x19) != '\0')) {
    FUN_02c66640();
    return;
  }
  return;
}


