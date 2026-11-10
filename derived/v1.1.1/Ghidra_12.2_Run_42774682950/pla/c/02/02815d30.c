/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02815d30; name: FUN_02815d30
 */


void FUN_02815d30(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
LAB_02815d54:
  puVar14 = param_2 + -1;
  puVar15 = param_1;
LAB_02815d5c:
  param_1 = puVar15;
  lVar13 = (long)param_2 - (long)param_1;
  lVar9 = lVar13 >> 3;
  if (lVar9 == 5) {
    FUN_02816300(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
    if (*(int *)((long)param_1 + 0x1c) <= *(int *)((long)param_2 - 4)) {
      return;
    }
    uVar10 = param_1[3];
    param_1[3] = *puVar14;
    *puVar14 = uVar10;
    if (*(int *)((long)param_1 + 0x14) <= *(int *)((long)param_1 + 0x1c)) {
      return;
    }
    uVar10 = param_1[2];
    uVar4 = param_1[3];
    param_1[2] = uVar4;
    param_1[3] = uVar10;
    iVar6 = (int)((ulong)uVar4 >> 0x20);
    if (*(int *)((long)param_1 + 0xc) <= iVar6) {
      return;
    }
    uVar10 = param_1[1];
    param_1[1] = uVar4;
    param_1[2] = uVar10;
    if (iVar6 < *(int *)((long)param_1 + 4)) {
      uVar10 = *param_1;
      *param_1 = uVar4;
      param_1[1] = uVar10;
      return;
    }
    return;
  }
  switch(lVar9) {
  case 0:
  case 1:
    goto switchD_02815dc8_caseD_0;
  case 2:
    if (*(int *)((long)param_1 + 4) <= *(int *)((long)param_2 - 4)) {
      return;
    }
    uVar10 = *param_1;
    break;
  case 3:
    iVar6 = *(int *)((long)param_1 + 0xc);
    if (*(int *)((long)param_1 + 4) <= iVar6) {
      if (iVar6 <= *(int *)((long)param_2 - 4)) {
        return;
      }
      uVar10 = param_1[1];
      param_1[1] = *puVar14;
      *puVar14 = uVar10;
      if (*(int *)((long)param_1 + 0xc) < *(int *)((long)param_1 + 4)) {
        uVar10 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = uVar10;
        return;
      }
      return;
    }
    uVar10 = *param_1;
    if (iVar6 <= *(int *)((long)param_2 - 4)) {
      *param_1 = param_1[1];
      param_1[1] = uVar10;
      if (*(int *)((long)param_2 - 4) < (int)((ulong)uVar10 >> 0x20)) {
        param_1[1] = *puVar14;
        *puVar14 = uVar10;
        return;
      }
      return;
    }
    break;
  case 4:
    FUN_02816300(param_1,param_1 + 1,param_1 + 2,puVar14);
    return;
  default:
    if (lVar13 < 0xf8) {
      FUN_02816450(param_1,param_2);
      return;
    }
    lVar2 = lVar9;
    if (lVar9 < 0) {
      lVar2 = lVar9 + 1;
    }
    puVar15 = param_1 + (lVar2 >> 1);
    if (lVar13 < 0x1f39) {
      iVar6 = *(int *)((long)puVar15 + 4U);
      if (iVar6 < *(int *)((long)param_1 + 4)) {
        uVar10 = *param_1;
        if (*(int *)((long)param_2 - 4) < iVar6) {
          *param_1 = *puVar14;
          *puVar14 = uVar10;
          iVar6 = 1;
        }
        else {
          *param_1 = *puVar15;
          *puVar15 = uVar10;
          if ((int)((ulong)uVar10 >> 0x20) <= *(int *)((long)param_2 - 4)) goto LAB_02816238;
          *puVar15 = *puVar14;
          *puVar14 = uVar10;
LAB_028162c4:
          iVar6 = 2;
        }
      }
      else if (*(int *)((long)param_2 - 4) < iVar6) {
        uVar10 = *puVar15;
        *puVar15 = *puVar14;
        *puVar14 = uVar10;
        if (*(int *)((long)puVar15 + 4U) < *(int *)((long)param_1 + 4)) {
          uVar10 = *param_1;
          *param_1 = *puVar15;
          *puVar15 = uVar10;
          goto LAB_028162c4;
        }
LAB_02816238:
        iVar6 = 1;
      }
      else {
        iVar6 = 0;
      }
    }
    else {
      lVar13 = lVar9 + 3;
      if (-1 < lVar9) {
        lVar13 = lVar9;
      }
      lVar13 = lVar13 >> 2;
      puVar12 = param_1 + lVar13;
      puVar11 = puVar15 + lVar13;
      iVar6 = FUN_02816300(param_1,puVar12,puVar15,puVar11);
      if (*(int *)((long)param_2 - 4) < *(int *)((long)puVar11 + 4)) {
        uVar10 = *puVar11;
        *puVar11 = *puVar14;
        *puVar14 = uVar10;
        if (*(int *)((long)puVar11 + 4) < *(int *)((long)puVar15 + 4U)) {
          uVar10 = *puVar15;
          *puVar15 = puVar15[lVar13];
          puVar15[lVar13] = uVar10;
          if (*(int *)((long)puVar15 + 4U) < *(int *)((long)puVar12 + 4)) {
            uVar10 = *puVar12;
            *puVar12 = *puVar15;
            *puVar15 = uVar10;
            if (*(int *)((long)puVar12 + 4) < *(int *)((long)param_1 + 4)) {
              uVar10 = *param_1;
              iVar6 = iVar6 + 4;
              *param_1 = *puVar12;
              *puVar12 = uVar10;
            }
            else {
              iVar6 = iVar6 + 3;
            }
          }
          else {
            iVar6 = iVar6 + 2;
          }
        }
        else {
          iVar6 = iVar6 + 1;
        }
      }
    }
    iVar5 = *(int *)((long)param_1 + 4);
    if (*(int *)((long)puVar15 + 4) <= iVar5) goto LAB_02816040;
    puVar11 = puVar14;
    goto LAB_02815fdc;
  }
  *param_1 = *puVar14;
  *puVar14 = uVar10;
  return;
LAB_02816040:
  puVar12 = param_2;
  while (puVar11 = puVar12, param_1 + 2 != puVar11) {
    puVar12 = puVar11 + -1;
    if (*(int *)((long)puVar11 - 0xc) < *(int *)((long)puVar15 + 4)) goto code_r0x02816060;
  }
  puVar12 = param_1 + 1;
  if (*(int *)((long)param_2 - 4) <= iVar5) {
    if (puVar12 == puVar14) {
      return;
    }
    puVar12 = param_1 + 2;
    while (*(int *)((long)puVar12 - 4) <= iVar5) {
      puVar12 = puVar12 + 1;
      if (param_2 == puVar12) {
        return;
      }
    }
    uVar10 = puVar12[-1];
    puVar12[-1] = *puVar14;
    *puVar14 = uVar10;
  }
  if (puVar12 == puVar14) {
    return;
  }
  puVar11 = puVar14;
  while( true ) {
    puVar15 = puVar12 + -1;
    do {
      puVar12 = puVar15;
      puVar15 = puVar12 + 1;
    } while (*(int *)((long)puVar12 + 0xc) <= *(int *)((long)param_1 + 4));
    puVar12 = puVar12 + 2;
    do {
      piVar1 = (int *)((long)puVar11 - 4);
      puVar11 = puVar11 + -1;
    } while (*(int *)((long)param_1 + 4) < *piVar1);
    if (puVar11 <= puVar15) break;
    uVar10 = *puVar15;
    *puVar15 = *puVar11;
    *puVar11 = uVar10;
  }
  goto LAB_02815d5c;
code_r0x02816060:
  uVar10 = *param_1;
  iVar6 = iVar6 + 1;
  puVar11 = puVar11 + -2;
  *param_1 = *puVar11;
  *puVar11 = uVar10;
LAB_02815fdc:
  puVar12 = param_1 + 1;
  puVar16 = puVar12;
  if (puVar12 < puVar11) {
    while( true ) {
      puVar12 = puVar16 + -1;
      do {
        puVar16 = puVar12;
        puVar12 = puVar16 + 1;
      } while (*(int *)((long)puVar16 + 0xc) < *(int *)((long)puVar15 + 4));
      puVar16 = puVar16 + 2;
      do {
        piVar1 = (int *)((long)puVar11 + -4);
        puVar11 = puVar11 + -1;
      } while (*(int *)((long)puVar15 + 4) <= *piVar1);
      if (puVar11 < puVar12) break;
      uVar10 = *puVar12;
      iVar6 = iVar6 + 1;
      *puVar12 = *puVar11;
      *puVar11 = uVar10;
      puVar3 = puVar11;
      if (puVar15 != puVar12) {
        puVar3 = puVar15;
      }
      puVar15 = puVar3;
    }
  }
  if ((puVar12 != puVar15) &&
     (puVar11 = (undefined8 *)(ulong)*(uint *)((long)puVar15 + 4),
     (int)*(uint *)((long)puVar15 + 4) < *(int *)((long)puVar12 + 4))) {
    uVar10 = *puVar12;
    iVar6 = iVar6 + 1;
    *puVar12 = *puVar15;
    *puVar15 = uVar10;
    puVar11 = puVar12;
  }
  if (iVar6 == 0) {
    uVar7 = FUN_02816550(puVar11,param_1,puVar12);
    uVar8 = FUN_02816550(puVar12 + 1,param_2);
    if ((uVar8 & 1) != 0) goto LAB_02816204;
    puVar15 = puVar12 + 1;
    if ((uVar7 & 1) != 0) goto LAB_02815d5c;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_02815d30(puVar12 + 1,param_2);
    param_2 = puVar12;
    goto LAB_02815d54;
  }
  FUN_02815d30(param_1,puVar12);
  puVar15 = puVar12 + 1;
  goto LAB_02815d5c;
LAB_02816204:
  param_2 = puVar12;
  if ((uVar7 & 1) != 0) {
switchD_02815dc8_caseD_0:
    return;
  }
  goto LAB_02815d54;
}


