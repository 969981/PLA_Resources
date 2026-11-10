/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002b84; name: FUN_03002b84
 */


int * FUN_03002b84(int param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  
  uVar2 = param_2 + 0x1f >> 5;
  iVar14 = uVar2 * 4;
  uVar1 = iVar14 + 0x28;
  uVar3 = iVar14 + 0x37;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  iVar4 = uVar1 - (uVar3 & 0xfffffff0);
  uVar5 = 0x10 - iVar4;
  uVar3 = 0x1f - iVar4;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  iVar6 = uVar5 - (uVar3 & 0xfffffff0);
  iVar4 = uVar1 + param_2 * param_1 + iVar6;
  lVar9 = tpidr_el0;
  lVar10 = *(long *)(lVar9 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar10;
  }
  piVar8 = (int *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x58),1,iVar4);
  FUN_032c4b00(piVar8,0,iVar4);
  piVar7 = piVar8 + 10;
  *(int **)(piVar8 + 2) = piVar7;
  piVar8[4] = uVar2;
  piVar8[5] = uVar2 | 0x80000000;
  lVar9 = (long)piVar7 + (long)(iVar6 + iVar14);
  *piVar8 = iVar4;
  piVar8[1] = param_1;
  piVar8[6] = param_2;
  *(long *)(piVar8 + 8) = lVar9;
  if (param_3 != 0) {
    if ((int)*(uint *)(param_3 + 0x10) <= (int)uVar2) {
      uVar2 = *(uint *)(param_3 + 0x10);
    }
    if (0 < (int)uVar2) {
      piVar12 = *(int **)(param_3 + 8);
      uVar1 = uVar2 & 3;
      if (2 < uVar2 - 1) {
        iVar14 = uVar1 - uVar2;
        piVar11 = piVar7;
        piVar13 = piVar12;
        do {
          *piVar11 = *piVar13;
          piVar11[1] = piVar13[1];
          piVar11[2] = piVar13[2];
          piVar12 = piVar13 + 4;
          piVar7 = piVar11 + 4;
          iVar14 = iVar14 + 4;
          piVar11[3] = piVar13[3];
          piVar11 = piVar7;
          piVar13 = piVar12;
        } while (iVar14 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *piVar7 = *piVar12;
        piVar7 = piVar7 + 1;
        piVar12 = piVar12 + 1;
      }
      param_2 = piVar8[6];
      lVar9 = *(long *)(piVar8 + 8);
    }
    if (*(int *)(param_3 + 0x18) <= param_2) {
      param_2 = *(int *)(param_3 + 0x18);
    }
    FUN_032c4a00(lVar9,*(undefined8 *)(param_3 + 0x20),param_2 * param_1);
  }
  return piVar8;
}


