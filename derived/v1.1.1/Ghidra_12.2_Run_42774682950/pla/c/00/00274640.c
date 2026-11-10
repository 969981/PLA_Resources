/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00274640; name: FUN_00274640
 */


void FUN_00274640(float param_1,undefined4 param_2,undefined1 param_3 [16],undefined8 param_4,
                 float *param_5,long param_6,float *param_7,float *param_8,float *param_9)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float local_70 [2];
  float local_68;
  
  uVar19 = param_3._8_8_;
  fVar17 = param_3._0_4_;
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  fVar7 = *(float *)(*(long *)(param_6 + 0x10) + 0x9b0);
  param_5[2] = fVar11;
  param_5[3] = fVar12;
  *param_5 = fVar7;
  param_5[1] = param_5[1];
  fVar9 = *(float *)(*(long *)(param_6 + 0x10) + 0x9b4);
  param_5[2] = fVar11;
  param_5[3] = fVar12;
  *param_5 = fVar7;
  param_5[1] = fVar9;
  fVar10 = *(float *)(*(long *)(param_6 + 0x10) + 0x9b8);
  param_5[2] = fVar10;
  param_5[3] = fVar12;
  *param_5 = fVar7;
  param_5[1] = fVar9;
  fVar11 = *(float *)(*(long *)(param_6 + 0x10) + 0x9bc);
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar7;
  param_5[1] = fVar9;
  lVar6 = *(long *)(param_6 + 0x18);
  if (lVar6 == 0) {
    return;
  }
  lVar4 = *(long *)(param_6 + 0x10);
  cVar1 = *(char *)(lVar4 + 0x99d);
  if (cVar1 == '\x03') {
    uVar3 = (uint)(*param_7 * (float)*(int *)(lVar6 + 0x18));
    uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4;
    fVar7 = *(float *)(lVar6 + uVar5 + 0x470);
    param_5[2] = fVar10;
    param_5[3] = fVar11;
    *param_5 = fVar7;
    param_5[1] = fVar9;
    fVar9 = *(float *)(*(long *)(param_6 + 0x18) + uVar5 + 0x474);
    param_5[2] = fVar10;
    param_5[3] = fVar11;
    *param_5 = fVar7;
    param_5[1] = fVar9;
    fVar10 = *(float *)(*(long *)(param_6 + 0x18) + uVar5 + 0x478);
    param_5[2] = fVar10;
    param_5[3] = fVar11;
    *param_5 = fVar7;
    param_5[1] = fVar9;
    lVar4 = *(long *)(param_6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x99d);
  }
  if ((cVar1 == '\x02') && (0 < *(int *)(*(long *)(param_6 + 0x18) + 0x18))) {
    if (*(char *)(lVar4 + 0x8da) == '\0') {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)*(int *)(lVar4 + 0x8ec);
    }
    uVar13 = NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8df));
    param_4 = FUN_00271f20(*param_7,param_3,fVar11,uVar13,param_2,param_4,local_70,
                           *(long *)(param_6 + 0x18) + 0x470);
    fVar11 = param_5[3];
    fVar9 = *(float *)((ulong)local_70 | 4);
    param_5[2] = local_68;
    param_5[3] = fVar11;
    *param_5 = local_70[0];
    param_5[1] = fVar9;
    lVar4 = *(long *)(param_6 + 0x10);
    fVar7 = local_70[0];
    fVar10 = local_68;
  }
  if ((*(char *)(lVar4 + 0x99f) == '\x02') && (0 < *(int *)(*(long *)(param_6 + 0x18) + 0x1c))) {
    if (*(char *)(lVar4 + 0x8db) == '\0') {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)*(int *)(lVar4 + 0x8f0);
    }
    uVar13 = NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8e0));
    auVar8._8_8_ = uVar19;
    auVar8._0_8_ = param_3._0_8_;
    FUN_00271f20(*param_7,auVar8,fVar11,uVar13,param_2,param_4,local_70,
                 *(long *)(param_6 + 0x18) + 0x4f0);
    fVar7 = *param_5;
    fVar9 = param_5[1];
    fVar10 = param_5[2];
    param_5[2] = fVar10;
    param_5[3] = local_70[0];
    *param_5 = fVar7;
    param_5[1] = fVar9;
    fVar11 = local_70[0];
  }
  fVar12 = *(float *)(*(long *)(param_6 + 0x18) + 0x360);
  fVar7 = fVar12 * *param_8 * *param_9 * fVar7;
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *(ulong *)param_5 = CONCAT44(fVar9,fVar7);
  fVar9 = fVar12 * param_8[1] * param_9[1] * fVar9;
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *(ulong *)param_5 = CONCAT44(fVar9,fVar7);
  fVar10 = fVar12 * param_8[2] * param_9[2] * fVar10;
  *(ulong *)(param_5 + 2) = CONCAT44(fVar11,fVar10);
  *(ulong *)param_5 = CONCAT44(fVar9,fVar7);
  fVar11 = param_8[3] * param_1 * fVar11;
  *(ulong *)(param_5 + 2) = CONCAT44(fVar11,fVar10);
  *(ulong *)param_5 = CONCAT44(fVar9,fVar7);
  if (*(char *)(*(long *)(param_6 + 0x10) + 0x9e4) == '\0') {
    return;
  }
  lVar6 = *(long *)(param_6 + 0x18);
  bVar2 = *(byte *)(*(long *)(param_6 + 0x10) + 0x9e7) >> 4;
  fVar12 = *(float *)(lVar6 + 0x90);
  fVar15 = *(float *)(lVar6 + 0x98);
  fVar14 = *(float *)(lVar6 + 0xa0);
  fVar16 = *(float *)(lVar6 + 0xa8);
  if (bVar2 == 2) {
    fVar17 = (fVar16 + fVar17) / fVar15 + fVar14 * *param_7;
    fVar14 = 1.0;
    if (0.5 <= fVar17 - (float)(int)fVar17) {
      fVar14 = 0.0;
    }
    fVar18 = ABS(1.0 - fVar12 * fVar14);
    goto LAB_00274a3c;
  }
  if (bVar2 == 1) {
    fVar17 = (fVar16 + fVar17) / fVar15 + fVar14 * *param_7;
    fVar18 = ABS(1.0 - fVar12 * (fVar17 - (float)(int)fVar17));
    goto LAB_00274a3c;
  }
  fVar18 = 1.0;
  if (bVar2 != 0) goto LAB_00274a3c;
  fVar17 = *(float *)PTR_FloatPi_04372db0 * ((fVar16 + fVar17) / fVar15 + fVar14 * *param_7);
  fVar17 = fVar17 + fVar17;
  fVar14 = 0.5;
  if (fVar17 < 0.0) {
    fVar14 = -0.5;
  }
  fVar17 = fVar17 - *(float *)PTR_Float2Pi_04372d30 *
                    (float)(int)(*(float *)PTR_Float1Divided2Pi_04372d20 * fVar17 + fVar14);
  if (fVar17 <= *(float *)PTR_FloatPiDivided2_04372d38) {
    if (fVar17 < -*(float *)PTR_FloatPiDivided2_04372d38) {
      fVar14 = -*(float *)PTR_FloatPi_04372cf0;
      goto LAB_002749d4;
    }
    fVar14 = 1.0;
  }
  else {
    fVar14 = *(float *)PTR_FloatPi_04372cf0;
LAB_002749d4:
    fVar17 = fVar14 - fVar17;
    fVar14 = -1.0;
  }
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar12 * (fVar14 * (fVar17 * (fVar17 * (*(float *)(PTR_CosCoefficients_04372d40 + 0xc) +
                                                  fVar17 * (fVar17 * (*(float *)(
                                                  PTR_CosCoefficients_04372d40 + 4) -
                                                  *(float *)PTR_CosCoefficients_04372d40 * fVar17) -
                                                  *(float *)(PTR_CosCoefficients_04372d40 + 8))) -
                                        *(float *)(PTR_CosCoefficients_04372d40 + 0x10)) + 1.0) +
                    1.0) * -0.5 + 1.0;
LAB_00274a3c:
  fVar11 = fVar11 * fVar18;
  fVar11 = (float)((uint)fVar11 ^ (uint)fVar11 & -(uint)(fVar11 < 0.0));
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar7;
  param_5[1] = fVar9;
  if (1.0 < fVar11) {
    param_5[2] = fVar10;
    param_5[3] = 1.0;
    *param_5 = fVar7;
    param_5[1] = fVar9;
  }
  return;
}


