/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1e96c; name: FUN_02c1e96c
 */


float FUN_02c1e96c(float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar7 = (int)param_1 - (uint)(param_1 < 0.0);
  uVar8 = (int)param_2 - (uint)(param_2 < 0.0);
  uVar9 = (int)param_3 - (uint)(param_3 < 0.0);
  param_1 = param_1 - (float)(int)uVar7;
  param_2 = param_2 - (float)(int)uVar8;
  param_3 = param_3 - (float)(int)uVar9;
  fVar13 = param_1 * param_1 * param_1 * (param_1 * (param_1 * 6.0 + -15.0) + 10.0);
  lVar1 = param_4 + 0x60;
  uVar7 = uVar7 & 0xff;
  uVar10 = (ulong)uVar8 & 0xff;
  piVar2 = (int *)(lVar1 + ((long)*(int *)(lVar1 + (ulong)uVar7 * 4) + uVar10) * 4);
  uVar11 = (ulong)uVar9 & 0xff;
  piVar3 = (int *)(lVar1 + ((long)*(int *)(lVar1 + (ulong)(uVar7 + 1) * 4) + uVar10) * 4);
  lVar4 = (long)*piVar2 + uVar11;
  uVar8 = *(uint *)(lVar1 + lVar4 * 4);
  uVar7 = uVar8 & 0xf;
  fVar19 = param_1;
  if (7 < uVar7) {
    fVar19 = param_2;
  }
  fVar14 = param_2 * param_2 * param_2 * (param_2 * (param_2 * 6.0 + -15.0) + 10.0);
  fVar21 = param_2;
  if ((3 < uVar7) && (fVar21 = param_1, (uVar7 | 2) != 0xe)) {
    fVar21 = param_3;
  }
  if ((uVar8 & 1) != 0) {
    fVar19 = -fVar19;
  }
  lVar1 = param_4 + ((long)*piVar3 + uVar11) * 4;
  uVar7 = *(uint *)(lVar1 + 0x60);
  uVar9 = *(uint *)(lVar1 + 100);
  if ((uVar8 & 2) != 0) {
    fVar21 = -fVar21;
  }
  fVar17 = param_1 + -1.0;
  uVar8 = uVar7 & 0xf;
  fVar20 = fVar17;
  if (7 < uVar8) {
    fVar20 = param_2;
  }
  fVar15 = fVar17;
  if ((uVar8 | 2) != 0xe) {
    fVar15 = param_3;
  }
  fVar12 = param_2;
  if (3 < uVar8) {
    fVar12 = fVar15;
  }
  if ((uVar7 & 1) != 0) {
    fVar20 = -fVar20;
  }
  if ((uVar7 & 2) != 0) {
    fVar12 = -fVar12;
  }
  lVar1 = param_4 + ((long)piVar2[1] + uVar11) * 4;
  uVar8 = *(uint *)(lVar1 + 0x60);
  uVar5 = *(uint *)(lVar1 + 100);
  uVar7 = uVar8 & 0xf;
  fVar20 = fVar19 + fVar21 + fVar13 * ((fVar20 + fVar12) - (fVar19 + fVar21));
  fVar19 = param_2 + -1.0;
  fVar21 = param_1;
  if (7 < uVar7) {
    fVar21 = fVar19;
  }
  fVar15 = param_1;
  if ((uVar7 | 2) != 0xe) {
    fVar15 = param_3;
  }
  fVar12 = fVar19;
  if (3 < uVar7) {
    fVar12 = fVar15;
  }
  lVar1 = param_4 + ((long)piVar3[1] + uVar11) * 4;
  if ((uVar8 & 1) != 0) {
    fVar21 = -fVar21;
  }
  uVar7 = *(uint *)(lVar1 + 0x60);
  uVar6 = *(uint *)(lVar1 + 100);
  if ((uVar8 & 2) != 0) {
    fVar12 = -fVar12;
  }
  uVar8 = uVar7 & 0xf;
  fVar15 = fVar17;
  if (7 < uVar8) {
    fVar15 = fVar19;
  }
  fVar18 = fVar17;
  if ((uVar8 | 2) != 0xe) {
    fVar18 = param_3;
  }
  fVar22 = fVar19;
  if (3 < uVar8) {
    fVar22 = fVar18;
  }
  if ((uVar7 & 1) != 0) {
    fVar15 = -fVar15;
  }
  if ((uVar7 & 2) != 0) {
    fVar22 = -fVar22;
  }
  uVar8 = *(uint *)(param_4 + lVar4 * 4 + 100);
  fVar16 = param_3 + -1.0;
  uVar7 = uVar8 & 0xf;
  fVar18 = param_1;
  if (7 < uVar7) {
    fVar18 = param_2;
  }
  fVar20 = fVar20 + fVar14 * ((fVar21 + fVar12 + fVar13 * ((fVar15 + fVar22) - (fVar21 + fVar12))) -
                             fVar20);
  fVar21 = param_1;
  if ((uVar7 | 2) != 0xe) {
    fVar21 = fVar16;
  }
  fVar15 = param_2;
  if (3 < uVar7) {
    fVar15 = fVar21;
  }
  if ((uVar8 & 1) != 0) {
    fVar18 = -fVar18;
  }
  uVar7 = uVar9 & 0xf;
  if ((uVar8 & 2) != 0) {
    fVar15 = -fVar15;
  }
  fVar21 = fVar17;
  if (7 < uVar7) {
    fVar21 = param_2;
  }
  fVar12 = fVar17;
  if ((uVar7 | 2) != 0xe) {
    fVar12 = fVar16;
  }
  uVar8 = uVar5 & 0xf;
  if (3 < uVar7) {
    param_2 = fVar12;
  }
  if ((uVar9 & 1) != 0) {
    fVar21 = -fVar21;
  }
  if ((uVar9 & 2) != 0) {
    param_2 = -param_2;
  }
  fVar15 = fVar18 + fVar15 + fVar13 * ((fVar21 + param_2) - (fVar18 + fVar15));
  fVar21 = param_1;
  if (7 < uVar8) {
    fVar21 = fVar19;
  }
  if ((uVar8 | 2) != 0xe) {
    param_1 = fVar16;
  }
  uVar7 = uVar6 & 0xf;
  fVar12 = fVar19;
  if (3 < uVar8) {
    fVar12 = param_1;
  }
  if ((uVar5 & 1) != 0) {
    fVar21 = -fVar21;
  }
  if ((uVar5 & 2) != 0) {
    fVar12 = -fVar12;
  }
  fVar18 = fVar17;
  if (7 < uVar7) {
    fVar18 = fVar19;
  }
  if ((uVar7 | 2) != 0xe) {
    fVar17 = fVar16;
  }
  if (3 < uVar7) {
    fVar19 = fVar17;
  }
  if ((uVar6 & 1) != 0) {
    fVar18 = -fVar18;
  }
  if ((uVar6 & 2) != 0) {
    fVar19 = -fVar19;
  }
  return fVar20 + param_3 * param_3 * param_3 * (param_3 * (param_3 * 6.0 + -15.0) + 10.0) *
                  ((fVar15 + fVar14 * ((fVar21 + fVar12 +
                                       fVar13 * ((fVar18 + fVar19) - (fVar21 + fVar12))) - fVar15))
                  - fVar20);
}


