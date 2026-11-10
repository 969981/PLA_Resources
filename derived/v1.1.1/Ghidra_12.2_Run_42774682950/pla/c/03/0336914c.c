/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0336914c; name: FUN_0336914c
 */


undefined8 *
FUN_0336914c(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = *param_5;
  uVar5 = (uVar6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  uVar10 = uVar6 & 0x3fffffff;
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar5) {
    local_6c = uVar5;
  }
  local_78 = (ulong)local_6c * 0x28;
  if ((int)local_6c < (int)uVar10 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar6 = *param_5;
    uVar10 = uVar6 & 0x3fffffff;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar8 = param_3;
      puVar9 = puVar4;
      do {
        *puVar9 = *puVar8;
        lVar7 = lVar7 + 2;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[4];
        puVar9[3] = puVar8[3];
        puVar9[4] = uVar3;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        uVar1 = puVar8[6];
        uVar2 = puVar8[7];
        uVar3 = puVar8[9];
        puVar9[8] = puVar8[8];
        puVar9[9] = uVar3;
        puVar9[6] = uVar1;
        puVar9[7] = uVar2;
        puVar9[5] = puVar8[5];
        puVar9 = puVar9 + 10;
        puVar8 = puVar8 + 10;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar7);
    }
    if ((param_4 & 1) != 0) {
      puVar9 = param_3 + lVar7 * 5;
      puVar8 = puVar4 + lVar7 * 5;
      *puVar8 = *puVar9;
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[4];
      puVar8[3] = puVar9[3];
      puVar8[4] = uVar3;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0x28);
  }
  uVar6 = 0x3fffffff;
  if (local_78 < 0x9ffffffd8) {
    uVar6 = (uint)(local_78 / 0x28);
  }
  *param_5 = uVar6;
  return puVar4;
}


