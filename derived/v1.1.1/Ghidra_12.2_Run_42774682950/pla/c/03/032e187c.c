/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e187c; name: FUN_032e187c
 */


void FUN_032e187c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  long lStack_40;
  ulong local_38;
  ulong local_28;
  
  uVar9 = FUN_032e35d8(param_4);
  if ((param_4 != 0) && ((uVar9 & 0x1f) == 7)) {
    local_48 = param_3;
    lStack_40 = param_4;
    local_38 = FUN_032e3508(param_4);
    if ((local_38 & 1) != 0) {
      piVar2 = (int *)((local_38 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_032e42b4(&local_28,0);
    do {
      auVar11 = FUN_032e31d4(param_4);
      if ((int)((ulong)(auVar11._8_8_ - (long)auVar11._0_8_) >> 3) != 0) {
        local_28 = *auVar11._0_8_;
      }
      param_4 = FUN_032e2f18(param_4);
      uVar9 = local_38;
    } while (param_4 != 0);
    if (1 < local_28) {
      local_58 = local_48;
      lStack_50 = lStack_40;
      if ((local_38 & 1) == 0) {
        FUN_032e4868(&local_70,&local_48);
        param_1[2] = uVar9;
        *param_1 = local_58;
        param_1[1] = lStack_50;
      }
      else {
        piVar2 = (int *)((local_38 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_032e4868(&local_70,&local_48);
        param_1[2] = uVar9;
        *param_1 = local_58;
        param_1[1] = lStack_50;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar8 = uStack_60;
      uVar7 = local_68;
      uVar6 = local_70;
      local_68 = 0;
      uStack_60 = 0;
      local_70 = 0;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = 0;
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)(uVar9 & 0xfffffffffffffffe);
        plVar1 = plVar10 + 1;
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((local_38 & 1) == 0) {
        return;
      }
      plVar10 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar10 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar10 == (long *)0x0) {
        return;
      }
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar10 + 8))();
        return;
      }
      return;
    }
    if ((local_38 & 1) != 0) {
      plVar10 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar10 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


