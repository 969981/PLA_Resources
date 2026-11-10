/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c614dc; name: FUN_02c614dc
 */


void FUN_02c614dc(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (((param_2 & 0xff) == (param_3 & 0xff)) || (3 < ((param_3 | param_2) & 0xff))) {
    return;
  }
  uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar5 = FUN_02c6b51c(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = FUN_02c6b1c0(uVar8,param_3);
  FUN_02c7c9c8(uVar8,param_2,uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = FUN_02c6b51c(uVar8,param_3);
  FUN_02c7cd1c(uVar8,param_2,uVar6);
  lVar9 = *(long *)(param_1 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c615e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c615e4:
  *(undefined8 *)(lVar9 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x24));
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),param_3,uVar4);
  lVar9 = *(long *)(param_1 + 0x98);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c61654;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c61654:
  *(undefined8 *)(lVar9 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),param_3,uVar5);
  return;
}


