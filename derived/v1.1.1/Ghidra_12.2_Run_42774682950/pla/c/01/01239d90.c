/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239d90; name: FUN_01239d90
 */


void FUN_01239d90(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
LAB_01239dc8:
  puVar6 = param_2 + -0x14;
  puVar7 = param_1;
LAB_01239dd4:
  while( true ) {
    param_1 = puVar7;
    uVar4 = (long)param_2 - (long)param_1;
    uVar5 = ((long)uVar4 >> 4) * -0x3333333333333333;
    if (uVar5 < 2) {
      return;
    }
    switch(uVar5) {
    case 2:
      if (*puVar6 < *param_1) {
        FUN_0123a160(param_1,puVar6);
        return;
      }
      return;
    case 3:
      FUN_0123a300(param_1,param_1 + 0x14,puVar6);
      return;
    case 4:
      FUN_0123a3d0(param_1,param_1 + 0x14,param_1 + 0x28,puVar6);
      return;
    case 5:
      FUN_0123a480(param_1,param_1 + 0x14,param_1 + 0x28,param_1 + 0x3c,puVar6);
      return;
    }
    if ((long)uVar4 < 0x230) {
      FUN_0123a560(param_1,param_2);
      return;
    }
    puVar7 = param_1 + (uVar4 / 0xa0) * 0x14;
    if ((long)uVar4 < 0x13831) {
      iVar3 = FUN_0123a300(param_1,puVar7,puVar6);
    }
    else {
      iVar3 = FUN_0123a480(param_1,param_1 + (uVar4 / 0x140) * 0x14,puVar7,
                           puVar7 + (uVar4 / 0x140) * 0x14,puVar6);
    }
    uVar2 = *param_1;
    if (uVar2 < *puVar7) break;
    puVar10 = param_2 + -0x28;
    while (puVar8 = puVar10, param_1 != puVar8) {
      puVar10 = puVar8 + -0x14;
      if (*puVar8 < *puVar7) goto LAB_0123a0bc;
    }
    puVar10 = param_1 + 0x14;
    if (*puVar6 <= uVar2) {
      if (puVar10 == puVar6) {
        return;
      }
      puVar10 = param_1 + 0x28;
      while (puVar10[-0x14] <= uVar2) {
        puVar10 = puVar10 + 0x14;
        if (param_2 == puVar10) {
          return;
        }
      }
      FUN_0123a160(puVar10 + -0x14,puVar6);
    }
    if (puVar10 == puVar6) {
      return;
    }
    puVar8 = puVar6;
    while( true ) {
      do {
        puVar7 = puVar10;
        puVar10 = puVar7 + 0x14;
      } while (*puVar7 <= *param_1);
      do {
        puVar8 = puVar8 + -0x14;
      } while (*param_1 < *puVar8);
      if (puVar8 <= puVar7) break;
      FUN_0123a160(puVar7,puVar8);
    }
  }
  puVar8 = puVar6;
  goto LAB_01239fe8;
LAB_0123a0bc:
  FUN_0123a160(param_1,puVar8);
  iVar3 = iVar3 + 1;
LAB_01239fe8:
  puVar9 = param_1 + 0x14;
  puVar10 = puVar9;
  if (puVar9 < puVar8) {
    while( true ) {
      puVar9 = puVar10 + -0x14;
      do {
        puVar10 = puVar9;
        puVar9 = puVar10 + 0x14;
      } while (*puVar9 < *puVar7);
      puVar10 = puVar10 + 0x28;
      do {
        puVar8 = puVar8 + -0x14;
      } while (*puVar7 <= *puVar8);
      if (puVar8 < puVar9) break;
      FUN_0123a160(puVar9,puVar8);
      iVar3 = iVar3 + 1;
      puVar1 = puVar8;
      if (puVar7 != puVar9) {
        puVar1 = puVar7;
      }
      puVar7 = puVar1;
    }
  }
  if ((puVar9 != puVar7) && (*puVar7 < *puVar9)) {
    FUN_0123a160(puVar9,puVar7);
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar4 = FUN_0123a7b0(param_1,puVar9);
    uVar5 = FUN_0123a7b0(puVar9 + 0x14,param_2);
    if ((uVar5 & 1) != 0) goto LAB_0123a14c;
    puVar7 = puVar9 + 0x14;
    if ((uVar4 & 1) != 0) goto LAB_01239dd4;
  }
  if (((long)param_2 - (long)puVar9 >> 4) * -0x3333333333333333 <=
      ((long)puVar9 - (long)param_1 >> 4) * -0x3333333333333333) {
    FUN_01239d90(puVar9 + 0x14,param_2);
    param_2 = puVar9;
    goto LAB_01239dc8;
  }
  FUN_01239d90(param_1,puVar9);
  puVar7 = puVar9 + 0x14;
  goto LAB_01239dd4;
LAB_0123a14c:
  param_2 = puVar9;
  if ((uVar4 & 1) != 0) {
    return;
  }
  goto LAB_01239dc8;
}


