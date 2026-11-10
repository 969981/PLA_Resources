/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01907760; name: FUN_01907760
 */


undefined1  [16] FUN_01907760(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  int local_50;
  int iStack_4c;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38 [2];
  long *local_28;
  
  local_50 = 2;
  iStack_4c = 0;
  local_48[0] = 0;
  if (*param_1 == 0) {
LAB_01907900:
    local_50 = 4;
  }
  else {
    local_40 = 2;
    local_38[0] = 0;
    if (((long *)param_1[2] == (long *)0x0) ||
       (uVar5 = (**(code **)(*(long *)param_1[2] + 0x60))(), (uVar5 & 1) != 0)) {
      if ((param_1[3] == 0) ||
         (uVar5 = FUN_010e3608(param_1[3],local_38,(ulong)&local_40 | 4), (uVar5 & 1) == 0)) {
        if ((param_1[2] == 0) && (param_1[3] == 0)) {
          iVar7 = 4;
        }
        else {
          iVar7 = 3;
        }
      }
      else {
        iVar7 = 1;
      }
      local_40._0_4_ = iVar7;
    }
    else {
      local_40._4_4_ = *(byte *)(param_1[2] + 0x88) - 1;
      local_40._0_4_ = 0;
    }
    iVar7 = (int)local_40;
    local_50 = (int)local_40;
    iStack_4c = local_40._4_4_;
    local_48[0] = local_38[0];
    iVar4 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
    if (iVar4 - 0x1e9U < 5) {
      FUN_02c7ee20(*(undefined8 *)(*param_1 + 0x98),1);
    }
    if (iVar7 == 1) {
      lVar6 = param_1[3];
      local_28 = (long *)*param_1;
      if (local_28 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = local_28 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = (int)*plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8 = local_28;
      }
      uVar5 = FUN_010e0dd4(lVar6,&local_28,param_1[1],local_48,(ulong)&local_50 | 4);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if ((uVar5 & 1) == 0) goto LAB_019078e0;
    }
    else {
      if ((iVar7 != 0) ||
         (uVar5 = (**(code **)(*(long *)param_1[2] + 0x28))((long *)param_1[2],*param_1),
         (uVar5 & 1) == 0)) {
LAB_019078e0:
        if ((param_1[2] != 0) || ((param_1[3] != 0 && (param_1[1] != 0)))) {
          local_50 = 3;
          goto LAB_01907908;
        }
        goto LAB_01907900;
      }
      iStack_4c = *(byte *)(param_1[2] + 0x88) - 1;
    }
    FUN_01907950(param_1,&local_50);
  }
LAB_01907908:
  auVar9._4_4_ = iStack_4c;
  auVar9._0_4_ = local_50;
  auVar9._8_4_ = local_48[0];
  auVar9._12_4_ = 0;
  return auVar9;
}


