/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b7720; name: FUN_032b7720
 */


undefined8 * FUN_032b7720(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong local_80;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = *param_5;
  uVar3 = (uVar7 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  uVar8 = uVar7 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_54 = uVar3;
  }
  local_80 = (ulong)local_54 * 0x18;
  if ((int)local_54 < (int)uVar8 || 0x3fffffff < (int)local_54) {
    local_78 = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar7 = *param_5;
    uVar8 = uVar7 & 0x3fffffff;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_80,&local_80);
  if (0 < (int)param_4) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    if (param_4 != 1) {
      puVar1[3] = param_3[3];
      puVar1[4] = param_3[4];
      puVar1[5] = param_3[5];
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[3] = 0;
      if (param_4 != 2) {
        puVar1[6] = param_3[6];
        puVar1[7] = param_3[7];
        puVar1[8] = param_3[8];
        param_3[7] = 0;
        param_3[8] = 0;
        param_3[6] = 0;
        if (param_4 != 3) {
          puVar1[9] = param_3[9];
          puVar1[10] = param_3[10];
          puVar1[0xb] = param_3[0xb];
          param_3[10] = 0;
          param_3[0xb] = 0;
          param_3[9] = 0;
          if (param_4 != 4) {
            lVar6 = (ulong)param_4 - 4;
            puVar4 = param_3 + 0xc;
            puVar5 = puVar1 + 0xe;
            do {
              puVar5[-2] = *puVar4;
              puVar5[-1] = puVar4[1];
              lVar6 = lVar6 + -1;
              *puVar5 = puVar4[2];
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              puVar4 = puVar4 + 3;
              puVar5 = puVar5 + 3;
            } while (lVar6 != 0);
          }
        }
      }
    }
    if ((param_3[2] & 1) != 0) {
      FUN_032e0c40(param_3[2] & 0xfffffffffffffffe);
    }
    if (param_4 != 1) {
      if ((param_3[5] & 1) != 0) {
        FUN_032e0c40(param_3[5] & 0xfffffffffffffffe);
      }
      if (param_4 != 2) {
        if ((param_3[8] & 1) != 0) {
          FUN_032e0c40(param_3[8] & 0xfffffffffffffffe);
        }
        if (param_4 != 3) {
          if ((param_3[0xb] & 1) != 0) {
            FUN_032e0c40(param_3[0xb] & 0xfffffffffffffffe);
          }
          if (param_4 != 4) {
            lVar6 = (ulong)param_4 - 4;
            puVar2 = param_3 + 0xe;
            do {
              if ((*puVar2 & 1) != 0) {
                FUN_032e0c40(*puVar2 & 0xfffffffffffffffe);
              }
              lVar6 = lVar6 + -1;
              puVar2 = puVar2 + 3;
            } while (lVar6 != 0);
          }
        }
      }
    }
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar8 * 0x18);
  }
  if (local_80 < 0x5ffffffe8) {
    uVar3 = (uint)(local_80 / 0x18);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return puVar1;
}


