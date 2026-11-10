/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e40b0; name: FUN_011e40b0
 */


void FUN_011e40b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
LAB_011e40d4:
  puVar7 = param_2 + -1;
  puVar8 = param_1;
LAB_011e40e0:
  param_1 = puVar8;
  lVar6 = (long)param_2 - (long)param_1;
  uVar5 = lVar6 >> 2;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_011e4380_caseD_0;
  case 2:
    uVar5 = FUN_011e4478(puVar7,param_1);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar2 = *param_1;
    *param_1 = *puVar7;
    *puVar7 = uVar2;
    return;
  case 3:
    FUN_011e4580(param_1,param_1 + 1,puVar7);
    return;
  case 4:
    FUN_011e4660(param_1,param_1 + 1,param_1 + 2,puVar7);
    return;
  case 5:
    FUN_011e4720(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar7);
    return;
  default:
    if (lVar6 < 0x7c) {
      FUN_011e4810(param_1,param_2);
      return;
    }
    uVar4 = uVar5;
    if ((long)uVar5 < 0) {
      uVar4 = uVar5 + 1;
    }
    puVar8 = (undefined4 *)((long)param_1 + (uVar4 & 0x7ffffffffffffffe) * 2);
    if (lVar6 < 0xf9d) {
      iVar3 = FUN_011e4580(param_1,puVar8,puVar7);
    }
    else {
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      iVar3 = FUN_011e4720(param_1,(long)param_1 + (uVar4 & 0xfffffffffffffffc),puVar8,
                           (long)puVar8 + (uVar4 & 0xfffffffffffffffc),puVar7);
    }
    uVar5 = FUN_011e4478(param_1,puVar8);
    if ((uVar5 & 1) == 0) break;
    puVar9 = puVar7;
    goto LAB_011e4140;
  }
  puVar11 = param_2 + -2;
  while (puVar9 = puVar11, param_1 != puVar9) {
    uVar5 = FUN_011e4478(puVar9,puVar8);
    puVar11 = puVar9 + -1;
    if ((uVar5 & 1) != 0) goto LAB_011e4344;
  }
  puVar11 = param_1 + 1;
  uVar5 = FUN_011e4478(param_1,puVar7);
  if ((uVar5 & 1) == 0) {
    if (puVar11 == puVar7) {
      return;
    }
    puVar11 = param_1 + 2;
    while (uVar5 = FUN_011e4478(param_1,puVar11 + -1), (uVar5 & 1) == 0) {
      puVar11 = puVar11 + 1;
      if (param_2 == puVar11) {
        return;
      }
    }
    uVar2 = puVar11[-1];
    puVar11[-1] = *puVar7;
    *puVar7 = uVar2;
  }
  if (puVar11 == puVar7) {
    return;
  }
  puVar9 = puVar7;
  while( true ) {
    puVar8 = puVar11 + -1;
    do {
      puVar11 = puVar8;
      puVar8 = puVar11 + 1;
      uVar5 = FUN_011e4478(param_1,puVar8);
    } while ((uVar5 & 1) == 0);
    puVar11 = puVar11 + 2;
    do {
      puVar9 = puVar9 + -1;
      uVar5 = FUN_011e4478(param_1,puVar9);
    } while ((uVar5 & 1) != 0);
    if (puVar9 <= puVar8) break;
    uVar2 = *puVar8;
    *puVar8 = *puVar9;
    *puVar9 = uVar2;
  }
  goto LAB_011e40e0;
LAB_011e4344:
  uVar2 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar9;
  *puVar9 = uVar2;
LAB_011e4140:
  puVar11 = param_1 + 1;
  puVar10 = puVar11;
  if (puVar11 < puVar9) {
    while( true ) {
      puVar11 = puVar10 + -1;
      do {
        puVar10 = puVar11;
        puVar11 = puVar10 + 1;
        uVar5 = FUN_011e4478(puVar11,puVar8);
      } while ((uVar5 & 1) != 0);
      puVar10 = puVar10 + 2;
      do {
        puVar9 = puVar9 + -1;
        uVar5 = FUN_011e4478(puVar9,puVar8);
      } while ((uVar5 & 1) == 0);
      if (puVar9 < puVar11) break;
      uVar2 = *puVar11;
      iVar3 = iVar3 + 1;
      *puVar11 = *puVar9;
      *puVar9 = uVar2;
      puVar1 = puVar9;
      if (puVar8 != puVar11) {
        puVar1 = puVar8;
      }
      puVar8 = puVar1;
    }
  }
  if ((puVar11 == puVar8) || (uVar5 = FUN_011e4478(puVar8,puVar11), (uVar5 & 1) == 0)) {
    if (iVar3 != 0) goto LAB_011e4258;
  }
  else {
    uVar2 = *puVar11;
    *puVar11 = *puVar8;
    *puVar8 = uVar2;
    if (iVar3 != -1) goto LAB_011e4258;
  }
  uVar5 = FUN_011e48e0(param_1,puVar11);
  uVar4 = FUN_011e48e0(puVar11 + 1,param_2);
  if ((uVar4 & 1) != 0) goto LAB_011e42cc;
  puVar8 = puVar11 + 1;
  if ((uVar5 & 1) != 0) goto LAB_011e40e0;
LAB_011e4258:
  if ((long)param_2 - (long)puVar11 <= (long)puVar11 - (long)param_1) {
    FUN_011e40b0(puVar11 + 1,param_2);
    param_2 = puVar11;
    goto LAB_011e40d4;
  }
  FUN_011e40b0(param_1,puVar11);
  puVar8 = puVar11 + 1;
  goto LAB_011e40e0;
LAB_011e42cc:
  param_2 = puVar11;
  if ((uVar5 & 1) != 0) {
switchD_011e4380_caseD_0:
    return;
  }
  goto LAB_011e40d4;
}


