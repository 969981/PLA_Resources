/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf190; name: FUN_032cf190
 */


void FUN_032cf190(long *param_1,int param_2,int *param_3)

{
  int iVar1;
  long local_40;
  undefined *puStack_38;
  int *local_30;
  int *piStack_28;
  int local_14;
  
  iVar1 = *param_3;
  local_14 = param_2;
  if ((param_2 < 0) || ((ulong)((long)iVar1 * (long)param_2) >> 0x1f != 0)) {
    local_40 = 2;
    puStack_38 = &DAT_0411b3a0;
    local_30 = &local_14;
    piStack_28 = param_3;
    FUN_03320b50(0xc69ddef,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x30,"Memory allocation request overflow {}*{}",&local_40);
  }
  local_40 = (long)(int)((long)iVar1 * (long)param_2);
  (**(code **)(*param_1 + 0x10))(param_1,local_40,&local_40);
  iVar1 = 0;
  if (local_14 != 0) {
    iVar1 = (int)local_40 / local_14;
  }
  *param_3 = iVar1;
  return;
}


