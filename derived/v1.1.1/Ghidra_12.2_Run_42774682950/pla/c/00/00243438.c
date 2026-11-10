/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00243438; name: FUN_00243438
 */


void FUN_00243438(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar6 = *(long *)(param_1 + 0x18);
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)(lVar6 + 0x70);
  }
  fVar10 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  if ((*(char *)(param_2 + 0x1c) != '\0') && ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0)) {
    fVar10 = *(float *)(param_2 + 0x10) * fVar10;
    fVar12 = *(float *)(param_2 + 0x14) * fVar12;
  }
  bVar5 = *(byte *)(param_1 + 0x5b) >> 4 & 3;
  fVar13 = *(float *)(param_1 + 0x38);
  fVar11 = *(float *)(param_1 + 0x30);
  fVar15 = *(float *)(param_1 + 0x34);
  if (bVar5 == 2) {
    fVar16 = *(float *)(lVar6 + 0x50);
    fVar17 = 0.5;
LAB_002434b0:
    fVar11 = fVar11 + fVar16 * fVar17;
  }
  else if (bVar5 == 1) {
    fVar16 = *(float *)(lVar6 + 0x50);
    fVar17 = -0.5;
    goto LAB_002434b0;
  }
  bVar5 = *(byte *)(param_1 + 0x5b) >> 6;
  if (bVar5 == 2) {
    fVar16 = *(float *)(lVar6 + 0x54);
    fVar17 = -0.5;
  }
  else {
    if (bVar5 != 1) goto LAB_002434e8;
    fVar16 = *(float *)(lVar6 + 0x54);
    fVar17 = 0.5;
  }
  fVar15 = fVar15 + fVar16 * fVar17;
LAB_002434e8:
  if ((*(float *)(param_1 + 0x3c) != 0.0) || (*(float *)(param_1 + 0x40) != 0.0)) {
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
    fVar17 = fVar17 / *(float *)PTR_FloatDegree180_04372ce0;
    uVar7 = (ulong)(*(float *)(param_1 + 0x3c) * fVar17);
    uVar8 = (ulong)(fVar17 * *(float *)(param_1 + 0x40));
    fVar16 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
    fVar21 = (float)((uint)uVar8 & 0xffffff) * 5.9604645e-08;
    uVar9 = (ulong)(fVar17 * *(float *)(param_1 + 0x44));
    pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar7 >> 0x18 & 0xff) * 0x10);
    pfVar2 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar8 >> 0x18 & 0xff) * 0x10);
    pfVar3 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar9 >> 0x18 & 0xff) * 0x10);
    fVar17 = *pfVar1 + pfVar1[2] * fVar16;
    fVar22 = *pfVar2 + pfVar2[2] * fVar21;
    fVar24 = pfVar2[1] + pfVar2[3] * fVar21;
    uVar25 = puVar4[3];
    fVar21 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
    fVar20 = pfVar1[1] + pfVar1[3] * fVar16;
    fVar26 = pfVar3[1] + pfVar3[3] * fVar21;
    fVar16 = *pfVar3 + pfVar3[2] * fVar21;
    fVar18 = fVar17 * fVar22;
    fVar23 = fVar20 * fVar22 * fVar12;
    fVar32 = fVar22 * fVar26 * fVar10;
    fVar31 = fVar22 * fVar16 * fVar10;
    fVar19 = -(fVar24 * fVar10);
    fVar22 = (fVar20 * fVar24 * fVar16 - fVar17 * fVar26) * fVar12;
    fVar12 = (fVar20 * fVar24 * fVar26 + fVar17 * fVar16) * fVar12;
    fVar10 = fVar20 * fVar26 + fVar24 * fVar17 * fVar16;
    fVar16 = fVar24 * fVar17 * fVar26 - fVar20 * fVar16;
    uVar14 = puVar4[5];
    fVar24 = (float)*puVar4;
    fVar26 = (float)((ulong)*puVar4 >> 0x20);
    fVar28 = (float)puVar4[2];
    fVar29 = (float)((ulong)puVar4[2] >> 0x20);
    fVar27 = (float)puVar4[1];
    fVar30 = (float)uVar25;
    fVar17 = (float)puVar4[4];
    fVar21 = (float)((ulong)puVar4[4] >> 0x20);
    fVar20 = (float)uVar14;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                  fVar11 * fVar24 + fVar15 * fVar26 + fVar13 * fVar27,
                  fVar10 * fVar24 + fVar16 * fVar26 + fVar18 * fVar27 + 0.0);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar22 * fVar24 + fVar12 * fVar26 + fVar23 * fVar27 + 0.0,
                  fVar31 * fVar24 + fVar32 * fVar26 + fVar19 * fVar27 + 0.0);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar25 >> 0x20) +
                  fVar11 * fVar28 + fVar15 * fVar29 + fVar13 * fVar30,
                  fVar10 * fVar28 + fVar16 * fVar29 + fVar18 * fVar30 + 0.0);
    *(ulong *)(param_1 + 0x80) =
         CONCAT44(fVar22 * fVar28 + fVar12 * fVar29 + fVar23 * fVar30 + 0.0,
                  fVar31 * fVar28 + fVar32 * fVar29 + fVar19 * fVar30 + 0.0);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) +
                  fVar11 * fVar17 + fVar15 * fVar21 + fVar13 * fVar20,
                  fVar10 * fVar17 + fVar16 * fVar21 + fVar18 * fVar20 + 0.0);
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(fVar22 * fVar17 + fVar12 * fVar21 + fVar23 * fVar20 + 0.0,
                  fVar31 * fVar17 + fVar32 * fVar21 + fVar19 * fVar20 + 0.0);
    return;
  }
  if (*(float *)(param_1 + 0x44) == 0.0) {
    uVar14 = puVar4[3];
    fVar21 = (float)puVar4[1];
    fVar16 = (float)*puVar4;
    fVar17 = (float)((ulong)*puVar4 >> 0x20);
    fVar22 = (float)uVar14;
    fVar18 = (float)((ulong)puVar4[2] >> 0x20);
    fVar20 = (float)puVar4[2];
    uVar25 = puVar4[5];
    fVar19 = (float)puVar4[4];
    fVar23 = (float)((ulong)puVar4[4] >> 0x20);
    fVar24 = (float)uVar25;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                  fVar11 * fVar16 + fVar15 * fVar17 + fVar13 * fVar21,fVar21);
    *(ulong *)(param_1 + 0x70) = CONCAT44(fVar12 * fVar17,fVar10 * fVar16);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) +
                  fVar11 * fVar20 + fVar15 * fVar18 + fVar13 * fVar22,fVar22);
    *(ulong *)(param_1 + 0x80) = CONCAT44(fVar12 * fVar18,fVar10 * fVar20);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar25 >> 0x20) +
                  fVar11 * fVar19 + fVar15 * fVar23 + fVar13 * fVar24,fVar24);
    *(ulong *)(param_1 + 0x90) = CONCAT44(fVar12 * fVar23,fVar10 * fVar19);
    return;
  }
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  uVar7 = (ulong)(*(float *)(param_1 + 0x44) * (fVar16 / *(float *)PTR_FloatDegree180_04372ce0));
  pfVar1 = (float *)(PTR_SinCosSampleTable_04372ce8 + (uVar7 >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
  uVar25 = puVar4[3];
  fVar16 = pfVar1[1] + pfVar1[3] * fVar17;
  fVar17 = *pfVar1 + pfVar1[2] * fVar17;
  fVar27 = fVar17 * fVar10;
  fVar10 = fVar16 * fVar10;
  fVar16 = -(fVar16 * fVar12);
  fVar17 = fVar17 * fVar12;
  uVar14 = puVar4[5];
  fVar18 = (float)*puVar4;
  fVar22 = (float)((ulong)*puVar4 >> 0x20);
  fVar19 = (float)puVar4[1];
  fVar23 = (float)puVar4[2];
  fVar24 = (float)((ulong)puVar4[2] >> 0x20);
  fVar26 = (float)uVar25;
  fVar12 = (float)puVar4[4];
  fVar21 = (float)((ulong)puVar4[4] >> 0x20);
  fVar20 = (float)uVar14;
  *(ulong *)(param_1 + 0x78) =
       CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                fVar11 * fVar18 + fVar15 * fVar22 + fVar13 * fVar19,
                fVar18 * 0.0 + fVar22 * 0.0 + fVar19 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(fVar16 * fVar18 + fVar17 * fVar22 + fVar19 * 0.0 + 0.0,
                fVar27 * fVar18 + fVar10 * fVar22 + fVar19 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x88) =
       CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar11 * fVar23 + fVar15 * fVar24 + fVar13 * fVar26
                ,fVar23 * 0.0 + fVar24 * 0.0 + fVar26 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x80) =
       CONCAT44(fVar16 * fVar23 + fVar17 * fVar24 + fVar26 * 0.0 + 0.0,
                fVar27 * fVar23 + fVar10 * fVar24 + fVar26 * 0.0 + 0.0);
  *(ulong *)(param_1 + 0x98) =
       CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar11 * fVar12 + fVar15 * fVar21 + fVar13 * fVar20
                ,fVar12 * 0.0 + fVar21 * 0.0 + fVar20 * 1.0 + 0.0);
  *(ulong *)(param_1 + 0x90) =
       CONCAT44(fVar16 * fVar12 + fVar17 * fVar21 + fVar20 * 0.0 + 0.0,
                fVar27 * fVar12 + fVar10 * fVar21 + fVar20 * 0.0 + 0.0);
  return;
}


