/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255cb60; name: FUN_0255cb60
 */


undefined8 FUN_0255cb60(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar10 = *param_4;
  local_58 = (**(code **)(*(long *)*param_2 + 0x38))();
  local_60 = (**(code **)(*(long *)*param_1 + 0x38))();
  lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_58);
  bVar4 = *(byte *)(lVar8 + 4);
  iVar3 = *(int *)(lVar8 + 8);
  lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_60);
  bVar4 = bVar4 & 1;
  bVar2 = *(byte *)(lVar8 + 4) & 1;
  if (bVar2 < bVar4) {
    bVar6 = true;
  }
  else {
    bVar6 = bVar2 <= bVar4 && *(int *)(lVar8 + 8) < iVar3;
  }
  lVar10 = *param_4;
  local_58 = (**(code **)(*(long *)*param_3 + 0x38))();
  local_60 = (**(code **)(*(long *)*param_2 + 0x38))();
  lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_58);
  bVar4 = *(byte *)(lVar8 + 4);
  iVar3 = *(int *)(lVar8 + 8);
  lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_60);
  bVar4 = bVar4 & 1;
  bVar2 = *(byte *)(lVar8 + 4) & 1;
  if (bVar2 < bVar4) {
    bVar7 = true;
  }
  else {
    bVar7 = bVar2 <= bVar4 && *(int *)(lVar8 + 8) < iVar3;
  }
  if (bVar6) {
    lVar8 = *param_1;
    *param_1 = 0;
    if (bVar7) {
      lVar10 = *param_3;
      *param_3 = 0;
      *param_1 = lVar10;
      plVar9 = (long *)*param_3;
      *param_3 = 0;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 10;
        do {
          iVar3 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar3;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *param_3 = lVar8;
      return 1;
    }
    lVar10 = *param_2;
    *param_2 = 0;
    *param_1 = lVar10;
    plVar9 = (long *)*param_2;
    *param_2 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_2 = lVar8;
    lVar10 = *param_4;
    local_58 = (**(code **)(*(long *)*param_3 + 0x38))();
    local_60 = (**(code **)(*(long *)*param_2 + 0x38))();
    lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_58);
    bVar4 = *(byte *)(lVar8 + 4);
    iVar3 = *(int *)(lVar8 + 8);
    lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_60);
    bVar4 = bVar4 & 1;
    bVar2 = *(byte *)(lVar8 + 4) & 1;
    if (bVar4 <= bVar2) {
      if (bVar4 < bVar2) {
        return 1;
      }
      if (iVar3 <= *(int *)(lVar8 + 8)) {
        return 1;
      }
    }
    lVar10 = *param_2;
    *param_2 = 0;
    lVar8 = *param_3;
    *param_3 = 0;
    *param_2 = lVar8;
    plVar9 = (long *)*param_3;
    *param_3 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_3 = lVar10;
  }
  else {
    if (!bVar7) {
      return 0;
    }
    lVar10 = *param_2;
    *param_2 = 0;
    lVar8 = *param_3;
    *param_3 = 0;
    *param_2 = lVar8;
    plVar9 = (long *)*param_3;
    *param_3 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_3 = lVar10;
    lVar10 = *param_4;
    local_58 = (**(code **)(*(long *)*param_2 + 0x38))();
    local_60 = (**(code **)(*(long *)*param_1 + 0x38))();
    lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_58);
    bVar4 = *(byte *)(lVar8 + 4);
    iVar3 = *(int *)(lVar8 + 8);
    lVar8 = FUN_0255db80(lVar10 + 0x1d0,&local_60);
    bVar4 = bVar4 & 1;
    bVar2 = *(byte *)(lVar8 + 4) & 1;
    if (bVar4 <= bVar2) {
      if (bVar4 < bVar2) {
        return 1;
      }
      if (iVar3 <= *(int *)(lVar8 + 8)) {
        return 1;
      }
    }
    lVar10 = *param_1;
    *param_1 = 0;
    lVar8 = *param_2;
    *param_2 = 0;
    *param_1 = lVar8;
    plVar9 = (long *)*param_2;
    *param_2 = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *param_2 = lVar10;
  }
  return 2;
}


