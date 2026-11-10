/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d55e4; name: FUN_032d55e4
 */


long FUN_032d55e4(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong local_70 [2];
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar10 = *param_5;
  uVar6 = (uVar10 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_44 = uVar6;
  }
  uVar6 = uVar10 & 0x3fffffff;
  local_70[0] = (ulong)local_44 << 5;
  if ((int)local_44 < (int)uVar6 || 0x3fffffff < (int)local_44) {
    local_70[1] = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_70 + 1);
    uVar10 = *param_5;
    uVar6 = uVar10 & 0x3fffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_70[0],local_70);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar9 = (undefined8 *)(param_3 + 0x20);
      puVar8 = (undefined8 *)(lVar5 + 0x20);
      do {
        uVar2 = puVar9[-4];
        uVar3 = puVar9[-3];
        lVar7 = lVar7 + 2;
        uVar4 = puVar9[-1];
        puVar8[-2] = puVar9[-2];
        puVar8[-1] = uVar4;
        puVar8[-4] = uVar2;
        puVar8[-3] = uVar3;
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        puVar1 = puVar9 + 2;
        uVar4 = puVar9[3];
        puVar9 = puVar9 + 8;
        puVar8[2] = *puVar1;
        puVar8[3] = uVar4;
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
        puVar8 = puVar8 + 8;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar7);
    }
    if ((param_4 & 1) != 0) {
      puVar9 = (undefined8 *)(param_3 + lVar7 * 0x20);
      puVar8 = (undefined8 *)(lVar5 + lVar7 * 0x20);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[3];
      puVar8[2] = puVar9[2];
      puVar8[3] = uVar4;
      *puVar8 = uVar2;
      puVar8[1] = uVar3;
    }
  }
  if (-1 < (int)uVar10) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar6 << 5);
  }
  if (local_70[0] < 0x7ffffffe0) {
    uVar10 = (uint)(local_70[0] >> 5);
  }
  else {
    uVar10 = 0x3fffffff;
  }
  *param_5 = uVar10;
  return lVar5;
}


