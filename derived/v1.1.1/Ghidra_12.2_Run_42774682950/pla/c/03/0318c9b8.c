/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318c9b8; name: FUN_0318c9b8
 */


long FUN_0318c9b8(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_70 [2];
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar4 = *param_5;
  uVar3 = (uVar4 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_44 = uVar3;
  }
  uVar3 = uVar4 & 0x3fffffff;
  local_70[0] = (ulong)local_44 << 3;
  if ((int)local_44 < (int)uVar3 || 0x3fffffff < (int)local_44) {
    local_70[1] = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_70 + 1);
    uVar4 = *param_5;
    uVar3 = uVar4 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_70[0],local_70);
  if (0 < (int)param_4) {
    uVar5 = param_4 & 3;
    if ((param_4 & 0xffffffff) - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar7 = (undefined8 *)(lVar2 + 0x10);
      puVar8 = (undefined8 *)(param_3 + 0x10);
      do {
        puVar7[-2] = puVar8[-2];
        puVar7[-1] = puVar8[-1];
        *puVar7 = *puVar8;
        puVar1 = puVar8 + 1;
        lVar6 = lVar6 + 4;
        puVar8 = puVar8 + 4;
        puVar7[1] = *puVar1;
        puVar7 = puVar7 + 4;
      } while ((param_4 & 0xffffffff) - uVar5 != lVar6);
    }
    if (uVar5 != 0) {
      puVar7 = (undefined8 *)(param_3 + lVar6 * 8);
      puVar8 = (undefined8 *)(lVar2 + lVar6 * 8);
      do {
        uVar5 = uVar5 - 1;
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  if (-1 < (int)uVar4) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar3 << 3);
  }
  uVar4 = (uint)(local_70[0] >> 3);
  if (0x1fffffff7 < local_70[0]) {
    uVar4 = 0x3fffffff;
  }
  *param_5 = uVar4;
  return lVar2;
}


