/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a78474; name: FUN_02a78474
 */


void FUN_02a78474(long param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined1 local_34 [4];
  
  if ((*(byte *)(param_1 + 0x7a) & 1) == 0) {
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x90);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x84));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02a784e8;
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
LAB_02a784e8:
    puVar8 = *(undefined8 **)(param_1 + 0xd0);
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar8 != puVar2) {
      do {
        if ((*(byte *)(param_1 + 0x7a) & 1) == 0) {
          local_34[0] = *param_2;
          (*(code *)*puVar8)(puVar8 + 4,local_34);
        }
        if ((*(byte *)(param_1 + 0x7a) & 1) != 0) {
          (*(code *)**(undefined8 **)puVar8[0x10])();
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        puVar8 = puVar8 + 0x12;
      } while (puVar2 != puVar8);
      puVar8 = *(undefined8 **)(param_1 + 0xd0);
      puVar2 = *(undefined8 **)(param_1 + 0xd8);
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
    *(undefined8 **)(param_1 + 0xd8) = puVar8;
    *(undefined1 *)(param_1 + 0x78) = *param_2;
    *(undefined1 *)(param_1 + 0x79) = 1;
    *(undefined1 *)(param_1 + 0x68) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x84));
  }
  return;
}


