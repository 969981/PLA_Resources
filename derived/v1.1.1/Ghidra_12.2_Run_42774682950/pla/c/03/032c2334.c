/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c2334; name: FUN_032c2334
 */


void FUN_032c2334(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int *piVar13;
  uint local_58 [2];
  undefined8 local_50;
  undefined *puStack_48;
  uint *local_40;
  uint *puStack_38;
  
  if (param_2 < 5) {
    param_2 = 4;
  }
  uVar4 = param_2 * 2 - 1;
  uVar4 = uVar4 | (int)uVar4 >> 0x10;
  uVar4 = uVar4 | (int)uVar4 >> 8;
  uVar4 = uVar4 | (int)uVar4 >> 4;
  uVar4 = uVar4 | (int)uVar4 >> 2;
  uVar4 = uVar4 | (int)uVar4 >> 1;
  uVar1 = uVar4 + 1;
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar8;
  }
  plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  local_58[1] = 8;
  uVar9 = (ulong)(int)uVar1;
  local_58[0] = uVar1;
  if ((uVar9 & 0x1ffffffff0000000) != 0) {
    local_50 = 2;
    puStack_48 = &DAT_0411b3a0;
    local_40 = local_58 + 1;
    puStack_38 = local_58;
    FUN_03320b50(0x2f29d85e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                 ,0x57,"Memory allocation request overflow {}*{}",&local_50);
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))
                    (plVar7,-(uVar9 >> 0x1c & 1) & 0xffffffff00000000 | (uVar9 & 0x1fffffff) << 3,0)
  ;
  if (-1 < (int)uVar4) {
    uVar12 = (ulong)uVar1;
    uVar9 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      puVar11 = (undefined4 *)(lVar8 + 0x14);
      do {
        lVar10 = lVar10 + 4;
        puVar11[-4] = 0xffffffff;
        puVar11[-2] = 0xffffffff;
        *puVar11 = 0xffffffff;
        puVar11[2] = 0xffffffff;
        puVar11 = puVar11 + 8;
      } while (uVar12 - uVar9 != lVar10);
    }
    if ((uVar1 & 3) != 0) {
      puVar11 = (undefined4 *)(lVar8 + lVar10 * 8 + 4);
      do {
        uVar9 = uVar9 - 1;
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 2;
      } while (uVar9 != 0);
    }
  }
  lVar10 = *param_1;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 4) == -2)) {
    *param_1 = lVar8;
    *(uint *)(param_1 + 1) = uVar4;
  }
  else {
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = uVar4;
    uVar1 = (int)lVar6 + 1;
    *param_1 = lVar8;
    if (-1 < (int)lVar6) {
      uVar9 = 0;
      do {
        iVar2 = *(int *)(lVar10 + uVar9 * 8 + 4);
        if (-1 < iVar2) {
          uVar4 = *(uint *)(lVar10 + uVar9 * 8);
          uVar12 = (ulong)(*(uint *)(param_1 + 1) & uVar4);
          lVar8 = *param_1;
          piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
          iVar3 = *piVar13;
          while (-1 < iVar3) {
            uVar12 = ((long)(uVar12 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 1);
            piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
            iVar3 = *piVar13;
          }
          *(uint *)(lVar8 + uVar12 * 8) = uVar4;
          *piVar13 = iVar2;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
    lVar8 = *(long *)(lVar5 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar8;
    }
    uVar9 = (ulong)(int)uVar1;
    plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    local_58[1] = 8;
    local_58[0] = uVar1;
    if ((uVar9 & 0x1ffffffff0000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = local_58 + 1;
      puStack_38 = local_58;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_50);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,lVar10,-(uVar9 >> 0x1c & 1) & 0xffffffff00000000 | (uVar9 & 0x1fffffff) << 3);
  }
  return;
}


