/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398570; name: FUN_03398570
 */


long FUN_03398570(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_70 [2];
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  uVar8 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar3 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar3) {
    uVar3 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar3) {
    local_44 = uVar3;
  }
  uVar3 = uVar9 & 0x3fffffff;
  local_70[0] = (ulong)local_44 << 5;
  if ((int)local_44 < (int)uVar3 || 0x3fffffff < (int)local_44) {
    local_70[1] = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_70 + 1);
    uVar9 = *param_5;
    uVar3 = uVar9 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_70[0],local_70);
  if (0 < (int)param_4) {
    puVar4 = (undefined8 *)(lVar2 + 0x10);
    puVar6 = param_3;
    uVar7 = uVar8;
    do {
      puVar4[-2] = *puVar6;
      puVar4[-1] = puVar6[1];
      *puVar4 = puVar6[2];
      puVar1 = puVar6 + 3;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 4;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)puVar1;
      puVar4 = puVar4 + 4;
    } while (uVar7 != 0);
    puVar5 = param_3 + 2;
    do {
      if ((*puVar5 & 1) != 0) {
        FUN_032e0c40(*puVar5 & 0xfffffffffffffffe);
      }
      uVar8 = uVar8 - 1;
      puVar5 = puVar5 + 4;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar3 << 5);
  }
  if (local_70[0] < 0x7ffffffe0) {
    uVar9 = (uint)(local_70[0] >> 5);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar2;
}


