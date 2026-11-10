/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae4ad4; name: FUN_00ae4ad4
 */


void FUN_00ae4ad4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *__dest;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 auStack_b0 [128];
  
  *param_1 = &PTR_FUN_041d3618;
  param_1[9] = &PTR_LAB_041d3648;
  FUN_00ae4bcc(DAT_043a9ff8,auStack_b0 + 0x8c);
  FUN_00ae4bcc(DAT_043a9ff8,auStack_b0 + 0x8c);
  FUN_00ae4bcc(DAT_043a9ff8,auStack_b0 + 0x8c);
  FUN_00ae4bcc(DAT_043a9ff8,auStack_b0 + 0x8c);
  FUN_00ae4bcc(DAT_043a9ff8,auStack_b0 + 0x8c);
  plVar10 = (long *)param_1[0x25];
  if ((plVar10 == (long *)0x0) || (uVar6 = FUN_02a43a5c(plVar10[0xb]), (uVar6 & 1) == 0)) {
    plVar10 = (long *)param_1[0x24];
  }
  else {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    plVar10 = (long *)param_1[0x24];
  }
  if ((plVar10 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar10[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  plVar10 = param_1 + 10;
  *plVar10 = (long)&PTR_LAB_041d36b8;
  DAT_043a9ff8 = 0;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)param_1[0xb] + 0xb8))();
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0xb8))();
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)param_1[0x13] + 0xb8))();
  }
  if (param_1[0x19] != 0) {
    (**(code **)(*(long *)param_1[0x17] + 0xb8))();
  }
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)param_1[0x1b] + 0xb8))();
  }
  *plVar10 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar7 = FUN_02bcf6a4();
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar7 + 0x10);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00ae4e00;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00ae4e00:
  lVar8 = DAT_043f1fb0 * 8;
  puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar8 != 0) && (DAT_043f17b0 != plVar10)) {
    puVar9 = &DAT_043f17b0;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) {
        __dest = puVar3;
        break;
      }
      __dest = puVar9 + 1;
      puVar1 = puVar9 + 1;
      puVar9 = __dest;
    } while ((long *)*puVar1 != plVar10);
  }
  if (puVar3 != __dest) {
    puVar9 = __dest + 1;
    if (puVar9 != puVar3) {
      memmove(__dest,puVar9,(long)puVar3 - (long)puVar9);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  *(undefined8 *)(lVar7 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  return;
}


