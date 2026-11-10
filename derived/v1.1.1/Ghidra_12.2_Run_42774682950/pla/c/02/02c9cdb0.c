/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9cdb0; name: FUN_02c9cdb0
 */


int FUN_02c9cdb0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  
  lVar4 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c9ce14;
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
LAB_02c9ce14:
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x518);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c9ce5c;
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
LAB_02c9ce5c:
  if (*(long *)(param_1 + 0x4e0) == 0) {
    iVar7 = *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x4e0) + -1;
    iVar7 = *(int *)(param_1 + lVar4 * 4 + 0xe0);
    *(long *)(param_1 + 0x4e0) = lVar4;
  }
  piVar8 = (int *)(param_1 + 0xd0);
  uVar6 = (ulong)((long)iVar7 - (long)*piVar8) >> 3 & 0x1ffffffffffffff8;
  *(ulong *)((long)piVar8 + uVar6 + 0x418) =
       1L << ((long)iVar7 - (long)*piVar8 & 0x3fU) | *(ulong *)((long)piVar8 + uVar6 + 0x418);
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  *(undefined8 *)(param_1 + 0x518) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x50c));
  FUN_00282b44(*(undefined8 *)(param_1 + 0x80),param_1 + 0x60,
               *(undefined8 *)(*(long *)(param_2 + 0x250) + 0x58),iVar7,1,0);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x98) + (long)iVar7 * 8);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(char *)(lVar4 + 9) != '\0') {
      lVar5 = lVar4;
    }
  }
  FUN_00278b98(lVar5,&LAB_02c9b5fc,param_1);
  *(undefined8 *)(param_1 + 200) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xbc));
  return iVar7;
}


