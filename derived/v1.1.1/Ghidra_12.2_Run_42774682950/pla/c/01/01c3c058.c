/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3c058; name: FUN_01c3c058
 */


bool FUN_01c3c058(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  undefined8 in_d3;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_40 [2];
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x530);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x524));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01c3c0b8;
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
LAB_01c3c0b8:
  if (*(char *)(param_1 + 0x408) == '\0') {
    FUN_009c69bc(&local_48,param_1);
    (**(code **)(*(long *)CONCAT71(uStack_47,local_48) + 0x40))();
    plVar1 = (long *)CONCAT71(uStack_47,local_48);
    local_40[0] = in_d3;
    if (plVar1 != (long *)0x0) {
      lVar7 = plVar1[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar1 + 0x20))();
      }
    }
    local_48 = 0;
    bVar6 = FUN_01c3ceb0(param_1,local_40,&local_48,param_1 + 0x340,1);
    bVar6 = bVar6 & 1;
    *(byte *)(param_1 + 0x409) = bVar6;
    *(undefined1 *)(param_1 + 0x408) = 1;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x409);
  }
  *(undefined8 *)(param_1 + 0x530) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x524));
  return bVar6 != 0;
}


