/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f51e0c; name: FUN_01f51e0c
 */


void FUN_01f51e0c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = uVar1;
  param_1[0xb] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  uVar10 = *(ulong *)(param_2 + 0x40);
  lVar7 = *(long *)(param_2 + 8);
  plVar12 = (long *)(lVar7 + (uVar10 / 0x155) * 8);
  if (*(long *)(param_2 + 0x10) == lVar7) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar12 + (uVar10 % 0x155) * 0xc;
  }
  uVar10 = *(long *)(param_2 + 0x48) + uVar10;
  plVar14 = (long *)(lVar7 + (uVar10 / 0x155) * 8);
  if (*(long *)(param_2 + 0x10) == lVar7) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar14 + (uVar10 % 0x155) * 0xc;
  }
  uVar10 = FUN_01f523d0(plVar12,lVar6,plVar14,lVar7);
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  lVar13 = 0;
  if (lVar9 - lVar8 != 0) {
    lVar13 = (lVar9 - lVar8 >> 3) * 0x155 + -1;
  }
  uVar11 = param_1[9] + param_1[8];
  lVar5 = uVar10 - (lVar13 - uVar11);
  if (lVar13 - uVar11 <= uVar10 && lVar5 != 0) {
    FUN_01f5202c(param_1,lVar5);
    uVar11 = param_1[8] + param_1[9];
    lVar8 = param_1[1];
    lVar9 = param_1[2];
  }
  plVar14 = (long *)(lVar8 + (uVar11 / 0x155) * 8);
  if (lVar9 == lVar8) {
    lVar13 = 0;
  }
  else {
    lVar13 = *plVar14 + (uVar11 % 0x155) * 0xc;
  }
  if (lVar6 != lVar7) {
    do {
      FUN_01f525ac(param_1 + 10,lVar13,lVar6);
      lVar13 = lVar13 + 0xc;
      if (lVar13 - *plVar14 == 0xffc) {
        plVar14 = plVar14 + 1;
        lVar13 = *plVar14;
      }
      lVar6 = lVar6 + 0xc;
      if (lVar6 - *plVar12 == 0xffc) {
        plVar12 = plVar12 + 1;
        lVar6 = *plVar12;
      }
      param_1[9] = param_1[9] + 1;
    } while (lVar6 != lVar7);
  }
  return;
}


