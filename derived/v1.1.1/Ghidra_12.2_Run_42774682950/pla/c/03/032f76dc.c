/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f76dc; name: FUN_032f76dc
 */


void FUN_032f76dc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_70;
  undefined *puStack_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar5 = *(int *)(param_1 + 0x20);
  uVar4 = iVar5 - 1;
  lVar9 = tpidr_el0;
  if (0 < iVar5) {
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x18) + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
      if (lVar8 != 0) {
        FUN_032f916c(lVar8);
        lVar6 = *(long *)(lVar9 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar8,0x28);
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  if (iVar5 != 0) {
    lVar8 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) && (-1 < *(int *)(param_1 + 0x30))) &&
       (*(undefined4 *)(lVar8 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0x30))) {
      lVar8 = 0;
      lVar6 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6) = 0xffffffff;
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar8 < *(int *)(param_1 + 0x30));
    }
  }
  iVar7 = *(int *)(param_1 + 0x40);
  iVar5 = iVar7 + -1;
  if (0 < iVar7) {
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar5 * 0x18 + 0x10);
      if (lVar8 != 0) {
        FUN_032f916c(lVar8);
        lVar6 = *(long *)(lVar9 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar9 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar8,0x28);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    iVar7 = *(int *)(param_1 + 0x40);
  }
  if (iVar7 != 0) {
    lVar8 = *(long *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) &&
       ((-1 < *(int *)(param_1 + 0x50) &&
        (*(undefined4 *)(lVar8 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0x50))))) {
      lVar8 = 0;
      lVar6 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar6) = 0xffffffff;
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar8 < *(int *)(param_1 + 0x50));
    }
  }
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x58),((ulong)*(uint *)(param_1 + 100) & 0x3fffffff) << 4)
    ;
  }
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  lVar8 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar1 = (long)*(int *)(param_1 + 0x50) + 1;
    lVar6 = *(long *)(lVar9 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    local_48 = (undefined4)uVar1;
    uStack_44 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &uStack_44;
      puStack_58 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_70);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar8,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    *(undefined **)(param_1 + 0x48) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x38),
               ((ulong)*(uint *)(param_1 + 0x44) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  lVar8 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar1 = (long)*(int *)(param_1 + 0x30) + 1;
    lVar6 = *(long *)(lVar9 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar9 + 0x38d490) = lVar6;
    }
    plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    local_48 = (undefined4)uVar1;
    uStack_44 = 8;
    if ((uVar1 & 0x1ffffffff0000000) != 0) {
      local_70 = 2;
      puStack_68 = &DAT_0411b3a0;
      local_60 = &uStack_44;
      puStack_58 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_70);
    }
    (**(code **)(*plVar3 + 0x18))
              (plVar3,lVar8,-(uVar1 >> 0x1c & 1) & 0xffffffff00000000 | uVar1 * 8 & 0xfffffff8);
    *(undefined **)(param_1 + 0x28) = &DAT_03aad864;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 0x18),((ulong)*(uint *)(param_1 + 0x24) & 0x3fffffff) << 4
              );
  }
  lVar9 = (long)*(int *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar10 = *(long **)(param_1 + 8);
    plVar3 = (long *)plVar10[lVar9 + -1];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (plVar10 + lVar9 + -1 != plVar10) {
      plVar3 = (long *)plVar10[lVar9 + -2];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (plVar10 + lVar9 + -2 != plVar10) {
        plVar3 = (long *)plVar10[lVar9 + -3];
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        if (plVar10 + lVar9 + -3 != plVar10) {
          plVar3 = (long *)plVar10[lVar9 + -4];
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
          }
          if (plVar10 + lVar9 + -4 != plVar10) {
            plVar3 = (long *)plVar10[lVar9 + -5];
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x10))();
            }
            if (plVar10 + lVar9 + -5 != plVar10) {
              plVar3 = (long *)plVar10[lVar9 + -6];
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x10))();
              }
              if (plVar10 + lVar9 + -6 != plVar10) {
                plVar3 = (long *)plVar10[lVar9 + -7];
                lVar9 = lVar9 * 8;
                while( true ) {
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x10))();
                  }
                  if (lVar9 + -8 == 0x30) break;
                  plVar3 = *(long **)((long)plVar10 + lVar9 + -0x40);
                  lVar9 = lVar9 + -8;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,*(long *)(param_1 + 8),((ulong)*(uint *)(param_1 + 0x14) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


