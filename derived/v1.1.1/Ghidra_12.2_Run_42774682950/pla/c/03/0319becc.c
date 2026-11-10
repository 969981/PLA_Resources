/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319becc; name: FUN_0319becc
 */


void FUN_0319becc(long *param_1,long param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  long *plVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  int local_98;
  long *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  local_98 = 0;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  local_a0 = &DAT_03aad864;
  local_c8 = param_2;
  puStack_c0 = param_4;
  local_b8 = param_5;
  local_90 = param_1;
  (**(code **)*param_4)(param_4,param_3);
  FUN_0319d380(&local_c8,param_3);
  iVar21 = (uint)local_a8 - 1;
  uVar15 = (uint)local_a8;
  if (0 < (int)(uint)local_a8) {
    do {
      puVar3 = local_a0;
      lVar14 = local_b0;
      lVar8 = ((long)iVar21 + (long)iVar21 * 4) * 8;
      lVar16 = local_b0 + lVar8;
      *(undefined1 *)(lVar16 + 0x20) = 0;
      uVar9 = (ulong)*(uint *)(lVar16 + 0x10);
      lVar16 = *(long *)(local_c8 + 0x38);
      uVar7 = *(uint *)(local_b0 + lVar8);
      while( true ) {
        uVar19 = (uint)uVar9 & 0x3fffff;
        uVar12 = (ulong)uVar19;
        lVar8 = *(long *)(*(long *)(lVar16 + (uVar9 >> 0x16) * 0xf0) + 0x20);
        if ((int)uVar19 < *(int *)(lVar8 + 0x20)) {
          if ((*(int *)(lVar8 + 0x98) == 0) ||
             (uVar19 = *(uint *)(*(long *)(lVar8 + 0x90) + uVar12 * 4), uVar19 != 0xffffffff)) {
            puVar17 = (uint *)(*(long *)(lVar8 + 0xb0) + (long)(int)uVar19 * 0x10);
          }
          else {
            puVar17 = (uint *)(*(long *)(lVar8 + 0x18) + uVar12 * 0x10);
          }
        }
        else {
          puVar17 = (uint *)(*(long *)(lVar8 + 0xd0) +
                            (long)(int)(uVar19 - *(int *)(lVar8 + 0x20)) * 0x10);
        }
        uVar7 = (uVar7 & 0x3fffff) + 1;
        uVar19 = *puVar17;
        if (uVar7 != *puVar17 + (int)(short)puVar17[2]) {
          uVar19 = uVar7;
        }
        lVar5 = FUN_0319d9e4(&local_b0,uVar19 | (uint)uVar9 & 0xffc00000);
        if ((lVar5 != 0) &&
           (uVar7 = *(uint *)(lVar5 + 4) | ((int)lVar5 - (int)puVar3) * 0x20000000, -1 < (int)uVar7)
           ) break;
        iVar22 = *(int *)(lVar8 + 0x30);
        uVar19 = uVar19 & 0x3fffff;
        uVar12 = (ulong)uVar19;
        uVar7 = uVar19 - iVar22;
        if ((int)uVar19 < iVar22) {
          uVar7 = uVar19;
          if ((*(int *)(lVar8 + 0x78) == 0) ||
             (uVar7 = *(uint *)(*(long *)(lVar8 + 0x70) + uVar12 * 4), uVar7 != 0xffffffff)) {
            lVar5 = *(long *)(lVar8 + 0xc0);
            goto LAB_0319c414;
          }
          lVar5 = *(long *)(lVar8 + 0x28) + uVar12 * 0x14;
        }
        else {
          lVar5 = *(long *)(lVar8 + 0xe0);
LAB_0319c414:
          lVar5 = lVar5 + (long)(int)uVar7 * 0x14;
        }
        uVar2 = *(uint *)(lVar5 + 0xc);
        uVar7 = 0xffffffff;
        if (uVar2 != 0xffffffff) {
          uVar7 = uVar2 & 0x3fffff | *(int *)(lVar8 + 0x17c) << 0x16;
        }
        if ((*(byte *)(lVar5 + 0x10) & 0x40) == 0) {
          uVar2 = uVar7;
        }
        uVar9 = (ulong)uVar2;
        if ((int)uVar19 < iVar22) {
          if ((*(int *)(lVar8 + 0x78) == 0) ||
             (uVar19 = *(uint *)(*(long *)(lVar8 + 0x70) + uVar12 * 4), uVar19 != 0xffffffff)) {
            lVar8 = *(long *)(lVar8 + 0xc0) + (long)(int)uVar19 * 0x14;
          }
          else {
            lVar8 = *(long *)(lVar8 + 0x28) + uVar12 * 0x14;
          }
        }
        else {
          lVar8 = *(long *)(lVar8 + 0xe0) + (long)(int)(uVar19 - iVar22) * 0x14;
        }
        uVar19 = *(uint *)(lVar8 + 8);
        uVar7 = uVar19;
        if (((*(byte *)(lVar8 + 0x10) >> 6 & 1) == 0) &&
           (uVar7 = uVar19 & 0x3fffff, uVar19 == 0xffffffff)) {
          uVar7 = 0xffffffff;
        }
      }
      lVar16 = lVar14 + (long)(int)uVar7 * 0x28;
      lVar14 = lVar14 + (long)iVar21 * 0x28;
      *(long *)(lVar14 + 0x18) = lVar16 + 8;
      if (*(int *)(lVar14 + 0xc) != *(int *)(lVar16 + 8)) {
        uVar15 = uVar15 + 1;
      }
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
  }
  plVar18 = local_90;
  puVar3 = PTR_PTR_0434a080;
  puVar17 = (uint *)((long)local_90 + 0x1c);
  uVar7 = *puVar17;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar15) {
    lVar14 = local_90[2];
    lVar16 = local_90[3];
    if (0x3fffffff < (int)uVar15) {
      FUN_032bd0a8(uVar15);
      uVar7 = *puVar17;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar19 = uVar15;
    if ((int)uVar15 <= (int)uVar7) {
      uVar19 = uVar7;
    }
    lVar16 = FUN_032bd1d4(puVar3,uVar19,4,lVar14,(int)lVar16,puVar17);
    plVar18[2] = lVar16;
  }
  if (*(uint *)(plVar18 + 3) != uVar15) {
    *(uint *)(plVar18 + 3) = uVar15;
  }
  iVar21 = (uint)local_a8 + -1;
  if (0 < (int)(uint)local_a8) {
    iVar22 = 0;
    lVar16 = tpidr_el0;
    do {
      while (lVar14 = local_b0 + (long)iVar21 * 0x28, *(char *)(lVar14 + 0x20) == '\0') {
        piVar1 = (int *)(lVar14 + 8);
        lVar14 = *(long *)(lVar16 + 0x38d490);
        if (lVar14 == 0) {
          lVar14 = FUN_0333d16c(0,1);
          *(long *)(lVar16 + 0x38d490) = lVar14;
        }
        plVar18 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
        piVar6 = (int *)(**(code **)(*plVar18 + 0x10))(plVar18,0x10,0);
        plVar18 = local_90;
        piVar6[0] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        lVar14 = local_90[2] + (long)iVar22 * 4;
        iVar13 = 0;
        *(long *)(piVar6 + 2) = lVar14;
        piVar10 = piVar1;
        while( true ) {
          *(int *)(lVar14 + (long)iVar13 * 4) = piVar10[1];
          piVar11 = *(int **)(piVar10 + 4);
          if (*piVar11 == piVar10[1]) {
            iVar13 = (int)((long)iVar13 + 1);
          }
          else {
            *(int *)(*(long *)(piVar6 + 2) + ((long)iVar13 + 1) * 4) = *piVar11;
            piVar11 = *(int **)(piVar10 + 4);
            iVar13 = iVar13 + 2;
          }
          *(undefined1 *)(piVar10 + 6) = 1;
          if (piVar11 == piVar1) break;
          lVar14 = *(long *)(piVar6 + 2);
          piVar10 = piVar11;
        }
        iVar20 = (int)local_90[1];
        puVar17 = (uint *)((long)local_90 + 0xc);
        uVar7 = *puVar17;
        uVar15 = iVar20 + 1;
        if (iVar20 < (int)(uVar7 & 0x3fffffff)) {
          lVar14 = *local_90;
        }
        else {
          lVar14 = *local_90;
          if (0x3ffffffe < iVar20) {
            FUN_032bd0a8(uVar15);
            uVar7 = *puVar17;
          }
          uVar7 = (uVar7 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar7) {
            uVar7 = 0x3fffffff;
          }
          uVar19 = uVar15;
          if ((int)uVar15 <= (int)uVar7) {
            uVar19 = uVar7;
          }
          lVar14 = FUN_032bd1d4(puVar3,uVar19,8,lVar14,iVar20,puVar17);
          iVar20 = (int)plVar18[1];
          *plVar18 = lVar14;
        }
        *(int **)(lVar14 + (long)iVar20 * 8) = piVar6;
        iVar22 = iVar13 + iVar22;
        *(uint *)(plVar18 + 1) = uVar15;
        *piVar6 = iVar13;
        iVar21 = iVar21 + -1;
        if (iVar21 < 0) goto LAB_0319c2d4;
      }
      iVar21 = iVar21 + -1;
    } while (-1 < iVar21);
  }
LAB_0319c2d4:
  puVar4 = local_a0;
  if ((local_a0 != (undefined *)0x0) && (*(int *)(local_a0 + 4) != -2)) {
    uVar9 = (long)local_98 + 1;
    lVar16 = tpidr_el0;
    lVar14 = *(long *)(lVar16 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar14;
    }
    plVar18 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    local_88 = (undefined4)uVar9;
    uStack_84 = 8;
    if ((uVar9 & 0x1ffffffff0000000) != 0) {
      local_80 = 2;
      puStack_78 = &DAT_0411b3a0;
      local_70 = &uStack_84;
      puStack_68 = &local_88;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_80);
    }
    (**(code **)(*plVar18 + 0x18))
              (plVar18,puVar4,-(uVar9 >> 0x1c & 1) & 0xffffffff00000000 | uVar9 * 8 & 0xfffffff8);
    local_a0 = &DAT_03aad864;
    local_98 = 0;
  }
  lVar16 = local_a8;
  uVar9 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_b0 != 0)) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3,local_b0,(uVar9 & 0x3fffffff) * 0x28);
  }
  return;
}


