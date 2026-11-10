/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c30750; name: FUN_01c30750
 */


void FUN_01c30750(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3e0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3d4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01c307ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01c307ac:
  if (*(char *)(param_1 + 0x204) == '\0') {
    uVar6 = *(uint *)(param_1 + 0x200);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x200);
    uVar6 = uVar2 & 0xfffffffe;
    *(undefined1 *)(param_1 + 0x204) = 0;
    *(uint *)(param_1 + 0x200) = uVar6;
    if (*(char *)(param_1 + 0x2a8) != '\0') {
      *(undefined4 *)(param_1 + 800) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x324) = 0;
      *(undefined8 *)(param_1 + 0x329) = 0;
      uVar6 = uVar2 & 0xfffffffc;
      *(uint *)(param_1 + 0x200) = uVar6;
      *(undefined8 *)(param_1 + 0x334) = 0;
    }
  }
  *(undefined4 *)(param_1 + 800) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x329) = 0;
  *(uint *)(param_1 + 0x200) = uVar6 & 0xfffffffd;
  *(undefined8 *)(param_1 + 0x334) = 0;
  if (*(long *)(param_1 + 0x3b8) != 0) {
    plVar1 = (long *)(param_1 + 0x360);
    FUN_01c30bf4(plVar1,*(undefined8 *)(param_1 + 0x390));
    uVar8 = *(ulong *)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x390) = 0;
    if (uVar8 != 0) {
      uVar7 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar9 = lVar5 * 8;
          lVar5 = lVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar9) = 0;
          *(undefined8 *)(*plVar1 + lVar9 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar9 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar9 + 0x18) = 0;
        } while (uVar8 - uVar7 != lVar5);
      }
      if (uVar7 != 0) {
        lVar5 = lVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          uVar7 = uVar7 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3d4));
  return;
}


