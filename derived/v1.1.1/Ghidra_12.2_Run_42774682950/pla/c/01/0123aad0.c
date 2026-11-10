/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0123aad0; name: FUN_0123aad0
 */


void FUN_0123aad0(uint *param_1,uint *param_2)

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
  
LAB_0123ac30:
  puVar6 = param_2 + -0x14;
  puVar7 = param_1;
LAB_0123ab00:
  param_1 = puVar7;
  uVar5 = (long)param_2 - (long)param_1;
  switch(((long)uVar5 >> 4) * -0x3333333333333333) {
  case 0:
  case 1:
    goto switchD_0123ad08_caseD_0;
  case 2:
    if (*puVar6 < *param_1) {
      FUN_0123a160(param_1,puVar6);
      return;
    }
    return;
  case 3:
    FUN_0123ae90(param_1,param_1 + 0x14,puVar6);
    return;
  case 4:
    FUN_0123af60(param_1,param_1 + 0x14,param_1 + 0x28,puVar6);
    return;
  case 5:
    FUN_0123b010(param_1,param_1 + 0x14,param_1 + 0x28,param_1 + 0x3c,puVar6);
    return;
  default:
    if ((long)uVar5 < 0x230) {
      FUN_0123b0f0(param_1,param_2);
      return;
    }
    puVar7 = param_1 + (uVar5 / 0xa0) * 0x14;
    if ((long)uVar5 < 0x13831) {
      iVar3 = FUN_0123ae90(param_1,puVar7,puVar6);
    }
    else {
      iVar3 = FUN_0123b010(param_1,param_1 + (uVar5 / 0x140) * 0x14,puVar7,
                           puVar7 + (uVar5 / 0x140) * 0x14,puVar6);
    }
    uVar2 = *param_1;
    if (*puVar7 <= uVar2) break;
    puVar8 = puVar6;
    goto LAB_0123ab68;
  }
  puVar10 = param_2 + -0x28;
  while (puVar8 = puVar10, param_1 != puVar8) {
    puVar10 = puVar8 + -0x14;
    if (*puVar8 < *puVar7) goto LAB_0123ad84;
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
  goto LAB_0123ab00;
LAB_0123ad84:
  FUN_0123a160(param_1,puVar8);
  iVar3 = iVar3 + 1;
LAB_0123ab68:
  puVar10 = param_1 + 0x14;
  puVar9 = puVar10;
  if (puVar10 < puVar8) {
    while( true ) {
      puVar10 = puVar9 + -0x14;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 0x14;
      } while (*puVar10 < *puVar7);
      puVar9 = puVar9 + 0x28;
      do {
        puVar8 = puVar8 + -0x14;
      } while (*puVar7 <= *puVar8);
      if (puVar8 < puVar10) break;
      FUN_0123a160(puVar10,puVar8);
      iVar3 = iVar3 + 1;
      puVar1 = puVar8;
      if (puVar7 != puVar10) {
        puVar1 = puVar7;
      }
      puVar7 = puVar1;
    }
  }
  if ((puVar10 == puVar7) || (*puVar10 <= *puVar7)) {
    if (iVar3 != 0) goto LAB_0123acc0;
  }
  else {
    FUN_0123a160(puVar10,puVar7);
    if (iVar3 != -1) goto LAB_0123acc0;
  }
  uVar5 = FUN_0123b340(param_1,puVar10);
  uVar4 = FUN_0123b340(puVar10 + 0x14,param_2);
  if ((uVar4 & 1) != 0) goto LAB_0123ac28;
  puVar7 = puVar10 + 0x14;
  if ((uVar5 & 1) != 0) goto LAB_0123ab00;
LAB_0123acc0:
  if (((long)param_2 - (long)puVar10 >> 4) * -0x3333333333333333 <=
      ((long)puVar10 - (long)param_1 >> 4) * -0x3333333333333333) {
    FUN_0123aad0(puVar10 + 0x14,param_2);
    param_2 = puVar10;
    goto LAB_0123ac30;
  }
  FUN_0123aad0(param_1,puVar10);
  puVar7 = puVar10 + 0x14;
  goto LAB_0123ab00;
LAB_0123ac28:
  param_2 = puVar10;
  if ((uVar5 & 1) != 0) {
switchD_0123ad08_caseD_0:
    return;
  }
  goto LAB_0123ac30;
}


