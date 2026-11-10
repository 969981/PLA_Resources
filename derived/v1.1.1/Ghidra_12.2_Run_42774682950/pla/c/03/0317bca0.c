/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317bca0; name: FUN_0317bca0
 */


long FUN_0317bca0(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar4 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = *param_5;
  uVar3 = (uVar6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  uVar7 = uVar6 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_7c = uVar3;
  }
  local_88 = (ulong)local_7c * 0xf0;
  if ((int)local_7c < (int)uVar7 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar6 = *param_5;
    uVar7 = uVar6 & 0x3fffffff;
  }
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    lVar2 = param_3;
    lVar5 = lVar1;
    uVar8 = uVar4;
    do {
      FUN_0317a8c4(lVar5,lVar2);
      uVar8 = uVar8 - 1;
      lVar2 = lVar2 + 0xf0;
      lVar5 = lVar5 + 0xf0;
    } while (uVar8 != 0);
    lVar2 = param_3;
    do {
      FUN_0317aa00(lVar2);
      uVar4 = uVar4 - 1;
      lVar2 = lVar2 + 0xf0;
    } while (uVar4 != 0);
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar7 * 0xf0);
  }
  if (local_88 < 0x3bffffff10) {
    uVar3 = (uint)(local_88 / 0xf0);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar1;
}


