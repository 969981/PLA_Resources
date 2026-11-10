/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3fe90; name: FUN_01f3fe90
 */


undefined4 FUN_01f3fe90(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar7 = 0;
  }
  else if (*(int *)(param_1 + 0xb0) == 2) {
    uVar7 = 2;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x150);
    lVar5 = tpidr_el0;
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
    }
    local_50 = *(undefined8 *)(lVar5 + 0x20);
    local_48 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    *(undefined2 *)(lVar5 + 0x28) = 1;
    FUN_01f4b17c(&local_68,param_1 + 0x70,param_2);
    uVar7 = (undefined4)local_60;
    uVar6 = local_60._4_4_;
    local_60 = 0;
    uStack_58 = 0x200000000;
    if (*(char *)(param_1 + 0x98) == '\0') {
      *(undefined8 *)(param_1 + 0xa0) = local_68;
      *(undefined4 *)(param_1 + 0xa8) = uVar7;
      *(undefined4 *)(param_1 + 0xac) = uVar6;
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    else {
      *(undefined8 *)(param_1 + 0xa0) = local_68;
      *(undefined4 *)(param_1 + 0xa8) = uVar7;
      *(undefined4 *)(param_1 + 0xac) = uVar6;
    }
    FUN_0014ff10(local_68,0xffffffff);
    FUN_0107ebac(&local_68);
    *(undefined8 *)(lVar5 + 0x20) = local_50;
    *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_48;
    lVar9 = *(long *)(param_1 + 0x68);
    if (*(char *)(lVar9 + 0x192) == '\0') {
      lVar10 = *(long *)(lVar9 + 0x110);
      if (lVar10 == 0) {
        lVar10 = *(long *)(lVar9 + 0x128);
      }
      lVar9 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar10 + 0x50);
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x44));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01f3ffe0;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01f3ffe0:
      uVar8 = *(undefined8 *)(lVar10 + 8);
      if (*(long *)(lVar5 + 0x20) == 0) {
        *(undefined8 *)(lVar5 + 0x20) = DAT_043f1798;
      }
      puVar2 = (undefined8 *)(lVar5 + 0x20);
      local_68 = *puVar2;
      local_60 = *(undefined8 *)(lVar5 + 0x28);
      *puVar2 = uVar8;
      *(undefined2 *)(lVar5 + 0x28) = 1;
      *(undefined1 *)(lVar10 + 0x58) = 0;
      FUN_001530e0(*(undefined8 *)(*(long *)(lVar10 + 0x10) + 8),5,0x14);
      *puVar2 = local_68;
      *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_60;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x44));
    }
    if (*(int *)(param_1 + 0x90) == 1) {
      uVar7 = 3;
    }
    else if (*(int *)(param_1 + 0x90) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 4;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
  }
  return uVar7;
}


