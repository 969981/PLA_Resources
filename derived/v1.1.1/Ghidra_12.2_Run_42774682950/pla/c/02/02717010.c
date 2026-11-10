/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02717010; name: FUN_02717010
 */


void FUN_02717010(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
  }
  puVar2 = (undefined8 *)(lVar5 + 0x20);
  local_48 = *puVar2;
  local_40 = *(undefined8 *)(lVar5 + 0x28);
  *puVar2 = uVar8;
  *(undefined2 *)(lVar5 + 0x28) = 1;
  local_78 = param_1 + 0x158;
  local_70 = *(undefined8 *)(param_2 + 8);
  local_68 = *(undefined8 *)(param_3 + 8);
  uStack_60 = *(undefined8 *)(param_4 + 8);
  local_34 = param_5;
  FUN_027171e0(&local_58,&local_78,&local_34,param_6);
  FUN_0014ff10(local_58,~local_4c);
  *puVar2 = local_48;
  *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_40;
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
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02717144;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02717144:
    lVar7 = *(long *)(lVar6 + 8);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
    }
    plVar1 = (long *)(lVar5 + 0x20);
    local_78 = *plVar1;
    local_70 = *(undefined8 *)(lVar5 + 0x28);
    *plVar1 = lVar7;
    *(undefined2 *)(lVar5 + 0x28) = 1;
    *(undefined1 *)(lVar6 + 0x58) = 0;
    FUN_001530e0(*(undefined8 *)(*(long *)(lVar6 + 0x10) + 8),5,0x14);
    *plVar1 = local_78;
    *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_70;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x44));
  }
  return;
}


