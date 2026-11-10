/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012890fc; name: FUN_012890fc
 */


void FUN_012890fc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint3 uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar7 = (undefined4 *)FUN_00d49e68();
  local_68 = *puVar7;
  local_60 = *(undefined8 *)(puVar7 + 2);
  local_58 = *(undefined8 *)(puVar7 + 4);
  local_50 = *(undefined8 *)(puVar7 + 6);
  local_48 = *(long **)(puVar7 + 8);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  local_68._1_3_ = (uint3)((uint)local_68 >> 8) & 0xffff;
  uVar6 = local_68._1_3_;
  local_68 = (uint)local_68._1_3_ << 8;
  if (**(int **)(param_1 + 0x1648) == 1) {
    local_68 = CONCAT13(1,(undefined3)local_68);
  }
  else if (**(int **)(param_1 + 0x1648) == 2) {
    local_68 = CONCAT31(uVar6,1);
  }
  FUN_00d49e70(param_1,&local_68);
  if (**(int **)(param_1 + 0x1648) == 1) {
    FUN_01289414(param_1,1,1);
  }
  FUN_012896c8(param_1);
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar8[0x29];
  lVar11 = plVar8[0x2a];
  if ((lVar11 != 0) && (*plVar9 != 0x2289107558513a28)) {
    plVar10 = plVar9 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar9 = plVar10;
        break;
      }
      plVar2 = plVar9 + 6;
      plVar1 = plVar9 + 6;
      plVar9 = plVar2;
    } while (*plVar1 != 0x2289107558513a28);
  }
  *(byte *)(plVar9[4] + 0x58) = *(byte *)(plVar9[4] + 0x58) & 0xfe;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  FUN_012898a0(param_1,**(int **)(param_1 + 0x1648) == 0);
  local_40 = 0x95d3ad9d60d1227f;
  pcStack_38 = "InputChange";
  local_30 = 0xb;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,**(int **)(param_1 + 0x1648) == 0);
  local_40 = 0xac9b3984996c719b;
  pcStack_38 = "InputQuickMove";
  local_30 = 0xe;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,**(int **)(param_1 + 0x1648) == 0);
  local_40 = 0x66750155f5ed8fe3;
  pcStack_38 = "InputSort";
  local_30 = 9;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,**(int **)(param_1 + 0x1648) == 0);
  local_40 = 0x70ffcea15695c6e8;
  pcStack_38 = "InputIBoxName";
  local_30 = 0xd;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,**(int **)(param_1 + 0x1648) == 0);
  local_40 = 0xf35a5eb43c687524;
  pcStack_38 = "InputMultiSelect";
  local_30 = 0x10;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,0);
  local_40 = 0x5619d56b81557fff;
  pcStack_38 = "InputMultiSelectAll";
  local_30 = 0x13;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


