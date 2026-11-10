/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013de700; name: FUN_013de700
 */


void FUN_013de700(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
LAB_013de738:
  puVar14 = (undefined8 *)((long)param_2 - 0xc);
  puVar15 = param_1;
LAB_013de740:
  param_1 = puVar15;
  uVar6 = (long)param_2 - (long)param_1;
  switch(((long)uVar6 >> 2) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_013dea4c_caseD_0;
  case 2:
    if (*(uint *)((long)param_2 - 4) < *(uint *)(param_1 + 1)) {
      uVar12 = *param_1;
      uVar3 = *(undefined4 *)(param_1 + 1);
      uVar13 = *puVar14;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 - 4);
      *param_1 = uVar13;
      *(undefined4 *)((long)param_2 - 4) = uVar3;
      *puVar14 = uVar12;
      return;
    }
    return;
  case 3:
    FUN_013deb90(param_1,(long)param_1 + 0xc,puVar14);
    return;
  case 4:
    FUN_013decf0(param_1,(long)param_1 + 0xc,param_1 + 3,puVar14);
    return;
  case 5:
    FUN_013dee00(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,puVar14);
    return;
  default:
    if ((long)uVar6 < 0x174) {
      FUN_013def70(param_1,param_2);
      return;
    }
    puVar15 = (undefined8 *)((long)param_1 + (uVar6 / 0x18) * 0xc);
    if ((long)uVar6 < 0x2ed5) {
      iVar4 = FUN_013deb90(param_1,puVar15,puVar14);
    }
    else {
      lVar7 = (uVar6 / 0x30) * 0xc;
      iVar4 = FUN_013dee00(param_1,(long)param_1 + lVar7,puVar15,(long)puVar15 + lVar7,puVar14);
    }
    uVar1 = *(uint *)(param_1 + 1);
    uVar2 = *(uint *)((long)param_1 + (uVar6 / 0x18) * 0xc + 8);
    if (uVar2 <= uVar1) break;
    puVar9 = puVar14;
    goto LAB_013de7c4;
  }
  puVar9 = param_2;
  while (puVar11 = puVar9, param_1 + 3 != puVar11) {
    puVar9 = (undefined8 *)((long)puVar11 - 0xc);
    if (*(uint *)(puVar11 + -2) < uVar2) goto code_r0x013de864;
  }
  puVar9 = (undefined8 *)((long)param_1 + 0xc);
  if (*(uint *)((long)param_2 - 4) <= uVar1) {
    if (puVar9 == puVar14) {
      return;
    }
    puVar9 = param_1 + 3;
    while (*(uint *)((long)puVar9 - 4) <= uVar1) {
      puVar9 = (undefined8 *)((long)puVar9 + 0xc);
      if (param_2 == puVar9) {
        return;
      }
    }
    uVar12 = *(undefined8 *)((long)puVar9 - 0xc);
    uVar3 = *(undefined4 *)((long)puVar9 - 4);
    uVar13 = *puVar14;
    *(undefined4 *)((long)puVar9 - 4) = *(undefined4 *)((long)param_2 - 4);
    *(undefined8 *)((long)puVar9 - 0xc) = uVar13;
    *(undefined4 *)((long)param_2 - 4) = uVar3;
    *puVar14 = uVar12;
  }
  if (puVar9 == puVar14) {
    return;
  }
  puVar11 = puVar14;
  while( true ) {
    puVar15 = (undefined8 *)((long)puVar9 - 0xc);
    do {
      puVar16 = puVar15;
      puVar15 = (undefined8 *)((long)puVar16 + 0xc);
    } while (*(uint *)((long)puVar16 + 0x14) <= *(uint *)(param_1 + 1));
    puVar9 = puVar16 + 3;
    do {
      puVar10 = puVar11;
      puVar11 = (undefined8 *)((long)puVar10 - 0xc);
    } while (*(uint *)(param_1 + 1) < *(uint *)((long)puVar10 - 4));
    if (puVar11 <= puVar15) break;
    uVar12 = *puVar15;
    uVar3 = *(undefined4 *)((long)puVar16 + 0x14);
    uVar13 = *puVar11;
    *(undefined4 *)((long)puVar16 + 0x14) = *(undefined4 *)((long)puVar10 - 4);
    *puVar15 = uVar13;
    *(undefined4 *)((long)puVar10 - 4) = uVar3;
    *puVar11 = uVar12;
  }
  goto LAB_013de740;
code_r0x013de864:
  uVar12 = *param_1;
  iVar4 = iVar4 + 1;
  uVar3 = *(undefined4 *)(param_1 + 1);
  puVar9 = puVar11 + -3;
  uVar13 = *puVar9;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar11 + -2);
  *param_1 = uVar13;
  *(undefined4 *)(puVar11 + -2) = uVar3;
  *puVar9 = uVar12;
LAB_013de7c4:
  puVar11 = (undefined8 *)((long)param_1 + 0xc);
  puVar16 = puVar11;
  if (puVar11 < puVar9) {
    while( true ) {
      puVar11 = (undefined8 *)((long)puVar16 - 0xc);
      do {
        puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar10 + 0xc);
      } while (*(uint *)((long)puVar10 + 0x14) < *(uint *)(puVar15 + 1));
      puVar16 = puVar10 + 3;
      do {
        puVar8 = puVar9;
        puVar9 = (undefined8 *)((long)puVar8 - 0xc);
      } while (*(uint *)(puVar15 + 1) <= *(uint *)((long)puVar8 - 4));
      if (puVar9 < puVar11) break;
      uVar12 = *puVar11;
      iVar4 = iVar4 + 1;
      uVar3 = *(undefined4 *)((long)puVar10 + 0x14);
      uVar13 = *puVar9;
      *(undefined4 *)((long)puVar10 + 0x14) = *(undefined4 *)((long)puVar8 - 4);
      *puVar11 = uVar13;
      *(undefined4 *)((long)puVar8 - 4) = uVar3;
      *puVar9 = uVar12;
      puVar10 = puVar9;
      if (puVar15 != puVar11) {
        puVar10 = puVar15;
      }
      puVar15 = puVar10;
    }
  }
  if ((puVar11 != puVar15) && (*(uint *)(puVar15 + 1) < *(uint *)(puVar11 + 1))) {
    uVar12 = *puVar11;
    iVar4 = iVar4 + 1;
    uVar3 = *(undefined4 *)(puVar11 + 1);
    uVar13 = *puVar15;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar15 + 1);
    *puVar11 = uVar13;
    *(undefined4 *)(puVar15 + 1) = uVar3;
    *puVar15 = uVar12;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_013df030(param_1,puVar11);
    uVar5 = FUN_013df030((undefined8 *)((long)puVar11 + 0xcU),param_2);
    if ((uVar5 & 1) != 0) goto LAB_013deaac;
    puVar15 = (undefined8 *)((long)puVar11 + 0xcU);
    if ((uVar6 & 1) != 0) goto LAB_013de740;
  }
  if (((long)param_2 - (long)puVar11 >> 2) * -0x5555555555555555 <=
      ((long)puVar11 - (long)param_1 >> 2) * -0x5555555555555555) {
    FUN_013de700((long)puVar11 + 0xc,param_2);
    param_2 = puVar11;
    goto LAB_013de738;
  }
  FUN_013de700(param_1,puVar11);
  puVar15 = (undefined8 *)((long)puVar11 + 0xc);
  goto LAB_013de740;
LAB_013deaac:
  param_2 = puVar11;
  if ((uVar6 & 1) != 0) {
switchD_013dea4c_caseD_0:
    return;
  }
  goto LAB_013de738;
}


