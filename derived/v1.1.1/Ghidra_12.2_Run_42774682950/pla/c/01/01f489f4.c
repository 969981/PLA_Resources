/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f489f4; name: FUN_01f489f4
 */


void FUN_01f489f4(long *param_1,ulong param_2)

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
  uVar7 = param_2 >> 10;
  if ((param_2 & 0x3ff) != 0) {
    uVar7 = uVar7 + 1;
  }
  uVar8 = (ulong)param_1[8] >> 10;
  uVar9 = uVar7;
  if (uVar8 <= uVar7) {
    uVar9 = uVar8;
  }
  uVar7 = uVar7 - uVar9;
  if (uVar7 == 0) {
    param_1[8] = param_1[8] + uVar9 * -0x400;
    if (uVar9 == 0) {
      return;
    }
    local_78 = *plVar1;
    param_1[1] = (long)(plVar1 + 1);
    FUN_01f48d58(param_1,&local_78);
    if (uVar9 == 1) {
      return;
    }
    lVar5 = -uVar9;
    do {
      lVar5 = lVar5 + 1;
      local_78 = *(long *)param_1[1];
      param_1[1] = (long)((long *)param_1[1] + 1);
      FUN_01f48d58(param_1,&local_78);
    } while (lVar5 != -1);
    return;
  }
  lVar5 = lVar5 >> 3;
  lVar6 = param_1[3] - *param_1;
  if ((ulong)((lVar6 >> 3) - lVar5) < uVar7) {
    uVar2 = lVar6 >> 2;
    uVar8 = uVar7 + lVar5;
    if (uVar7 + lVar5 <= uVar2) {
      uVar8 = uVar2;
    }
    plVar1 = param_1 + 4;
    local_60 = 0;
    plStack_58 = plVar1;
    if (uVar8 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar8 << 3,4);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xb8))();
      }
    }
    local_70 = local_78 + (lVar5 - uVar9) * 8;
    local_60 = local_78 + uVar8 * 8;
    local_68 = local_70;
    do {
      lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      local_48 = lVar5;
      FUN_01f49208(&local_78,&local_48);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    lVar5 = param_1[1];
    if (uVar9 != 0) {
      uVar7 = uVar9;
      do {
        FUN_01f49394(&local_78,lVar5);
        lVar5 = param_1[1] + 8;
        uVar7 = uVar7 - 1;
        param_1[1] = lVar5;
      } while (uVar7 != 0);
    }
    lVar6 = param_1[2];
    if (lVar6 != lVar5) {
      lVar5 = lVar6;
      do {
        lVar5 = lVar5 + -8;
        FUN_01f49520(&local_78,lVar5);
      } while (lVar5 != param_1[1]);
      lVar6 = param_1[2];
    }
    lVar4 = *param_1;
    *param_1 = local_78;
    param_1[1] = local_70;
    param_1[2] = local_68;
    lVar3 = param_1[3];
    param_1[3] = local_60;
    param_1[8] = param_1[8] + uVar9 * -0x400;
    local_78 = lVar4;
    local_70 = lVar5;
    local_68 = lVar6;
    local_60 = lVar3;
    FUN_01f496b8(&local_78);
    return;
  }
  if (param_1[3] == param_1[2]) {
    if (uVar7 == 0) {
LAB_01f48d3c:
      lVar5 = param_1[8];
      goto LAB_01f48c2c;
    }
  }
  else {
    do {
      lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[10] + 0xb8))();
      }
      local_78 = lVar5;
      FUN_01f48ee4(param_1,&local_78);
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) goto LAB_01f48d3c;
    } while (param_1[3] != param_1[2]);
  }
  uVar8 = uVar7;
  do {
    lVar5 = (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0x1000,4);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[10] + 0xb8))();
    }
    local_78 = lVar5;
    FUN_01f49070(param_1,&local_78);
    lVar5 = 0x3ff;
    if (param_1[2] - param_1[1] != 8) {
      lVar5 = 0x400;
    }
    uVar8 = uVar8 - 1;
    lVar5 = lVar5 + param_1[8];
    param_1[8] = lVar5;
  } while (uVar8 != 0);
  uVar9 = uVar7 + uVar9;
LAB_01f48c2c:
  param_1[8] = lVar5 + uVar9 * -0x400;
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    local_78 = *(long *)param_1[1];
    param_1[1] = (long)((long *)param_1[1] + 1);
    FUN_01f48d58(param_1,&local_78);
  }
  return;
}


