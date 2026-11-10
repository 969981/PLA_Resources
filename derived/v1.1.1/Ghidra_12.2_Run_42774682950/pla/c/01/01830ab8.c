/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01830ab8; name: FUN_01830ab8
 */


void FUN_01830ab8(undefined1 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar1 = (long *)(param_2 + 0x280);
  lVar6 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar3 = false;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x274));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01830b2c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01830b2c:
    bVar3 = true;
  }
  *param_1 = 0;
  if (*(char *)(param_2 + 0x290) != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x2c8);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x2b8);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x2a8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x2a0);
    uVar5 = *(undefined8 *)(param_2 + 0x2c0);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x2b0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    *param_1 = 1;
  }
  if (bVar3) {
    *(undefined8 *)(param_2 + 0x280) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x274));
    return;
  }
  return;
}


