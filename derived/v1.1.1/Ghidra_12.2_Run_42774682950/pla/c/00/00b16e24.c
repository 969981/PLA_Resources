/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b16e24; name: FUN_00b16e24
 */


void FUN_00b16e24(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_48;
  
  plVar6 = (long *)(param_1 + 0x220);
  lVar5 = *plVar6;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar2 = false;
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + 0x210;
    lVar5 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x214));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00b16ea0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00b16ea0:
    bVar2 = true;
  }
  plVar4 = *(long **)(param_1 + 0x230);
  for (plVar6 = *(long **)(param_1 + 0x228); plVar6 != plVar4; plVar6 = plVar6 + 2) {
    FUN_00b16e24(plVar6[1],param_2);
    local_48 = param_2;
    FUN_00b16f18(*plVar6 + 0xf0,&local_48);
  }
  if (bVar2) {
    *(undefined8 *)(lVar3 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar3 + 4));
  }
  return;
}


