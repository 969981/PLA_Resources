/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a070c; name: FUN_031a070c
 */


void FUN_031a070c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  iVar6 = *(int *)(param_1 + 0x70);
  lVar4 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(param_2 + 0x18);
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + lVar10 * 8) == lVar4) goto LAB_031a07bc;
      lVar10 = lVar10 + 1;
    } while (iVar6 != lVar10);
  }
  FUN_0331fefc(auStack_280,auStack_270,0x200);
  FUN_0332448c(auStack_280,"edge not on sweep line");
  iVar6 = FUN_03320b30(0x3cbb03f2,auStack_270,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar6 != 0) {
    CallSupervisor(0x26);
  }
  FUN_0331ff7c(auStack_280);
  iVar6 = *(int *)(param_1 + 0x70);
  lVar10 = 0;
LAB_031a07bc:
  iVar9 = (int)lVar10;
  iVar7 = iVar9 + -1;
  if (iVar6 != 0) {
    iVar1 = iVar9 + 2;
    iVar3 = iVar6;
    if (iVar7 <= iVar6) {
      iVar3 = iVar7;
    }
    iVar2 = 0;
    if (0 < iVar9) {
      iVar2 = iVar3;
    }
    iVar3 = iVar6;
    if (iVar1 <= iVar6) {
      iVar3 = iVar1;
    }
    iVar11 = 0;
    if (-1 < iVar1) {
      iVar11 = iVar3;
    }
    if (iVar11 == iVar6) {
      iVar11 = iVar6 + -1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)iVar11 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
    if (iVar2 < iVar11) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 8);
      if (*(int *)(lVar10 + 0x1c) == 0) {
        FUN_031a1f60(param_1);
        lVar10 = *(long *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 8);
      }
      iVar6 = iVar2 + 1;
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      if (iVar11 != iVar6) {
        lVar10 = (long)iVar2 * 8;
        do {
          lVar10 = lVar10 + 8;
          lVar8 = *(long *)(*(long *)(param_1 + 0x68) + lVar10);
          if (*(int *)(lVar8 + 0x1c) == 0) {
            FUN_031a1f60(param_1,iVar6);
            lVar8 = *(long *)(*(long *)(param_1 + 0x68) + lVar10);
          }
          iVar6 = iVar6 + 1;
          *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x60);
        } while (iVar11 != iVar6);
      }
    }
  }
  *(long *)(*(long *)(param_1 + 0x68) + (long)iVar9 * 8) = lVar5;
  *(long *)(*(long *)(param_1 + 0x68) + ((long)iVar9 + 1U) * 8) = lVar4;
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_2 + 0x20);
  if ((*(int **)(lVar5 + 0x30) != (int *)0x0) && (**(int **)(lVar5 + 0x30) != -1)) {
    FUN_031a1c90(param_1 + 0x50);
    **(undefined4 **)(lVar5 + 0x30) = 0xffffffff;
  }
  FUN_031a1a88(param_1,iVar7);
  FUN_031a1a88(param_1,(long)iVar9 + 1U & 0xffffffff);
  iVar6 = -1;
  if (*(char *)(lVar4 + 4) == '\0') {
    iVar6 = 1;
  }
  iVar7 = -1;
  if (*(char *)(lVar5 + 4) == '\0') {
    iVar7 = 1;
  }
  *(int *)(lVar4 + 0x1c) = iVar7 + *(int *)(lVar4 + 0x1c);
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) - iVar6;
  return;
}


