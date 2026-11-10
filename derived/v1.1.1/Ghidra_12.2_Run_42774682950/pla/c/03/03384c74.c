/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03384c74; name: FUN_03384c74
 */


void FUN_03384c74(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_38;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(long *)(param_1 + 0x110) != 0) && (*(int *)(*(long *)(param_1 + 0x110) + 8) != 0)) {
    lVar2 = tpidr_el0;
    lVar6 = *(long *)(lVar2 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x20,0);
    *puVar4 = 0;
    puVar4[1] = 0x8000000000000000;
    puVar4[2] = &DAT_03aad864;
    *(undefined4 *)(puVar4 + 3) = 0;
    plVar3 = *(long **)(param_1 + 0x110);
    *(undefined8 **)(param_1 + 0x110) = puVar4;
    if (plVar3 != (long *)0x0) {
      lVar6 = plVar3[2];
      if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
        uVar1 = (long)(int)plVar3[3] + 1;
        lVar7 = *(long *)(lVar2 + 0x38d490);
        if (lVar7 == 0) {
          lVar7 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar7;
        }
        plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
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
                  (plVar5,lVar6,
                   -(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | (uVar1 & 0x1fffffff) << 3);
        plVar3[2] = (long)&DAT_03aad864;
        *(undefined4 *)(plVar3 + 3) = 0;
      }
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < *(int *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,*plVar3,*(int *)((long)plVar3 + 0xc) << 2);
      }
      *plVar3 = 0;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      lVar6 = *(long *)(lVar2 + 0x38d490);
      if (lVar6 == 0) {
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar6;
      }
      plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x03384da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x20);
      return;
    }
  }
  return;
}


