/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00920a20; name: FUN_00920a20
 */


void FUN_00920a20(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
LAB_00920a4c:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00920a54:
  param_1 = puVar12;
  lVar10 = (long)param_2 - (long)param_1;
  uVar6 = lVar10 >> 3;
  if (uVar6 == 3) {
    FUN_00920dc0(param_1,param_1 + 1,puVar11);
    return;
  }
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00920b40_caseD_0;
  case 2:
    if (*(int *)((long)param_1 + 4) < *(int *)((long)param_2 - 4)) {
      uVar8 = *param_1;
      *param_1 = *puVar11;
      *puVar11 = uVar8;
      return;
    }
    return;
  default:
    if (lVar10 < 0xf8) {
      FUN_00921010(param_1,param_2);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    puVar12 = param_1 + ((long)uVar5 >> 1);
    if (lVar10 < 0x1f39) {
      iVar4 = FUN_00920dc0(param_1,puVar12,puVar11);
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar10 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_00920f30(param_1,(long)param_1 + lVar10,puVar12,(long)puVar12 + lVar10,puVar11);
    }
    iVar3 = *(int *)((long)param_1 + 4);
    if (iVar3 <= *(int *)((long)puVar12 + 4)) break;
    puVar7 = puVar11;
    goto LAB_00920c48;
  case 4:
    FUN_00920e80(param_1,param_1 + 1,param_1 + 2,puVar11);
    return;
  case 5:
    FUN_00920f30(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11);
    return;
  }
  puVar9 = param_2;
  while (puVar7 = puVar9, param_1 + 2 != puVar7) {
    puVar9 = puVar7 + -1;
    if (*(int *)((long)puVar12 + 4) < *(int *)((long)puVar7 - 0xc)) goto code_r0x00920c78;
  }
  puVar9 = param_1 + 1;
  if (*(int *)((long)param_2 - 4) < iVar3) {
    if (puVar9 == puVar11) {
      return;
    }
  }
  else {
    if (puVar9 == puVar11) {
      return;
    }
    puVar9 = param_1 + 2;
    while (iVar3 <= *(int *)((long)puVar9 - 4)) {
      puVar9 = puVar9 + 1;
      if (param_2 == puVar9) {
        return;
      }
    }
    uVar8 = puVar9[-1];
    puVar9[-1] = *puVar11;
    *puVar11 = uVar8;
    if (puVar9 == puVar11) {
      return;
    }
  }
  puVar7 = puVar11;
  while( true ) {
    puVar12 = puVar9 + -1;
    do {
      puVar9 = puVar12;
      puVar12 = puVar9 + 1;
    } while (*(int *)((long)param_1 + 4) <= *(int *)((long)puVar9 + 0xc));
    puVar9 = puVar9 + 2;
    do {
      piVar1 = (int *)((long)puVar7 - 4);
      puVar7 = puVar7 + -1;
    } while (*piVar1 < *(int *)((long)param_1 + 4));
    if (puVar7 <= puVar12) break;
    uVar8 = *puVar12;
    *puVar12 = *puVar7;
    *puVar7 = uVar8;
  }
  goto LAB_00920a54;
code_r0x00920c78:
  uVar8 = *param_1;
  iVar4 = iVar4 + 1;
  puVar7 = puVar7 + -2;
  *param_1 = *puVar7;
  *puVar7 = uVar8;
LAB_00920c48:
  puVar9 = param_1 + 1;
  puVar13 = puVar9;
  if (puVar9 < puVar7) {
    while( true ) {
      puVar9 = puVar13 + -1;
      do {
        puVar13 = puVar9;
        puVar9 = puVar13 + 1;
      } while (*(int *)((long)puVar12 + 4) < *(int *)((long)puVar13 + 0xc));
      puVar13 = puVar13 + 2;
      do {
        piVar1 = (int *)((long)puVar7 - 4);
        puVar7 = puVar7 + -1;
      } while (*piVar1 <= *(int *)((long)puVar12 + 4));
      if (puVar7 < puVar9) break;
      uVar8 = *puVar9;
      iVar4 = iVar4 + 1;
      *puVar9 = *puVar7;
      *puVar7 = uVar8;
      puVar2 = puVar7;
      if (puVar12 != puVar9) {
        puVar2 = puVar12;
      }
      puVar12 = puVar2;
    }
  }
  if ((puVar9 != puVar12) && (*(int *)((long)puVar9 + 4) < *(int *)((long)puVar12 + 4))) {
    uVar8 = *puVar9;
    iVar4 = iVar4 + 1;
    *puVar9 = *puVar12;
    *puVar12 = uVar8;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_009210d0(param_1,puVar9);
    uVar5 = FUN_009210d0(puVar9 + 1,param_2);
    if ((uVar5 & 1) != 0) goto LAB_00920dac;
    puVar12 = puVar9 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00920a54;
  }
  if ((long)param_2 - (long)puVar9 <= (long)puVar9 - (long)param_1) {
    FUN_00920a20(puVar9 + 1,param_2);
    param_2 = puVar9;
    goto LAB_00920a4c;
  }
  FUN_00920a20(param_1,puVar9);
  puVar12 = puVar9 + 1;
  goto LAB_00920a54;
LAB_00920dac:
  param_2 = puVar9;
  if ((uVar6 & 1) != 0) {
switchD_00920b40_caseD_0:
    return;
  }
  goto LAB_00920a4c;
}


