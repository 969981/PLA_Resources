/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c2680; name: FUN_032c2680
 */


void FUN_032c2680(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  void *__dest;
  long lVar3;
  long *plVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined4 *puStack_28;
  
  if (*(int *)(*param_2 + 4) == -2) {
    *param_1 = &DAT_03aad864;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar1 = (long)(int)param_2[1] + 1;
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar3;
  }
  plVar4 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  local_48 = (undefined4)uVar1;
  uStack_44 = 8;
  if ((uVar1 & 0x1ffffffff0000000) != 0) {
    local_40 = 2;
    puStack_38 = &DAT_0411b3a0;
    local_30 = &uStack_44;
    puStack_28 = &local_48;
    FUN_03320b50(0x2f29d85e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x57,"Memory allocation request overflow {}*{}",&local_40);
  }
  __dest = (void *)(**(code **)(*plVar4 + 0x10))
                             (plVar4,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 |
                                     uVar1 * 8 & 0xfffffff8,0);
  *param_1 = __dest;
  memcpy(__dest,(void *)*param_2,(long)(int)param_2[1] * 8 + 8);
  return;
}


