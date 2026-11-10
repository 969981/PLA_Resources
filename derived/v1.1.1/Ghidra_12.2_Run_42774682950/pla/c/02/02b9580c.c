/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b9580c; name: FUN_02b9580c
 */


void FUN_02b9580c(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  if (*param_2 == '\0') {
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x80);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x88) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x74));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x88) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0x88) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b95880;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x88) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b95880:
  lVar5 = 0;
  if (*param_2 != '\0') {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (*(char *)(lVar5 + 0x88) != '\0') {
    FUN_02b95968(param_1 + 0xd0,*(undefined4 *)(lVar5 + 0x80));
  }
  if (*(char *)(lVar5 + 0x89) != '\0') {
    FUN_02b95968(param_1 + 0xd0,*(undefined4 *)(lVar5 + 0x84));
  }
  local_38 = *(undefined8 *)(param_2 + 8);
  FUN_02b96b00(param_1 + 8,&local_38);
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x88);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x88) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar5 || *(long *)(param_1 + 0x88) != lVar6) {
      ClearExclusiveLocal();
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x88);
      goto LAB_02b9592c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x84) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_02b95910;
LAB_02b9592c:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar5 && *(long *)(param_1 + 0x88) == lVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x84) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b9592c;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar5 = lVar2;
    lVar6 = *(long *)(param_1 + 0x88);
  } while (!bVar4);
LAB_02b95910:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x74));
  return;
}


