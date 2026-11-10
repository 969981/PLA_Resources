/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0271b824; name: FUN_0271b824
 */


undefined4
FUN_0271b824(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
            undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  int local_38;
  undefined4 local_24;
  
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x20) = DAT_043f1798;
  }
  local_50 = *(undefined8 *)(lVar4 + 0x20);
  local_48 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  *(undefined2 *)(lVar4 + 0x28) = 1;
  local_80 = param_1 + 0x158;
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(undefined8 *)(param_3 + 8);
  uStack_68 = *(undefined8 *)(param_4 + 8);
  local_24 = param_5;
  FUN_008c96f8(&local_40,&local_80);
  FUN_0271ba58(&local_60,&local_40,&local_24,param_6);
  if ((local_40 != 0) && (local_38 != -2)) {
    FUN_00155150(local_40,0xfff0b9d8);
  }
  uVar5 = FUN_00150ba0(local_60,local_58,0);
  FUN_0014ff10(local_60,~local_54);
  *(undefined8 *)(lVar4 + 0x20) = local_50;
  *(undefined2 *)(lVar4 + 0x28) = (undefined2)local_48;
  if (*(char *)(param_1 + 0x192) == '\0') {
    lVar6 = FUN_0107dd34(param_1);
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar6 + 0x50);
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x44));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0271b9bc;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0271b9bc:
    lVar7 = *(long *)(lVar6 + 8);
    if (*(long *)(lVar4 + 0x20) == 0) {
      *(undefined8 *)(lVar4 + 0x20) = DAT_043f1798;
    }
    plVar1 = (long *)(lVar4 + 0x20);
    local_80 = *plVar1;
    local_78 = *(undefined8 *)(lVar4 + 0x28);
    *plVar1 = lVar7;
    *(undefined2 *)(lVar4 + 0x28) = 1;
    *(undefined1 *)(lVar6 + 0x58) = 0;
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar6 + 0x10) + 8),5,0x14);
    *plVar1 = local_80;
    *(undefined2 *)(lVar4 + 0x28) = (undefined2)local_78;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x44));
  }
  return uVar5;
}


