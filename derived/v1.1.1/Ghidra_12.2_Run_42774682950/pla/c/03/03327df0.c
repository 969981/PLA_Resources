/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03327df0; name: FUN_03327df0
 */


void FUN_03327df0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_40;
  undefined *puStack_38;
  int *local_30;
  int *piStack_28;
  int local_18 [2];
  
  uVar4 = *param_1;
  iVar1 = *(int *)(param_1 + 1) * 8 + 0x10;
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar5;
  }
  plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  local_18[1] = 1;
  local_18[0] = iVar1;
  if (iVar1 < 0) {
    local_40 = 2;
    puStack_38 = &DAT_0411b3a0;
    local_30 = local_18 + 1;
    piStack_28 = local_18;
    FUN_03320b50(0x39ec3d88,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x61,"Memory allocation request overflow {}*{}",&local_40);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,(long)iVar1);
  return;
}


