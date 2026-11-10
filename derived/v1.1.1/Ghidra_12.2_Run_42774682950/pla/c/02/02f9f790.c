/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9f790; name: FUN_02f9f790
 */


long FUN_02f9f790(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar4 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar3 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  uVar10 = uVar9 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_7c = uVar3;
  }
  local_88 = (ulong)local_7c * 0x18;
  if ((int)local_7c < (int)uVar10 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar9 = *param_5;
    uVar10 = uVar9 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    lVar5 = lVar2;
    lVar6 = param_3;
    uVar8 = uVar4;
    do {
      FUN_02f9f97c(lVar5,lVar6);
      puVar1 = PTR_PTR_0434a080;
      uVar8 = uVar8 - 1;
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + 0x18;
    } while (uVar8 != 0);
    puVar7 = (uint *)(param_3 + 0xc);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x18))
                  (puVar1,*(long *)(puVar7 + -3),(*puVar7 & 0x3fffffff) << 1);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      uVar4 = uVar4 - 1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 6;
    } while (uVar4 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0x18);
  }
  if (local_88 < 0x5ffffffe8) {
    uVar3 = (uint)(local_88 / 0x18);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


