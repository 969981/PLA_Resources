/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c20d0; name: FUN_032c20d0
 */


void FUN_032c20d0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined4 *puStack_28;
  
  lVar4 = *param_1;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    uVar1 = (long)(int)param_1[1] + 1;
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
    local_48 = (undefined4)uVar1;
    uStack_44 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_40 = 2;
      puStack_38 = &DAT_0411b3a0;
      local_30 = &uStack_44;
      puStack_28 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_40);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar4,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
    *param_1 = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}


