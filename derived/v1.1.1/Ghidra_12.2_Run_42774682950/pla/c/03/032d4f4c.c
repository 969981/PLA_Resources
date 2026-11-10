/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d4f4c; name: FUN_032d4f4c
 */


void FUN_032d4f4c(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 uVar15;
  
  if ((param_3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    plVar14 = (long *)(*(long *)(lVar4 + 0x70) + (long)*(int *)(lVar4 + 0x90) * 0x38 + 0x20);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 8);
    iVar11 = iVar7 + 1;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) <= iVar7) {
      lVar4 = FUN_032d55e4(PTR_PTR_0434a080,iVar11);
      iVar7 = *(int *)(param_1 + 0x10);
      *(long *)(param_1 + 8) = lVar4;
    }
    plVar14 = param_2 + 1;
    lVar12 = *plVar14;
    puVar10 = (undefined8 *)(lVar4 + (long)iVar7 * 0x20);
    uVar15 = param_2[2];
    uVar1 = param_2[3];
    *puVar10 = *param_2;
    puVar10[1] = lVar12;
    puVar10[2] = uVar15;
    puVar10[3] = uVar1;
    *(int *)(param_1 + 0x10) = iVar11;
    lVar4 = *(long *)(param_1 + 0x50);
    lVar12 = *plVar14;
    if (lVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0x70) + (long)*(int *)(lVar4 + 0x90) * 0x38 + 0x34);
      iVar11 = *piVar9;
      if (iVar11 == 0) {
        *(undefined4 *)(*(long *)(lVar4 + 0x70) + (long)*(int *)(lVar4 + 0x90) * 0x38 + 0x30) =
             *(undefined4 *)(lVar4 + 0x88);
        iVar11 = 1;
      }
      else {
        iVar11 = iVar11 + 1;
      }
      *piVar9 = iVar11;
      iVar7 = *(int *)(lVar4 + 0x88);
      lVar5 = *(long *)(lVar4 + 0x80);
      iVar11 = iVar7 + 1;
      if ((int)(*(uint *)(lVar4 + 0x8c) & 0x3fffffff) <= iVar7) {
        lVar5 = FUN_032d5194(PTR_PTR_0434a090,iVar11);
        iVar7 = *(int *)(lVar4 + 0x88);
        *(long *)(lVar4 + 0x80) = lVar5;
      }
      *(long *)(lVar5 + (long)iVar7 * 8) = lVar12;
      *(int *)(lVar4 + 0x88) = iVar11;
      lVar4 = *(long *)(param_1 + 0x50);
    }
  }
  iVar11 = *(int *)((long)param_2 + 0x1c);
  puVar13 = (undefined *)param_2[2];
  if (iVar11 < 0) {
    iVar11 = 1;
  }
  if (puVar13 != (undefined *)0x0) {
    lVar12 = *plVar14;
    uVar15 = param_2[1];
    uVar2 = FUN_032e2120(puVar13);
    uVar3 = FUN_032e3508(puVar13);
    if ((uVar3 & 1) != 0) {
      FUN_032e0c28(uVar3 & 0xfffffffffffffffe);
    }
    if (((puVar13 != &DAT_0435a690) && (lVar5 = thunk_FUN_032f7d50(lVar4,puVar13), lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x10) != 0)) {
      if ((uVar3 & 1) != 0) {
        FUN_032e0c28(uVar3 & 0xfffffffffffffffe);
      }
      iVar8 = *(int *)(lVar4 + 0x78);
      lVar6 = *(long *)(lVar4 + 0x70);
      iVar7 = iVar8 + 1;
      if ((int)(*(uint *)(lVar4 + 0x7c) & 0x3fffffff) <= iVar8) {
        lVar6 = FUN_032d521c(PTR_PTR_0434a090,iVar7);
        iVar8 = *(int *)(lVar4 + 0x78);
        *(long *)(lVar4 + 0x70) = lVar6;
      }
      puVar10 = (undefined8 *)(lVar6 + (long)iVar8 * 0x38);
      *(int *)(puVar10 + 2) = iVar11;
      *(undefined4 *)((long)puVar10 + 0x14) = uVar2;
      *puVar10 = uVar15;
      puVar10[1] = puVar13;
      puVar10[3] = uVar3;
      puVar10[4] = lVar12;
      puVar10[5] = lVar5;
      puVar10[6] = 0;
      *(int *)(lVar4 + 0x78) = iVar7;
    }
    if ((uVar3 & 1) != 0) {
      FUN_032e0c40(uVar3 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}


