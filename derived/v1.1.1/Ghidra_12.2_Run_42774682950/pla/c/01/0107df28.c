/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107df28; name: FUN_0107df28
 */


void FUN_0107df28(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined2 local_38;
  
  lVar10 = *(long *)(param_1 + 0x110);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_1 + 0x128);
  }
  uVar5 = *(undefined1 *)(param_1 + 0x192);
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar10 + 0x50);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x44));
        while (*plVar1 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0107df88;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0107df88:
  uVar9 = *(undefined8 *)(lVar10 + 8);
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x20) == 0) {
    *(undefined8 *)(lVar8 + 0x20) = DAT_043f1798;
  }
  puVar2 = (undefined8 *)(lVar8 + 0x20);
  uVar3 = *puVar2;
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  *puVar2 = uVar9;
  *(undefined2 *)(lVar8 + 0x28) = 1;
  *(undefined1 *)(lVar10 + 0x58) = uVar5;
  FUN_001530e0(*(undefined8 *)(*(long *)(lVar10 + 0x10) + 8),5,0x14);
  *puVar2 = uVar3;
  local_38 = (undefined2)uVar4;
  *(undefined2 *)(lVar8 + 0x28) = local_38;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x44));
  return;
}


