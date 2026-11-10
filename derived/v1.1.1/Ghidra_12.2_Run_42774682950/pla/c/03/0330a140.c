/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330a140; name: FUN_0330a140
 */


void FUN_0330a140(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_28;
  long lStack_20;
  ulong local_18;
  
  puVar7 = (undefined8 *)param_1[1];
  if (((puVar7 < (undefined8 *)0x2) || (uVar8 = (uint)*puVar7, (uVar8 >> 0x11 & 1) == 0)) ||
     (uVar8 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555),
     uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
     (puVar7[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0x300000) == 0
     || (puVar7[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0x400000) ==
        0)) {
    local_28 = *param_1;
    lStack_20 = param_1[1];
    local_18 = param_1[2];
    if ((local_18 & 1) != 0) {
      piVar2 = (int *)((local_18 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    lStack_20 = puVar7[1];
    local_28 = *param_1;
    if (lStack_20 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_032e3508(lStack_20);
      if ((local_18 & 1) != 0) {
        piVar2 = (int *)((local_18 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  FUN_03317b68(&local_28);
  if ((local_18 & 1) != 0) {
    plVar6 = (long *)(local_18 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


