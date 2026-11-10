/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ee8d4; name: FUN_031ee8d4
 */


long FUN_031ee8d4(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = *param_5;
  uVar2 = (uVar6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  uVar7 = uVar6 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_7c = uVar2;
  }
  local_88 = (ulong)local_7c * 0xd0;
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
    FUN_031eeac4(lVar1,param_3);
    if (param_4 != 1) {
      lVar5 = (ulong)param_4 - 1;
      lVar3 = param_3;
      lVar4 = lVar1;
      do {
        lVar4 = lVar4 + 0xd0;
        lVar3 = lVar3 + 0xd0;
        FUN_031eeac4(lVar4,lVar3);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    FUN_031ed88c(param_3);
    if (param_4 != 1) {
      lVar5 = (ulong)param_4 - 1;
      lVar3 = param_3;
      do {
        lVar3 = lVar3 + 0xd0;
        FUN_031ed88c(lVar3);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar7 * 0xd0);
  }
  if (local_88 < 0x33ffffff30) {
    uVar2 = (uint)(local_88 / 0xd0);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return lVar1;
}


