/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03097e84; name: FUN_03097e84
 */


undefined8 *
FUN_03097e84(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
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
  uVar5 = *param_5;
  uVar4 = (uVar5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  uVar10 = uVar5 & 0x3fffffff;
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar4) {
    local_6c = uVar4;
  }
  local_78 = (ulong)local_6c * 0x30;
  if ((int)local_6c < (int)uVar10 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar5 = *param_5;
    uVar10 = uVar5 & 0x3fffffff;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar8 = param_3;
      puVar9 = puVar3;
      do {
        uVar7 = puVar8[5];
        lVar6 = lVar6 + 2;
        puVar9[3] = puVar8[3];
        puVar9[5] = uVar7;
        puVar9[1] = puVar8[1];
        *puVar9 = *puVar8;
        uVar7 = puVar8[2];
        puVar9[4] = puVar8[4];
        puVar9[2] = uVar7;
        puVar9[7] = puVar8[7];
        uVar7 = puVar8[8];
        uVar1 = puVar8[9];
        uVar2 = puVar8[0xb];
        puVar9[10] = puVar8[10];
        puVar9[0xb] = uVar2;
        puVar9[8] = uVar7;
        puVar9[9] = uVar1;
        puVar9[6] = puVar8[6];
        puVar9 = puVar9 + 0xc;
        puVar8 = puVar8 + 0xc;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar6);
    }
    if ((param_4 & 1) != 0) {
      puVar9 = puVar3 + lVar6 * 6;
      puVar8 = param_3 + lVar6 * 6;
      uVar7 = puVar8[5];
      puVar9[3] = puVar8[3];
      puVar9[5] = uVar7;
      puVar9[1] = puVar8[1];
      *puVar9 = *puVar8;
      uVar7 = puVar8[2];
      puVar9[4] = puVar8[4];
      puVar9[2] = uVar7;
    }
  }
  if (-1 < (int)uVar5) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0x30);
  }
  uVar5 = 0x3fffffff;
  if (local_78 < 0xbffffffd0) {
    uVar5 = (uint)(local_78 / 0x30);
  }
  *param_5 = uVar5;
  return puVar3;
}


