/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f12fc; name: FUN_030f12fc
 */


long FUN_030f12fc(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  uVar5 = (ulong)param_4;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = *param_5;
  uVar2 = (uVar6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  uVar7 = uVar6 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_54 = uVar2;
  }
  local_80[0] = (ulong)local_54 * 0x50;
  if ((int)local_54 < (int)uVar7 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar6 = *param_5;
    uVar7 = uVar6 & 0x3fffffff;
  }
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    puVar3 = (undefined4 *)(lVar1 + 0x40);
    puVar4 = (undefined4 *)(param_3 + 0x40);
    do {
      uVar8 = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar3 + -0xe) = *(undefined8 *)(puVar4 + -0xe);
      *(undefined8 *)(puVar3 + -0x10) = uVar8;
      uVar8 = *(undefined8 *)(puVar4 + -0xc);
      *(undefined8 *)(puVar3 + -10) = *(undefined8 *)(puVar4 + -10);
      *(undefined8 *)(puVar3 + -0xc) = uVar8;
      uVar8 = *(undefined8 *)(puVar4 + -8);
      *(undefined8 *)(puVar3 + -6) = *(undefined8 *)(puVar4 + -6);
      *(undefined8 *)(puVar3 + -8) = uVar8;
      puVar3[-4] = puVar4[-4];
      puVar3[-3] = puVar4[-3];
      puVar3[-2] = puVar4[-2];
      puVar3[-1] = puVar4[-1];
      uVar5 = uVar5 - 1;
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 0x14;
      puVar4 = puVar4 + 0x14;
    } while (uVar5 != 0);
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar7 * 0x50);
  }
  if (local_80[0] < 0x13ffffffb0) {
    uVar2 = (uint)(local_80[0] / 0x50);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return lVar1;
}


