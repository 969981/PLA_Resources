/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281c29c; name: FUN_0281c29c
 */


undefined8 FUN_0281c29c(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  float fVar14;
  
  FUN_0282f150(*(undefined8 *)(param_1 + 0x7f8));
  if (*(int *)(*(long *)(param_1 + 0x7f8) + 0x1b8) == 0) {
    *(uint *)(*(long *)(param_1 + 0x8b0) + 0x28) = (uint)(*(int *)(param_1 + 0x710) != 0);
    lVar13 = *(long *)(param_1 + 0x8b0);
    iVar6 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
    uVar9 = *(undefined8 *)(param_1 + 0x758);
    iVar11 = (int)uVar9;
    iVar12 = (int)((ulong)uVar9 >> 0x20);
    iVar7 = iVar11;
    if (*(int *)(lVar13 + 0x28) != 0) {
      iVar7 = iVar12;
    }
    iVar3 = 0;
    if (iVar7 != 0) {
      iVar3 = iVar6 / iVar7;
    }
    *(undefined8 *)(lVar13 + 0x20) = uVar9;
    iVar4 = 0;
    if (iVar12 != 0) {
      iVar4 = iVar6 / iVar12;
    }
    iVar5 = 0;
    if (iVar11 != 0) {
      iVar5 = iVar6 / iVar11;
    }
    if (*(int *)(lVar13 + 0x28) == 0) {
      iVar4 = iVar5;
      iVar11 = iVar12;
    }
    fVar14 = (float)(int)(((uint)(iVar6 != iVar3 * iVar7) - iVar11) + iVar4);
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    *(int *)(lVar13 + 8) = iVar6;
    *(int *)(lVar13 + 0xc) = (int)fVar14;
    lVar13 = *(long *)(param_1 + 0x8b0);
    piVar1 = (int *)(param_1 + 0x75c);
    if (*(int *)(lVar13 + 0x28) != 0) {
      piVar1 = (int *)(param_1 + 0x758);
    }
    iVar11 = *piVar1;
    iVar7 = iVar11;
    if (iVar11 < 0) {
      iVar7 = iVar11 + 1;
    }
    if (*(char *)(param_1 + 0x9e0) != '\0') {
      iVar7 = iVar7 >> 1;
      *(uint *)(lVar13 + 0x18) = iVar7 - (uint)(iVar11 + iVar7 * -2 != 1);
      *(int *)(lVar13 + 0x1c) = iVar7;
      lVar13 = *(long *)(param_1 + 0x8b0);
    }
    *(undefined4 *)(lVar13 + 0x14) = *(undefined4 *)(param_1 + 0x910);
    *(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0x10) = *(undefined4 *)(param_1 + 0x914);
    *(float *)(*(long *)(param_1 + 0x7f8) + 0x1a4) =
         (float)*(int *)(*(long *)(param_1 + 0x8b0) + 0xc);
    FUN_0282d258(*(undefined8 *)(param_1 + 0x890),
                 (int)*(float *)(*(long *)(param_1 + 0x7f8) + 0x1a4),
                 (int)*(float *)(*(long *)(param_1 + 0x7f8) + 0x1d4));
    iVar7 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
    if (iVar7 != 0) {
      lVar13 = *(long *)(param_1 + 0x8b0);
      iVar7 = *(int *)(lVar13 + 0x10);
      iVar11 = *(int *)(lVar13 + 0x14);
      piVar1 = (int *)(lVar13 + 0x20);
      if (*(int *)(lVar13 + 0x28) != 0) {
        piVar1 = (int *)(lVar13 + 0x24);
      }
      iVar6 = *piVar1;
      uVar8 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
      if (uVar8 <= (uint)(iVar11 + iVar6 * iVar7)) {
        lVar13 = *(long *)(param_1 + 0x8b0);
        if (*(int *)(lVar13 + 0x10) < *(int *)(lVar13 + 0xc)) {
          iVar7 = *(int *)(lVar13 + 0x24) * *(int *)(lVar13 + 0x20) + -1;
        }
        else {
          piVar1 = (int *)(lVar13 + 0x20);
          if (*(int *)(lVar13 + 0x28) != 0) {
            piVar1 = (int *)(lVar13 + 0x24);
          }
          iVar7 = *(int *)(lVar13 + 8) + ~(*piVar1 * *(int *)(lVar13 + 0xc));
        }
        *(int *)(lVar13 + 0x14) = iVar7;
      }
      FUN_02819878(param_1,*(undefined4 *)(*(long *)(param_1 + 0x8b0) + 0x14),
                   (int)*(float *)(*(long *)(param_1 + 0x7f8) + 0x1d4));
      plVar10 = *(long **)(param_1 + 0x880);
      if ((plVar10 != (long *)0x0) &&
         (cVar2 = *(char *)(param_1 + 0x9f6), *(char *)((long)plVar10 + 0xa3) != cVar2)) {
        *(char *)((long)plVar10 + 0xa3) = cVar2;
        (**(code **)(*plVar10 + 0xa0))(plVar10,cVar2 != '\0');
      }
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


