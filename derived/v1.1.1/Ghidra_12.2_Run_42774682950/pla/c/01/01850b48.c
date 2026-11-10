/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01850b48; name: FUN_01850b48
 */


void FUN_01850b48(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x280);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x274));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01850b9c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01850b9c:
  FUN_01850c78(*(undefined8 *)(param_1 + 0x70),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x170),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x90),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 400),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0xb0),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x1b0),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0xd0),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x1d0),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0xf0),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x1f0),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x110),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x210),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x130),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x230),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x150),param_2);
  FUN_01850c78(*(undefined8 *)(param_1 + 0x250),param_2);
  *(undefined8 *)(param_1 + 0x280) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x274));
  return;
}


