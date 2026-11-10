/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bcf10; name: FUN_032bcf10
 */


void FUN_032bcf10(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint local_34;
  undefined8 local_30;
  undefined *puStack_28;
  uint *local_20;
  uint *puStack_18;
  
  local_20 = (uint *)(param_1 + 8);
  uVar1 = *local_20;
  *param_3 = (long)(int)uVar1 * (long)(int)param_2;
  if ((int)(uVar1 | param_2) < 0) {
    local_30 = 2;
    puStack_28 = &DAT_0411b3a0;
    puStack_18 = &local_34;
    local_34 = param_2;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_30);
  }
  return;
}


