/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62750; name: FUN_02c62750
 */


void FUN_02c62750(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort *puVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  ushort local_6c;
  ushort local_6a [13];
  
  puVar11 = *(ushort **)(param_2 + 0x58);
  FUN_02c80efc(*(undefined8 *)(param_1 + 0x98),puVar11);
  FUN_02c7ead4(*(undefined8 *)(param_1 + 0x98),1);
  uVar4 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  lVar12 = *(long *)(param_1 + 0x98);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar12 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c627e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c627e4:
  uVar5 = FUN_02c69ba8(lVar12);
  *(undefined8 *)(lVar12 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x24));
  FUN_02c51f70(&local_6c,uVar4,uVar5);
  uVar8 = *puVar11;
  if (uVar8 == local_6c) {
    puVar7 = &local_6c;
    do {
      if (uVar8 == 0x10) {
        puVar9 = puVar11 + 1;
        uVar10 = (ulong)*puVar9;
        lVar6 = uVar10 * 2 + 4;
        puVar11 = puVar11 + uVar10 + 2;
        while (lVar6 != 0) {
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -2;
          uVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          if (uVar8 != *puVar7) {
            return;
          }
        }
        uVar8 = *puVar11;
      }
      if (uVar8 == 0) {
        FUN_02c7ead4(*(undefined8 *)(param_1 + 0x98),0);
        return;
      }
      puVar11 = puVar11 + 1;
      uVar8 = *puVar11;
      puVar7 = puVar7 + 1;
    } while (uVar8 == *puVar7);
  }
  return;
}


