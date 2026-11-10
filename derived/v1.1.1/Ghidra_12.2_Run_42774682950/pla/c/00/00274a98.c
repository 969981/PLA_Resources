/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00274a98; name: FUN_00274a98
 */


void FUN_00274a98(undefined4 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                 long param_5,float *param_6)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_50 [2];
  float local_48;
  
  uVar2 = *(undefined8 *)(param_4 + 2);
  fVar8 = *(float *)(*(long *)(param_5 + 0x10) + 0x9b0);
  *(undefined8 *)(param_4 + 2) = uVar2;
  *(ulong *)param_4 = CONCAT44((int)((ulong)*(undefined8 *)param_4 >> 0x20),fVar8);
  fVar9 = *(float *)(*(long *)(param_5 + 0x10) + 0x9b4);
  *(undefined8 *)(param_4 + 2) = uVar2;
  *(ulong *)param_4 = CONCAT44(fVar9,fVar8);
  fVar10 = *(float *)(*(long *)(param_5 + 0x10) + 0x9b8);
  *(ulong *)(param_4 + 2) = CONCAT44((int)((ulong)uVar2 >> 0x20),fVar10);
  *(ulong *)param_4 = CONCAT44(fVar9,fVar8);
  fVar11 = *(float *)(*(long *)(param_5 + 0x10) + 0x9bc);
  *(ulong *)(param_4 + 2) = CONCAT44(fVar11,fVar10);
  *(ulong *)param_4 = CONCAT44(fVar9,fVar8);
  lVar7 = *(long *)(param_5 + 0x18);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = *(long *)(param_5 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x99d);
  if (cVar1 == '\x03') {
    uVar4 = (uint)(*param_6 * (float)*(int *)(lVar7 + 0x18));
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
    fVar8 = *(float *)(lVar7 + uVar6 + 0x470);
    *(ulong *)(param_4 + 2) = CONCAT44(fVar11,fVar10);
    *(ulong *)param_4 = CONCAT44(fVar9,fVar8);
    fVar9 = *(float *)(*(long *)(param_5 + 0x18) + uVar6 + 0x474);
    *(ulong *)(param_4 + 2) = CONCAT44(fVar11,fVar10);
    *(ulong *)param_4 = CONCAT44(fVar9,fVar8);
    fVar10 = *(float *)(*(long *)(param_5 + 0x18) + uVar6 + 0x478);
    *(ulong *)(param_4 + 2) = CONCAT44(fVar11,fVar10);
    *(ulong *)param_4 = CONCAT44(fVar9,fVar8);
    lVar5 = *(long *)(param_5 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x99d);
  }
  if ((cVar1 == '\x02') && (0 < *(int *)(*(long *)(param_5 + 0x18) + 0x18))) {
    if (*(char *)(lVar5 + 0x8da) == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)*(int *)(lVar5 + 0x8ec);
    }
    uVar13 = NEON_ucvtf((uint)*(byte *)(lVar5 + 0x8df));
    param_3 = FUN_00271f20(*param_6,param_2,fVar8,uVar13,param_1,param_3,local_50,
                           *(long *)(param_5 + 0x18) + 0x470);
    fVar11 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
    fVar9 = *(float *)((ulong)local_50 | 4);
    *(ulong *)(param_4 + 2) = CONCAT44(fVar11,local_48);
    *(ulong *)param_4 = CONCAT44(fVar9,local_50[0]);
    lVar5 = *(long *)(param_5 + 0x10);
    fVar8 = local_50[0];
    fVar10 = local_48;
  }
  if ((*(char *)(lVar5 + 0x99f) == '\x02') && (0 < *(int *)(*(long *)(param_5 + 0x18) + 0x1c))) {
    if (*(char *)(lVar5 + 0x8db) == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)*(int *)(lVar5 + 0x8f0);
    }
    uVar13 = NEON_ucvtf((uint)*(byte *)(lVar5 + 0x8e0));
    FUN_00271f20(*param_6,param_2,fVar8,uVar13,param_1,param_3,local_50,
                 *(long *)(param_5 + 0x18) + 0x4f0);
    fVar10 = (float)*(undefined8 *)(param_4 + 2);
    uVar2 = *(undefined8 *)param_4;
    fVar8 = (float)uVar2;
    fVar9 = (float)((ulong)uVar2 >> 0x20);
    *(ulong *)(param_4 + 2) = CONCAT44(local_50[0],fVar10);
    *(undefined8 *)param_4 = uVar2;
    lVar5 = *(long *)(param_5 + 0x10);
    fVar11 = local_50[0];
  }
  if (*(char *)(lVar5 + 0x9e4) == '\0') {
    return;
  }
  lVar7 = *(long *)(param_5 + 0x18);
  bVar3 = *(byte *)(lVar5 + 0x9e7) >> 4;
  fVar12 = *(float *)(lVar7 + 0x90);
  fVar15 = *(float *)(lVar7 + 0x98);
  fVar14 = *(float *)(lVar7 + 0xa0);
  fVar16 = *(float *)(lVar7 + 0xa8);
  fVar18 = (float)param_2;
  if (bVar3 == 2) {
    fVar14 = (fVar16 + fVar18) / fVar15 + fVar14 * *param_6;
    fVar15 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar15 = 0.0;
    }
    fVar17 = ABS(1.0 - fVar12 * fVar15);
    goto LAB_00274e0c;
  }
  if (bVar3 == 1) {
    fVar14 = (fVar16 + fVar18) / fVar15 + fVar14 * *param_6;
    fVar17 = ABS(1.0 - fVar12 * (fVar14 - (float)(int)fVar14));
    goto LAB_00274e0c;
  }
  fVar17 = 1.0;
  if (bVar3 != 0) goto LAB_00274e0c;
  fVar14 = *(float *)PTR_FloatPi_04372db0 * ((fVar16 + fVar18) / fVar15 + fVar14 * *param_6);
  fVar14 = fVar14 + fVar14;
  fVar15 = 0.5;
  if (fVar14 < 0.0) {
    fVar15 = -0.5;
  }
  fVar14 = fVar14 - *(float *)PTR_Float2Pi_04372d30 *
                    (float)(int)(*(float *)PTR_Float1Divided2Pi_04372d20 * fVar14 + fVar15);
  if (fVar14 <= *(float *)PTR_FloatPiDivided2_04372d38) {
    if (fVar14 < -*(float *)PTR_FloatPiDivided2_04372d38) {
      fVar15 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_00274da4;
    }
    fVar15 = 1.0;
  }
  else {
    fVar15 = *(float *)PTR_FloatPi_04372cf0;
LAB_00274da4:
    fVar14 = fVar15 - fVar14;
    fVar15 = -1.0;
  }
  fVar14 = fVar14 * fVar14;
  fVar17 = fVar12 * (fVar15 * (fVar14 * (fVar14 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_CosCoefficients_04372d40 + 4) -
                                                  *(float *)PTR_CosCoefficients_04372d40 * fVar14) -
                                                  *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                                        *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0) +
                    1.0) * -0.5 + 1.0;
LAB_00274e0c:
  fVar17 = fVar17 * fVar11;
  fVar17 = (float)((uint)fVar17 ^ (uint)fVar17 & -(uint)(fVar17 < 0.0));
  param_4[2] = fVar10;
  param_4[3] = fVar17;
  *param_4 = fVar8;
  param_4[1] = fVar9;
  if (1.0 < fVar17) {
    param_4[2] = fVar10;
    param_4[3] = 1.0;
    *param_4 = fVar8;
    param_4[1] = fVar9;
  }
  return;
}


