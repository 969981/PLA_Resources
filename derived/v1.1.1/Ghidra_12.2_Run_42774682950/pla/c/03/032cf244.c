/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf244; name: FUN_032cf244
 */


void FUN_032cf244(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint local_38;
  uint uStack_34;
  undefined8 local_30;
  undefined *puStack_28;
  uint *local_20;
  uint *puStack_18;
  
  local_38 = param_4;
  uStack_34 = param_3;
  if ((int)(param_4 | param_3) < 0) {
    local_30 = 2;
    puStack_28 = &DAT_0411b3a0;
    local_20 = &uStack_34;
    puStack_18 = &local_38;
    FUN_03320b50(0x60b62fbd,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x3c,"Memory allocation request overflow {}*{}",&local_30);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,(long)(int)param_4 * (long)(int)param_3);
  return;
}


