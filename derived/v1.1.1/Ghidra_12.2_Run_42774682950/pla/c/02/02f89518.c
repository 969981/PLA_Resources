/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f89518; name: FUN_02f89518
 */


undefined8 FUN_02f89518(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  
  if (*(int *)((long)param_1 + 0x14) == 0) {
    uVar5 = *(uint *)(param_1 + 2);
    uVar13 = (ulong)(int)uVar5;
    uVar12 = 0;
    if (uVar5 != 0) {
      piVar9 = (int *)*param_1;
      piVar1 = piVar9 + uVar13;
      iVar8 = *piVar9;
      uVar12 = uVar5;
      piVar10 = piVar9;
      while( true ) {
        if (-1 < iVar8) {
          uVar13 = (ulong)(uVar12 - 1);
          for (iVar8 = piVar10[iVar8]; -1 < iVar8; iVar8 = piVar10[iVar8]) {
            *piVar9 = iVar8;
            piVar10 = (int *)*param_1;
          }
        }
        uVar12 = (uint)uVar13;
        piVar9 = piVar9 + 1;
        if (piVar9 == piVar1) break;
        iVar8 = *piVar9;
      }
    }
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    *(uint *)(param_1 + 3) = uVar12;
  }
  else {
    uVar12 = *(uint *)(param_1 + 3);
  }
  puVar3 = PTR_PTR_0434a090;
  puVar14 = (uint *)((long)param_2 + 0xc);
  uVar4 = *puVar14;
  uVar5 = uVar4 & 0x3fffffff;
  if ((int)uVar5 < (int)uVar12) {
    lVar7 = *param_2;
    lVar6 = param_2[1];
    if (0x3fffffff < (int)uVar12) {
      FUN_032bd0a8(uVar12);
      uVar4 = *puVar14;
    }
    uVar5 = (uVar4 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar4 = uVar12;
    if ((int)uVar12 <= (int)uVar5) {
      uVar4 = uVar5;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar4,4,lVar7,(int)lVar6,puVar14);
    uVar4 = *(uint *)((long)param_2 + 0xc);
    uVar5 = uVar4 & 0x3fffffff;
    *param_2 = lVar6;
  }
  if ((int)uVar5 < (int)uVar12) {
    lVar7 = *param_2;
    lVar6 = param_2[1];
    if (0x3fffffff < (int)uVar12) {
      FUN_032bd0a8(uVar12);
      uVar4 = *puVar14;
    }
    uVar5 = (uVar4 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar4 = uVar12;
    if ((int)uVar12 <= (int)uVar5) {
      uVar4 = uVar5;
    }
    lVar6 = FUN_032bd1d4(puVar3,uVar4,4,lVar7,(int)lVar6,puVar14);
    *param_2 = lVar6;
  }
  if (*(uint *)(param_2 + 1) != uVar12) {
    *(uint *)(param_2 + 1) = uVar12;
  }
  if (0 < (int)param_1[2]) {
    lVar7 = *param_2;
    lVar6 = 0;
    iVar8 = 0;
    do {
      lVar11 = *param_1;
      iVar2 = *(int *)(lVar11 + lVar6 * 4);
      if (iVar2 < 0) {
        *(int *)(lVar7 + (long)iVar8 * 4) = -iVar2;
        *(int *)(*param_1 + lVar6 * 4) = iVar8;
        iVar8 = iVar8 + 1;
      }
      else {
        *(undefined4 *)(lVar11 + lVar6 * 4) = *(undefined4 *)(lVar11 + (long)iVar2 * 4);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[2]);
  }
  return 0;
}


