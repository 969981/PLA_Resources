/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ef6b4; name: FUN_031ef6b4
 */


undefined8 * FUN_031ef6b4(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = *param_5;
  uVar6 = (uVar7 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  uVar8 = uVar7 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_54 = uVar6;
  }
  local_80[0] = (ulong)local_54 * 0x50;
  if ((int)local_54 < (int)uVar8 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar7 = *param_5;
    uVar8 = uVar7 & 0x3fffffff;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    uVar4 = param_3[9];
    puVar3[7] = param_3[7];
    puVar3[9] = uVar4;
    uVar4 = param_3[5];
    puVar3[3] = param_3[3];
    puVar3[5] = uVar4;
    puVar3[1] = param_3[1];
    *puVar3 = *param_3;
    uVar4 = param_3[2];
    puVar3[4] = param_3[4];
    puVar3[2] = uVar4;
    uVar4 = param_3[6];
    puVar3[8] = param_3[8];
    puVar3[6] = uVar4;
    if (param_4 != 1) {
      lVar5 = (ulong)param_4 - 1;
      puVar1 = param_3;
      puVar2 = puVar3;
      do {
        uVar4 = puVar1[0x13];
        lVar5 = lVar5 + -1;
        puVar2[0x11] = puVar1[0x11];
        puVar2[0x13] = uVar4;
        uVar4 = puVar1[0xf];
        puVar2[0xd] = puVar1[0xd];
        puVar2[0xf] = uVar4;
        puVar2[0xb] = puVar1[0xb];
        puVar2[10] = puVar1[10];
        uVar4 = puVar1[0xc];
        puVar2[0xe] = puVar1[0xe];
        puVar2[0xc] = uVar4;
        uVar4 = puVar1[0x10];
        puVar2[0x12] = puVar1[0x12];
        puVar2[0x10] = uVar4;
        puVar1 = puVar1 + 10;
        puVar2 = puVar2 + 10;
      } while (lVar5 != 0);
    }
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar8 * 0x50);
  }
  if (local_80[0] < 0x13ffffffb0) {
    uVar6 = (uint)(local_80[0] / 0x50);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return puVar3;
}


