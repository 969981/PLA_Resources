/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da2978; name: FUN_00da2978
 */


void FUN_00da2978(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_1 + 0x79) & 1) != 0) {
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x90);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x84));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00da29d4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00da29d4:
  puVar8 = *(undefined8 **)(param_1 + 0x98);
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar8 != puVar2) {
    do {
      if ((*(byte *)(param_1 + 0x79) & 1) == 0) {
        (*(code *)*puVar8)(puVar8 + 4);
      }
      if ((*(byte *)(param_1 + 0x79) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar8[0x10])();
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      }
      puVar8 = puVar8 + 0x12;
    } while (puVar2 != puVar8);
    puVar8 = *(undefined8 **)(param_1 + 0x98);
    puVar2 = *(undefined8 **)(param_1 + 0xa0);
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
  *(undefined8 **)(param_1 + 0xa0) = puVar8;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x84));
  return;
}


