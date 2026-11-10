/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f4ac24; name: FUN_01f4ac24
 */


void FUN_01f4ac24(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar7 = *(undefined8 *)(param_1 + 0x150);
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
  }
  puVar2 = (undefined8 *)(lVar5 + 0x20);
  local_50 = *puVar2;
  local_48 = *(undefined8 *)(lVar5 + 0x28);
  *puVar2 = uVar7;
  *(undefined2 *)(lVar5 + 0x28) = 1;
  local_80 = param_1 + 0x158;
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(undefined8 *)(param_3 + 8);
  uStack_68 = *(undefined8 *)(param_4 + 8);
  FUN_01f4adf8(&local_60,&local_80);
  FUN_0014ff10(local_60,~local_54);
  *puVar2 = local_50;
  *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_48;
  if (*(char *)(param_1 + 0x192) == '\0') {
    lVar8 = *(long *)(param_1 + 0x110);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x128);
    }
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar8 + 0x50);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x44));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01f4ad48;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01f4ad48:
    lVar6 = *(long *)(lVar8 + 8);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
    }
    plVar1 = (long *)(lVar5 + 0x20);
    local_80 = *plVar1;
    local_78 = *(undefined8 *)(lVar5 + 0x28);
    *plVar1 = lVar6;
    *(undefined2 *)(lVar5 + 0x28) = 1;
    *(undefined1 *)(lVar8 + 0x58) = 0;
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 8),5,0x14);
    *plVar1 = local_80;
    *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_78;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x44));
  }
  return;
}


