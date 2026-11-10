/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e074; name: FUN_0315e074
 */


void FUN_0315e074(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong local_68;
  uint local_5c;
  undefined8 local_58;
  undefined *local_50;
  uint *puStack_48;
  
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    uVar10 = *(uint *)(param_1 + 0x30);
    uVar11 = (ulong)uVar10;
    uVar12 = *(uint *)(param_1 + 0x34);
    uVar1 = uVar10 + param_2;
    uVar4 = uVar12 & 0x3fffffff;
    if ((int)uVar4 < (int)uVar1) {
      puVar9 = *(undefined4 **)(param_1 + 0x28);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar12 = *(uint *)(param_1 + 0x34);
        uVar4 = uVar12 & 0x3fffffff;
      }
      puVar2 = PTR_PTR_0434a080;
      uVar7 = (uVar12 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      local_5c = uVar1;
      if ((int)uVar1 <= (int)uVar7) {
        local_5c = uVar7;
      }
      local_68 = (ulong)local_5c << 2;
      if (((int)local_5c < (int)uVar4) || (0x3fffffff < (int)local_5c)) {
        local_58 = 1;
        puStack_48 = &local_5c;
        local_50 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_58);
        uVar12 = *(uint *)(param_1 + 0x34);
      }
      puVar3 = (undefined4 *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_68,&local_68);
      if (0 < (int)uVar10) {
        puVar6 = puVar9;
        puVar8 = puVar3;
        do {
          uVar5 = *puVar6;
          uVar11 = uVar11 - 1;
          puVar6 = puVar6 + 1;
          *puVar8 = uVar5;
          puVar8 = puVar8 + 1;
        } while (uVar11 != 0);
      }
      if (-1 < (int)uVar12) {
        (**(code **)(*(long *)puVar2 + 0x18))(puVar2,puVar9,uVar12 << 2);
      }
      if (local_68 < 0xfffffffc) {
        uVar5 = (undefined4)(local_68 >> 2);
      }
      else {
        uVar5 = 0x3fffffff;
      }
      uVar10 = *(uint *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = uVar5;
      *(undefined4 **)(param_1 + 0x28) = puVar3;
    }
    if ((int)uVar10 < (int)uVar1) {
      *(uint *)(param_1 + 0x30) = uVar1;
      memset((void *)(*(long *)(param_1 + 0x28) + (long)(int)uVar10 * 4),0xff,
             (ulong)(uVar1 + ~uVar10) * 4 + 4);
    }
    else if ((int)uVar1 < (int)uVar10) {
      *(uint *)(param_1 + 0x30) = uVar1;
    }
  }
  return;
}


