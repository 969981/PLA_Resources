/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033996bc; name: FUN_033996bc
 */


void FUN_033996bc(long param_1)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  
  FUN_0334acbc(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar6 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0xc0) < 2) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    lVar9 = 1;
    piVar8 = (int *)(*(long *)(param_1 + 0xb8) + 0xc);
    do {
      piVar1 = piVar8 + -1;
      iVar17 = *piVar8;
      piVar8 = piVar8 + 4;
      lVar9 = lVar9 + 2;
      uVar11 = ((uVar11 + iVar17) - *piVar1) + 1;
    } while (lVar9 < *(int *)(param_1 + 0xc0));
    puVar13 = (uint *)(param_1 + 0x4c);
    uVar12 = *puVar13;
    if ((int)(uVar12 & 0x3fffffff) < (int)uVar11) {
      uVar14 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x48);
      if (0x3fffffff < (int)uVar11) {
        FUN_032bd0a8(uVar11);
        uVar12 = *puVar13;
      }
      uVar12 = (uVar12 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar12) {
        uVar12 = 0x3fffffff;
      }
      uVar3 = uVar11;
      if ((int)uVar11 <= (int)uVar12) {
        uVar3 = uVar12;
      }
      uVar14 = FUN_032bd1d4(puVar6,uVar3,1,uVar14,uVar5,puVar13);
      *(undefined8 *)(param_1 + 0x40) = uVar14;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x48);
  if (uVar12 != uVar11) {
    *(uint *)(param_1 + 0x48) = uVar11;
    uVar12 = uVar11;
  }
  if (1 < *(int *)(param_1 + 0xc0)) {
    lVar7 = *(long *)(param_1 + 0x40);
    lVar10 = 0;
    lVar15 = 2;
    lVar9 = lVar7;
    while( true ) {
      lVar2 = *(long *)(param_1 + 0xb8) + lVar10;
      lVar4 = (long)*(int *)(lVar2 + 8);
      uVar16 = *(int *)(lVar2 + 0xc) - lVar4;
      FUN_032c48e0(lVar9,((int)lVar7 + uVar12) - (int)lVar9,
                   *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80) + lVar4,
                   uVar16 & 0xffffffff);
      *(undefined1 *)(lVar9 + uVar16) = 0;
      iVar17 = *(int *)(param_1 + 0x38);
      uVar12 = *(uint *)(param_1 + 0x3c);
      uVar11 = iVar17 + 1;
      if (iVar17 < (int)(uVar12 & 0x3fffffff)) {
        lVar7 = *(long *)(param_1 + 0x30);
      }
      else {
        uVar14 = *(undefined8 *)(param_1 + 0x30);
        if (0x3ffffffe < iVar17) {
          FUN_032bd0a8(uVar11);
          uVar12 = *(uint *)(param_1 + 0x3c);
        }
        uVar12 = (uVar12 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar12) {
          uVar12 = 0x3fffffff;
        }
        uVar3 = uVar11;
        if ((int)uVar11 <= (int)uVar12) {
          uVar3 = uVar12;
        }
        lVar7 = FUN_032bd1d4(puVar6,uVar3,8,uVar14,iVar17,(uint *)(param_1 + 0x3c));
        iVar17 = *(int *)(param_1 + 0x38);
        *(long *)(param_1 + 0x30) = lVar7;
      }
      *(long *)(lVar7 + (long)iVar17 * 8) = lVar9;
      *(uint *)(param_1 + 0x38) = uVar11;
      FUN_0334a9e8(param_1 + 0x18,lVar9,lVar15);
      if (*(int *)(param_1 + 0xc0) <= (int)lVar15 + 1) break;
      lVar9 = lVar9 + ((int)uVar16 + 1);
      lVar7 = *(long *)(param_1 + 0x40);
      uVar12 = *(uint *)(param_1 + 0x48);
      lVar15 = lVar15 + 2;
      lVar10 = lVar10 + 0x10;
    }
  }
  return;
}


