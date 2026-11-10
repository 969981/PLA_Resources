/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b74be4; name: FUN_00b74be4
 */


void FUN_00b74be4(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  
  lVar2 = *param_1;
  FUN_00b74e00(param_1[1] + 0x310);
  if ((*(byte *)(lVar2 + 0x79) & 1) != 0) {
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar2 + 0x90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x84));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00b74c54;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00b74c54:
  puVar9 = *(undefined8 **)(lVar2 + 0x98);
  puVar3 = *(undefined8 **)(lVar2 + 0xa0);
  if (puVar9 != puVar3) {
    do {
      if ((*(byte *)(lVar2 + 0x79) & 1) == 0) {
        (*(code *)*puVar9)(puVar9 + 4);
      }
      if ((*(byte *)(lVar2 + 0x79) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar9[0x10])();
        *(int *)(lVar2 + 0x7c) = *(int *)(lVar2 + 0x7c) + 1;
      }
      puVar9 = puVar9 + 0x12;
    } while (puVar3 != puVar9);
    puVar9 = *(undefined8 **)(lVar2 + 0x98);
    puVar3 = *(undefined8 **)(lVar2 + 0xa0);
    while (puVar6 = puVar3, puVar6 != puVar9) {
      pcVar8 = (code *)puVar6[-0x11];
      puVar3 = puVar6 + -0x12;
      if (pcVar8 != (code *)0x0) {
        puVar6[-0x10] = 0;
        puVar6[-0xf] = 0;
        puVar6[-0x12] = 0;
        puVar6[-0x11] = 0;
        (*pcVar8)(puVar6 + -0xe);
      }
    }
  }
  *(undefined8 **)(lVar2 + 0xa0) = puVar9;
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar2 + 0x84));
  return;
}


