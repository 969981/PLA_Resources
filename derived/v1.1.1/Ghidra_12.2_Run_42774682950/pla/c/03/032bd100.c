/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd100; name: FUN_032bd100
 */


void FUN_032bd100(uint param_1,uint param_2,uint param_3,long *param_4)

{
  uint local_38;
  uint local_34;
  undefined8 local_30;
  undefined *local_28;
  uint *local_20;
  uint *puStack_18;
  
  *param_4 = (long)(int)param_2 * (long)(int)param_1;
  local_38 = param_2;
  local_34 = param_1;
  if ((int)(param_2 | param_1) < 0) {
    local_30 = 2;
    local_28 = &DAT_0411b3a0;
    local_20 = &local_34;
    puStack_18 = &local_38;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_30);
  }
  if (((int)local_34 < (int)(param_3 & 0x3fffffff)) || (0x3fffffff < (int)local_34)) {
    local_30 = 1;
    local_20 = &local_34;
    local_28 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_30);
  }
  return;
}


