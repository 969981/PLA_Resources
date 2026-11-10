/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5202c; name: FUN_01f5202c
 */


void FUN_01f5202c(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  long local_48;
  
  plVar1 = (long *)param_1[1];
  lVar5 = param_1[2] - (long)plVar1;
  if (lVar5 == 0) {
    param_2 = param_2 + 1;
  }
  uVar8 = param_2 / 0x155;
  if (param_2 % 0x155 != 0) {
    uVar8 = uVar8 + 1;
  }
  uVar7 = (ulong)param_1[8] / 0x155;
  uVar9 = uVar8;
  if (uVar7 <= uVar8) {
    uVar9 = uVar7;
  }
  uVar8 = uVar8 - uVar9;
  if (uVar8 == 0) {
    param_1[8] = param_1[8] + uVar9 * -0x155;
    if (uVar9 == 0) {
      return;
    }
    local_78 = *plVar1;
    param_1[1] = (long)(plVar1 + 1);
    FUN_01f50c40(param_1,&local_78);
    if (uVar9 == 1) {
      return;
    }
    lVar5 = -uVar9;
    do {
      lVar5 = lVar5 + 1;
      local_78 = *(long *)param_1[1];
      param_1[1] = (long)((long *)param_1[1] + 1);
      FUN_01f50c40(param_1,&local_78);
    } while (lVar5 != -1);
    return;
  }
  lVar5 = lVar5 >> 3;
  lVar6 = param_1[3] - *param_1;
  if ((ulong)((lVar6 >> 3) - lVar5) < uVar8) {
    uVar2 = lVar6 >> 2;
    uVar7 = uVar8 + lVar5;
    if (uVar8 + lVar5 <= uVar2) {
      uVar7 = uVar2;
    }
    plVar1 = param_1 + 4;
    local_60 = 0;
    plStack_58 = plVar1;
    if (uVar7 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 << 3,4);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    local_70 = local_78 + (lVar5 - uVar9) * 8;
    local_60 = local_78 + uVar7 * 8;
    local_68 = local_70;
    do {
      lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xffc,4);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      local_48 = lVar5;
      FUN_01f510f0(&local_78,&local_48);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    lVar5 = param_1[1];
    if (uVar9 != 0) {
      uVar8 = uVar9;
      do {
        FUN_01f52420(&local_78,lVar5);
        lVar5 = param_1[1] + 8;
        uVar8 = uVar8 - 1;
        param_1[1] = lVar5;
      } while (uVar8 != 0);
    }
    lVar6 = param_1[2];
    if (lVar6 != lVar5) {
      lVar5 = lVar6;
      do {
        lVar5 = lVar5 + -8;
        FUN_01f5127c(&local_78,lVar5);
      } while (lVar5 != param_1[1]);
      lVar6 = param_1[2];
    }
    lVar4 = *param_1;
    *param_1 = local_78;
    param_1[1] = local_70;
    param_1[2] = local_68;
    lVar3 = param_1[3];
    param_1[3] = local_60;
    param_1[8] = param_1[8] + uVar9 * -0x155;
    local_78 = lVar4;
    local_70 = lVar5;
    local_68 = lVar6;
    local_60 = lVar3;
    FUN_01f51414(&local_78);
    return;
  }
  if (param_1[3] == param_1[2]) {
    if (uVar8 == 0) {
LAB_01f523b4:
      lVar5 = param_1[8];
      goto LAB_01f52318;
    }
  }
  else {
    do {
      lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xffc,4);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      local_78 = lVar5;
      FUN_01f50dcc(param_1,&local_78);
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_01f523b4;
    } while (param_1[3] != param_1[2]);
  }
  uVar7 = uVar8;
  do {
    lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0xffc,4);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    local_78 = lVar5;
    FUN_01f50f58(param_1,&local_78);
    lVar5 = 0x154;
    if (param_1[2] - param_1[1] != 8) {
      lVar5 = 0x155;
    }
    uVar7 = uVar7 - 1;
    lVar5 = lVar5 + param_1[8];
    param_1[8] = lVar5;
  } while (uVar7 != 0);
  uVar9 = uVar8 + uVar9;
LAB_01f52318:
  param_1[8] = lVar5 + uVar9 * -0x155;
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    local_78 = *(long *)param_1[1];
    param_1[1] = (long)((long *)param_1[1] + 1);
    FUN_01f50c40(param_1,&local_78);
  }
  return;
}


