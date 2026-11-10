/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60fb0; name: FUN_02c60fb0
 */


void FUN_02c60fb0(long param_1,uint param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  
  if (3 < (param_2 & 0xff)) {
    return;
  }
  lVar6 = (&DAT_0428af30)[(param_3 & 0xffffffff) * 6];
  if (lVar6 == 0) {
    plVar4 = &DAT_0428af30;
  }
  else {
    plVar4 = &DAT_0428af30;
    if (*(char *)(lVar6 + 0x1e1) != '\0') {
      plVar4 = &DAT_0428af30 + (param_3 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar4 + 0x250) + (ulong)**(uint **)(*plVar4 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar5 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined1 *)((long)piVar1 + uVar5);
  }
  FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),param_2);
  lVar8 = *(long *)(param_1 + 0x98);
  lVar6 = nn::os::GetCurrentThread();
  plVar4 = (long *)(lVar8 + 0x30);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x24));
        while (*plVar4 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c610b0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c610b0:
  *(undefined8 *)(lVar8 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x24));
  FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),param_2,uVar7);
  return;
}


