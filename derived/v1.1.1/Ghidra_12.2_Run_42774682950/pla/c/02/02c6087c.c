/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c6087c; name: FUN_02c6087c
 */


undefined8 FUN_02c6087c(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  
  uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  if ((uVar4 != param_2) &&
     (uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1), uVar4 != param_2)) {
    uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
    if (uVar4 == param_2) {
      return 2;
    }
    uVar4 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
    if (uVar4 != param_2) {
      iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
      if (iVar5 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
        iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
        if (iVar5 != 0) {
          uVar9 = 2;
          iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
          if (iVar5 != 0) {
            uVar9 = 3;
            iVar5 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
            if (iVar5 != 0) {
              return 1;
            }
          }
        }
      }
      lVar8 = (&DAT_0428af30)[(ulong)param_2 * 6];
      if (lVar8 == 0) {
        plVar6 = &DAT_0428af30;
      }
      else {
        plVar6 = &DAT_0428af30;
        if (*(char *)(lVar8 + 0x1e1) != '\0') {
          plVar6 = &DAT_0428af30 + (ulong)param_2 * 6;
        }
      }
      piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar7 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined1 *)((long)piVar1 + uVar7);
      }
      FUN_02c7c9c8(*(undefined8 *)(param_1 + 0x98),uVar9,param_2);
      lVar11 = *(long *)(param_1 + 0x98);
      lVar8 = nn::os::GetCurrentThread();
      plVar6 = (long *)(lVar11 + 0x30);
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x24));
            while (*plVar6 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02c60a28;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02c60a28:
      *(undefined8 *)(lVar11 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x24));
      FUN_02c7cd1c(*(undefined8 *)(param_1 + 0x98),uVar9,uVar10);
      return 0;
    }
  }
  return 2;
}


