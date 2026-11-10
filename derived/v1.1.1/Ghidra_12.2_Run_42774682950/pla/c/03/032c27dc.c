/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c27dc; name: FUN_032c27dc
 */


void FUN_032c27dc(long *param_1,long *param_2)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  
  if (param_2 != param_1) {
    lVar2 = *param_1;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
      uVar1 = (long)(int)param_1[1] + 1;
      lVar3 = tpidr_el0;
      lVar4 = *(long *)(lVar3 + 0x38d490);
      if (lVar4 == 0) {
        lVar4 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar4;
      }
      plVar5 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
      local_58 = (undefined4)uVar1;
      uStack_54 = 8;
      if ((uVar1 & 0x1ffffffff0000000) != 0) {
        local_50 = 2;
        puStack_48 = &DAT_0411b3a0;
        local_40 = &uStack_54;
        puStack_38 = &local_58;
        FUN_03320b50(0x39ec3d88,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x61,"Memory allocation request overflow {}*{}",&local_50);
      }
      (**(code **)(*plVar5 + 0x18))
                (plVar5,lVar2,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3)
      ;
      *param_1 = (long)&DAT_03aad864;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (*(int *)(*param_2 + 4) != -2) {
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar1 = (long)(int)param_2[1] + 1;
      lVar2 = tpidr_el0;
      lVar3 = *(long *)(lVar2 + 0x38d490);
      if (lVar3 == 0) {
        lVar3 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar3;
      }
      plVar5 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
      local_58 = (undefined4)uVar1;
      uStack_54 = 8;
      if ((uVar1 & 0x1ffffffff0000000) != 0) {
        local_50 = 2;
        puStack_48 = &DAT_0411b3a0;
        local_40 = &uStack_54;
        puStack_38 = &local_58;
        FUN_03320b50(0x2f29d85e,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x57,"Memory allocation request overflow {}*{}",&local_50);
      }
      __dest = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 |
                                         uVar1 * 8 & 0xfffffff8,0);
      *param_1 = (long)__dest;
      memcpy(__dest,(void *)*param_2,(long)(int)param_2[1] * 8 + 8);
      return;
    }
    *param_1 = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}


