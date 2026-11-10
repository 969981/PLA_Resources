/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d6410; name: FUN_008d6410
 */


void FUN_008d6410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_008d6434:
  puVar10 = param_2 + -1;
  puVar11 = param_1;
LAB_008d6440:
  param_1 = puVar11;
  lVar8 = (long)param_2 - (long)param_1;
  uVar4 = lVar8 >> 3;
  if (uVar4 == 5) {
    FUN_008d6900(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar10);
    return;
  }
  switch(uVar4) {
  case 0:
  case 1:
    goto switchD_008d6528_caseD_0;
  case 2:
    uVar9 = *param_1;
    if ((int)((ulong)uVar9 >> 0x20) < (int)((ulong)*puVar10 >> 0x20)) {
      *param_1 = *puVar10;
      *puVar10 = uVar9;
      return;
    }
    return;
  case 3:
    FUN_008d67a0(param_1,param_1 + 1,puVar10);
    return;
  case 4:
    FUN_008d6850(param_1,param_1 + 1,param_1 + 2,puVar10);
    return;
  default:
    if (lVar8 < 0xf8) {
      FUN_008d69e0(param_1,param_2);
      return;
    }
    uVar3 = uVar4;
    if ((long)uVar4 < 0) {
      uVar3 = uVar4 + 1;
    }
    puVar11 = (undefined8 *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
    if (lVar8 < 0x1f39) {
      iVar2 = FUN_008d67a0(param_1,puVar11,puVar10);
    }
    else {
      uVar3 = uVar4 + 3;
      if (-1 < (long)uVar4) {
        uVar3 = uVar4;
      }
      lVar8 = (uVar3 & 0x7ffffffffffffffc) * 2;
      iVar2 = FUN_008d6900(param_1,(long)param_1 + lVar8,puVar11,(long)puVar11 + lVar8,puVar10);
    }
    uVar9 = *param_1;
    iVar7 = (int)((ulong)uVar9 >> 0x20);
    if (iVar7 <= *(int *)((long)puVar11 + 4)) break;
    puVar5 = puVar10;
    goto LAB_008d6630;
  }
  puVar6 = param_2 + -2;
  while (puVar5 = puVar6, param_1 != puVar5) {
    puVar6 = puVar5 + -1;
    if (*(int *)((long)puVar11 + 4) < (int)((ulong)*puVar5 >> 0x20)) goto code_r0x008d665c;
  }
  puVar6 = param_1 + 1;
  if (iVar7 <= (int)((ulong)*puVar10 >> 0x20)) {
    if (puVar6 == puVar10) {
      return;
    }
    puVar6 = param_1 + 2;
    while (uVar9 = puVar6[-1], iVar7 <= (int)((ulong)uVar9 >> 0x20)) {
      puVar6 = puVar6 + 1;
      if (param_2 == puVar6) {
        return;
      }
    }
    puVar6[-1] = *puVar10;
    *puVar10 = uVar9;
  }
  if (puVar6 == puVar10) {
    return;
  }
  puVar5 = puVar10;
  while( true ) {
    do {
      puVar11 = puVar6;
      puVar6 = puVar11 + 1;
      uVar9 = *puVar11;
    } while (*(int *)((long)param_1 + 4) <= (int)((ulong)uVar9 >> 0x20));
    do {
      puVar5 = puVar5 + -1;
    } while ((int)((ulong)*puVar5 >> 0x20) < *(int *)((long)param_1 + 4));
    if (puVar5 <= puVar11) break;
    *puVar11 = *puVar5;
    *puVar5 = uVar9;
  }
  goto LAB_008d6440;
code_r0x008d665c:
  *param_1 = *puVar5;
  iVar2 = iVar2 + 1;
  *puVar5 = uVar9;
LAB_008d6630:
  puVar12 = param_1 + 1;
  puVar6 = puVar12;
  if (puVar12 < puVar5) {
    while( true ) {
      puVar12 = puVar6 + -1;
      do {
        puVar6 = puVar12;
        puVar12 = puVar6 + 1;
        uVar9 = *puVar12;
      } while (*(int *)((long)puVar11 + 4) < (int)((ulong)uVar9 >> 0x20));
      puVar6 = puVar6 + 2;
      do {
        puVar5 = puVar5 + -1;
      } while ((int)((ulong)*puVar5 >> 0x20) <= *(int *)((long)puVar11 + 4));
      if (puVar5 < puVar12) break;
      *puVar12 = *puVar5;
      iVar2 = iVar2 + 1;
      *puVar5 = uVar9;
      puVar1 = puVar5;
      if (puVar11 != puVar12) {
        puVar1 = puVar11;
      }
      puVar11 = puVar1;
    }
  }
  if (puVar12 != puVar11) {
    uVar9 = *puVar12;
    if ((int)((ulong)uVar9 >> 0x20) < (int)((ulong)*puVar11 >> 0x20)) {
      iVar2 = iVar2 + 1;
      *puVar12 = *puVar11;
      *puVar11 = uVar9;
    }
  }
  if (iVar2 == 0) {
    uVar4 = FUN_008d6a90(param_1,puVar12);
    uVar3 = FUN_008d6a90(puVar12 + 1,param_2);
    if ((uVar3 & 1) != 0) goto LAB_008d6788;
    puVar11 = puVar12 + 1;
    if ((uVar4 & 1) != 0) goto LAB_008d6440;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_008d6410(puVar12 + 1,param_2);
    param_2 = puVar12;
    goto LAB_008d6434;
  }
  FUN_008d6410(param_1,puVar12);
  puVar11 = puVar12 + 1;
  goto LAB_008d6440;
LAB_008d6788:
  param_2 = puVar12;
  if ((uVar4 & 1) != 0) {
switchD_008d6528_caseD_0:
    return;
  }
  goto LAB_008d6434;
}


