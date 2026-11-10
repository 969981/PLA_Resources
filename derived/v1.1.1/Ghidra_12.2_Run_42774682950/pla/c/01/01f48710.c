/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f48710; name: FUN_01f48710
 */


void FUN_01f48710(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = uVar2;
  param_1[0xb] = uVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar5;
  uVar11 = *(ulong *)(param_2 + 0x40);
  lVar8 = *(long *)(param_2 + 8);
  plVar13 = (long *)(lVar8 + (uVar11 >> 7 & 0x1fffffffffffff8));
  if (*(long *)(param_2 + 0x10) == lVar8) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar13 + (uVar11 & 0x3ff) * 4;
  }
  uVar11 = *(long *)(param_2 + 0x48) + uVar11;
  plVar15 = (long *)(lVar8 + (uVar11 >> 7 & 0x1fffffffffffff8));
  if (*(long *)(param_2 + 0x10) == lVar8) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar15 + (uVar11 & 0x3ff) * 4;
  }
  if (lVar8 == lVar7) {
    uVar11 = 0;
  }
  else {
    uVar11 = ((lVar8 - *plVar15 >> 2) + ((long)plVar15 - (long)plVar13) * 0x80) -
             (lVar7 - *plVar13 >> 2);
  }
  lVar9 = param_1[1];
  lVar10 = param_1[2];
  lVar14 = 0;
  if (lVar10 - lVar9 != 0) {
    lVar14 = (lVar10 - lVar9) * 0x80 + -1;
  }
  uVar12 = param_1[9] + param_1[8];
  lVar6 = uVar11 - (lVar14 - uVar12);
  if (lVar14 - uVar12 <= uVar11 && lVar6 != 0) {
    FUN_01f489f4(param_1,lVar6);
    uVar12 = param_1[8] + param_1[9];
    lVar9 = param_1[1];
    lVar10 = param_1[2];
  }
  plVar15 = (long *)(lVar9 + (uVar12 >> 7 & 0x1fffffffffffff8));
  if (lVar10 == lVar9) {
    lVar14 = 0;
  }
  else {
    lVar14 = *plVar15 + (uVar12 & 0x3ff) * 4;
  }
  if (lVar8 != lVar7) {
    puVar1 = param_1 + 10;
    FUN_018c2c08(puVar1,lVar14,lVar7);
    lVar14 = lVar14 + 4;
    if (lVar14 - *plVar15 == 0x1000) {
      plVar15 = plVar15 + 1;
      lVar14 = *plVar15;
    }
    lVar7 = lVar7 + 4;
    if (lVar7 - *plVar13 == 0x1000) {
      plVar13 = plVar13 + 1;
      lVar7 = *plVar13;
    }
    param_1[9] = param_1[9] + 1;
    if (lVar7 != lVar8) {
      FUN_018c2c08(puVar1,lVar14,lVar7);
      lVar14 = lVar14 + 4;
      if (lVar14 - *plVar15 == 0x1000) {
        plVar15 = plVar15 + 1;
        lVar14 = *plVar15;
      }
      lVar7 = lVar7 + 4;
      if (lVar7 - *plVar13 == 0x1000) {
        plVar13 = plVar13 + 1;
        lVar7 = *plVar13;
      }
      param_1[9] = param_1[9] + 1;
      if (lVar7 != lVar8) {
        FUN_018c2c08(puVar1,lVar14,lVar7);
        lVar14 = lVar14 + 4;
        if (lVar14 - *plVar15 == 0x1000) {
          plVar15 = plVar15 + 1;
          lVar14 = *plVar15;
        }
        lVar7 = lVar7 + 4;
        if (lVar7 - *plVar13 == 0x1000) goto LAB_01f489e4;
        while (param_1[9] = param_1[9] + 1, lVar7 != lVar8) {
          FUN_018c2c08(puVar1,lVar14);
          lVar14 = lVar14 + 4;
          if (lVar14 - *plVar15 == 0x1000) {
            plVar15 = plVar15 + 1;
            lVar14 = *plVar15;
          }
          lVar7 = lVar7 + 4;
          if (lVar7 - *plVar13 == 0x1000) {
LAB_01f489e4:
            plVar13 = plVar13 + 1;
            lVar7 = *plVar13;
          }
        }
      }
    }
  }
  return;
}


