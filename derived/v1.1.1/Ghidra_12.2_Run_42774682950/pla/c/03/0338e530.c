/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338e530; name: FUN_0338e530
 */


undefined8 *
FUN_0338e530(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar8 = *param_5;
  uVar4 = (uVar8 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  uVar9 = uVar8 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar4) {
    local_54 = uVar4;
  }
  local_80[0] = (ulong)local_54 * 0x18;
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
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      puVar6 = param_3;
      puVar7 = puVar2;
      do {
        uVar1 = *puVar6;
        lVar5 = lVar5 + 2;
        uVar3 = puVar6[2];
        puVar7[1] = puVar6[1];
        puVar7[2] = uVar3;
        *puVar7 = uVar1;
        uVar1 = puVar6[3];
        uVar3 = puVar6[5];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar3;
        puVar7[3] = uVar1;
        puVar7 = puVar7 + 6;
        puVar6 = puVar6 + 6;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar5);
    }
    if ((param_4 & 1) != 0) {
      puVar7 = puVar2 + lVar5 * 3;
      puVar6 = param_3 + lVar5 * 3;
      uVar1 = *puVar6;
      uVar3 = puVar6[2];
      puVar7[1] = puVar6[1];
      puVar7[2] = uVar3;
      *puVar7 = uVar1;
    }
  }
  if (-1 < (int)uVar8) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar9 * 0x18);
  }
  if (local_80[0] < 0x5ffffffe8) {
    uVar4 = (uint)(local_80[0] / 0x18);
  }
  else {
    uVar4 = 0x3fffffff;
  }
  *param_5 = uVar4;
  return puVar2;
}


