/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c48e0; name: FUN_004c48e0
 */


void FUN_004c48e0(uint *param_1)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  
  lVar8 = *(long *)(param_1 + 0x122);
  if (lVar8 == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x2a);
  if ((*(long *)(lVar8 + 8) == 0) && (*(long *)(lVar8 + 0x10) == 0)) {
    bVar5 = *(int *)(lVar8 + 0x18) != 0;
  }
  else {
    bVar5 = true;
  }
  if (*(long *)(lVar8 + 0x110) == 0) {
    bVar3 = true;
    lVar9 = *(long *)(lVar8 + 0xe8);
  }
  else {
    bVar3 = *(long *)(lVar8 + 0x118) == 0;
    lVar9 = *(long *)(lVar8 + 0xe8);
  }
  if (lVar9 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(long *)(lVar8 + 0xf0) == 0;
  }
  uVar6 = (ulong)*(uint *)(lVar11 + 0x310) & 1;
  uVar7 = 0;
  if (!(bool)(bVar3 & bVar4)) {
    uVar7 = 0x80;
  }
  if ((*(long *)(lVar8 + 0xc0) == 0) || (*(long *)(lVar8 + 200) == 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    uVar7 = uVar7 | 0x20;
  }
  uVar10 = 0;
  if (!(bool)(bVar3 & bVar4 & bVar2)) {
    uVar10 = 0x10;
  }
  uVar10 = uVar10 | uVar6;
  uVar1 = uVar10 | 2;
  if (!bVar5) {
    uVar1 = uVar10;
  }
  if (((int)uVar6 != 0) ||
     ((((*(long *)(lVar8 + 0x48) != 0 && (*(long *)(lVar8 + 0x50) != 0)) &&
       ((*(byte *)(lVar11 + 0x315) & 1) != 0)) && (*param_1 == 0x303)))) {
    uVar7 = uVar7 | 1;
  }
  uVar7 = uVar7 | (*(uint *)(lVar11 + 0x318) & 1) << 1;
  uVar12 = uVar7 | 4;
  uVar13 = uVar12;
  if ((*(uint *)(lVar11 + 0x31c) & 1) != 0) {
    uVar6 = FUN_00457530(*(undefined8 *)(lVar8 + 0x98));
    uVar13 = uVar7 | 0xc;
    if (((uint)(uVar6 >> 7) & 0x1ffffff & (*(byte *)(lVar11 + 0x31c) & 2) >> 1) == 0) {
      uVar13 = uVar12;
    }
  }
  if ((((uVar13 >> 3 & 1) == 0) && (*(long *)(*(long *)(param_1 + 0x122) + 0x138) != 0)) &&
     ((*(long *)(*(long *)(param_1 + 0x122) + 0x140) != 0 &&
      (((*(byte *)(lVar11 + 0x32d) & 1) != 0 && ((*param_1 & 0xffffff00) == 0x300)))))) {
    uVar7 = uVar13 | 8;
    if (*param_1 != 0x303) {
      uVar7 = uVar13;
    }
    uVar13 = uVar7;
  }
  if (((((uVar13 >> 3 & 1) == 0) && (*(long *)(*(long *)(param_1 + 0x122) + 0x160) != 0)) &&
      (*(long *)(*(long *)(param_1 + 0x122) + 0x168) != 0)) &&
     (((*(byte *)(lVar11 + 0x331) & 1) != 0 && ((*param_1 & 0xffffff00) == 0x300)))) {
    uVar7 = uVar13 | 8;
    if (*param_1 != 0x303) {
      uVar7 = uVar13;
    }
    uVar13 = uVar7;
  }
  uVar7 = 0xc;
  if ((uVar1 & 1) != 0) {
    uVar7 = 0x4c;
  }
  lVar8 = *(long *)(param_1 + 0x2a);
  *(uint *)(lVar8 + 0x334) = (uint)uVar1 | ((uint)(uVar1 >> 1) & 1) << 8 | uVar7 | 0x80;
  *(uint *)(lVar8 + 0x338) = uVar13 | 0x10;
  return;
}


