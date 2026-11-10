/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c53f4; name: FUN_031c53f4
 */


long FUN_031c53f4(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar7 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar8 = *param_5;
  uVar3 = (uVar8 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  uVar9 = uVar8 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_54 = uVar3;
  }
  local_80[0] = (ulong)local_54 * 0x38;
  if ((int)local_54 < (int)uVar9 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar8 = *param_5;
    uVar9 = uVar8 & 0x3fffffff;
  }
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    plVar2 = param_3 + 3;
    plVar4 = (long *)(lVar1 + 0x18);
    uVar5 = uVar7;
    do {
      plVar4[-3] = (long)&PTR_LAB_0430a810;
      plVar4[-2] = 0xffffffff;
      uVar5 = uVar5 - 1;
      plVar4[-1] = 1;
      *plVar4 = *plVar2;
      *plVar2 = 0;
      plVar4[1] = plVar2[1];
      lVar6 = plVar2[2];
      plVar2[1] = 0;
      *(undefined8 *)((long)plVar4 + 0x16) = *(undefined8 *)((long)plVar2 + 0x16);
      plVar4[2] = lVar6;
      plVar2 = plVar2 + 7;
      plVar4 = plVar4 + 7;
    } while (uVar5 != 0);
    plVar2 = param_3;
    do {
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar7 = uVar7 - 1;
      plVar2 = plVar2 + 7;
    } while (uVar7 != 0);
  }
  if (-1 < (int)uVar8) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar9 * 0x38);
  }
  if (local_80[0] < 0xdffffffc8) {
    uVar3 = (uint)(local_80[0] / 0x38);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar1;
}


