/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338cccc; name: FUN_0338cccc
 */


long FUN_0338cccc(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint local_8c;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar6 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar5 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  local_8c = uVar9 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar5) {
    local_7c = uVar5;
  }
  local_88 = (ulong)local_7c * 0x18;
  if ((int)local_7c < (int)local_8c || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar9 = *param_5;
    local_8c = uVar9 & 0x3fffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  puVar3 = PTR_PTR_0434a080;
  if (0 < (int)param_4) {
    lVar8 = 0;
    uVar10 = uVar6;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      puVar2 = (undefined8 *)(lVar4 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = 0;
      puVar2[2] = 0x8000000000000000;
      if (*(int *)((long)puVar1 + 0x14) < 0) {
        FUN_0338cbf4(puVar3,puVar1 + 1);
      }
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      uVar10 = uVar10 - 1;
      lVar8 = lVar8 + 0x18;
      *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)((long)puVar1 + 0x14);
      puVar1[1] = 0;
      puVar1[2] = 0;
    } while (uVar10 != 0);
    puVar7 = (uint *)(param_3 + 0x14);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x18))
                  (puVar3,*(long *)(puVar7 + -3),((ulong)*puVar7 & 0x3fffffff) << 4);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      uVar6 = uVar6 - 1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 6;
    } while (uVar6 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)local_8c * 0x18);
  }
  if (local_88 < 0x5ffffffe8) {
    uVar5 = (uint)(local_88 / 0x18);
  }
  else {
    uVar5 = 0x3fffffff;
  }
  *param_5 = uVar5;
  return lVar4;
}


