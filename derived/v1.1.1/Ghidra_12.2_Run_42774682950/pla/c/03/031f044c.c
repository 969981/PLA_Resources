/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f044c; name: FUN_031f044c
 */


long FUN_031f044c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar3 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = *param_5;
  uVar2 = (uVar7 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_54 = uVar2;
  }
  local_80[0] = (ulong)local_54 * 0x38;
  uVar2 = uVar7 & 0x3fffffff;
  if (((int)local_54 < (int)uVar2) || (0x3fffffff < (int)local_54)) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar7 = *param_5;
    uVar2 = uVar7 & 0x3fffffff;
  }
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    lVar4 = lVar1;
    lVar6 = param_3;
    uVar8 = uVar3;
    do {
      FUN_031f06c4(lVar4,lVar6);
      uVar8 = uVar8 - 1;
      lVar6 = lVar6 + 0x38;
      lVar4 = lVar4 + 0x38;
    } while (uVar8 != 0);
    puVar5 = (undefined4 *)(param_3 + 0x20);
    do {
      puVar5[4] = 0;
      if ((-1 < (int)puVar5[5]) && (*(long *)(puVar5 + 2) != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,*(long *)(puVar5 + 2),((ulong)(uint)puVar5[5] & 0x3fffffff) << 5
                  );
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      puVar5[5] = 0x80000000;
      *puVar5 = 0;
      if ((-1 < (int)puVar5[1]) && (*(long *)(puVar5 + -2) != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,*(long *)(puVar5 + -2),puVar5[1] << 2);
      }
      *(undefined8 *)(puVar5 + -2) = 0;
      puVar5[1] = 0x80000000;
      puVar5[-4] = 0;
      if ((-1 < (int)puVar5[-3]) && (*(long *)(puVar5 + -6) != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,*(long *)(puVar5 + -6),puVar5[-3] << 2);
      }
      *(undefined8 *)(puVar5 + -6) = 0;
      uVar3 = uVar3 - 1;
      puVar5[-3] = 0x80000000;
      puVar5 = puVar5 + 0xe;
    } while (uVar3 != 0);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar2 * 0x38);
  }
  if (local_80[0] < 0xdffffffc8) {
    uVar2 = (uint)(local_80[0] / 0x38);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return lVar1;
}


