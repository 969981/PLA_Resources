/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a16c0; name: FUN_031a16c0
 */


void FUN_031a16c0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_270 [512];
  undefined1 auStack_70 [16];
  
  iVar7 = *(int *)(param_2 + 8);
  lVar15 = *(long *)(param_1 + 0x18);
  lVar12 = lVar15 + (long)*(int *)(param_2 + 4) * 0x38;
  iVar6 = *(int *)(param_1 + 0x70);
  if (0 < iVar6) {
    uVar14 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + uVar14 * 8) == lVar12) goto LAB_031a1778;
      uVar14 = uVar14 + 1;
    } while ((long)iVar6 != uVar14);
  }
  FUN_0331fefc(auStack_70,auStack_270,0x200);
  FUN_0332448c(auStack_70,"edge not on sweep line");
  iVar6 = FUN_03320b30(0x3cbb03f2,auStack_270,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar6 != 0) {
    CallSupervisor(0x26);
  }
  FUN_0331ff7c(auStack_70);
  iVar6 = *(int *)(param_1 + 0x70);
  uVar14 = 0;
LAB_031a1778:
  uVar13 = (uint)uVar14;
  lVar15 = lVar15 + (long)iVar7 * 0x38;
  if (0 < iVar6) {
    uVar11 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + uVar11 * 8) == lVar15) goto LAB_031a17fc;
      uVar11 = uVar11 + 1;
    } while ((long)iVar6 != uVar11);
  }
  FUN_0331fefc(auStack_70,auStack_270,0x200);
  FUN_0332448c(auStack_70,"edge not on sweep line");
  iVar7 = FUN_03320b30(0x3cbb03f2,auStack_270,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar7 != 0) {
    CallSupervisor(0x26);
  }
  FUN_0331ff7c(auStack_70);
  iVar6 = *(int *)(param_1 + 0x70);
  uVar11 = 0;
LAB_031a17fc:
  uVar10 = (uint)uVar11;
  uVar5 = uVar13;
  if ((int)uVar13 <= (int)uVar10) {
    lVar15 = lVar12;
    uVar5 = uVar10;
    uVar11 = uVar14;
    uVar10 = uVar13;
  }
  iVar7 = uVar10 - 1;
  iVar16 = (int)uVar11;
  if (iVar6 != 0) {
    iVar2 = uVar5 + 1;
    iVar4 = iVar6;
    if (iVar7 <= iVar6) {
      iVar4 = iVar7;
    }
    iVar3 = 0;
    if (0 < iVar16) {
      iVar3 = iVar4;
    }
    iVar4 = iVar6;
    if (iVar2 <= iVar6) {
      iVar4 = iVar2;
    }
    iVar17 = 0;
    if (-1 < iVar2) {
      iVar17 = iVar4;
    }
    if (iVar17 == iVar6) {
      iVar17 = iVar6 + -1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)iVar17 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
    if (iVar3 < iVar17) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar3 * 8);
      if (*(int *)(lVar12 + 0x1c) == 0) {
        FUN_031a1f60(param_1);
        lVar12 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar3 * 8);
      }
      iVar6 = iVar3 + 1;
      *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      if (iVar17 != iVar6) {
        lVar12 = (long)iVar3 * 8;
        do {
          lVar12 = lVar12 + 8;
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + lVar12);
          if (*(int *)(lVar8 + 0x1c) == 0) {
            FUN_031a1f60(param_1,iVar6);
            lVar8 = *(long *)(*(long *)(param_1 + 0x68) + lVar12);
          }
          iVar6 = iVar6 + 1;
          *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x60);
        } while (iVar17 != iVar6);
      }
    }
  }
  if (uVar5 == iVar16 + 1U) {
    iVar6 = *(int *)(param_1 + 0x70) + -2;
    lVar15 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x70) = iVar6;
    uVar13 = iVar6 - iVar16;
    if ((uVar13 != 0) && (0 < (int)uVar13)) {
      puVar9 = (undefined8 *)(lVar15 + (long)iVar16 * 8);
      *puVar9 = puVar9[2];
      if ((1 < (int)uVar13) && (puVar9[1] = puVar9[3], 2 < (int)uVar13)) {
        puVar9 = (undefined8 *)(lVar15 + (long)iVar16 * 8 + 0x20);
        lVar15 = 0x10;
        do {
          lVar15 = (lVar15 << 0x20) + 0x800000000 >> 0x20;
          puVar9[-2] = *puVar9;
          puVar9 = puVar9 + 1;
        } while (lVar15 < (long)(-(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3)
                );
      }
    }
  }
  else {
    iVar6 = -1;
    if (*(char *)(lVar15 + 4) == '\0') {
      iVar6 = 1;
    }
    if (iVar16 < (int)(uVar5 - 1)) {
      lVar15 = (long)iVar16 + 1;
      uVar14 = -((uVar11 & 0xffffffff) >> 0x1f) & 0xfffffff800000000 | (uVar11 & 0xffffffff) << 3;
      *(undefined8 *)(*(long *)(param_1 + 0x68) + uVar14) =
           *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar15 * 8);
      lVar12 = *(long *)(*(long *)(param_1 + 0x68) + uVar14);
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) - iVar6;
      lVar12 = (long)iVar16;
      while (lVar15 < (int)(uVar5 - 1)) {
        lVar15 = *(long *)(param_1 + 0x68) + lVar12 * 8;
        *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(lVar15 + 0x10);
        lVar15 = *(long *)(*(long *)(param_1 + 0x68) + lVar12 * 8 + 8);
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) - iVar6;
        lVar15 = lVar12 + 2;
        lVar12 = lVar12 + 1;
      }
    }
    uVar13 = *(int *)(param_1 + 0x70) - 2;
    uVar14 = (ulong)uVar13;
    if ((int)uVar5 <= (int)uVar13) {
      uVar11 = (ulong)uVar5;
      do {
        lVar15 = *(long *)(param_1 + 0x68) + uVar11 * 8;
        *(undefined8 *)(lVar15 + -8) = *(undefined8 *)(lVar15 + 8);
        uVar14 = (long)*(int *)(param_1 + 0x70) - 2;
        bVar1 = (long)uVar11 < (long)uVar14;
        uVar11 = uVar11 + 1;
      } while (bVar1);
    }
    *(int *)(param_1 + 0x70) = (int)uVar14;
    FUN_031a1a88(param_1,iVar7);
    iVar7 = uVar5 - 2;
  }
  FUN_031a1a88(param_1,iVar7);
  return;
}


