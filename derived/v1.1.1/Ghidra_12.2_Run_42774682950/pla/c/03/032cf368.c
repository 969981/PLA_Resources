/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf368; name: FUN_032cf368
 */


void FUN_032cf368(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  int local_38;
  int iStack_34;
  undefined8 local_30;
  undefined *puStack_28;
  int *local_20;
  int *piStack_18;
  
  local_38 = param_4;
  iStack_34 = param_3;
  if ((param_3 < 0) || ((ulong)((long)param_4 * (long)param_3) >> 0x1f != 0)) {
    local_30 = 2;
    puStack_28 = &DAT_0411b3a0;
    local_20 = &iStack_34;
    piStack_18 = &local_38;
    FUN_03320b50(0x39ec3d88,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x61,"Memory allocation request overflow {}*{}",&local_30);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,(long)(int)((long)param_4 * (long)param_3));
  return;
}


