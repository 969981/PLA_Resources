/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b741d0; name: FUN_00b741d0
 */


void FUN_00b741d0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = *param_1;
  FUN_00b73838(param_1 + 1);
  if ((*(byte *)(lVar9 + 0x79) & 1) != 0) {
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x84));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00b7423c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00b7423c:
  puVar8 = *(undefined8 **)(lVar9 + 0x98);
  puVar2 = *(undefined8 **)(lVar9 + 0xa0);
  if (puVar8 != puVar2) {
    do {
      if ((*(byte *)(lVar9 + 0x79) & 1) == 0) {
        (*(code *)*puVar8)(puVar8 + 4);
      }
      if ((*(byte *)(lVar9 + 0x79) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar8[0x10])();
        *(int *)(lVar9 + 0x7c) = *(int *)(lVar9 + 0x7c) + 1;
      }
      puVar8 = puVar8 + 0x12;
    } while (puVar2 != puVar8);
    puVar8 = *(undefined8 **)(lVar9 + 0x98);
    puVar2 = *(undefined8 **)(lVar9 + 0xa0);
    while (puVar5 = puVar2, puVar5 != puVar8) {
      pcVar7 = (code *)puVar5[-0x11];
      puVar2 = puVar5 + -0x12;
      if (pcVar7 != (code *)0x0) {
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0x12] = 0;
        puVar5[-0x11] = 0;
        (*pcVar7)(puVar5 + -0xe);
      }
    }
  }
  *(undefined8 **)(lVar9 + 0xa0) = puVar8;
  *(undefined1 *)(lVar9 + 0x78) = 1;
  *(undefined1 *)(lVar9 + 0x68) = 1;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x84));
  return;
}


