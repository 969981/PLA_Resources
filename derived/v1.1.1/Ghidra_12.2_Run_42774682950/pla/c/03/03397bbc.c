/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03397bbc; name: FUN_03397bbc
 */


long FUN_03397bbc(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar6 = (ulong)param_4;
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
  local_80[0] = (ulong)local_54 * 0x18;
  if ((int)local_54 < (int)uVar8 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar7 = *param_5;
    uVar8 = uVar7 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    puVar4 = (undefined4 *)(param_3 + 0x10);
    puVar5 = (undefined1 *)(lVar2 + 0x14);
    do {
      uVar1 = *(undefined8 *)(puVar4 + -4);
      *(undefined8 *)(puVar5 + -0xc) = *(undefined8 *)(puVar4 + -2);
      *(undefined8 *)(puVar5 + -0x14) = uVar1;
      *puVar5 = 0;
      if (*(char *)(puVar4 + 1) != '\0') {
        *(undefined4 *)(puVar5 + -4) = *puVar4;
        *puVar5 = 1;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 6;
      puVar5 = puVar5 + 0x18;
    } while (uVar6 != 0);
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar8 * 0x18);
  }
  if (local_80[0] < 0x5ffffffe8) {
    uVar3 = (uint)(local_80[0] / 0x18);
  }
  else {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


