/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255cf50; name: FUN_0255cf50
 */


int FUN_0255cf50(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 local_58;
  
  iVar7 = FUN_0255cb60();
  lVar11 = *param_5;
  local_58 = (**(code **)(*(long *)*param_4 + 0x38))();
  local_68 = (**(code **)(*(long *)*param_3 + 0x38))();
  lVar9 = FUN_0255db80(lVar11 + 0x1d0,&local_58);
  bVar4 = *(byte *)(lVar9 + 4);
  iVar3 = *(int *)(lVar9 + 8);
  lVar9 = FUN_0255db80(lVar11 + 0x1d0,&local_68);
  bVar4 = bVar4 & 1;
  bVar2 = *(byte *)(lVar9 + 4) & 1;
  if (bVar4 <= bVar2) {
    if (bVar4 < bVar2) {
      return iVar7;
    }
    if (iVar3 <= *(int *)(lVar9 + 8)) {
      return iVar7;
    }
  }
  lVar11 = *param_3;
  *param_3 = 0;
  lVar9 = *param_4;
  *param_4 = 0;
  *param_3 = lVar9;
  plVar10 = (long *)*param_4;
  *param_4 = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
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
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *param_4 = lVar11;
  lVar11 = *param_5;
  local_58 = (**(code **)(*(long *)*param_3 + 0x38))();
  local_68 = (**(code **)(*(long *)*param_2 + 0x38))();
  lVar9 = FUN_0255db80(lVar11 + 0x1d0,&local_58);
  bVar4 = *(byte *)(lVar9 + 4);
  iVar3 = *(int *)(lVar9 + 8);
  lVar9 = FUN_0255db80(lVar11 + 0x1d0,&local_68);
  bVar4 = bVar4 & 1;
  bVar2 = *(byte *)(lVar9 + 4) & 1;
  if ((bVar2 < bVar4) || ((iVar8 = iVar7 + 1, bVar2 <= bVar4 && (*(int *)(lVar9 + 8) < iVar3)))) {
    lVar11 = *param_2;
    *param_2 = 0;
    lVar9 = *param_3;
    *param_3 = 0;
    *param_2 = lVar9;
    plVar10 = (long *)*param_3;
    *param_3 = 0;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
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
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *param_3 = lVar11;
    lVar11 = *param_5;
    local_58 = (**(code **)(*(long *)*param_2 + 0x38))();
    local_68 = (**(code **)(*(long *)*param_1 + 0x38))();
    lVar9 = FUN_0255db80(lVar11 + 0x1d0,&local_58);
    bVar4 = *(byte *)(lVar9 + 4);
    iVar3 = *(int *)(lVar9 + 8);
    lVar9 = FUN_0255db80(lVar11 + 0x1d0,&local_68);
    bVar4 = bVar4 & 1;
    bVar2 = *(byte *)(lVar9 + 4) & 1;
    if ((bVar2 < bVar4) || ((iVar8 = iVar7 + 2, bVar2 <= bVar4 && (*(int *)(lVar9 + 8) < iVar3)))) {
      lVar11 = *param_1;
      *param_1 = 0;
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      plVar10 = (long *)*param_2;
      *param_2 = 0;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 10;
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
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      iVar8 = iVar7 + 3;
      *param_2 = lVar11;
    }
  }
  return iVar8;
}


