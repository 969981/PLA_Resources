/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303e454; name: FUN_0303e454
 */


undefined8 *
FUN_0303e454(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar3 = *param_5;
  uVar2 = (uVar3 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  uVar10 = uVar3 & 0x3fffffff;
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_6c = uVar2;
  }
  local_78 = (ulong)local_6c * 0x1c;
  if ((int)local_6c < (int)uVar10 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar3 = *param_5;
    uVar10 = uVar3 & 0x3fffffff;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      puVar5 = param_3;
      puVar6 = puVar1;
      do {
        uVar8 = *puVar5;
        uVar9 = puVar5[1];
        lVar4 = lVar4 + 2;
        uVar7 = puVar5[2];
        *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar5 + 3);
        puVar6[1] = uVar9;
        puVar6[2] = uVar7;
        *puVar6 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar5 + 0x1c);
        uVar9 = *(undefined8 *)((long)puVar5 + 0x24);
        uVar7 = *(undefined8 *)((long)puVar5 + 0x2c);
        *(undefined4 *)((long)puVar6 + 0x34) = *(undefined4 *)((long)puVar5 + 0x34);
        *(undefined8 *)((long)puVar6 + 0x2c) = uVar7;
        *(undefined8 *)((long)puVar6 + 0x24) = uVar9;
        *(undefined8 *)((long)puVar6 + 0x1c) = uVar8;
        puVar6 = puVar6 + 7;
        puVar5 = puVar5 + 7;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar4);
    }
    if ((param_4 & 1) != 0) {
      puVar6 = (undefined8 *)((long)param_3 + lVar4 * 0x1c);
      puVar5 = (undefined8 *)((long)puVar1 + lVar4 * 0x1c);
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      uVar7 = puVar6[2];
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar6 + 3);
      puVar5[1] = uVar9;
      puVar5[2] = uVar7;
      *puVar5 = uVar8;
    }
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0x1c);
  }
  uVar3 = 0x3fffffff;
  if (local_78 < 0x6ffffffe4) {
    uVar3 = (uint)(local_78 / 0x1c);
  }
  *param_5 = uVar3;
  return puVar1;
}


