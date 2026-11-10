/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03035378; name: FUN_03035378
 */


ulong FUN_03035378(long param_1,uint param_2,undefined4 *param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  undefined4 *local_1060;
  undefined8 local_1058;
  undefined4 local_1050 [1024];
  
  puVar2 = PTR_PTR_0434a090;
  local_1060 = local_1050;
  if ((~param_2 & 0xffffff) == 0) {
    return param_4 & 0xffffffff;
  }
  plVar10 = *(long **)(param_1 + 0x4b8);
  if (plVar10 == (long *)0x0) {
    return param_4 & 0xffffffff;
  }
  local_1058 = 0x8000020000000000;
  uVar3 = (uint)param_4;
  if ((int)uVar3 < 0x201) {
    uVar4 = 0;
    puVar8 = local_1050;
    if (uVar3 == 0) goto LAB_030353f4;
  }
  else {
    if ((int)uVar3 < 0x40000000) {
      uVar6 = 0x400;
    }
    else {
      FUN_032bd0a8(param_4 & 0xffffffff);
      uVar6 = (local_1058._4_4_ & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar6) {
        uVar6 = 0x3fffffff;
      }
    }
    uVar1 = uVar3;
    if ((int)uVar3 <= (int)uVar6) {
      uVar1 = uVar6;
    }
    local_1060 = (undefined4 *)FUN_032bd1d4(puVar2,uVar1,8,local_1050,0,(long)&local_1058 + 4);
    uVar4 = local_1058 & 0xffffffff;
    puVar8 = local_1060;
    if ((uint)local_1058 == uVar3) goto LAB_030353f4;
  }
  uVar4 = param_4 & 0xffffffff;
  local_1058 = CONCAT44(local_1058._4_4_,uVar3);
  puVar8 = local_1060;
LAB_030353f4:
  local_1060 = puVar8;
  if (0 < (int)uVar3) {
    local_1060[1] = param_2;
    *local_1060 = *param_3;
    if (uVar3 != 1) {
      local_1060[3] = param_2;
      local_1060[2] = param_3[1];
      if (uVar3 != 2) {
        lVar9 = (param_4 & 0xffffffff) - 2;
        lVar7 = 0;
        puVar8 = param_3 + 2;
        do {
          *(uint *)((long)local_1060 + lVar7 + 0x14) = param_2;
          *(undefined4 *)((long)local_1060 + lVar7 + 0x10) = *puVar8;
          lVar9 = lVar9 + -1;
          lVar7 = lVar7 + 8;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    uVar4 = local_1058 & 0xffffffff;
  }
  uVar3 = (**(code **)(*plVar10 + 0x20))(plVar10,param_1,local_1060,uVar4);
  uVar4 = local_1058;
  if (0 < (int)uVar3) {
    uVar5 = (ulong)uVar3;
    puVar8 = local_1060;
    do {
      uVar5 = uVar5 - 1;
      *param_3 = *puVar8;
      puVar8 = puVar8 + 2;
      param_3 = param_3 + 1;
    } while (uVar5 != 0);
  }
  uVar5 = (ulong)local_1058._4_4_;
  local_1058 = (ulong)local_1058._4_4_ << 0x20;
  if ((-1 < (long)uVar4) && (local_1060 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_1060,(uVar5 & 0x3fffffff) << 3);
  }
  return (ulong)uVar3;
}


