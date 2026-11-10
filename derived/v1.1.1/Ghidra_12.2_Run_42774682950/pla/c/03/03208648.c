/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03208648; name: FUN_03208648
 */


undefined8 *
FUN_03208648(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = *param_5;
  uVar6 = (uVar7 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  uVar11 = uVar7 & 0x3fffffff;
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_6c = uVar6;
  }
  local_78 = (ulong)local_6c * 0x30;
  if ((int)local_6c < (int)uVar11 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar7 = *param_5;
    uVar11 = uVar7 & 0x3fffffff;
  }
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar9 = param_3;
      puVar10 = puVar5;
      do {
        uVar2 = puVar9[1];
        lVar8 = lVar8 + 2;
        *puVar10 = *puVar9;
        puVar10[1] = uVar2;
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        uVar4 = puVar9[5];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar4;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        uVar2 = puVar9[8];
        uVar3 = puVar9[9];
        uVar4 = puVar9[0xb];
        puVar10[10] = puVar9[10];
        puVar10[0xb] = uVar4;
        puVar10[8] = uVar2;
        puVar10[9] = uVar3;
        puVar1 = puVar9 + 6;
        uVar2 = puVar9[7];
        puVar9 = puVar9 + 0xc;
        puVar10[6] = *puVar1;
        puVar10[7] = uVar2;
        puVar10 = puVar10 + 0xc;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar8);
    }
    if ((param_4 & 1) != 0) {
      puVar9 = param_3 + lVar8 * 6;
      puVar10 = puVar5 + lVar8 * 6;
      uVar2 = puVar9[1];
      *puVar10 = *puVar9;
      puVar10[1] = uVar2;
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      uVar4 = puVar9[5];
      puVar10[4] = puVar9[4];
      puVar10[5] = uVar4;
      puVar10[2] = uVar2;
      puVar10[3] = uVar3;
    }
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar11 * 0x30);
  }
  uVar7 = 0x3fffffff;
  if (local_78 < 0xbffffffd0) {
    uVar7 = (uint)(local_78 / 0x30);
  }
  *param_5 = uVar7;
  return puVar5;
}


