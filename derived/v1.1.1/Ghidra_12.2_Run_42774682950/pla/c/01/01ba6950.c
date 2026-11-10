/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba6950; name: FUN_01ba6950
 */


void FUN_01ba6950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  
LAB_01ba6978:
  puVar13 = param_2 + -2;
  puVar14 = param_1;
LAB_01ba6980:
  param_1 = puVar14;
  lVar8 = (long)param_2 - (long)param_1;
  uVar6 = lVar8 >> 4;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_01ba69a8_caseD_0;
  case 2:
    if (*(float *)(param_2 + -1) < *(float *)(param_1 + 1)) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar12 = param_2[-1];
      *param_1 = *puVar13;
      param_1[1] = uVar12;
      *puVar13 = uVar2;
      param_2[-1] = uVar3;
      return;
    }
    return;
  case 3:
    FUN_01ba6d30(param_1,param_1 + 2,puVar13);
    return;
  case 4:
    FUN_01ba6e20(param_1,param_1 + 2,param_1 + 4,puVar13);
    return;
  case 5:
    FUN_01ba6ef0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,puVar13);
    return;
  default:
    if (lVar8 < 0x1f0) {
      FUN_01ba7000(param_1,param_2);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    puVar14 = param_1 + ((long)uVar5 >> 1) * 2;
    if (lVar8 < 0x3e71) {
      iVar4 = FUN_01ba6d30(param_1,puVar14,puVar13);
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar8 = (uVar5 & 0x3ffffffffffffffc) * 4;
      iVar4 = FUN_01ba6ef0(param_1,(long)param_1 + lVar8,puVar14,(long)puVar14 + lVar8,puVar13);
    }
    fVar16 = *(float *)(param_1 + 1);
    if (*(float *)(puVar14 + 1) <= fVar16) break;
    puVar7 = puVar13;
    goto LAB_01ba6aec;
  }
  puVar7 = param_2;
  while (puVar10 = puVar7, param_1 + 4 != puVar10) {
    puVar7 = puVar10 + -2;
    if (*(float *)(puVar10 + -3) < *(float *)(puVar14 + 1)) goto code_r0x01ba6b74;
  }
  puVar7 = param_1 + 2;
  if (fVar16 < *(float *)(param_2 + -1)) {
    if (puVar7 == puVar13) {
      return;
    }
  }
  else {
    if (puVar7 == puVar13) {
      return;
    }
    puVar7 = param_1 + 4;
    while (*(float *)(puVar7 + -1) <= fVar16) {
      puVar7 = puVar7 + 2;
      if (param_2 == puVar7) {
        return;
      }
    }
    uVar2 = puVar7[-2];
    uVar3 = puVar7[-1];
    uVar12 = param_2[-1];
    puVar7[-2] = *puVar13;
    puVar7[-1] = uVar12;
    *puVar13 = uVar2;
    param_2[-1] = uVar3;
    if (puVar7 == puVar13) {
      return;
    }
  }
  puVar10 = puVar13;
  while( true ) {
    puVar14 = puVar7 + -2;
    do {
      puVar15 = puVar14;
      puVar14 = puVar15 + 2;
    } while (*(float *)(puVar15 + 3) <= *(float *)(param_1 + 1));
    puVar7 = puVar15 + 4;
    do {
      puVar11 = puVar10;
      puVar10 = puVar11 + -2;
    } while (*(float *)(param_1 + 1) < *(float *)(puVar11 + -1));
    if (puVar10 <= puVar14) break;
    uVar2 = *puVar14;
    uVar3 = puVar15[3];
    uVar12 = puVar11[-1];
    *puVar14 = *puVar10;
    puVar15[3] = uVar12;
    *puVar10 = uVar2;
    puVar11[-1] = uVar3;
  }
  goto LAB_01ba6980;
code_r0x01ba6b74:
  uVar2 = *param_1;
  uVar3 = param_1[1];
  iVar4 = iVar4 + 1;
  puVar7 = puVar10 + -4;
  uVar12 = puVar10[-3];
  *param_1 = *puVar7;
  param_1[1] = uVar12;
  *puVar7 = uVar2;
  puVar10[-3] = uVar3;
LAB_01ba6aec:
  puVar10 = param_1 + 2;
  puVar15 = puVar10;
  if (puVar10 < puVar7) {
    while( true ) {
      puVar10 = puVar15 + -2;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + 2;
      } while (*(float *)(puVar11 + 3) < *(float *)(puVar14 + 1));
      puVar15 = puVar11 + 4;
      do {
        puVar9 = puVar7;
        puVar7 = puVar9 + -2;
      } while (*(float *)(puVar14 + 1) <= *(float *)(puVar9 + -1));
      if (puVar7 < puVar10) break;
      uVar2 = *puVar10;
      uVar3 = puVar11[3];
      iVar4 = iVar4 + 1;
      uVar12 = puVar9[-1];
      puVar1 = puVar7;
      if (puVar14 != puVar10) {
        puVar1 = puVar14;
      }
      *puVar10 = *puVar7;
      puVar11[3] = uVar12;
      *puVar7 = uVar2;
      puVar9[-1] = uVar3;
      puVar14 = puVar1;
    }
  }
  if ((puVar10 != puVar14) && (*(float *)(puVar14 + 1) < *(float *)(puVar10 + 1))) {
    uVar2 = *puVar10;
    uVar3 = puVar10[1];
    iVar4 = iVar4 + 1;
    uVar12 = puVar14[1];
    *puVar10 = *puVar14;
    puVar10[1] = uVar12;
    *puVar14 = uVar2;
    puVar14[1] = uVar3;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_01ba70c0(param_1,puVar10);
    uVar5 = FUN_01ba70c0(puVar10 + 2,param_2);
    if ((uVar5 & 1) != 0) goto LAB_01ba6d18;
    puVar14 = puVar10 + 2;
    if ((uVar6 & 1) != 0) goto LAB_01ba6980;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_01ba6950(puVar10 + 2,param_2);
    param_2 = puVar10;
    goto LAB_01ba6978;
  }
  FUN_01ba6950(param_1,puVar10);
  puVar14 = puVar10 + 2;
  goto LAB_01ba6980;
LAB_01ba6d18:
  param_2 = puVar10;
  if ((uVar6 & 1) != 0) {
switchD_01ba69a8_caseD_0:
    return;
  }
  goto LAB_01ba6978;
}


