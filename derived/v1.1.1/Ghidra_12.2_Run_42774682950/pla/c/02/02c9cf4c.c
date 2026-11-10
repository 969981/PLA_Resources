/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9cf4c; name: FUN_02c9cf4c
 */


void FUN_02c9cf4c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int local_34;
  
  local_34 = param_2;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 200);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xbc));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c9cfb0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c9cfb0:
  iVar4 = local_34;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x98) + (long)local_34 * 8);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(char *)(lVar5 + 9) != '\0') {
      lVar6 = lVar5;
    }
  }
  FUN_00278ed8(lVar6,&LAB_02c9cc70,param_1);
  FUN_00282ac8(*(undefined8 *)(param_1 + 0x80),param_1 + 0x60,iVar4);
  FUN_02c9d028(param_1 + 0xd0,&local_34);
  *(undefined8 *)(param_1 + 200) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xbc));
  return;
}


