/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5618; name: FUN_032c5618
 */


long * FUN_032c5618(long *param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  
  if (param_3 == (undefined1 *)0x0) {
    return param_1;
  }
  if ((int)param_4 < 0) {
    param_4 = FUN_032c4900(param_3);
    iVar9 = (int)param_1[0x12];
  }
  else {
    iVar9 = (int)param_1[0x12];
  }
  if (iVar9 == 0) {
    uVar8 = *(uint *)((long)param_1 + 0xc);
    iVar13 = (uVar8 & 0x3fffffff) - 2;
    iVar9 = param_4 + param_2;
    if (iVar13 <= (int)(param_4 + param_2)) {
      iVar9 = iVar13;
    }
    uVar4 = iVar9 - param_2;
    if (uVar4 == 0 || iVar9 < (int)param_2) {
      return param_1;
    }
    lVar6 = (long)iVar9 - (long)(int)param_2;
    iVar13 = (int)lVar6;
    if (iVar13 < 1) {
      return param_1;
    }
    iVar3 = (int)param_1[1];
    uVar11 = iVar3 + iVar13;
    lVar12 = *param_1;
    if ((int)(uVar8 & 0x3fffffff) < (int)uVar11) {
      if (0x3fffffff < (int)uVar11) {
        FUN_032bd0a8(uVar11);
        uVar8 = *(uint *)((long)param_1 + 0xc);
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar5 = uVar11;
      if ((int)uVar11 <= (int)uVar8) {
        uVar5 = uVar8;
      }
      lVar12 = FUN_032bd1d4(PTR_PTR_0434a090,uVar5,1,lVar12,iVar3);
      *param_1 = lVar12;
    }
    puVar2 = (undefined1 *)(lVar12 + (int)param_2);
    if (0 < (int)(iVar3 - param_2)) {
      FUN_032d57d0(puVar2 + lVar6,puVar2,(long)(int)(iVar3 - param_2));
    }
    uVar8 = uVar4 & 3;
    if (2 < iVar9 + ~param_2) {
      iVar9 = uVar4 - uVar8;
      puVar10 = puVar2;
      do {
        *puVar10 = *param_3;
        puVar10[1] = param_3[1];
        puVar10[2] = param_3[2];
        puVar1 = param_3 + 3;
        puVar2 = puVar10 + 4;
        param_3 = param_3 + 4;
        iVar9 = iVar9 + -4;
        puVar10[3] = *puVar1;
        puVar10 = puVar2;
      } while (iVar9 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    if ((int)param_4 < 1) {
      return param_1;
    }
    iVar9 = (int)param_1[1];
    uVar11 = iVar9 + param_4;
    puVar7 = (uint *)((long)param_1 + 0xc);
    uVar8 = *puVar7;
    lVar6 = *param_1;
    if ((int)(uVar8 & 0x3fffffff) < (int)uVar11) {
      if (0x3fffffff < (int)uVar11) {
        FUN_032bd0a8(uVar11);
        uVar8 = *puVar7;
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar4 = uVar11;
      if ((int)uVar11 <= (int)uVar8) {
        uVar4 = uVar8;
      }
      lVar6 = FUN_032bd1d4(PTR_PTR_0434a090,uVar4,1,lVar6,iVar9,puVar7);
      *param_1 = lVar6;
    }
    puVar2 = (undefined1 *)(lVar6 + (int)param_2);
    if (0 < (int)(iVar9 - param_2)) {
      FUN_032d57d0(puVar2 + (int)param_4,puVar2,(long)(int)(iVar9 - param_2));
    }
    uVar8 = param_4 & 3;
    if (2 < param_4 - 1) {
      iVar9 = uVar8 - param_4;
      puVar10 = puVar2;
      do {
        *puVar10 = *param_3;
        puVar10[1] = param_3[1];
        puVar10[2] = param_3[2];
        puVar1 = param_3 + 3;
        puVar2 = puVar10 + 4;
        param_3 = param_3 + 4;
        iVar9 = iVar9 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar2;
      } while (iVar9 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(uint *)(param_1 + 1) = uVar11;
  return param_1;
}


