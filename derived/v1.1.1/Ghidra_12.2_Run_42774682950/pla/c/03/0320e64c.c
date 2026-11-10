/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320e64c; name: FUN_0320e64c
 */


undefined8 FUN_0320e64c(long *param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong local_60 [2];
  undefined *local_50;
  uint *puStack_48;
  uint local_34;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar3 = *param_3;
  uVar2 = (uVar3 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  local_34 = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_34 = uVar2;
  }
  local_60[0] = (ulong)local_34 << 4;
  if ((int)local_34 < (int)(uVar3 & 0x3fffffff) || 0x3fffffff < (int)local_34) {
    local_60[1] = 1;
    puStack_48 = &local_34;
    local_50 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_60 + 1);
    uVar3 = *param_3;
  }
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_60[0],local_60);
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,0,(ulong)(uVar3 & 0x3fffffff) << 4);
  }
  if (local_60[0] < 0x3fffffff0) {
    uVar2 = (uint)(local_60[0] >> 4);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_3 = uVar2;
  return uVar1;
}


